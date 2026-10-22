/*
 * FUN_005E219B (755 B) — __thiscall (this in ECX = ebx), RET 8 (2 stack
 * args). Gameplay update: reads a vtable method, checks a 16-bit tag
 * against [0x7db0ac/ae], builds a record via FUN_00507F90/41C680, and
 * dispatches a large render/update call through FUN_005922E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004DA920(void);
extern void __cdecl FUN_00767400(void);
extern void __cdecl FUN_00507F90(void);
extern void __cdecl FUN_0041C680(void);
extern void __cdecl FUN_0041FD80(void);
extern void __cdecl FUN_0040CA40(void);
extern void __cdecl FUN_0040CBB0(void);
extern void __cdecl FUN_005F07C0(void);
extern void __cdecl FUN_004EA0F0(void);
extern void __cdecl FUN_005922E0(void);
extern void __cdecl FUN_0041E690(void);
extern void __cdecl FUN_004CEC10(void);
extern void __cdecl FUN_004D9910(void);
extern void __cdecl FUN_0041E710(void);

extern unsigned short g_7db0ac;
extern unsigned short g_7db0ae;
extern unsigned short g_7dc696;
extern unsigned char g_7dc694;
extern unsigned long g_7db098;
extern unsigned long g_7dab44;
extern unsigned long g_7dab40;
extern char g_8bd5e8[];

__declspec(naked) void func_005E219B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0x1c4
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x78]
        push    esi
        lea     ecx, [ebx + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        mov     ebp, eax
        mov     cx, word ptr [ebp + 0x90]
        cmp     cx, word ptr [g_7db0ac]
        lea     eax, [ebp + 0x90]
        mov     dword ptr [esp + 0x28], eax
        jne     L_21e2
        mov     dx, word ptr [eax + 2]
        cmp     dx, word ptr [g_7db0ae]
        je      L_2481
L_21e2:
        push    eax
        call    FUN_004DA920
        add     esp, 4
        push    offset g_8bd5e8
        lea     ecx, [esp + 0x78]
        mov     dword ptr [esp + 0x3c], eax
        call    FUN_00767400
        push    offset g_8bd5e8
        lea     ecx, [esp + 0x54]
        call    FUN_00767400
        mov     ecx, dword ptr [ebx + 0x198]
        lea     eax, [esp + 0x1a4]
        push    eax
        call    FUN_00507F90
        mov     esi, eax
        mov     ecx, 0xc
        lea     edi, [esp + 0x174]
        rep     movsd
        lea     ecx, [esp + 0x174]
        push    ecx
        lea     edx, [ebp + 0x78]
        push    edx
        lea     ecx, [esp + 0x7c]
        call    FUN_0041C680
        mov     ecx, dword ptr [ebp + 0x88]
        mov     eax, dword ptr [ebp + 0x84]
        mov     edx, dword ptr [ebp + 0x8c]
        mov     dword ptr [esp + 0x54], ecx
        mov     cx, word ptr [g_7dc696]
        mov     dword ptr [esp + 0x50], eax
        mov     al, byte ptr [g_7dc694]
        mov     word ptr [esp + 0x12], cx
        lea     ecx, [ebx + 0x214]
        mov     dword ptr [esp + 0x58], edx
        mov     byte ptr [esp + 0x10], al
        call    FUN_0041FD80
        test    eax, eax
        je      L_22b5
        mov     dl, byte ptr [eax + 0x14]
        mov     ax, word ptr [eax + 0x16]
        mov     ecx, dword ptr [ebx + 0x228]
        mov     byte ptr [esp + 0x10], dl
        mov     edx, dword ptr [ebx + 0x22c]
        mov     word ptr [esp + 0x12], ax
        mov     eax, dword ptr [ebx + 0x230]
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x24], eax
        jmp     L_22de
L_22b5:
        mov     esi, dword ptr [ebx + 0x1d4]
        fld     dword ptr [esi + 0x18]
        push    ecx
        lea     ecx, [esi + 0xc]
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [esp + 0x70]
        call    FUN_0040CA40
        lea     edx, [esp + 0x68]
        push    edx
        push    esi
        lea     ecx, [esp + 0x24]
        call    FUN_0040CBB0
L_22de:
        mov     eax, dword ptr [ebx + 0x224]
        test    eax, eax
        mov     dword ptr [esp + 0x14], 2
        jle     L_22ff
        dec     eax
        mov     dword ptr [ebx + 0x224], eax
        mov     dword ptr [esp + 0x14], 0x800002
L_22ff:
        mov     ecx, ebx
        call    FUN_005F07C0
        mov     ecx, dword ptr [ebp + 0x68]
        mov     edx, dword ptr [ebp + 0x64]
        mov     edi, dword ptr [ebp + 0x30]
        mov     esi, eax
        mov     eax, dword ptr [ebp + 0x98]
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [ebp + 0x5c]
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [ebp + 0x58]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [ebp + 0x60]
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [ebp + 0x54]
        mov     dword ptr [esp + 0x4c], edx
        mov     dword ptr [esp + 0x44], eax
        mov     eax, dword ptr [ebp + 0x50]
        lea     edx, [esp + 0x1a4]
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, dword ptr [ebx + 0x198]
        push    edx
        add     esi, 0x14
        mov     dword ptr [esp + 0x44], eax
        call    FUN_00507F90
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x44]
        push    edi
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x4c]
        push    eax
        mov     eax, dword ptr [esp + 0x3c]
        push    ecx
        push    edx
        push    eax
        push    ecx
        mov     ecx, esp
        push    esi
        call    FUN_004EA0F0
        mov     ecx, dword ptr [esp + 0x64]
        mov     edx, dword ptr [esp + 0x58]
        mov     eax, dword ptr [esp + 0x54]
        push    ecx
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x4c]
        lea     ecx, [esp + 0x74]
        push    ecx
        mov     ecx, dword ptr [esp + 0x3c]
        lea     edx, [esp + 0x9c]
        push    edx
        mov     edx, dword ptr [esp + 0x64]
        push    0
        push    -1
        push    9
        push    0
        push    ebx
        push    eax
        push    ecx
        push    edx
        push    0
        push    2
        push    0xc8
        lea     ecx, [esp + 0x104]
        call    FUN_005922E0
        mov     al, byte ptr [esp + 0x10]
        mov     cx, word ptr [esp + 0x12]
        mov     edx, dword ptr [esp + 0x1c]
        mov     byte ptr [esp + 0x160], al
        mov     eax, dword ptr [esp + 0x20]
        mov     word ptr [esp + 0x162], cx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x164], edx
        mov     edx, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x168], eax
        mov     eax, dword ptr [esp + 0xac]
        push    0
        mov     dword ptr [esp + 0x170], ecx
        mov     dword ptr [esp + 0x174], edx
        push    eax
        lea     ecx, [esp + 0xb4]
        push    ecx
        lea     ecx, [esp + 0x98]
        call    FUN_0041E690
        mov     ecx, dword ptr [g_7db098]
        call    FUN_004CEC10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0x18], dl
        mov     ax, word ptr [eax + 2]
        push    0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x94]
        push    edx
        mov     word ptr [esp + 0x26], ax
        call    FUN_004D9910
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x28]
        lea     ecx, [esp + 0x8c]
        call    FUN_0041E710
L_2481:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c4
        ret     8
    }
}
