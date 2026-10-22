/*
 * FUN_0065d730 (10 B) — __thiscall setter: byte at [ECX+4] = arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065d730(void)
{
    __asm {
        mov     al, byte ptr [esp + 4]
        mov     byte ptr [ecx + 4], al
        ret     4
    }
}
