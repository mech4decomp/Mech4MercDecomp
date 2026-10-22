/*
 * FUN_00547560 (16 B) — Calls FUN_0040F4E0(0, param).
 * Bytes: 8B 44 24 04 6A 00 50 E8 24 FF FF FF 83 C4 08 C3
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00547560(void)
{
    

extern void __cdecl FUN_10054748e(void);
__asm {
mov     eax, dword ptr [esp + 4]
        push    0
        push    eax
        call FUN_10054748e
        add     esp, 8
        ret
    }


}
