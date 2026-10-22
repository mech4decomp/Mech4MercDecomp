/*
 * FUN_0065d8b0 (13 B) -- ABL bytecode helper. __thiscall setter:
 * stores a byte argument into this+0x2bd8. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065d8b0(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        mov     byte ptr [ecx + 0x2bd8], al
        ret     0x4
    }
}
