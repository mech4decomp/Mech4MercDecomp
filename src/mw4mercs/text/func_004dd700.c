/*
 * FUN_004dd700 (55 B) — Adept::ControlsMappingGroup singleton factory.
 * Allocates 0x14 bytes via FUN_004084d0; on success constructs the
 * object via FUN_004151c0 and stores it in g_007dc6ac, else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern int g_007dc6ac;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004dd700(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_skip
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x773890
        push    0x1de
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc6ac], eax
        ret
L_skip:
        mov     dword ptr [g_007dc6ac], 0
        ret
    }
}
