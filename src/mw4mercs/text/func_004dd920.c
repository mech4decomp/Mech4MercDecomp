/*
 * FUN_004dd920 (59 B) — Adept::ControlsManager singleton factory.
 * Allocates 0x20 bytes via FUN_004084d0; on success constructs the
 * object via FUN_004d5c10 and stores it in g_007dc6b0, else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc140;
extern int g_007dc6b0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004dd920(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_skip
        mov     ecx, dword ptr [g_007dc140]
        push    0x0
        push    0x0
        push    ecx
        push    0x7738bc
        push    0x1df
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc6b0], eax
        ret
L_skip:
        mov     dword ptr [g_007dc6b0], 0
        ret
    }
}
