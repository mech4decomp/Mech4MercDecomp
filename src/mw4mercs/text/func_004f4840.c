/*
 * FUN_004f4840 (77 B) — Adept::Effect::ExecutionStateEngine factory.
 * Allocates 0x24 bytes via FUN_004084d0, constructs via FUN_004dd270,
 * and stores the result in g_007dc89c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc8cc;
extern int g_007dc89c;

extern void FUN_004084d0(void);
extern void FUN_004dd270(void);

__declspec(naked) void FUN_004f4840(void)
{
    __asm {
        push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L4881
        mov     eax, dword ptr [g_007dc8cc]
        push    0x5052a0
        push    0x4f48c0
        push    0x775378
        push    0x4
        push    eax
        push    0x7753d8
        push    0x1d2
        mov     ecx, esi
        call    FUN_004dd270
        mov     dword ptr [g_007dc89c], esi
        pop     esi
        ret
L4881:
        mov     dword ptr [g_007dc89c], 0
        pop     esi
        ret
    }
}
