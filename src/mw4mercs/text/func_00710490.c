/*
 * FUN_00710490 (96 B) — __stdcall, 5 args (ret 0x14). Builds a 0x40-byte
 * local struct from int args (converted to float) and calls FUN_00713a70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00713a70(void);

__declspec(naked) void FUN_00710490(void)
{
    __asm {
        sub     esp, 0x40
        fild    dword ptr [esp + 0x44]
        push    edi
        xor     eax, eax
        mov     ecx, 0x10
        lea     edi, [esp + 4]
        rep     stosd
        fstp    dword ptr [esp + 4]
        fild    dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x58]
        fstp    dword ptr [esp + 8]
        fild    dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x34], eax
        push    2
        fstp    dword ptr [esp + 0x28]
        lea     eax, [esp + 8]
        fild    dword ptr [esp + 0x58]
        push    eax
        mov     dword ptr [esp + 0x18], 0x3f800000
        mov     dword ptr [esp + 0x38], 0x3f800000
        fstp    dword ptr [esp + 0x30]
        call    FUN_00713a70
        pop     edi
        add     esp, 0x40
        ret     0x14
    }
}
