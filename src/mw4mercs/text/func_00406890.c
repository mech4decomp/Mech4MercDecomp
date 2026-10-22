/*
 * FUN_00406890 (79 B true extent; 103 B block incl. pad + adjacent fn) —
 * __stdcall, 3 args (ret 0xc). Compares two strings and calls FUN_00701510
 * if they match.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_00401b80(void);
extern void __cdecl FUN_00701510(void);

__declspec(naked) void FUN_00406890(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 4]
        push    ebx
        mov     ebx, dword ptr [edx]
        push    esi
        mov     esi, dword ptr [ecx]
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        je      l_1
        or      ecx, 0xffffffff
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        je      l_1
        push    esi
        call    FUN_00401b80
        add     esp, 4
        test    al, al
        je      l_1
        push    ebx
        push    esi
        call    FUN_00701510
        pop     edi
        pop     esi
        pop     ebx
        ret     0xc
    l_1:
        pop     edi
        pop     esi
        mov     eax, 0xfffffffe
        pop     ebx
        ret     0xc
    }
}
