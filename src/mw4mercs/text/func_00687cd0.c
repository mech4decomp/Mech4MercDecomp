/*
 * FUN_00687cd0 (12 B) — __thiscall. Copies this[8] (byte) into *param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00687cd0(void)
{
    __asm {
        mov     cl, byte ptr [ecx + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        mov     byte ptr [eax], cl
        ret     4
    }
}
