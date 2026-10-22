/*
 * FUN_004f13e0 (59 B) — Adept::Channel factory. Allocates 0x20 bytes via
 * FUN_004084d0; if non-null, constructs a channel object via FUN_004d5c10
 * (thiscall, ECX=alloc, args: 0x1ef, "Adept::Channel", DAT_007dc860, 0, 0)
 * and stores the result in DAT_007dc844; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

extern int g_007dc860;   /* DAT_007dc860 */
extern int g_007dc844;   /* DAT_007dc844 */

__declspec(naked) void FUN_004f13e0(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L1410
        mov     ecx, dword ptr [g_007dc860]
        push    0x0
        push    0x0
        push    ecx
        push    0x774e98
        push    0x1ef
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc844], eax
        ret
L1410:
        mov     dword ptr [g_007dc844], 0x0
        ret
    }
}
