/*
 * FUN_004fa210 (77 B) — Adept::Interface secondary-object init.
 * Allocates 0x24 bytes via FUN_004084d0, constructs via FUN_004dd270,
 * stores handle into g_007dc8c4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc8cc;
extern int g_007dc8c4;

extern void *FUN_004084d0(int size);
extern int FUN_004dd270(void);

__declspec(naked) void FUN_004fa210(void)
{
    __asm {
        push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_fail

        mov     eax, [g_007dc8cc]
        push    0x5052a0
        push    0x4fa290
        push    0x775c20
        push    0x2
        push    eax
        push    0x775c60
        push    0x1ca
        mov     ecx, esi
        call    FUN_004dd270
        mov     dword ptr [g_007dc8c4], esi
        pop     esi
        ret

L_fail:
        mov     dword ptr [g_007dc8c4], 0x0
        pop     esi
        ret
    }
}
