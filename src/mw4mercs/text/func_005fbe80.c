/*
 * FUN_005fbe80 (13 B) — __thiscall, RET 0x4 setter: stores byte arg into
 * [this+0x3f0].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005fbe80(void)
{
    __asm {
        mov     al, byte ptr [esp+0x4]
        mov     byte ptr [ecx+0x3f0], al
        ret     0x4
    }
}
