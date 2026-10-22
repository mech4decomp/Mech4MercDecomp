/*
 * FUN_0072FED0 (769 B) — Builds a dialog template in a LocalAlloc'd buffer
 * and invokes DialogBoxIndirectParamA, then frees the template.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007315e0(void);
extern void __cdecl FUN_00731580(void);
extern void __cdecl FUN_007314e0(void);
extern void __cdecl FUN_00731610(void);
extern void __cdecl FUN_007314f0(void);
extern void __cdecl FUN_007304e0(void);

extern void *g_76b0bc;   /* LocalAlloc */
extern void *g_76b434;   /* DialogBoxIndirectParamA */
extern void *g_76b238;   /* LocalHandle */
extern void *g_76b140;   /* LocalFree */

extern char str_7a5e5c[];
extern char str_7a5e88[];
extern char str_7a5e80[];
extern char str_7a5e74[];
extern char str_7a5e6c[];
extern char str_78f178[];
extern unsigned short DAT_008a9860;
extern int DAT_0087dc00;
extern int DAT_00858bf8;
extern int DAT_00858bfc;

__declspec(naked) void __cdecl FUN_0072fed0(void)
{
    __asm {
        push    esi
        push    edi
        push    0x800
        push    0x40
        call    dword ptr [g_76b0bc]
        mov     esi, eax
        mov     word ptr [esi], 0xac4
        mov     word ptr [esi + 2], 0x8000
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
        mov     word ptr [esi + 2], 0x18d
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x36
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
        mov     word ptr [esi + 2], 0x59
        add     esi, 2
        mov     word ptr [esi + 2], 0x25
        add     esi, 2
        mov     word ptr [esi + 2], 0x32
        add     esi, 2
        mov     word ptr [esi + 2], 0xe
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x3e9
        add     esi, 2
        mov     word ptr [esi], 0xffff
        add     esi, 2
        push    offset str_7a5e88
        mov     word ptr [esi], 0x80
        push    0x8f
        add     esi, 2
        push    esi
        call    FUN_00731610
        mov     word ptr [DAT_008a9860], 0x3e8
        and     eax, 0xffff
        lea     eax, [esi + eax*2]
        mov     word ptr [eax], 0
        add     eax, 2
        push    eax
        call    FUN_007314e0
        mov     esi, eax
        mov     word ptr [esi], 0
        add     esi, 2
        mov     word ptr [esi], 0x5001
        add     esi, 2
        mov     word ptr [esi], 0
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     eax, dword ptr [DAT_0087dc00]
        mov     word ptr [esi + 2], 0xad
        add     esi, 2
        mov     word ptr [esi + 2], 0x25
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x32
        add     esi, 2
        mov     word ptr [esi], 0xe
        add     esi, 2
        mov     word ptr [esi], 0x3e8
        add     esi, 2
        mov     word ptr [esi], 0xffff
        add     esi, 2
        mov     word ptr [esi], 0x80
        add     esi, 2
        test    ah, 8
        jz      loc_76
        push    offset str_7a5e80
        push    0x90
        jmp     loc_80
loc_76:
        push    offset str_7a5e74
        push    0x91
loc_80:
        push    esi
        call    FUN_00731610
        and     eax, 0xffff
        lea     eax, [esi + eax*2]
        mov     word ptr [eax], 0
        add     eax, 2
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
        mov     word ptr [esi + 2], 0x101
        add     esi, 2
        mov     word ptr [esi + 2], 0x25
        add     esi, 2
        mov     word ptr [esi + 2], 0x32
        add     esi, 2
        mov     word ptr [esi + 2], 0xe
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x3ea
        add     esi, 2
        mov     word ptr [esi], 0xffff
        add     esi, 2
        push    offset str_7a5e6c
        mov     word ptr [esi], 0x80
        push    0x92
        add     esi, 2
        push    esi
        call    FUN_00731610
        and     eax, 0xffff
        lea     eax, [esi + eax*2]
        mov     word ptr [eax], 0
        add     eax, 2
        push    eax
        call    FUN_007314e0
        mov     esi, eax
        mov     word ptr [esi], 0x1281
        mov     word ptr [esi + 2], 0x5002
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 0
        add     esi, 2
        mov     word ptr [esi + 2], 7
        add     esi, 2
        mov     word ptr [esi + 2], 7
        add     esi, 2
        mov     word ptr [esi + 2], 0x17f
        add     esi, 2
        mov     word ptr [esi + 2], 0x18
        add     esi, 2
        add     esi, 2
        mov     word ptr [esi], 0x3eb
        add     esi, 2
        mov     word ptr [esi], 0xffff
        add     esi, 2
        mov     word ptr [esi], 0x82
        push    offset str_78f178
        add     esi, 2
        push    esi
        call    FUN_007314f0
        mov     ecx, dword ptr [DAT_00858bf8]
        mov     edx, dword ptr [DAT_00858bfc]
        push    0
        push    offset FUN_007304e0
        push    ecx
        push    edi
        and     eax, 0xffff
        push    edx
        mov     word ptr [esi + eax*2], 0
        mov     dword ptr [DAT_0087dc00], 0
        call    dword ptr [g_76b434]
        push    edi
        call    dword ptr [g_76b238]
        push    eax
        call    dword ptr [g_76b140]
        pop     edi
        pop     esi
        ret
    }
}
