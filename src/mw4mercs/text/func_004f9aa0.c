/*
 * FUN_004f9aa0 (75 B) — Adept::Interface shutdown/teardown.
 * Destroys the two objects stored at 0x007dc8c0 / 0x007dd230 and
 * clears the globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc8c0;
extern int g_007dd230;

extern void FUN_00501b40(void);
extern void FUN_004084e0(void *p);
extern void FUN_0050a4f0(void);

__declspec(naked) void FUN_004f9aa0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007dc8c0]
        test    esi, esi
        jz      L_skip1

        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4

L_skip1:
        mov     esi, dword ptr [g_007dd230]
        test    esi, esi
        mov     dword ptr [g_007dc8c0], 0
        jz      L_skip2

        mov     ecx, esi
        call    FUN_0050a4f0
        push    esi
        call    FUN_004084e0
        add     esp, 4

L_skip2:
        mov     dword ptr [g_007dd230], 0
        pop     esi
        ret
    }
}
