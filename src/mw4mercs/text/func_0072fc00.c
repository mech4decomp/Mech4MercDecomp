/*
 * FUN_0072FC00 (717 B) — Builds a dialog template in a LocalAlloc'd buffer
 * and invokes DialogBoxIndirectParamA, then frees the template.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007315e0(void);
extern void __cdecl FUN_00731580(void);
extern void __cdecl FUN_007314e0(void);
extern void __cdecl FUN_007314f0(void);
extern void __cdecl FUN_0072faa0(void);

extern void *g_76b0bc;   /* LocalAlloc */
extern void *g_76b434;   /* DialogBoxIndirectParamA */
extern void *g_76b238;   /* LocalHandle */
extern void *g_76b140;   /* LocalFree */

extern char str_7a5e5c[];
extern char str_7a5e58[];
extern char str_7a5e50[];
extern char str_7a5e48[];
extern unsigned short DAT_008a9860;
extern int DAT_00858bfc;

__declspec(naked) void __cdecl FUN_0072fc00(void)
{
    __asm {
        push    esi
        push    edi
        push    0x800
        push    0x40
        call    dword ptr [g_76b0bc]
        mov     esi, eax
        mov     word ptr [esi], 0xac4
        mov     word ptr [esi + 2], 0x80c0
        mov     edi, esi
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 4
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0x178
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x61
        add     esi, 2
        mov     word ptr [esi], 0
        add     esi, 2
        mov     word ptr [esi], 0
        add     esi, 2
        mov     word ptr [esi], 0
        add     esi, 2
        call    FUN_007315e0
        push    offset str_7a5e5c
        mov     word ptr [esi], ax
        push    0x8c
        add     esi, 2
        push    esi
        call    FUN_00731580
        mov     word ptr [DAT_008a9860], 0x3e8
        and     eax, 0xffff
        lea     eax, [esi + eax*2]
        push    eax
        call    FUN_007314e0
        mov     esi, eax
        mov     word ptr [esi], 0
        mov     word ptr [esi + 2], 0x5001
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0x128
        add     esi, 2
        mov     word ptr [esi + 2], 4
        add     esi, 2
        mov     word ptr [esi + 2], 0x24
        add     esi, 2
        mov     word ptr [esi + 2], 0xc
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x3e8
        add     esi, 2
        mov     word ptr [esi], 0xffff
        add     esi, 2
        mov     word ptr [esi], 0x80
        push    offset str_7a5e58
        add     esi, 2
        push    esi
        call    FUN_007314f0
        and     eax, 0xffff
        lea     eax, [esi + eax*2]
        mov     word ptr [eax], 0
        add     eax, 2
        push    eax
        mov     word ptr [DAT_008a9860], 0x3e8
        call    FUN_007314e0
        mov     esi, eax
        mov     word ptr [esi], 0
        add     esi, 2
        mov     word ptr [esi], 0x5001
        add     esi, 2
        mov     word ptr [esi], 0
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0x150
        add     esi, 2
        mov     word ptr [esi + 2], 4
        add     esi, 2
        mov     word ptr [esi + 2], 0x24
        add     esi, 2
        mov     word ptr [esi + 2], 0xc
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x3e9
        add     esi, 2
        mov     word ptr [esi], 0xffff
        add     esi, 2
        mov     word ptr [esi], 0x80
        push    offset str_7a5e50
        add     esi, 2
        push    esi
        call    FUN_007314f0
        and     eax, 0xffff
        lea     eax, [esi + eax*2]
        mov     word ptr [eax], 0
        add     eax, 2
        push    eax
        call    FUN_007314e0
        mov     esi, eax
        mov     word ptr [esi], 0x10c0
        mov     word ptr [esi + 2], 0x5081
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 2
        add     esi, 2
        mov     word ptr [esi + 2], 4
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x122
        add     esi, 2
        mov     word ptr [esi], 0xc
        add     esi, 2
        mov     word ptr [esi], 0x3ef
        push    offset str_7a5e48
        add     esi, 2
        push    esi
        call    FUN_007314f0
        and     eax, 0xffff
        lea     eax, [esi + eax*2]
        mov     word ptr [eax], 0
        add     eax, 2
        mov     word ptr [eax], 0
        add     eax, 2
        push    eax
        call    FUN_007314e0
        mov     esi, eax
        mov     word ptr [esi], 0x10c4
        mov     word ptr [esi + 2], 0x50a1
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 2
        add     esi, 2
        mov     word ptr [esi + 2], 0x14
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x122
        add     esi, 2
        mov     word ptr [esi], 0x40
        add     esi, 2
        mov     word ptr [esi], 0x3f2
        push    offset str_7a5e48
        add     esi, 2
        push    esi
        call    FUN_007314f0
        and     eax, 0xffff
        lea     eax, [esi + eax*2]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [DAT_00858bfc]
        push    0
        push    offset FUN_0072faa0
        push    ecx
        push    edi
        mov     word ptr [eax], 0
        push    edx
        mov     word ptr [eax + 2], 0
        call    dword ptr [g_76b434]
        push    edi
        mov     esi, eax
        call    dword ptr [g_76b238]
        push    eax
        call    dword ptr [g_76b140]
        pop     edi
        mov     eax, esi
        pop     esi
        ret     4
    }
}
