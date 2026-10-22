/*
 * FUN_1003cda5 (23 B) — __thiscall.
 * Wrapper: pushes 0, param_3, param_2, param_1 then calls FUN_1003cdbc
 * (this in ECX), cleans 0x10 bytes of stack.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003cdbc(void);

__declspec(naked) void FUN_1003cda5(void)
{
    __asm {
        push    0
        push    dword ptr [esp + 0x10]
        push    dword ptr [esp + 0x10]
        push    dword ptr [esp + 0x10]
        call    FUN_1003cdbc
        add     esp, 0x10
        ret
    }
}
