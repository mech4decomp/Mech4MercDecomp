/*
 * FUN_0041EEC0 (103 B) — __stdcall, 1 arg (ret 4), ecx=this. Initializes a
 * stream object, sets its vtable, and copies a data buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0041e690(void);
extern void *__cdecl FUN_004084d0(void);
extern char g_76d7f4[];

__declspec(naked) void FUN_0041EEC0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [ebp + 0x1c]
        push    edi
        push    0
        push    esi
        mov     ebx, ecx
        push    0
        call    FUN_0041e690
        mov     eax, dword ptr [ebp + 0x20]
        push    eax
        mov     dword ptr [ebx], offset g_76d7f4
        mov     dword ptr [ebx + 0x20], eax
        call    FUN_004084d0
        mov     dword ptr [ebx + 0x10], eax
        mov     dword ptr [ebx + 0x18], eax
        mov     ecx, esi
        mov     edi, eax
        mov     eax, ecx
        shr     ecx, 2
        mov     dword ptr [ebx + 0x1c], esi
        mov     esi, dword ptr [ebp + 0x10]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebx + 0x10]
        add     esp, 4
        pop     edi
        sub     ecx, edx
        pop     esi
        add     ecx, eax
        pop     ebp
        mov     dword ptr [ebx + 0x14], ecx
        mov     byte ptr [ebx + 0x24], 1
        mov     eax, ebx
        pop     ebx
        ret     4
    }
}
