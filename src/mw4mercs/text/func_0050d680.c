/*
 * FUN_0050d680 (7 B) — Dereference pointer, returns *param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __stdcall func_0050d680(unsigned int *param_1)
{
    __asm {
        mov     eax, [esp + 4]
        mov     eax, [eax]
        ret
    }
}
