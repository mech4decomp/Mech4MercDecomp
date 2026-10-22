/*
 * FUN_00571630 (249 B) — in-.text data block function (block 0x571412).
 * Tokenizer/parser using globals 0x805918/0x805908/0x80592c/0x805928/
 * 0x80d9b0 and 0x7dab44/0x7dab40 XOR-keyed pointer; calls FUN_0064db40 /
 * FUN_004fcb30 / FUN_00563060 / FUN_005b7e50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005b7e50(void);

extern int g_00805918;   /* DAT_00805918 */
extern int g_00805908;   /* DAT_00805908 */
extern int g_0080592c;   /* DAT_0080592c */
extern int g_00805928;   /* DAT_00805928 */
extern int g_0080d9b0;   /* DAT_0080d9b0 */
extern int g_007dab44;   /* DAT_007dab44 */
extern int g_007dab40;   /* DAT_007dab40 */

__declspec(naked) void FUN_00571630(void)
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
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab44]
        mov     ebx, dword ptr [g_007dab40]
        sub     eax, 4
        mov     dword ptr [g_0080592c], eax
        mov     eax, dword ptr [edx]
        xor     eax, ebx
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        cmp     eax, -1
        jne     L16AF
        mov     esi, dword ptr [g_0080592c]
        mov     eax, dword ptr [g_00805928]
        add     esi, 4
        add     eax, 0xa000
        mov     dword ptr [g_0080592c], esi
        cmp     esi, eax
L169B:
        jb      L16A7
        push    0
        call    FUN_00563060
        add     esp, 4
L16A7:
        mov     dword ptr [esi], 0
        jmp     L170D
L16AF:
        test    eax, eax
        jne     L16D2
        mov     esi, dword ptr [g_0080592c]
        mov     ecx, dword ptr [g_00805928]
        add     esi, 4
        add     ecx, 0xa000
        mov     dword ptr [g_0080592c], esi
        cmp     esi, ecx
        jmp     L169B
L16D2:
        mov     ecx, eax
        call    FUN_005b7e50
        mov     esi, dword ptr [g_0080592c]
        mov     edx, dword ptr [g_00805928]
        add     esi, 4
        add     edx, 0xa000
        cmp     esi, edx
        mov     bl, al
        mov     dword ptr [g_0080592c], esi
        jb      L1704
        push    0
        call    FUN_00563060
        add     esp, 4
L1704:
        xor     eax, eax
        test    bl, bl
        setne   al
        mov     dword ptr [esi], eax
L170D:
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
