/*
 * FUN_00500510 (8 B) — Returns field at offset 0x14 from param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __stdcall func_00500510(void *param_1)
{
    __asm {
        mov     eax, [esp + 4]
        mov     eax, [eax + 0x14]
        ret
    }
}
