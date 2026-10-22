/*
 * FUN_00506fc0 (11 B) — Constructor stub: sets vtable to 0x776F84,
 * then tail-calls FUN_004EC270.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall func_00506fc0(void)
{
    

extern void __cdecl FUN_1004ec26f(void);
__asm {
mov     dword ptr [ecx], 0x00776F84
        jmp FUN_1004ec26f
    }


}
