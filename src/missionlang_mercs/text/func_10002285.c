/*
 * FUN_10002285 (41 B) — reset the codepage bitmap (0x100056a0) and the
 * 0x10005590 state block to zero.
 *
 * __stdcall, 0 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * MissionLang_MERCS.dll FUN_10002285 (41 B) -- __stdcall. Resets the
 * codepage lead-byte bitmap at 0x100056a0 (0x101 bytes) and the 12-byte
 * block at 0x10005590, then clears DAT_10005580 / DAT_1000559c /
 * DAT_100057a4. Mirror of Language.dll FUN_100026b5.
 */

extern char g_100056a0;                               /* 0x100056a0 */
extern int g_10005590;                                /* 0x10005590 */
extern int g_10005580;                                /* 0x10005580 */
extern int g_1000559c;                                /* 0x1000559c */
extern int g_100057a4;                                /* 0x100057a4 */

__declspec(naked) void __stdcall FUN_10002285(void)
{
    __asm {
        push    edi
        push    0x40
        pop     ecx
        xor     eax, eax
        mov     edi, offset g_100056a0
        rep stosd
        stosb
        xor     eax, eax
        mov     edi, offset g_10005590
        mov     dword ptr [g_10005580], eax
        mov     dword ptr [g_1000559c], eax
        mov     dword ptr [g_100057a4], eax
        stosd
        stosd
        stosd
        pop     edi
        ret
    }
}
