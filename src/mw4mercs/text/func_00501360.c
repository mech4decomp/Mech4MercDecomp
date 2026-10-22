/*
 * FUN_00501360 (11 B) — Constructor stub: sets vtable to 0x77634C,
 * then tail-calls FUN_00501470.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall func_00501360(void)
{
    

extern void __cdecl FUN_0050146f(void);
__asm {
mov     dword ptr [ecx], 0x0077634C
        jmp FUN_0050146f
    }


}
