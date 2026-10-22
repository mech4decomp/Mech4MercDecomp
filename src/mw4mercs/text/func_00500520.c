/*
 * FUN_00500520 (5 B) — Identity function, returns param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __stdcall func_00500520(unsigned int param_1)
{
    __asm {
        mov     eax, [esp + 4]
        ret
    }
}
