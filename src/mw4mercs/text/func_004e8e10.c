/*
 * FUN_004E8E10 (135 B) — Adept application init: alloc Zone object, register
 *   "Hide Zone Entities" / "Show lights" library callbacks.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_0070f090(void);
extern int g_7dab04;   /* DAT_007dab04 */
extern int g_7dc7a8;   /* DAT_007dc7a8 */
extern int g_7dc7a0;   /* DAT_007dc7a0 */
extern int g_7dc79c;   /* DAT_007dc79c */

__declspec(naked) void __cdecl FUN_004e8e10(void)
{
    __asm {
        push    esi
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L8E47
        mov     eax, dword ptr [g_7dab04]
        push    eax
        push    0x7744e8
        push    0x233
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x4c44c0
        mov     dword ptr [g_7dc7a8], esi
        jmp     L8E51
    L8E47:
        mov     dword ptr [g_7dc7a8], 0
    L8E51:
        push    0
        push    0
        push    0x4e8eb0
        push    0x4e8ea0
        push    0x7744c4
        mov     dword ptr [g_7dc7a0], 0
        mov     dword ptr [g_7dc79c], 0
        call    FUN_0070f090
        push    0
        push    0
        push    0x4e8ed0
        push    0x4e8ec0
        push    0x7744a8
        call    FUN_0070f090
        pop     esi
        ret
    }
}
