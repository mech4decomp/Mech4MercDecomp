/*
 * FUN_004B9CC0 (23 B) — __thiscall (RET 0). Indexes a global table by a
 * bit of the object's field at 0x18 and stores the result at 0x13c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b34b8[];

__declspec(naked) void FUN_004B9CC0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x18]
        shr     eax, 0xa
        and     eax, 1
        mov     edx, dword ptr [g_007b34b8 + eax*4]
        mov     dword ptr [ecx + 0x13c], edx
        ret
    }
}
