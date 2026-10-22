/*
 * FUN_00602450 (13 B) — __thiscall setter: stores a byte arg into
 * this+0x224c. Returns 4 bytes of args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00602450(void)
{
    __asm {
        mov     al, byte ptr [esp+4]
        mov     byte ptr [ecx+0x224c], al
        ret     4
    }
}
