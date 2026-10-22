/*
 * FUN_004f15d0 (59 B) — Adept::ChannelOfInt factory. Allocates 0x20 bytes
 * via FUN_004084d0; if non-null, constructs via FUN_004d5c10 (thiscall,
 * ECX=alloc, args: 0x1f1, "Adept::ChannelOfInt", DAT_007dc844, 0, 0) and
 * stores in DAT_007dc134; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

extern int g_007dc844;   /* DAT_007dc844 */
extern int g_007dc134;   /* DAT_007dc134 */

__declspec(naked) void FUN_004f15d0(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L1600
        mov     ecx, dword ptr [g_007dc844]
        push    0x0
        push    0x0
        push    ecx
        push    0x774ebc
        push    0x1f1
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc134], eax
        ret
L1600:
        mov     dword ptr [g_007dc134], 0x0
        ret
    }
}
