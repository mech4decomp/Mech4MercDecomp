/*
 * FUN_004E85E0 (125 B) — Adept application init: alloc Tile object, register
 *   "Hide Ground" / "Hide Tile Entities" library callbacks.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_0070f090(void);
extern int g_7dab04;   /* DAT_007dab04 */
extern int g_7dc790;   /* DAT_007dc790 */
extern int g_7dc794;   /* DAT_007dc794 */

__declspec(naked) void __cdecl FUN_004e85e0(void)
{
    __asm {
        push    esi
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L8617
        mov     eax, dword ptr [g_7dab04]
        push    eax
        push    0x774450
        push    0x234
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x4c44c0
        mov     dword ptr [g_7dc790], esi
        jmp     L8621
    L8617:
        mov     dword ptr [g_7dc790], 0
    L8621:
        push    0
        push    0
        push    0x4e8670
        push    0x4e8660
        push    0x774434
        mov     dword ptr [g_7dc794], 0
        call    FUN_0070f090
        push    0
        push    0
        push    0x4e8690
        push    0x4e8680
        push    0x774410
        call    FUN_0070f090
        pop     esi
        ret
    }
}
