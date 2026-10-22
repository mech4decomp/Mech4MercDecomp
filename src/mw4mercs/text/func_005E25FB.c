/*
 * FUN_005E25FB (805 B) - __thiscall (RET 8, 2 params). Updates a weapon/
 * object state: reads a descriptor, builds a formatted string, and calls
 * into a render/update path (0x5922e0) with many stack args. Contains
 * inline strcpy loops and FPU float math.
 *
 * CFLAGS: /O1
 */

extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern unsigned short g_007dc696;
extern unsigned char g_007dc694;
extern int g_007db098;
extern int g_007dab44;
extern int g_007dab40;

extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_00767400(void);
extern void __cdecl FUN_00507f90(void);
extern void __cdecl FUN_005f07d0(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_005922e0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_0041e710(void);

__declspec(naked) void FUN_005E25FB(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0x1d0
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
        cmp     cx, word ptr [g_007db0ac]
        lea     eax, [ebp + 0x90]
        mov     dword ptr [esp + 0x1c], eax
        jne     L_2642
        mov     dx, word ptr [eax + 2]
        cmp     dx, word ptr [g_007db0ae]
        je      L_2913
L_2642:
        push    eax
        call    FUN_004da920
        add     esp, 4
        push    0x8bd5e8
        lea     ecx, [esp + 0x84]
        mov     dword ptr [esp + 0x40], eax
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp + 0x60]
        call    FUN_00767400
        mov     ecx, dword ptr [ebx + 0x198]
        lea     eax, [esp + 0xb8]
        push    eax
        call    FUN_00507f90
        mov     edx, dword ptr [ebp + 0x7c]
        mov     esi, eax
        mov     eax, dword ptr [ebp + 0x80]
        mov     ecx, 0xc
        lea     edi, [esp + 0xe8]
        rep     movsd
        mov     ecx, dword ptr [ebp + 0x78]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x28], edx
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_005f07d0
        test    eax, eax
        je      L_26c9
        mov     ecx, ebx
        call    FUN_005f07d0
        fld     dword ptr [esp + 0x2c]
        fadd    dword ptr [eax + 0x440]
        fstp    dword ptr [esp + 0x2c]
L_26c9:
        lea     ecx, [esp + 0xe8]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        lea     ecx, [esp + 0x88]
        call    FUN_0041c680
        mov     ecx, dword ptr [ebp + 0x88]
        mov     eax, dword ptr [ebp + 0x84]
        mov     edx, dword ptr [ebp + 0x8c]
        mov     dword ptr [esp + 0x60], ecx
        mov     cx, word ptr [g_007dc696]
        mov     dword ptr [esp + 0x5c], eax
        mov     al, byte ptr [g_007dc694]
        mov     word ptr [esp + 0x12], cx
        lea     ecx, [ebx + 0x214]
        mov     dword ptr [esp + 0x64], edx
        mov     byte ptr [esp + 0x10], al
        call    FUN_0041fd80
        test    eax, eax
        je      L_2754
        mov     dl, byte ptr [eax + 0x14]
        mov     ax, word ptr [eax + 0x16]
        mov     ecx, dword ptr [ebx + 0x228]
        mov     byte ptr [esp + 0x10], dl
        mov     edx, dword ptr [ebx + 0x22c]
        mov     word ptr [esp + 0x12], ax
        mov     eax, dword ptr [ebx + 0x230]
        mov     dword ptr [esp + 0x50], ecx
        mov     dword ptr [esp + 0x54], edx
        mov     dword ptr [esp + 0x58], eax
        jmp     L_277d
L_2754:
        mov     esi, dword ptr [ebx + 0x1d4]
        fld     dword ptr [esi + 0x18]
        push    ecx
        lea     ecx, [esi + 0xc]
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [esp + 0x7c]
        call    FUN_0040ca40
        lea     edx, [esp + 0x74]
        push    edx
        push    esi
        lea     ecx, [esp + 0x58]
        call    FUN_0040c9e0
L_277d:
        mov     eax, dword ptr [ebx + 0x224]
        test    eax, eax
        mov     dword ptr [esp + 0x14], 2
        jle     L_279e
        dec     eax
        mov     dword ptr [ebx + 0x224], eax
        mov     dword ptr [esp + 0x14], 0x800002
L_279e:
        mov     ecx, ebx
        call    FUN_005f07c0
        mov     ecx, dword ptr [ebp + 0x68]
        mov     edx, dword ptr [ebp + 0x64]
        mov     edi, dword ptr [ebp + 0x30]
        mov     esi, eax
        mov     eax, dword ptr [ebp + 0x98]
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [ebp + 0x5c]
        mov     dword ptr [esp + 0x44], edx
        mov     edx, dword ptr [ebp + 0x58]
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [ebp + 0x60]
        mov     dword ptr [esp + 0x4c], ecx
        mov     ecx, dword ptr [ebp + 0x54]
        mov     dword ptr [esp + 0x38], edx
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [ebp + 0x50]
        lea     edx, [esp + 0xb8]
        mov     dword ptr [esp + 0x40], ecx
        mov     ecx, dword ptr [ebx + 0x198]
        push    edx
        add     esi, 0x14
        mov     dword ptr [esp + 0x4c], eax
        call    FUN_00507f90
        mov     ecx, dword ptr [esp + 0x44]
        mov     edx, dword ptr [esp + 0x30]
        push    edi
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x38]
        push    eax
        mov     eax, dword ptr [esp + 0x54]
        push    ecx
        push    edx
        push    eax
        push    ecx
        mov     ecx, esp
        push    esi
        call    FUN_004ea0f0
        mov     ecx, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esp + 0x60]
        mov     eax, dword ptr [esp + 0x58]
        push    ecx
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x40]
        lea     ecx, [esp + 0x80]
        push    ecx
        mov     ecx, dword ptr [esp + 0x3c]
        lea     edx, [esp + 0xa8]
        push    edx
        mov     edx, dword ptr [esp + 0x68]
        push    0
        push    -1
        push    8
        push    0
        push    ebx
        push    eax
        push    ecx
        push    edx
        push    0
        push    2
        push    0xc8
        lea     ecx, [esp + 0x170]
        call    FUN_005922e0
        mov     cx, word ptr [esp + 0x12]
        mov     al, byte ptr [esp + 0x10]
        lea     edx, [esp + 0x50]
        mov     word ptr [esp + 0x1ce], cx
        push    edx
        lea     ecx, [esp + 0x1d4]
        mov     byte ptr [esp + 0x1d0], al
        call    FUN_0040c5d0
        mov     ecx, dword ptr [esp + 0x118]
        mov     eax, dword ptr [esp + 0x20]
        push    0
        push    ecx
        lea     edx, [esp + 0x120]
        mov     dword ptr [esp + 0x1e4], eax
        push    edx
        lea     ecx, [esp + 0xa4]
        call    FUN_0041e690
        mov     ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x18], cl
        mov     dx, word ptr [eax + 2]
        push    0
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0xa0]
        push    ecx
        mov     word ptr [esp + 0x26], dx
        call    FUN_004d9910
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [edx]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x28]
        lea     ecx, [esp + 0x98]
        call    FUN_0041e710
L_2913:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1d0
        ret     8
    }
}
