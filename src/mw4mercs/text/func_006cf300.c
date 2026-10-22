/*
 * FUN_006CF300 — graphics options initialization.
 *
 * If param_1 != 0, opens "Graphics Options" and reads "Compositing" value.
 * Then calls FUN_006F4850(DAT_00840008, 1) and zeros DAT_00840008.
 *
 * __cdecl, RET 4.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

int __cdecl FUN_0040eda0(const char *str);
int __fastcall FUN_00411d10(const char *str, int val);
void __stdcall FUN_006f4850(int val, int flag);

__declspec(naked) void __stdcall func_006cf300(int param_1)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        test    ecx, ecx
        jz      L_skip
        push    0x76d9ec
        call    FUN_0040eda0
        _emit 0x8B
        _emit 0x0D
        _emit 0x38
        _emit 0x22
        _emit 0x7B
        _emit 0x00
        push    ecx
        push    0x79e880
        mov     ecx, eax
        call    FUN_00411d10
    L_skip:
        _emit 0x8B
        _emit 0x15
        _emit 0x08
        _emit 0x00
        _emit 0x84
        _emit 0x00
        push    1
        push    edx
        call    FUN_006f4850
        _emit 0xC7
        _emit 0x05
        _emit 0x08
        _emit 0x00
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        ret
    }
}
