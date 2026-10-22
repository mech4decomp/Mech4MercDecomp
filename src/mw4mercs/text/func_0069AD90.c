/*
 * FUN_0069AD90 (10 B @ 0x69AD90) - __cdecl (1 arg: [esp+4] = ptr). Copies the
 * low byte of the pointer argument into *ptr (writes byte 0 of the arg value
 * to the pointed-to location). (Adjacent function 0x69ADA0 is a separate
 * entry in the same data block.)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0069AD90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     cl, byte ptr [esp + 4]
        mov     byte ptr [eax], cl
        ret
    }
}
