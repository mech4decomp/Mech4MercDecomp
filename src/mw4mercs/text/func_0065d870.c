/*
 * FUN_0065d870 (7 B) -- ABL bytecode helper. __fastcall getter:
 * returns double at this+0x2bd0 (FLD onto FPU stack).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) double FUN_0065d870(void)
{
    __asm {
        fld     qword ptr [ecx + 0x2bd0]
        ret
    }
}
