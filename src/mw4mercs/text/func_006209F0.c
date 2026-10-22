/*
 * FUN_006209F0 (225 B) — in-.text data block function (block 0x6209E2).
 * Uses globals 0x8058ac/0x805908/0x805918/0x80592c/0x7de630; calls
 * FUN_00649150 / FUN_0061fc80 / FUN_0064d170 / FUN_0064db40 /
 * FUN_00620020.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0061fc80(void);
extern void __cdecl FUN_0064d170(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_00620020(void);

extern int  g_008058ac;   /* DAT_008058ac */
extern int  g_007de630;   /* DAT_007de630 */
extern int  g_00805908;   /* DAT_00805908 */
extern int  g_00805918;   /* DAT_00805918 */
extern int  g_0080592c;   /* DAT_0080592c */
extern char g_78cb9c[];   /* string @ 0x78cb9c */
extern char g_78cb90[];   /* string @ 0x78cb90 */
extern char g_77a078[];   /* string @ 0x77a078 */

__declspec(naked) void FUN_006209F0(void)
{
    __asm {
        sub     esp, 0x104
        push    ebx
        push    esi
        mov     ebx, ecx
        call    FUN_00649150
        cmp     dword ptr [g_008058ac], 0xe
        jne     L0A1D
        push    offset g_78cb9c
        mov     ecx, ebx
        call    FUN_0061fc80
        pop     esi
        pop     ebx
        add     esp, 0x104
        ret
L0A1D:
        call    FUN_0064d170
        mov     esi, eax
        mov     eax, dword ptr [g_007de630]
        test    eax, eax
        jg      L0AC8
        mov     eax, dword ptr [g_00805908]
        push    ebp
        mov     ebp, dword ptr [g_00805918]
        mov     dword ptr [esp + 0xc], eax
        call    FUN_0064db40
        cmp     dword ptr [esi + 4], 3
        jne     L0A5A
        push    offset g_78cb90
        mov     ecx, ebx
        call    FUN_0061fc80
        jmp     L0AAA
L0A5A:
        mov     ecx, dword ptr [g_0080592c]
        push    edi
        push    esi
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        mov     ecx, ebx
        call    FUN_00620020
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_77a078
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        lea     eax, [esp + 0x14]
        rep movsb
        push    eax
        mov     ecx, ebx
        call    FUN_0061fc80
        pop     edi
L0AAA:
        mov     eax, dword ptr [g_0080592c]
        mov     ecx, dword ptr [esp + 0xc]
        sub     eax, 4
        mov     dword ptr [g_00805918], ebp
        mov     dword ptr [g_0080592c], eax
        mov     dword ptr [g_00805908], ecx
        pop     ebp
L0AC8:
        pop     esi
        pop     ebx
        add     esp, 0x104
        ret
    }
}
