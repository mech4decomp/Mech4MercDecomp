/*
 * FUN_00547690 (268 B) — __cdecl function with 2 stack params.
 * String matching and lookup logic.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void * __cdecl FUN_004084d0(int size);
extern void __stdcall FUN_00416bc0(int ptr);
extern int __fastcall FUN_00416cc0(void);
extern void __stdcall FUN_004084e0(int ptr);

__declspec(naked) void FUN_00547690(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076b2b0;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        push    ebx
        push    ebp
        push    esi
        mov esi, dword ptr [DAT_007dab40]
        push    edi
        mov     edi, dword ptr [eax]
        push    0x14
        xor     edi, esi
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      l_alloc_fail

        mov     ecx, dword ptr [edi + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x84]
        add     edx, 0x10
        push    edx
        mov     ecx, esi
        call    FUN_00416bc0
        mov     dword ptr [esi], 0x779e88
        mov     ebp, esi
        jmp     l_after_alloc

l_alloc_fail:
        xor     ebp, ebp

l_after_alloc:
        mov     ecx, ebp
        call    FUN_00416cc0
        test    eax, eax
        jz      l_cleanup_fail

l_loop_start:
        mov     ecx, dword ptr [esp + 0x18]
        cmp     dword ptr [eax + 0x20], ecx
        jnz     l_next_iter

        mov     esi, dword ptr [eax + 0x18]
        test    esi, esi
        jz      l_null_str

        inc     byte ptr [esi - 1]
        or      ecx, -1
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx

l_after_strlen:
        test    esi, esi
        jz      l_skip_inc2
        inc     byte ptr [esi - 1]
l_skip_inc2:
        mov     edx, dword ptr [esp + 0x14]
        push    ecx
        push    esi
        push    edx
        call dword ptr [DAT_0076b2b0]
        add     esp, 0xc
        mov     ebx, eax
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    esi, esi
        jz      l_skip_decref

        mov     cl, byte ptr [esi - 1]
        lea     eax, [esi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_decref2
        push    eax
        call    FUN_004084e0
        add     esp, 4
l_skip_decref2:
        test    esi, esi
        jz      l_skip_decref
        mov     cl, byte ptr [esi - 1]
        lea     eax, [esi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_decref
        push    eax
        call    FUN_004084e0
        add     esp, 4

l_skip_decref:
        test    bl, bl
        jnz     l_found_match

l_next_iter:
        mov     ecx, ebp
        call    FUN_00416cc0
        test    eax, eax
        jnz     l_loop_start
        jmp     l_cleanup_fail

l_null_str:
        xor     ecx, ecx
        jmp     l_after_strlen

l_found_match:
        test    ebp, ebp
        jz      l_skip_dtor
        mov     eax, dword ptr [ebp]
        push    1
        mov     ecx, ebp
        call    dword ptr [eax]
l_skip_dtor:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        ret     8

l_cleanup_fail:
        test    ebp, ebp
        jz      l_return_false
        mov     edx, dword ptr [ebp]
        push    1
        mov     ecx, ebp
        call    dword ptr [edx]

l_return_false:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
    }


}
