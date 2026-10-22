/*
 * FUN_0065d750 (10 B) -- ABL bytecode helper. __thiscall setter:
 * stores a byte argument into this+0x5. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065d750(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        mov     byte ptr [ecx + 0x5], al
        ret     0x4
    }
}
