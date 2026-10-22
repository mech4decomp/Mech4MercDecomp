/*
 * FUN_005015d0 (11 B) — Constructor stub: sets vtable to 0x7763A0,
 * then tail-calls FUN_00501470.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall func_005015d0(void)
{
    

extern void __cdecl FUN_10050146f(void);
__asm {
mov     dword ptr [ecx], 0x007763A0
        jmp FUN_10050146f
    }


}
