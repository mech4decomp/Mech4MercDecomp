/*
 * FUN_100026b5 (41 B, __stdcall) — resets the codepage state: zeroes the
 * 0x10008ee0 lead-byte bitmap (0x40 dwords + 1 byte) and clears
 * DAT_10008db4 / DAT_10008dcc / DAT_10008fe4 / DAT_10008dc0..c8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_100026b5 (41 B) -- __stdcall. Resets codepage state:
 * zeroes the 0x101-byte lead-byte bitmap at 0x10008ee0 and the 12-byte
 * block at 0x10008dc0, then clears DAT_10008db4 / DAT_10008dcc /
 */

extern char g_10008ee0;
extern char g_10008dc0;
extern int  g_10008db4;
extern int  g_10008dcc;
extern int  g_10008fe4;

__declspec(naked) void __stdcall FUN_100026b5(void)
{
    __asm {
        push    edi
        push    0x40
        pop     ecx
        xor     eax, eax
        mov     edi, offset g_10008ee0
        rep stosd
        stosb
        xor     eax, eax
        mov     edi, offset g_10008dc0
        mov     dword ptr [g_10008db4], eax
        mov     dword ptr [g_10008dcc], eax
        mov     dword ptr [g_10008fe4], eax
        stosd
        stosd
        stosd
        pop     edi
        ret
    }
}
