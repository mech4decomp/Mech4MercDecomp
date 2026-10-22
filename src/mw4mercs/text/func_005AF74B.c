/*
 * FUN_005AF74B (794 B, 0x5AF74B-0x5AFA64) — __thiscall gameplay update /
 * command-dispatch routine (ret 8). Reads a vtable method via [ebx+0x78],
 * compares a 16-bit id at [ebp+0x90] against globals 0x7db0ac/0x7db0ae,
 * builds string objects (FUN_00767400) from 0x8bd5e8, copies a 0xc-dword
 * block (rep movsd), does FPU vector math (fld/fsub/fstp) with 0x7b9460,
 * and calls a large set of helpers (0x507f90/0x41fd80/0x4e8dc0/0x419480/
 * 0x419460/0x41fde0/0x41c680/0x5f07c0/0x4ea0f0/0x5922e0/0x40c5d0/0x41e690/
 * 0x4cec10/0x4d9910/0x41e710) plus a vtable dispatch at [edx+0x28].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_7db0ac;   /* 0x7db0ac - word data */
extern unsigned short g_7db0ae;   /* 0x7db0ae - word data */
extern unsigned char  g_7dc694;   /* 0x7dc694 - byte data */
extern unsigned short g_7dc696;   /* 0x7dc696 - word data */
extern unsigned int   g_7db098;   /* 0x7db098 - dword data */
extern unsigned int   g_7dab44;   /* 0x7dab44 - dword data */
extern unsigned int   g_7dab40;   /* 0x7dab40 - dword data */
extern char g_8bd5e8[];           /* 0x8bd5e8 - string */
extern char g_7b9460[];           /* 0x7b9460 - string */

extern void __cdecl FUN_004DA920(void);
extern void __cdecl FUN_00767400(void);
extern void __cdecl FUN_00507F90(void);
extern void __cdecl FUN_0041FD80(void);
extern void __cdecl FUN_004E8DC0(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041FDE0(void);
extern void __cdecl FUN_0041C680(void);
extern void __cdecl FUN_005F07C0(void);
extern void __cdecl FUN_004EA0F0(void);
extern void __cdecl FUN_005922E0(void);
extern void __cdecl FUN_0040C5D0(void);
extern void __cdecl FUN_0041E690(void);
extern void __cdecl FUN_004CEC10(void);
extern void __cdecl FUN_004D9910(void);
extern void __cdecl FUN_0041E710(void);

__declspec(naked) void FUN_005AF74B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0x1fc
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
        mov     dword ptr [esp + 0x2c], eax
        jne     L_5AF792
        mov     dx, word ptr [eax + 2]
        cmp     dx, word ptr [g_7db0ae]
        je      L_5AFA58

L_5AF792:
        push    eax
        call    FUN_004DA920
        add     esp, 4
        push    offset g_8bd5e8
        lea     ecx, [esp + 0xb0]
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00767400
        push    offset g_8bd5e8
        lea     ecx, [esp + 0x68]
        call    FUN_00767400
        mov     ecx, dword ptr [ebx + 0x198]
        lea     eax, [esp + 0x114]
        push    eax
        call    FUN_00507F90
        mov     edx, dword ptr [ebp + 0x88]
        mov     esi, eax
        mov     eax, dword ptr [ebp + 0x8c]
        mov     ecx, 0xc
        lea     edi, [esp + 0xc4]
        rep movsd
        mov     ecx, dword ptr [ebp + 0x84]
        mov     dword ptr [esp + 0x64], ecx
        mov     cl, byte ptr [g_7dc694]
        mov     dword ptr [esp + 0x68], edx
        mov     dx, word ptr [g_7dc696]
        mov     byte ptr [esp + 0x10], cl
        lea     ecx, [ebx + 0x214]
        mov     dword ptr [esp + 0x6c], eax
        mov     word ptr [esp + 0x12], dx
        call    FUN_0041FD80
        test    eax, eax
        je      L_5AF834
        mov     cl, byte ptr [eax + 0x14]
        mov     dx, word ptr [eax + 0x16]
        mov     byte ptr [esp + 0x10], cl
        mov     word ptr [esp + 0x12], dx

L_5AF834:
        mov     ecx, dword ptr [ebx + 0x1d4]
        mov     edx, dword ptr [ecx + 0x18]
        lea     eax, [esp + 0x40]
        push    eax
        push    edx
        call    FUN_004E8DC0
        lea     eax, [esp + 0xc4]
        push    eax
        lea     ecx, [esp + 0x50]
        call    FUN_00419480
        fld     dword ptr [esp + 0x40]
        fsub    dword ptr [esp + 0x4c]
        push    offset g_7b9460
        lea     ecx, [esp + 0x80]
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [esp + 0x48]
        fsub    dword ptr [esp + 0x54]
        fstp    dword ptr [esp + 0x60]
        fld     dword ptr [esp + 0x4c]
        fsub    dword ptr [esp + 0x58]
        fstp    dword ptr [esp + 0x64]
        call    FUN_00419460
        mov     ecx, dword ptr [esp + 0xd0]
        mov     edx, dword ptr [esp + 0xe0]
        mov     eax, dword ptr [esp + 0xf0]
        push    0
        push    1
        mov     dword ptr [esp + 0x90], ecx
        push    2
        lea     ecx, [esp + 0x64]
        push    ecx
        lea     ecx, [esp + 0x8c]
        mov     dword ptr [esp + 0xa8], edx
        mov     dword ptr [esp + 0xb8], eax
        call    FUN_0041FDE0
        lea     edx, [esp + 0x7c]
        push    edx
        lea     eax, [ebp + 0x78]
        push    eax
        lea     ecx, [esp + 0xb4]
        call    FUN_0041C680
        mov     ecx, ebx
        call    FUN_005F07C0
        mov     ecx, dword ptr [ebp + 0x98]
        mov     edx, dword ptr [ebp + 0x68]
        mov     edi, dword ptr [ebp + 0x30]
        mov     esi, eax
        mov     eax, dword ptr [ebp + 0x64]
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, dword ptr [ebp + 0x60]
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [ebp + 0x58]
        mov     dword ptr [esp + 0x34], edx
        mov     edx, dword ptr [ebp + 0x5c]
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, dword ptr [ebp + 0x50]
        mov     dword ptr [esp + 0x38], eax
        mov     dword ptr [esp + 0x28], edx
        mov     edx, dword ptr [ebp + 0x54]
        lea     eax, [esp + 0x114]
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [ebx + 0x198]
        push    eax
        add     esi, 0x14
        mov     dword ptr [esp + 0x28], edx
        call    FUN_00507F90
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x20]
        push    edi
        push    ecx
        mov     ecx, dword ptr [esp + 0x30]
        push    edx
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x3c]
        push    eax
        push    ecx
        push    ecx
        mov     ecx, esp
        push    esi
        call    FUN_004EA0F0
        mov     edx, dword ptr [esp + 0x50]
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x3c]
        push    edx
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x50]
        lea     edx, [esp + 0x88]
        push    edx
        mov     edx, dword ptr [esp + 0x40]
        lea     eax, [esp + 0xd4]
        push    eax
        push    0
        push    -1
        push    0xa
        push    0
        push    ebx
        push    ecx
        push    2
        push    edx
        push    0
        push    2
        push    0xc8
        lea     ecx, [esp + 0x19c]
        call    FUN_005922E0
        mov     cx, word ptr [esp + 0x12]
        mov     al, byte ptr [esp + 0x10]
        lea     edx, [esp + 0x40]
        mov     word ptr [esp + 0x1fa], cx
        push    edx
        lea     ecx, [esp + 0x200]
        mov     byte ptr [esp + 0x1fc], al
        call    FUN_0040C5D0
        mov     ecx, dword ptr [esp + 0x144]
        mov     eax, dword ptr [esp + 0x3c]
        push    0
        push    ecx
        lea     edx, [esp + 0x14c]
        push    edx
        lea     ecx, [esp + 0x100]
        mov     dword ptr [esp + 0x214], eax
        call    FUN_0041E690
        mov     ecx, dword ptr [g_7db098]
        call    FUN_004CEC10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x14], cl
        mov     dx, word ptr [eax + 2]
        push    0
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0xfc]
        push    ecx
        mov     word ptr [esp + 0x22], dx
        call    FUN_004D9910
        mov     ecx, dword ptr [g_7dab44]
        mov     ebx, dword ptr [ecx]
        mov     edx, dword ptr [g_7dab40]
        xor     edx, ebx
        mov     ecx, dword ptr [edx + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x28]
        lea     ecx, [esp + 0xf4]
        call    FUN_0041E710

L_5AFA58:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1fc
        ret     8
    }
}
