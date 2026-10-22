/*
 * FUN_0075C060 (229 B) — __fastcall (ECX = this). Compares this[2] vs this[3];
 * if equal, logs two values via FUN_006F4940 and zeroes this[2]. Otherwise
 * compares against the global DAT_008b2830 (recursing to refresh it), copies
 * 0xe dwords into DAT_008b2830, or logs + frees this[2].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_84931c;            /* DAT_0084931c */
extern int g_849320;            /* DAT_00849320 */
extern unsigned short g_8b2830; /* DAT_008b2830 (word) */
extern unsigned short g_8b2832; /* DAT_008b2830+2 (word) */
extern unsigned short g_8b2836; /* DAT_008b2830+6 (word) */
extern int g_8b2838;            /* DAT_008b2838 */
extern int g_8b2844;            /* DAT_008b2844 */
extern char g_str_7af8c8[];     /* "MostRecentOriginal" */

extern void __cdecl FUN_007539E0(void);
extern void __cdecl FUN_006F4940(void);
extern void __cdecl FUN_00740DB0(void);

__declspec(naked) void __fastcall FUN_0075C060(void *param_1)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x8]
        cmp     eax, dword ptr [ebx + 0xc]
        jnz     L_c0aa
        push    0x1
        push    0x1
        push    0x0
        mov     ecx, ebx
        call    FUN_007539E0
        mov     ecx, dword ptr [g_84931c]
        neg     eax
        push    eax
        push    ecx
        call    FUN_006F4940
        push    0x1
        push    0x2
        push    0x0
        mov     ecx, ebx
        call    FUN_007539E0
        mov     edx, dword ptr [g_849320]
        push    eax
        push    edx
        call    FUN_006F4940
        mov     dword ptr [ebx + 0x8], 0
        pop     ebx
        ret
L_c0aa:
        cmp     ebx, offset g_8b2830
        jz      L_c118
        mov     eax, dword ptr [g_8b2838]
        test    eax, eax
        jz      L_c0f3
        mov     ax, word ptr [ebx]
        cmp     ax, word ptr [g_8b2830]
        jnz     L_c0e9
        mov     cx, word ptr [ebx + 0x2]
        cmp     cx, word ptr [g_8b2832]
        jnz     L_c0e9
        xor     edx, edx
        mov     dx, word ptr [ebx + 0x6]
        xor     dx, word ptr [g_8b2836]
        test    edx, 0x801
        jz      L_c118
L_c0e9:
        mov     ecx, offset g_8b2830
        call    FUN_0075C060
L_c0f3:
        push    esi
        push    edi
        mov     esi, ebx
        mov     ecx, 0xe
        mov     edi, offset g_8b2830
        rep     movsd
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x8], 0
        mov     dword ptr [g_8b2844], 0x7af8c8
        pop     ebx
        ret
L_c118:
        push    0x1
        push    0x1
        push    0x0
        mov     ecx, ebx
        call    FUN_007539E0
        neg     eax
        push    eax
        mov     eax, dword ptr [g_84931c]
        push    eax
        call    FUN_006F4940
        mov     ecx, dword ptr [ebx + 0x8]
        push    ecx
        call    FUN_00740DB0
        mov     dword ptr [ebx + 0x8], 0
        pop     ebx
        ret
    }
}
