/*
 * FUN_00501550 (11 B) — Constructor stub: sets vtable to 0x776390,
 * then tail-calls FUN_00501470.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall func_00501550(void)
{
    

extern void __cdecl FUN_10050146f(void);
__asm {
mov     dword ptr [ecx], 0x00776390
        jmp FUN_10050146f
    }


}
