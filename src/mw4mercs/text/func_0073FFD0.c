/*
 * FUN_0073FFD0 (62 B) — __cdecl (RET 0x4). Switch on (arg-1) in [0,4]:
 * returns one of five byte globals (g_8aaaec..g_8aaaf0); default 0.
 * Jump table lives at 0x740010 (data following this function).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8aaaec;
extern char g_8aaaed;
extern char g_8aaaee;
extern char g_8aaaef;
extern char g_8aaaf0;

__declspec(naked) void FUN_0073FFD0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        dec     eax
        cmp     eax, 4
        ja      L_740009
        /* __emit: MSVC6 re-bases jump-table dispatch via EBX; ref uses FF 24 85 [eax*4+imm32] */
        __emit  0xFF
        __emit  0x24
        __emit  0x85
        __emit  0x10
        __emit  0x00
        __emit  0x74
        __emit  0x00
        mov     al, byte ptr [g_8aaaec]
        ret     4
        mov     al, byte ptr [g_8aaaed]
        ret     4
        mov     al, byte ptr [g_8aaaee]
        ret     4
        mov     al, byte ptr [g_8aaaef]
        ret     4
        mov     al, byte ptr [g_8aaaf0]
        ret     4
L_740009:
        xor     al, al
        ret     4
    }
}
