/*
 * FUN_00514F00 (99 B) — __stdcall, 3 args (ret 0xc). Allocates a buffer,
 * fills it with a string from FUN_0072dcf0, and stores it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_006f4230(void);
extern void *__cdecl FUN_006f3c80(void);
extern void *__cdecl FUN_0072dcf0(void);

__declspec(naked) void FUN_00514F00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    esi
        mov     esi, dword ptr [eax]
        mov     eax, dword ptr [esi]
        test    eax, eax
        push    edi
        je      l_1
        push    eax
        call    FUN_006f4230
    l_1:
        push    0
        push    0x80
        call    FUN_006f3c80
        push    0xffff
        push    0xffff
        mov     ebx, eax
        push    0xffff
        mov     dword ptr [esi], ebx
        call    FUN_0072dcf0
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, ebx
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        ret     0xc
    }
}
