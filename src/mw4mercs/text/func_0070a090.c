/*
 * FUN_0070a090 (210 B) — __stdcall RET 0x8 (2 params). gosScript blit
 * helper: if a global flag is set, calls FUN_007355d0; else wraps two
 * HDC handles via FUN_00735310, does a StretchBlt (8-bpp) or BitBlt
 * depending on DAT_00858ba0, then unwraps via FUN_00735350.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_0085a210;             /* DAT_0085a210 (flag) */
extern int  g_00858ba0;             /* DAT_00858ba0 (bpp) */
extern int  g_00858940;             /* DAT_00858940 */
extern int  g_00858944;             /* DAT_00858944 */

extern void __cdecl FUN_007355d0(void);
extern void __cdecl FUN_00735310(void);
extern void __cdecl FUN_00735350(void);

extern int (*g_0076b050)(void);     /* IAT: SetStretchBltMode */
extern int (*g_0076b054)(void);     /* IAT: StretchBlt */
extern int (*g_0076b058)(void);     /* IAT: BitBlt */

__declspec(naked) void __stdcall FUN_0070a090(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_0085a210]
        test    eax, eax
        jz      LA0B8
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        push    0x0
        push    0x1000000
        push    0x0
        push    eax
        push    0x0
        push    ecx
        call    FUN_007355d0
        pop     ecx
        ret     0x8
LA0B8:
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        lea     edx, [esp + 0x8]
        push    edx
        push    esi
        call    FUN_00735310
        mov     edi, dword ptr [esp + 0x10]
        lea     eax, [esp + 0x14]
        push    eax
        push    edi
        call    FUN_00735310
        cmp     dword ptr [g_00858ba0], 0x8
        jnz     LA11C
        mov     ecx, dword ptr [esp + 0x14]
        push    0x4
        push    ecx
        call    dword ptr [g_0076b050]
        mov     eax, dword ptr [g_00858944]
        mov     ecx, dword ptr [g_00858940]
        mov     edx, dword ptr [esp + 0x8]
        push    0xcc0020
        push    eax
        push    ecx
        push    0x0
        push    0x0
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x30]
        push    ecx
        push    0x0
        push    0x0
        push    eax
        call    dword ptr [g_0076b054]
        jmp     LA146
LA11C:
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [g_00858944]
        mov     eax, dword ptr [g_00858940]
        push    0xcc0020
        push    0x0
        push    0x0
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        push    edx
        push    eax
        push    0x0
        push    0x0
        push    ecx
        call    dword ptr [g_0076b058]
LA146:
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        push    edi
        call    FUN_00735350
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        push    esi
        call    FUN_00735350
        pop     edi
        pop     esi
        pop     ecx
        ret     0x8
    }
}
