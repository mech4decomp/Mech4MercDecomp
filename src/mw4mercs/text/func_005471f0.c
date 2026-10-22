/*
 * FUN_005471f0 (327 B) — __cdecl function with 1 stack param.
 * String comparison and lookup logic.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void * __cdecl FUN_004084d0(int size);
extern void __stdcall FUN_00416bc0(int ptr);
extern int __fastcall FUN_00416cc0(void);
extern void __stdcall FUN_004084e0(int ptr);
extern void __stdcall FUN_00412780(int ptr);

__declspec(naked) void FUN_005471f0(void)
{
    

extern int DAT_0076b2ac;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ecx
        mov     eax, dword ptr [esp + 8]
        push    ebx
        mov     ebx, dword ptr [eax]
        push    ebp
        push    esi
        or      ecx, -1
        push    edi
        xor     eax, eax
        mov     edi, ebx
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 4
        mov     dword ptr [esp + 0x10], ebx
        jbe     l_return_false

        or      ecx, -1
        mov     edi, ebx
        repne scasb
        not     ecx
        dec     ecx
        lea     ecx, [ecx + ebx - 4]
        push    0x779f4c
        push    ecx
        call dword ptr [DAT_0076b2ac]
        add     esp, 8
        test    eax, eax
        jnz     l_return_false

        mov edx, dword ptr [DAT_007dab44]
        mov     edi, dword ptr [edx]
        mov esi, dword ptr [DAT_007dab40]
        push    0x14
        xor     edi, esi
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      l_alloc_fail

        mov     eax, dword ptr [edi + 0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x98]
        add     ecx, 0x10
        push    ecx
        mov     ecx, esi
        call    FUN_00416bc0
        mov     dword ptr [esi], 0x779cdc
        mov     ebp, esi
        jmp     l_after_alloc

l_alloc_fail:
        xor     ebp, ebp

l_after_alloc:
        mov     ecx, ebp
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jz      l_cleanup
        jmp     l_loop_entry

l_loop_top:
        mov     ebx, dword ptr [esp + 0x10]

l_loop_entry:
        mov     esi, dword ptr [edi + 0x18]
        test    esi, esi
        jz      l_skip_refcnt1
        inc     byte ptr [esi - 1]
l_skip_refcnt1:
        push    ebx
        push    esi
        call dword ptr [DAT_0076b2ac]
        add     esp, 8
        mov     ebx, eax
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    esi, esi
        jz      l_skip_decref1
        mov     cl, byte ptr [esi - 1]
        lea     eax, [esi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_decref1
        push    eax
        call    FUN_004084e0
        add     esp, 4
l_skip_decref1:
        test    bl, bl
        jz      l_next_iter

        mov     esi, dword ptr [edi + 0x1c]
        test    esi, esi
        jz      l_next_iter
        mov     dl, byte ptr [esi - 1]
        lea     eax, [esi - 1]
        inc     dl
        mov     cl, dl
        dec     cl
        mov     byte ptr [eax], dl
        mov     byte ptr [eax], cl
        jnz     l_skip_decref2
        push    eax
        call    FUN_004084e0
        add     esp, 4
l_skip_decref2:
        cmp     byte ptr [esi], 0
        jnz     l_found_match

l_next_iter:
        mov     ecx, ebp
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jnz     l_loop_top

l_cleanup:
        test    ebp, ebp
        jz      l_return_false
        mov     eax, dword ptr [ebp]
        push    1
        mov     ecx, ebp
        call    dword ptr [eax]

l_return_false:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     4

l_found_match:
        mov     ecx, dword ptr [esp + 0x18]
        push    esi
        call    FUN_00412780
        test    ebp, ebp
        jz      l_skip_dtor
        mov     edx, dword ptr [ebp]
        push    1
        mov     ecx, ebp
        call    dword ptr [edx]
l_skip_dtor:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        pop     ecx
        ret     4
    }


}
