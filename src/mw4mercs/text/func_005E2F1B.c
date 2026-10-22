/*
 * FUN_005E2F1B (774 B, 0x5E2F1B-0x5E3220) — gameplay data block. 5 nops of
 * padding, then a large __thiscall function (0x5E2F20, ret 8) that resolves a
 * target object, computes vector differences with FPU (fld/fsub/fstp), and
 * dispatches a series of calls (FUN_00507F90, FUN_004EA0F0, FUN_005922E0,
 * FUN_0041E690, FUN_004D9910, ...). Trailing 2 nops + `ret` thunk at 0x5E3220.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_7db0ac;   /* 0x7db0ac - word data */
extern unsigned short g_7db0ae;   /* 0x7db0ae - word data */
extern char g_8bd5e8[];   /* 0x8bd5e8 - string */
extern unsigned short g_7dc696;   /* 0x7dc696 - word data */
extern unsigned char g_7dc694;   /* 0x7dc694 - byte data */
extern char g_7b9460[];   /* 0x7b9460 - string */
extern unsigned int g_7db098;   /* 0x7db098 - dword data */
extern unsigned int g_7dab44;   /* 0x7dab44 - dword data */
extern unsigned int g_7dab40;   /* 0x7dab40 - dword data */

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

__declspec(naked) void FUN_005E2F1B(void)
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
        mov     dword ptr [esp + 0x30], eax
        jne     L_5E2F62
        mov     dx, word ptr [eax + 2]
        cmp     dx, word ptr [g_7db0ae]
        je      L_5E3211
L_5E2F62:
        push    eax
        call    FUN_004DA920
        add     esp, 4
        push    offset g_8bd5e8
        lea     ecx, [esp + 0xb0]
        mov     dword ptr [esp + 0x28], eax
        call    FUN_00767400
        push    offset g_8bd5e8
        lea     ecx, [esp + 0x68]
        call    FUN_00767400
        mov     ecx, dword ptr [ebx + 0x198]
        lea     eax, [esp + 0x1dc]
        push    eax
        call    FUN_00507F90
        mov     edx, dword ptr [ebp + 0x88]
        mov     esi, eax
        mov     eax, dword ptr [ebp + 0x8c]
        mov     ecx, 0xc
        lea     edi, [esp + 0xe4]
        rep movsd
        mov     ecx, dword ptr [ebp + 0x84]
        mov     si, word ptr [g_7dc696]
        mov     dword ptr [esp + 0x64], ecx
        mov     cl, byte ptr [g_7dc694]
        mov     byte ptr [esp + 0x14], cl
        lea     ecx, [ebx + 0x214]
        mov     dword ptr [esp + 0x68], edx
        mov     dword ptr [esp + 0x6c], eax
        call    FUN_0041FD80
        test    eax, eax
        je      L_5E2FFA
        mov     dl, byte ptr [eax + 0x14]
        mov     si, word ptr [eax + 0x16]
        mov     byte ptr [esp + 0x14], dl
L_5E2FFA:
        mov     ecx, dword ptr [ebx + 0x1d4]
        mov     edx, dword ptr [ecx + 0x18]
        lea     eax, [esp + 0x4c]
        push    eax
        push    edx
        call    FUN_004E8DC0
        lea     eax, [esp + 0xe4]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00419480
        fld     dword ptr [esp + 0x4c]
        fsub    dword ptr [esp + 0x18]
        push    offset g_7b9460
        lea     ecx, [esp + 0x80]
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [esp + 0x54]
        fsub    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x60]
        fld     dword ptr [esp + 0x58]
        fsub    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x64]
        call    FUN_00419460
        lea     ecx, [esp + 0xe4]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_00419480
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    0
        push    1
        mov     dword ptr [esp + 0x90], edx
        push    2
        lea     edx, [esp + 0x64]
        mov     dword ptr [esp + 0xb4], ecx
        push    edx
        lea     ecx, [esp + 0x8c]
        mov     dword ptr [esp + 0xa8], eax
        call    FUN_0041FDE0
        lea     eax, [esp + 0x7c]
        push    eax
        lea     ecx, [ebp + 0x78]
        push    ecx
        lea     ecx, [esp + 0xb4]
        call    FUN_0041C680
        mov     ecx, ebx
        call    FUN_005F07C0
        mov     edx, dword ptr [ebp + 0x98]
        mov     ecx, dword ptr [ebp + 0x30]
        mov     dword ptr [esp + 0x40], edx
        mov     edx, dword ptr [ebp + 0x68]
        mov     dword ptr [esp + 0x38], edx
        mov     edx, dword ptr [ebp + 0x64]
        mov     dword ptr [esp + 0x2c], edx
        mov     edx, dword ptr [ebp + 0x60]
        mov     dword ptr [esp + 0x48], edx
        mov     edx, dword ptr [ebp + 0x5c]
        mov     dword ptr [esp + 0x3c], edx
        mov     edx, dword ptr [ebp + 0x58]
        push    ecx
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x38], edx
        mov     edx, dword ptr [ebp + 0x50]
        mov     dword ptr [esp + 0x48], edx
        mov     edx, dword ptr [ebp + 0x54]
        push    ecx
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [esp + 0x34]
        push    edx
        mov     edx, dword ptr [esp + 0x48]
        push    ecx
        push    edx
        push    ecx
        add     eax, 0x14
        mov     ecx, esp
        push    eax
        call    FUN_004EA0F0
        mov     eax, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [esp + 0x5c]
        push    eax
        mov     edx, dword ptr [esp + 0x44]
        push    ecx
        push    edx
        lea     eax, [esp + 0x88]
        push    eax
        mov     eax, dword ptr [esp + 0x58]
        lea     ecx, [esp + 0xd4]
        push    ecx
        mov     ecx, dword ptr [esp + 0x50]
        push    0
        push    -1
        push    7
        push    0
        lea     edx, [esp + 0xb8]
        push    edx
        push    eax
        push    2
        push    ecx
        push    0
        push    2
        push    0xc8
        lea     ecx, [esp + 0x16c]
        call    FUN_005922E0
        mov     dl, byte ptr [esp + 0x14]
        lea     eax, [esp + 0x4c]
        push    eax
        lea     ecx, [esp + 0x1d0]
        mov     byte ptr [esp + 0x1cc], dl
        mov     word ptr [esp + 0x1ce], si
        call    FUN_0040C5D0
        mov     edx, dword ptr [esp + 0x114]
        mov     ecx, dword ptr [esp + 0x40]
        push    0
        push    edx
        lea     eax, [esp + 0x11c]
        mov     dword ptr [esp + 0x1e0], ecx
        push    eax
        lea     ecx, [esp + 0xd0]
        call    FUN_0041E690
        mov     ecx, dword ptr [g_7db098]
        call    FUN_004CEC10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], cl
        mov     dx, word ptr [eax + 2]
        push    0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0xcc]
        push    ecx
        mov     word ptr [esp + 0x1e], dx
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
        lea     ecx, [esp + 0xc4]
        call    FUN_0041E710
L_5E3211:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1fc
        ret     8
        nop
        nop
        ret
    }
}
