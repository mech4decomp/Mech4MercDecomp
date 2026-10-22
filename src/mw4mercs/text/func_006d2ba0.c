/*
 * FUN_006D2BA0 (101 B) — __stdcall, 2 args (ret 8), ecx=this. Frees an old
 * string, allocates a copy of a new string, and calls a method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void);
extern void *__cdecl FUN_004084d0(void);
extern void __cdecl FUN_006d3500(void);

__declspec(naked) void FUN_006D2BA0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        mov     ebx, ecx
        je      l_3
        mov     eax, dword ptr [ebx]
        test    eax, eax
        je      l_1
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_1:
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084d0
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        add     esp, 4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebx], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, ebx
        call    FUN_006d3500
        pop     edi
    l_3:
        pop     esi
        pop     ebx
        ret     8
    }
}
