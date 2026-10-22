/*
 * FUN_0050e1b0 (10 B) — XOR obfuscation: returns param_1 ^ 0xAAAAAAAA.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __stdcall func_0050e1b0(unsigned int param_1)
{
    __asm {
        mov     eax, [esp + 4]
        xor     eax, 0xAAAAAAAA
        ret
    }
}
