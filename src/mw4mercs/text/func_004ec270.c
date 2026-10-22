/*
 * FUN_004EC270 (34 B) — Destructor body (__thiscall, RET 0).
 *
 * Sets vtable to 0x774748, calls FUN_004EC2E0, then
 * FUN_00724A00(field_18, 0), then FUN_00415380 (base dtor).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ec2e0(void);
extern void __cdecl FUN_00724a00(int param, int zero);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void __fastcall FUN_004ec270(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x774748
        call    FUN_004ec2e0
        mov     eax, [esi + 0x18]
        push    0
        push    eax
        call    FUN_00724a00
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
