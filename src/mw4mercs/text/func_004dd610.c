/*
 * FUN_004dd610 (55 B) — Adept::EventControlsInstance singleton factory.
 * Allocates 0x14 bytes via FUN_004084d0; on success constructs the
 * object via FUN_004151c0 and stores it in g_007dc6a8, else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc6a0;
extern int g_007dc6a8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004dd610(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_skip
        mov     ecx, dword ptr [g_007dc6a0]
        push    ecx
        push    0x773868
        push    0x1dd
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc6a8], eax
        ret
L_skip:
        mov     dword ptr [g_007dc6a8], 0
        ret
    }
}
