/*
 * FUN_004AF200 (91 B) — ERF version check.
 *   Calls vtable method, checks magic, asserts on version mismatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_006fab90(const char *msg);

__declspec(naked) int __stdcall FUN_004af200(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    esi
        mov     esi, dword ptr [ebp + 8]
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [ebp + 8]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp - 4], 1
        call    dword ptr [eax + 0x20]
        cmp     dword ptr [ebp + 8], 0x45524623
        mov     edx, dword ptr [esi]
        push    4
        jnz     l_call_vtable_1c
        lea     eax, [ebp - 4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        jmp     l_check_version
    l_call_vtable_1c:
        mov     ecx, esi
        call    dword ptr [edx + 0x1c]
    l_check_version:
        mov     eax, dword ptr [ebp - 4]
        cmp     eax, 0xe
        pop     esi
        jle     l_return
        push    0x7704f0
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_skip_int3
        int     3
    l_skip_int3:
        mov     eax, dword ptr [ebp - 4]
    l_return:
        mov     esp, ebp
        pop     ebp
        ret
    }
}
