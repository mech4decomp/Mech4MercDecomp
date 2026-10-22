/*
 * FUN_007005d0 (107 B) - gosScript init: calls FUN_00700ed0, then if
 * DAT_008aaaec is set and DAT_00856860 is null, allocates a 0x2f484-byte
 * buffer, runs FUN_006fcf00/FUN_006fd1b0 on it, frees it, and sets
 * DAT_008aaaf0 = 1 on success.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00700ed0(void);
extern void __cdecl FUN_006fcf00(void);
extern void __cdecl FUN_006fd1b0(void);

extern void *(*g_malloc)(unsigned int);   /* IAT 0x0076b294 */
extern void (*g_free)(void *);            /* IAT 0x0076b2d0 */

extern char g_008aaaec;   /* DAT_008aaaec */
extern int  g_00856860;   /* DAT_00856860 */
extern char g_008aaaf0;   /* DAT_008aaaf0 */

__declspec(naked) int FUN_007005d0(void)
{
    __asm {
        call    FUN_00700ed0
        mov     al, byte ptr [g_008aaaec]
        test    al, al
        jz      L0638
        mov     eax, dword ptr [g_00856860]
        test    eax, eax
        jnz     L0635
        push    esi
        push    0x2f484
        call    dword ptr [g_malloc]
        add     esp, 0x4
        push    eax
        mov     dword ptr [g_00856860], eax
        call    FUN_006fcf00
        mov     esi, eax
        mov     eax, dword ptr [g_00856860]
        push    eax
        call    FUN_006fd1b0
        mov     ecx, dword ptr [g_00856860]
        push    ecx
        call    dword ptr [g_free]
        add     esp, 0x4
        test    esi, esi
        mov     dword ptr [g_00856860], 0x0
        pop     esi
        jnz     L0638
        mov     al, 0x1
        mov     byte ptr [g_008aaaf0], al
        ret
L0635:
        mov     al, 0x1
        ret
L0638:
        xor     al, al
        ret
    }
}
