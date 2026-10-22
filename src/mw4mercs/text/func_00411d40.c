/*
 * FUN_00411d40 (25 B) — __thiscall: FUN_00411b00(arg0), then
 * FUN_0041f230(arg1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411b00(void);
extern void __cdecl FUN_0041f230(void);

__declspec(naked) void FUN_00411d40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    FUN_00411b00
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, eax
        call    FUN_0041f230
        ret     0x8
    }
}
