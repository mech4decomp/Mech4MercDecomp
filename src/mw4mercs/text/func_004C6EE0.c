/*
 * FUN_004C6EE0 (20 B) — __thiscall: index table g_7b3a28 by (this->0x18 >> 2)
 * & 0x3f, store result to this->0x1c.
 *
 * Match: target 100%
 */

extern unsigned long g_7b3a28[];

__declspec(naked) void FUN_004C6EE0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x18]
        shr     eax, 2
        and     eax, 0x3f
        mov     edx, dword ptr [g_7b3a28 + eax*4]
        mov     dword ptr [ecx + 0x1c], edx
        ret
    }
}
