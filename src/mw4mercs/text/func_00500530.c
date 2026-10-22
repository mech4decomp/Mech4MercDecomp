/*
 * FUN_00500530 (8 B) — Returns field at offset 0x10 from param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __stdcall func_00500530(void *param_1)
{
    __asm {
        mov     eax, [esp + 4]
        mov     eax, [eax + 0x10]
        ret
    }
}
