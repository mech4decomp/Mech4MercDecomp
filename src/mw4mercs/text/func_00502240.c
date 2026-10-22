/*
 * FUN_00502240 (296 B @ 0x502240) - __cdecl (1 arg: [esp+0xB8] = ptr). Reads
 * an object pointer, makes a virtual call (slot +4), then builds/parses
 * several stack temporaries via __thiscall helpers (0x40ED60, 0x411BF0,
 * 0x41DE80, 0x4D2000, 0x4D24F0, 0x4D2630, 0x4D2840, 0x412B30, 0x412BF0,
 * 0x4D2680, 0x412E70, 0x412B60, 0x4D21C0, 0x41DEC0), using string literals
 * 0x7723E8 / 0x776478 and global 0x7DB0B0. Writes two words to edi+0x10/0x12.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040ED60(void);
extern void __cdecl FUN_00411BF0(void);
extern void __cdecl FUN_0041DE80(void);
extern void __cdecl FUN_004D2000(void);
extern void __cdecl FUN_004D24F0(void);
extern void __cdecl FUN_004D2630(void);
extern int  dword_7DB0B0;
extern void __cdecl FUN_004D2840(void);
extern void __cdecl FUN_00412B30(void);
extern void __cdecl FUN_00412BF0(void);
extern void __cdecl FUN_004D2680(void);
extern void __cdecl FUN_00412E70(void);
extern void __cdecl FUN_00412B60(void);
extern void __cdecl FUN_004D21C0(void);
extern void __cdecl FUN_0041DEC0(void);

__declspec(naked) void FUN_00502240(void)
{
    __asm {
        sub     esp, 0xb0
        push    esi
        mov     esi, dword ptr [esp + 0xb8]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 4]
        mov     ecx, dword ptr [esi + 4]
        push    0x7723e8
        mov     edi, eax
        call    FUN_0040ED60
        push    0
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x776478
        mov     ecx, eax
        call    FUN_00411BF0
        test    al, al
        je      L_50235F
        mov     edx, dword ptr [esp + 8]
        push    0
        push    edx
        lea     ecx, [esp + 0x58]
        call    FUN_0041DE80
        mov     eax, dword ptr [esp + 0x74]
        push    0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_004D2000
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        je      L_5022DC
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        jbe     L_5022DC
        lea     ecx, [esp + 0xc]
        call    FUN_004D24F0
        test    al, al
        je      L_5022DC
        lea     ecx, [esp + 0xc]
        call    FUN_004D2630
        test    al, al
        jne     L_50233B
        mov     ecx, dword ptr [dword_7DB0B0]
        push    ecx
        lea     ecx, [esp + 0x10]
        call    FUN_004D2840
        jmp     L_50233B
L_5022DC:
        lea     ecx, [esp + 0x80]
        call    FUN_00412B30
        lea     edx, [esp + 0x50]
        push    edx
        lea     ecx, [esp + 0x84]
        call    FUN_00412BF0
        lea     eax, [esp + 0x80]
        push    eax
        lea     ecx, [esp + 0x54]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_004D2680
        lea     ecx, [esp + 0xc]
        call    FUN_004D2630
        test    al, al
        jne     L_50232F
        mov     ecx, dword ptr [dword_7DB0B0]
        lea     edx, [esp + 0x80]
        push    edx
        call    FUN_00412E70
L_50232F:
        lea     ecx, [esp + 0x80]
        call    FUN_00412B60
L_50233B:
        mov     ax, word ptr [esp + 0x4c]
        mov     word ptr [edi + 0x10], ax
        mov     cx, word ptr [esp + 0x4e]
        mov     word ptr [edi + 0x12], cx
        lea     ecx, [esp + 0xc]
        call    FUN_004D21C0
        lea     ecx, [esp + 0x50]
        call    FUN_0041DEC0
L_50235F:
        pop     edi
        pop     esi
        add     esp, 0xb0
        ret
    }
}
