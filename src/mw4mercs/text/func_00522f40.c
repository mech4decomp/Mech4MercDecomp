/*
 * FUN_00522F40 (101 B) — __stdcall, 3 params (ret 0xC).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00523000(void);
extern int DAT_007b4398;   /* 0x007B4398 */
extern int DAT_007dd284;   /* 0x007DD284 */

__declspec(naked) void FUN_00522f40(void)
{
    __asm {
        mov     eax, dword ptr [esp+8]
        test    eax, eax
        jnz     l_continue
        or      eax, -1
        ret     0xC
    l_continue:
        mov     eax, dword ptr [esp+0xC]
        mov     eax, dword ptr [eax]
        cmp     eax, -1
        jl      l_skip_deref
        cmp     eax, 0xBB8
        jle     l_call
    l_skip_deref:
        mov     eax, dword ptr [eax]
    l_call:
        push    eax
        call    FUN_00523000
        test    eax, eax
        jnz     l_copy
        or      eax, -1
        ret     0xC
    l_copy:
        push    esi
        push    edi
        or      ecx, -1
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x7DD284
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        pop     edi
        mov     dword ptr [DAT_007b4398], 0x7DD284   ; mov [0x007B4398], 0x007DD284
        pop     esi
        ret     0xC
    }
}
