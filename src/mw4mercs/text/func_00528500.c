/*
 * FUN_00528500 (506 B) — Control mapping data query helper (variant 2).
 *
 * __thiscall (ECX = this). Reads an index from param_1, looks up data
 * from a table, optionally builds variant paths, allocates an object,
 * copies data fields, and clamps a value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_00412570(int a);
extern int __stdcall FUN_004125e0(int a, int b);
extern void __stdcall FUN_00412740(int a);
extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004d1f80(int a, int b);
extern int __stdcall FUN_004d2d00(int a, int b, int c, int d, int e, int f, int g);
extern void __stdcall FUN_004084e0(int ptr);

int DAT_007db0ac; /* 0x007db0ac */
int DAT_007db0ae; /* 0x007db0ae */

__declspec(naked) int __stdcall FUN_00528500(int param_1)
{
    

extern int DAT_007db0b8;
__asm {
mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax + 8]
        sub     esp, 0x0c
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 0x10]
        push    esi
        mov     esi, dword ptr [eax + 0x0c]
        push    edi
        mov     edi, dword ptr [eax + 4]
        mov     eax, dword ptr [edx]
        xor     ebx, ebx
        cmp     eax, ebx
        jl      l_neg_index
        mov     ecx, dword ptr [ecx + 0x409a4]
        lea     eax, [ecx + eax * 4]
        mov     cx, word ptr [eax]
        cmp     cx, word ptr [DAT_007db0ac]
        mov     word ptr [esp + 0x14], cx
        mov     ax, word ptr [eax + 2]
        mov     word ptr [esp + 0x16], ax
        jnz     l_skip_variant
        cmp     ax, word ptr [DAT_007db0ae]
        jnz     l_skip_variant
        push    0x76c724
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      l_decref1_skip
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_decref1_skip
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_decref1_skip:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x20], eax
        jz      l_inc_skip
        inc     byte ptr [eax - 1]
    l_inc_skip:
        mov     ecx, dword ptr [esp + 0x20]
        push    0x779f4c
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      l_decref2_skip
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_decref2_skip
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_decref2_skip:
        mov     edx, dword ptr [esp + 0x20]
        /* mov ecx,[0x007db0b8] */
        mov ecx, dword ptr [DAT_007db0b8]
        push    1
        push    0
        push    0
        push    0x3f
        push    6
        push    0
        push    edx
        call    FUN_004d2d00
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        mov     word ptr [esp + 0x14], 6
        mov     word ptr [esp + 0x16], 1
        jz      l_decref3_skip
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_decref3_skip
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_decref3_skip:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_skip_variant
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_variant
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_variant:
        push    0x44
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_alloc_fail
        push    1
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, eax
        call    FUN_004d1f80
        mov     edi, eax
        jmp     l_got_obj
    l_alloc_fail:
        xor     edi, edi
    l_got_obj:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 4]
        mov     ecx, dword ptr [eax + 0x134]
        mov     edx, dword ptr [eax + 0x140]
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [eax + 0x138]
        mov     dword ptr [esi + 4], edx
        mov     edx, dword ptr [eax + 0x13c]
        mov     eax, dword ptr [eax + 0x144]
        test    eax, eax
        mov     dword ptr [esi + 8], ecx
        mov     dword ptr [esi + 0x0c], edx
        mov     dword ptr [ebp], eax
        jge     l_clamp_check
        mov     dword ptr [ebp], 0
        jmp     l_cleanup_obj
    l_clamp_check:
        cmp     eax, 0x2b
        jle     l_cleanup_obj
        mov     dword ptr [ebp], 0x2b
    l_cleanup_obj:
        test    edi, edi
        jz      l_cleanup_db
        mov     eax, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [eax]
    l_cleanup_db:
        test    ebx, ebx
        jz      l_neg_index_epilogue
        mov     edx, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [edx]
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x0c
        ret     8
    l_neg_index:
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 4], ebx
        mov     dword ptr [esi + 8], ebx
        mov     dword ptr [esi + 0x0c], ebx
        mov     dword ptr [ebp], 0x2c
    l_neg_index_epilogue:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x0c
        ret     8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        /* next function's code (0x528700-0x52871A), within extent */
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax + 4]
        push    ebx
        mov     ebx, dword ptr [eax + 0xc]
        push    esi
        mov     esi, dword ptr [eax + 8]
        mov     eax, dword ptr [edx]
        test    eax, eax
        push    edi
        __emit 0x0F  /* jl rel32 (target outside extent) */
        __emit 0x8C
        __emit 0x9D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8B  /* first byte of next instruction (outside extent) */
    }


}
