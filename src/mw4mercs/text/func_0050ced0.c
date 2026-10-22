/*
 * FUN_0050CED0 (1779 B) — Loads interface control files for all
 * supported languages.
 *
 * __cdecl, 1 stack param (at [ESP+0x68c] after prologue).
 * Allocates a block via a virtual call, then for each of 13 languages
 * loads a control file (FUN_004d2000), parses it (FUN_0050bc30 /
 * FUN_0041ee70 / FUN_0050a5c0 / FUN_004d2680), and finally tears down
 * all the temporary buffers (FUN_0041ef60 / FUN_004d21c0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501eb0(void);
extern void __cdecl FUN_0040ed60(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_0050a480(void);
extern void __cdecl FUN_0050bc30(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0050a5c0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2840(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0050a4f0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0040de20(void);

extern unsigned short DAT_007db0ac; /* 0x007DB0AC */
extern unsigned short DAT_007db0ae; /* 0x007DB0AE */
extern int            DAT_007db0b0; /* 0x007DB0B0 */

__declspec(naked) void __cdecl FUN_0050ced0(void)
{
    __asm {
        sub     esp, 0x680
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x68c]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x20
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00501eb0
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     cx, word ptr [DAT_007db0ac]
        mov     dx, word ptr [DAT_007db0ae]
        add     eax, 0x1c
        mov     word ptr [eax], cx
        mov     ecx, dword ptr [edi + 0x4]
        push    0x7723e8
        mov     word ptr [eax + 0x2], dx
        call    FUN_0040ed60
        push    0x0
        lea     ecx, [esp + 0x2c8]
        mov     esi, eax
        call    FUN_0040dd50
        push    0x1
        lea     eax, [esp + 0x2c8]
        push    eax
        push    0x777e4c
        mov     ecx, esi
        call    FUN_00412390
        push    0x0
        push    0x777bcc
        lea     ecx, [esp + 0x53c]
        call    FUN_004d2000
        push    0x0
        push    0x777b9c
        lea     ecx, [esp + 0x4b4]
        call    FUN_004d2000
        push    0x0
        push    0x777b6c
        lea     ecx, [esp + 0x42c]
        call    FUN_004d2000
        push    0x0
        push    0x777b3c
        lea     ecx, [esp + 0x3a4]
        call    FUN_004d2000
        push    0x0
        push    0x777b0c
        lea     ecx, [esp + 0x360]
        call    FUN_004d2000
        push    0x0
        push    0x777adc
        lea     ecx, [esp + 0x580]
        call    FUN_004d2000
        push    0x0
        push    0x777aac
        lea     ecx, [esp + 0x470]
        call    FUN_004d2000
        push    0x0
        push    0x777a7c
        lea     ecx, [esp + 0x608]
        call    FUN_004d2000
        push    0x0
        push    0x777a4c
        lea     ecx, [esp + 0x3e8]
        call    FUN_004d2000
        push    0x0
        push    0x777a1c
        lea     ecx, [esp + 0x4f8]
        call    FUN_004d2000
        push    0x0
        push    0x7779ec
        lea     ecx, [esp + 0x64c]
        call    FUN_004d2000
        push    0x0
        push    0x7779bc
        lea     ecx, [esp + 0x5c4]
        call    FUN_004d2000
        push    0x0
        push    0x777990
        lea     ecx, [esp + 0x31c]
        call    FUN_004d2000
        lea     ecx, [esp + 0x8]
        call    FUN_0050a480
        mov     esi, dword ptr [edi + 0x8]
        push    esi
        push    0x777bcc
        lea     ecx, [esp + 0x10]
        call    FUN_0050bc30
        push    0x0
        lea     ecx, [esp + 0x200]
        call    FUN_0041ee70
        lea     ecx, [esp + 0x1fc]
        push    ecx
        lea     ecx, [esp + 0xc]
        call    FUN_0050a5c0
        push    0x0
        lea     edx, [esp + 0x200]
        push    edx
        lea     ecx, [esp + 0x53c]
        call    FUN_004d2680
        push    esi
        push    0x777b9c
        lea     ecx, [esp + 0x10]
        call    FUN_0050bc30
        push    0x0
        lea     ecx, [esp + 0x1b0]
        call    FUN_0041ee70
        lea     eax, [esp + 0x1ac]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_0050a5c0
        push    0x0
        lea     ecx, [esp + 0x1b0]
        push    ecx
        lea     ecx, [esp + 0x4b4]
        call    FUN_004d2680
        push    esi
        push    0x777b6c
        lea     ecx, [esp + 0x10]
        call    FUN_0050bc30
        push    0x0
        lea     ecx, [esp + 0x160]
        call    FUN_0041ee70
        lea     edx, [esp + 0x15c]
        push    edx
        lea     ecx, [esp + 0xc]
        call    FUN_0050a5c0
        push    0x0
        lea     eax, [esp + 0x160]
        push    eax
        lea     ecx, [esp + 0x42c]
        call    FUN_004d2680
        push    esi
        push    0x777b3c
        lea     ecx, [esp + 0x10]
        call    FUN_0050bc30
        push    0x0
        lea     ecx, [esp + 0x110]
        call    FUN_0041ee70
        lea     ecx, [esp + 0x10c]
        push    ecx
        lea     ecx, [esp + 0xc]
        call    FUN_0050a5c0
        push    0x0
        lea     edx, [esp + 0x110]
        push    edx
        lea     ecx, [esp + 0x3a4]
        call    FUN_004d2680
        push    esi
        push    0x777b0c
        lea     ecx, [esp + 0x10]
        call    FUN_0050bc30
        push    0x0
        lea     ecx, [esp + 0x98]
        call    FUN_0041ee70
        lea     eax, [esp + 0x94]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_0050a5c0
        push    0x0
        lea     ecx, [esp + 0x98]
        push    ecx
        lea     ecx, [esp + 0x360]
        call    FUN_004d2680
        push    esi
        push    0x777adc
        lea     ecx, [esp + 0x10]
        call    FUN_0050bc30
        push    0x0
        lea     ecx, [esp + 0x228]
        call    FUN_0041ee70
        lea     edx, [esp + 0x224]
        push    edx
        lea     ecx, [esp + 0xc]
        call    FUN_0050a5c0
        push    0x0
        lea     eax, [esp + 0x228]
        push    eax
        lea     ecx, [esp + 0x580]
        call    FUN_004d2680
        push    esi
        push    0x777aac
        lea     ecx, [esp + 0x10]
        call    FUN_0050bc30
        push    0x0
        lea     ecx, [esp + 0x188]
        call    FUN_0041ee70
        lea     ecx, [esp + 0x184]
        push    ecx
        lea     ecx, [esp + 0xc]
        call    FUN_0050a5c0
        push    0x0
        lea     edx, [esp + 0x188]
        push    edx
        lea     ecx, [esp + 0x470]
        call    FUN_004d2680
        push    esi
        push    0x777a7c
        lea     ecx, [esp + 0x10]
        call    FUN_0050bc30
        push    0x0
        lea     ecx, [esp + 0x278]
        call    FUN_0041ee70
        lea     eax, [esp + 0x274]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_0050a5c0
        push    0x0
        lea     ecx, [esp + 0x278]
        push    ecx
        lea     ecx, [esp + 0x608]
        call    FUN_004d2680
        push    esi
        push    0x777a4c
        lea     ecx, [esp + 0x10]
        call    FUN_0050bc30
        push    0x0
        lea     ecx, [esp + 0x138]
        call    FUN_0041ee70
        lea     edx, [esp + 0x134]
        push    edx
        lea     ecx, [esp + 0xc]
        call    FUN_0050a5c0
        push    0x0
        lea     eax, [esp + 0x138]
        push    eax
        lea     ecx, [esp + 0x3e8]
        call    FUN_004d2680
        push    esi
        push    0x777a1c
        lea     ecx, [esp + 0x10]
        call    FUN_0050bc30
        push    0x0
        lea     ecx, [esp + 0x1d8]
        call    FUN_0041ee70
        lea     ecx, [esp + 0x1d4]
        push    ecx
        lea     ecx, [esp + 0xc]
        call    FUN_0050a5c0
        push    0x0
        lea     edx, [esp + 0x1d8]
        push    edx
        lea     ecx, [esp + 0x4f8]
        call    FUN_004d2680
        push    esi
        push    0x7779ec
        lea     ecx, [esp + 0x10]
        call    FUN_0050bc30
        push    0x0
        lea     ecx, [esp + 0xc0]
        call    FUN_0041ee70
        lea     eax, [esp + 0xbc]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_0050a5c0
        push    0x0
        lea     ecx, [esp + 0xc0]
        push    ecx
        lea     ecx, [esp + 0x64c]
        call    FUN_004d2680
        push    esi
        push    0x7779bc
        lea     ecx, [esp + 0x10]
        call    FUN_0050bc30
        push    0x0
        lea     ecx, [esp + 0x2a0]
        call    FUN_0041ee70
        lea     edx, [esp + 0x29c]
        push    edx
        lea     ecx, [esp + 0xc]
        call    FUN_0050a5c0
        push    0x0
        lea     eax, [esp + 0x2a0]
        push    eax
        lea     ecx, [esp + 0x5c4]
        call    FUN_004d2680
        push    esi
        push    0x777990
        lea     ecx, [esp + 0x10]
        call    FUN_0050bc30
        push    0x0
        lea     ecx, [esp + 0xe8]
        call    FUN_0041ee70
        lea     ecx, [esp + 0xe4]
        push    ecx
        lea     ecx, [esp + 0xc]
        call    FUN_0050a5c0
        push    0x0
        lea     edx, [esp + 0xe8]
        push    edx
        lea     ecx, [esp + 0x31c]
        call    FUN_004d2680
        mov     eax, dword ptr [esp + 0x2c4]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x58]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x8c]
        test    eax, eax
        jz      l_50d40e
        mov     eax, dword ptr [esp + 0x6c]
        test    eax, eax
        jbe     l_50d40e
        lea     ecx, [esp + 0x50]
        call    FUN_004d24f0
        test    al, al
        jz      l_50d40e
        lea     ecx, [esp + 0x50]
        call    FUN_004d2630
        test    al, al
        jnz     l_50d464
        mov     ecx, dword ptr [DAT_007db0b0]
        push    ecx
        lea     ecx, [esp + 0x54]
        call    FUN_004d2840
        jmp     l_50d464
    l_50d40e:
        mov     edx, dword ptr [esp + 0x2c4]
        push    esi
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_0050bc30
        push    0x0
        lea     ecx, [esp + 0x250]
        call    FUN_0041ee70
        lea     eax, [esp + 0x24c]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_0050a5c0
        lea     ecx, [esp + 0x2d0]
        push    ecx
        lea     edx, [esp + 0x250]
        push    edx
        lea     ecx, [esp + 0x58]
        call    FUN_004d2680
        lea     ecx, [esp + 0x24c]
        call    FUN_0041ef60
    l_50d464:
        lea     ecx, [esp + 0x50]
        call    FUN_004d21c0
        lea     ecx, [esp + 0xe4]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x29c]
        call    FUN_0041ef60
        lea     ecx, [esp + 0xbc]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x1d4]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x134]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x274]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x184]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x224]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x94]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x10c]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x15c]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x1ac]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x1fc]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x8]
        call    FUN_0050a4f0
        lea     ecx, [esp + 0x314]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x5bc]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x644]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x4f0]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x3e0]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x600]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x468]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x578]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x358]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x39c]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x424]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x4ac]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x534]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x2c4]
        call    FUN_0040de20
        pop     edi
        pop     esi
        add     esp, 0x680
        ret
    }
}
