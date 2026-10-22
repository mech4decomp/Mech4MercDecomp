/*
 * FUN_00767A8B (91 B) — __stdcall, 2 args (ret 8), ecx=this. Allocates a
 * node, copies a string, and links it into a list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_004084d0(void);
extern void __cdecl FUN_00767c30(void);

__declspec(naked) void FUN_00767A8B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        mov     ebx, ecx
        push    esi
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        add     ecx, 8
        push    ecx
        call    FUN_004084d0
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 4], eax
        mov     eax, dword ptr [ebx + 4]
        add     esp, 4
        test    eax, eax
        mov     dword ptr [esi], 0
        je      l_1
        mov     ecx, dword ptr [ebx + 8]
        mov     dword ptr [ecx], esi
        jmp     l_2
    l_1:
        mov     dword ptr [ebx + 4], esi
    l_2:
        push    ebp
        mov     ecx, esi
        mov     dword ptr [ebx + 8], esi
        call    FUN_00767c30
        pop     edi
        lea     eax, [esi + 8]
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
