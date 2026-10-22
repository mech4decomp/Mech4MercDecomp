/*
 * FUN_004C1B00 (23 B) — reads [ecx+0x18], extracts bit 0xa, indexes the
 * table at 0x7b3900, and stores the result at [ecx+0x13c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b3900;

__declspec(naked) void FUN_004C1B00(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x18]
        shr     eax, 0xa
        and     eax, 1
        mov     edx, dword ptr [g_7b3900 + eax*4]
        mov     dword ptr [ecx+0x13c], edx
        ret
    }
}
