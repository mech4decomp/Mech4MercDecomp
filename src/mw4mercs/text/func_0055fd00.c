/*
 * FUN_0055fd00 (9 B) — Calls FUN_00717C10([ecx]).
 * Bytes: 8B 01 50 E8 08 7F 1B 00 C3
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0055fd00(void)
{
    

extern void __cdecl FUN_00717c12(void);
__asm {
mov     eax, dword ptr [ecx]
        push    eax
        call FUN_00717c12
        ret
    }


}
