/*
 * FUN_0069b7f0 (13 B) — returns *(param_1 + 0x3c) after calling FUN_00649150.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00649150(void);

__declspec(naked) void FUN_0069b7f0(void)
{
    __asm {
        call    FUN_00649150
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x3c]
        ret
    }
}
