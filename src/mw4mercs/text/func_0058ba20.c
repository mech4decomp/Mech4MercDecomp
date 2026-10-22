/* FUN_0058ba20 (0x0058BA20, 513 bytes) */
/* Thiscall method - complex initialization/processing */

extern short DAT_007DB0AC;
extern short DAT_007DB0AE;
extern int DAT_007DB098;
extern int DAT_007DAB40;
extern int DAT_007DAB44;
extern int DAT_007DC728;

extern void __cdecl FUN_00707E70(void);
extern void __cdecl FUN_004D1F80(void);
extern void __cdecl FUN_004DA920(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041FDE0(void);
extern void __cdecl FUN_00507F90(void);
extern void __cdecl FUN_004E7640(void);
extern void __cdecl FUN_0041E690(void);
extern void __cdecl FUN_004CEC10(void);
extern void __cdecl FUN_004D9910(void);
extern void __cdecl FUN_0058BC30(void);
extern void __cdecl FUN_004E3020(void);
extern void __cdecl FUN_0041E710(void);
extern void __cdecl FUN_004D21C0(void);

__declspec(naked) void func_0058ba20(void)
{
    __asm {
        sub     esp, 0x170
        push    esi
        push    edi
        push    0
        mov     edi, ecx
        call FUN_00707E70
        fstp    dword ptr [edi + 0x9c0]
        mov     esi, [esp + 0x17c]
        mov     ax, word ptr [esi]
        cmp ax, word ptr [DAT_007DB0AC]
        jne     L_not_match
        mov     cx, word ptr [esi + 2]
        cmp cx, word ptr [DAT_007DB0AE]
        je      L_0x58bc16
L_not_match:
        push    1
        push    esi
        lea     ecx, [esp + 0x7c]
        call FUN_004D1F80
        mov     eax, [esp + 0xb0]
        test    eax, eax
        je      L_0x58bc0d
        mov     eax, [esp + 0x90]
        test    eax, eax
        jbe     L_0x58bc0d
        push    ebx
        push    esi
        call FUN_004DA920
        add     esp, 4
        push    0x7b9460
        lea     ecx, [esp + 0x2c]
        mov     ebx, eax
        call FUN_00419460
        mov     edx, [esp + 0x188]
        push    2
        push    0
        push    1
        push    edx
        lea     ecx, [esp + 0x38]
        call FUN_0041FDE0
        mov     ecx, [esp + 0x184]
        lea     eax, [esp + 0xbc]
        push    eax
        call FUN_00507F90
        fld     dword ptr [eax + 0xc]
        mov     ecx, [eax + 0x1c]
        mov     edx, [eax + 0x2c]
        fstp    dword ptr [esp + 0x34]
        push    0x8bd5e8
        push    0x8bd5e8
        push    0
        push    -1
        push    2
        push    0
        mov     eax, ecx
        mov     [esp + 0x2c], ecx
        mov     ecx, edx
        mov     [esp + 0x30], edx
        lea     edx, [esp + 0x40]
        push    edx
        push    esi
        push    2
        push    ebx
        push    0
        push    2
        mov     [esp + 0x84], ecx
        push    0x90
        lea     ecx, [esp + 0x120]
        mov     [esp + 0x78], eax
        call FUN_004E7640
        mov     eax, [esp + 0xec]
        push    0
        push    eax
        lea     ecx, [esp + 0xf4]
        push    ecx
        lea     ecx, [esp + 0x64]
        call FUN_0041E690
        mov     ecx, dword ptr [DAT_007DB098]
        call FUN_004CEC10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0xc], dl
        mov     ax, word ptr [eax + 2]
        push    0
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x60]
        push    edx
        mov     word ptr [esp + 0x1a], ax
        call FUN_004D9910
        mov     ebx, dword ptr [DAT_007DAB40]
        mov     esi, eax
        mov     eax, dword ptr [DAT_007DAB44]
        mov     ecx, [eax]
        xor     ecx, ebx
        mov     ecx, [ecx + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        mov     eax, [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        mov     eax, [edi + 0xd8]
        add     eax, 0x80
        fld     dword ptr [eax + 8]
        push    -1
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [eax + 0x18]
        push    1
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [eax + 0x28]
        push    2
        lea     ecx, [esp + 0x28]
        push    ecx
        fstp    dword ptr [esp + 0x34]
        lea     ecx, [esp + 0x38]
        call FUN_0041FDE0
        xor     edx, edx
        mov     dl, byte ptr [edi + 0x4bc]
        mov     ecx, edi
        push    edx
        call FUN_0058BC30
        test    eax, eax
        pop     ebx
        je      L_skip_play
        mov     edi, [edi + 0x988]
        test    edi, edi
        je      L_skip_play
        mov     ecx, [edi + 4]
        cmp     dword ptr [ecx], 0x4ad
        jne     L_skip_play
        mov     ecx, dword ptr [DAT_007DC728]
        push    eax
        push    0x40000000
        lea     edx, [esp + 0x2c]
        push    edx
        call FUN_004E3020
L_skip_play:
        lea     ecx, [esp + 0x54]
        call FUN_0041E710
L_0x58bc0d:
        lea     ecx, [esp + 0x74]
        call FUN_004D21C0
L_0x58bc16:
        pop     edi
        pop     esi
        add     esp, 0x170
        ret     0xc
    }
}
