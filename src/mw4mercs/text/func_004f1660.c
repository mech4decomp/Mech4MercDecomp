/*
 * FUN_004f1660 (55 B) — Adept::VideoComponentWeb factory. Allocates 0x14
 * bytes via FUN_004084d0; if non-null, constructs via FUN_004151c0
 * (thiscall, ECX=alloc, args: 0x218, "Adept::VideoComponentWeb",
 * DAT_007dc854) and stores in DAT_007dc848; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

extern int g_007dc854;   /* DAT_007dc854 */
extern int g_007dc848;   /* DAT_007dc848 */

__declspec(naked) void FUN_004f1660(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L168c
        mov     ecx, dword ptr [g_007dc854]
        push    ecx
        push    0x774ed0
        push    0x218
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc848], eax
        ret
L168c:
        mov     dword ptr [g_007dc848], 0x0
        ret
    }
}
