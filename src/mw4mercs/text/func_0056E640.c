/*
 * FUN_0056E640 (214 B) — in-.text data block function (block 0x56E640).
 * Tokenizer/parser using globals 0x805918/0x805908/0x80592c/0x805928;
 * calls FUN_00566bf0 / FUN_00566c30 / FUN_005670b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_0063ad60(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005670b0(void);

extern int g_00805918;   /* DAT_00805918 */
extern int g_00805908;   /* DAT_00805908 */
extern int g_0080592c;   /* DAT_0080592c */
extern int g_00805928;   /* DAT_00805928 */
extern int g_0080d9b0;   /* DAT_0080d9b0 */

__declspec(naked) void FUN_0056E640(void)
{
    __asm {
        mov     eax, dword ptr [g_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    ebx
        inc     eax
        push    esi
        mov     dword ptr [g_00805908], ecx
        mov     dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [g_0080592c]
        mov     esi, dword ptr [eax]
        sub     eax, 4
        push    esi
        mov     dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add     esp, 4
        cmp     al, 1
        push    esi
        jne     L6BE
        call    FUN_00566c30
        push    eax
        call    FUN_0063ad60
        mov     esi, dword ptr [g_0080592c]
        mov     edx, dword ptr [g_00805928]
        add     esi, 4
        add     edx, 0xa000
        add     esp, 8
        cmp     esi, edx
        mov     bl, al
        mov     dword ptr [g_0080592c], esi
        jb      L6B3
        push    0
        call    FUN_00563060
        add     esp, 4
L6B3:
        xor     eax, eax
        test    bl, bl
        setne   al
        mov     dword ptr [esi], eax
        jmp     L6FA
L6BE:
        call    FUN_005670b0
        mov     esi, dword ptr [g_0080592c]
        mov     ecx, dword ptr [g_00805928]
        add     esi, 4
        add     ecx, 0xa000
        add     esp, 4
        cmp     esi, ecx
        mov     bl, al
        mov     dword ptr [g_0080592c], esi
        jb      L6F1
        push    0
        call    FUN_00563060
        add     esp, 4
L6F1:
        xor     edx, edx
        test    bl, bl
        setne   dl
        mov     dword ptr [esi], edx
L6FA:
        mov     eax, dword ptr [g_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        pop     esi
        mov     dword ptr [g_00805918], eax
        mov     eax, dword ptr [g_0080d9b0]
        mov     dword ptr [g_00805908], ecx
        pop     ebx
        ret
    }
}
