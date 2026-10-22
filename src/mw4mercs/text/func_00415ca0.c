/*
 * FUN_00415ca0 (13 B) — __fastcall (ECX=this, one stack arg): forwards the
 * stack argument in ECX to FUN_00415410.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415410(void);

__declspec(naked) void FUN_00415ca0(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp+0x8]
        call    FUN_00415410
        ret     0x4
    }
}
