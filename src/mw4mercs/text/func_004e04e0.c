/*
 * FUN_004e04e0 (55 B) — Adept::GeneralEventQueue factory. Allocates a
 * 0x14-byte block; on success constructs a GeneralEventQueue (0x1c4 bytes,
 * vtable 0x773ac0) and stores it in g_007dc6d0, else stores NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern int g_007dc6d0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004e04e0(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_alloc_failed
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x773ac0
        push    0x1c4
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc6d0], eax
        ret
L_alloc_failed:
        mov     dword ptr [g_007dc6d0], 0x0
        ret
    }
}
