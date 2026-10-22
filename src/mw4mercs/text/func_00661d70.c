/*
 * FUN_00661d70 (10 B) — __thiscall setter. Stores a byte arg into [this+0xc].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00661d70(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        mov     byte ptr [ecx + 0xc], al
        ret     0x4
    }
}
