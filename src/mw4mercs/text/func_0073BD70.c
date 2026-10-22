/*
 * FUN_0073BD70 (11 B) — __cdecl (no params, RET).
 *
 * In-.text data block at 0x73A900 (547 B) contains MANY tiny accessor
 * functions; this is the first (0x73BD70-0x73BD7A). Returns bit 1 of
 * DAT_008aae5c. NOTE: 0x73BD80, 0x73BD90, 0x73BDA0, ... are dozens more
 * accessor functions in the same block (transcribed separately).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aae5c;   /* DAT_008aae5c */

__declspec(naked) void __cdecl FUN_0073BD70(void)
{
    __asm {
        mov     eax, dword ptr [g_8aae5c]
        shr     eax, 1
        and     eax, 1
        ret
    }
}
