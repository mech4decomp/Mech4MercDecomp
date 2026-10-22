/*
 * FUN_00492260 (108 B) — __thiscall, RET 4 (1 stack param).
 * Serializes an array of objects: writes count, then each object's data,
 * then calls each object's vtable+4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00493420(void *);
extern void __cdecl FUN_00412a50(void *, int);

__declspec(naked) void __fastcall FUN_00492260(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        push    esi
        mov     ebp, ecx
        call    FUN_00493420
        mov     ebx, dword ptr [ebp + 0x44]
        mov     eax, dword ptr [esi]
        add     esp, 0x4
        push    0x4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], ebx
        call    dword ptr [eax + 0x24]
        test    ebx, ebx
        jbe     l_done
        mov     edi, dword ptr [ebp + 0x40]
        mov     dword ptr [esp + 0x14], ebx
    l_loop1:
        mov     edx, dword ptr [edi]
        add     edx, 0x4
        push    edx
        push    esi
        call    FUN_00412a50
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 0x8
        add     edi, 0x4
        dec     eax
        mov     dword ptr [esp + 0x14], eax
        jnz     l_loop1
        test    ebx, ebx
        jbe     l_done
        mov     edi, dword ptr [ebp + 0x40]
    l_loop2:
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 0x4]
        add     edi, 0x4
        dec     ebx
        jnz     l_loop2
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
