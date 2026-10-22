/*
 * FUN_004d19d0 (1074 B) — MLR network subsystem: renderer registration /
 * resource build. __thiscall (this=ECX), RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004d2230(void);
extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_004d05d0(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00412b80(void);
extern void __cdecl FUN_004d1e10(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_0041f8d0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412e70(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004d29c0(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004d2630(void);

extern unsigned int  g_007b8c0c;
extern unsigned int  g_007b8c10;
extern unsigned int  g_007db0b0;
extern unsigned int  g_007dc574;
extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;

__declspec(naked) void FUN_004d19d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x190
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     esi, ecx
        push    edi
        mov     dword ptr [ebp - 0x10], esi
        call    FUN_006fc4d0
        test    al, al
        jnz     L_4d1a00
        push    edi
        push    0x7723f4
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_4d1a00
        int     3
L_4d1a00:
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    ebx
        call    FUN_006fc4d0
        test    al, al
        jnz     L_4d1a21
        push    ebx
        push    0x7723f4
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_4d1a21
        int     3
L_4d1a21:
        push    edi
        lea     ecx, [ebp - 0x4]
        call    FUN_00412570
        push    ebx
        lea     ecx, [ebp + 0xc]
        call    FUN_00412570
        mov     eax, dword ptr [ebp - 0x4]
        mov     edi, dword ptr [ebp + 0x8]
        push    0x0
        push    eax
        mov     ecx, edi
        call    FUN_004d2230
        lea     ebx, [edi + 0x40]
        push    ebx
        call    FUN_004da920
        mov     ecx, dword ptr [g_007b8c0c]
        mov     edx, dword ptr [ecx + eax*4]
        add     esp, 0x4
        lea     ecx, [ebp - 0xf0]
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x14], edx
        call    FUN_004d1f10
        lea     eax, [ebp - 0xf0]
        push    ebx
        push    eax
        call    FUN_004da8d0
        mov     ecx, dword ptr [ebp + 0xc]
        add     esp, 0x8
        push    0x0
        push    0x0
        push    ecx
        lea     ecx, [ebp - 0x140]
        call    FUN_0040dca0
        lea     edx, [ebp - 0x140]
        push    edx
        mov     ecx, esi
        call    FUN_004cfbd0
        mov     ecx, dword ptr [g_007b8c10]
        mov     eax, dword ptr [g_007db0b0]
        push    ecx
        lea     ecx, [ebp - 0x74]
        mov     dword ptr [ebp - 0x1c], eax
        call    FUN_004d05d0
        push    0x0
        lea     ecx, [ebp - 0x64]
        call    FUN_0041ee70
        lea     edx, [ebp - 0x134]
        push    edx
        lea     ecx, [ebp - 0x74]
        mov     dword ptr [ebp - 0x74], 0x76d1f0
        call    FUN_00412b80
        mov     ecx, dword ptr [g_007dc574]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0xc]
        mov     esi, eax
        xor     eax, eax
        push    esi
        push    0x7db0ac
        lea     ecx, [ebp - 0xc]
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x8], eax
        call    FUN_004d1e10
        mov     eax, dword ptr [ebp - 0xc]
        mov     cx, word ptr [ebp - 0xb0]
        mov     word ptr [eax], cx
        mov     dx, word ptr [ebp - 0xae]
        mov     word ptr [eax + 0x2], dx
        mov     eax, 0x1
        cmp     esi, eax
        jle     L_4d1b35
L_4d1b15:
        mov     ecx, dword ptr [ebp - 0xc]
        mov     dx, word ptr [g_007db0ac]
        lea     ecx, [ecx + eax*4]
        mov     word ptr [ecx], dx
        mov     dx, word ptr [g_007db0ae]
        inc     eax
        cmp     eax, esi
        mov     word ptr [ecx + 0x2], dx
        jl      L_4d1b15
L_4d1b35:
        push    0x7723d4
        lea     ecx, [ebp - 0x140]
        call    FUN_0040ecc0
        test    eax, eax
        mov     dword ptr [ebp + 0x10], eax
        jz      L_4d1c90
        push    0xc
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_4d1b7b
        mov     eax, dword ptr [ebp + 0x10]
        add     eax, 0x18
        push    eax
        mov     ecx, esi
        call    FUN_004c41d0
        mov     ecx, esi
        mov     dword ptr [esi], 0x76cc9c
        mov     dword ptr [ebp + 0x10], ecx
        jmp     L_4d1b85
L_4d1b7b:
        mov     dword ptr [ebp + 0x10], 0
L_4d1b82:
        mov     ecx, dword ptr [ebp + 0x10]
L_4d1b85:
        mov     eax, dword ptr [ecx + 0x8]
        test    eax, eax
        jz      L_4d1c87
        mov     edi, dword ptr [eax]
        test    edi, edi
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x8], edx
        jz      L_4d1c84
        mov     ecx, dword ptr [g_007dc574]
        mov     edx, dword ptr [edi + 0x14]
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x10]
        mov     cx, word ptr [ebx]
        mov     esi, eax
        mov     eax, dword ptr [ebp - 0xc]
        lea     eax, [eax + esi*4]
        mov     word ptr [eax], cx
        push    0x0
        lea     ecx, [ebp - 0x190]
        mov     word ptr [eax + 0x2], 0
        call    FUN_0040dd50
        lea     ecx, [ebp - 0x190]
        push    ecx
        mov     ecx, edi
        call    FUN_0041f8d0
        mov     edx, dword ptr [g_007b8c10]
        push    edx
        lea     ecx, [ebp - 0xac]
        call    FUN_00415180
        xor     eax, eax
        push    eax
        lea     ecx, [ebp - 0x9c]
        mov     dword ptr [ebp - 0xa4], eax
        mov     dword ptr [ebp - 0xa0], eax
        mov     dword ptr [ebp - 0xac], 0x76cd9c
        call    FUN_0041ee70
        lea     eax, [ebp - 0x184]
        push    eax
        lea     ecx, [ebp - 0xac]
        mov     dword ptr [ebp - 0xac], 0x76d1f0
        call    FUN_00412b80
        push    esi
        lea     eax, [ebp - 0x190]
        push    eax
        mov     eax, dword ptr [ebp - 0x14]
        push    eax
        mov     eax, dword ptr [ebp - 0xc]
        lea     ecx, [ebp - 0xac]
        mov     dword ptr [g_007db0b0], ecx
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ecx]
        lea     eax, [eax + esi*4]
        push    eax
        call    dword ptr [edx + 0x8]
        lea     ecx, [ebp - 0xac]
        push    ecx
        lea     ecx, [ebp - 0x74]
        call    FUN_00412e70
        lea     ecx, [ebp - 0xac]
        call    FUN_00412b60
        lea     ecx, [ebp - 0x190]
        call    FUN_0040de20
        mov     edi, dword ptr [ebp + 0x8]
        jmp     L_4d1b82
L_4d1c84:
        mov     edi, dword ptr [ebp + 0x8]
L_4d1c87:
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
L_4d1c90:
        mov     edx, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0xc]
        push    0x0
        lea     eax, [edx*4 + 0]
        push    eax
        push    ecx
        lea     ecx, [ebp - 0x3c]
        call    FUN_0041e690
        lea     edx, [ebp - 0x3c]
        push    edx
        mov     ecx, edi
        call    FUN_004d29c0
        test    al, al
        pop     ebx
        jz      L_4d1d53
        mov     ecx, edi
        call    FUN_004d24f0
        test    al, al
        jz      L_4d1d53
        mov     eax, dword ptr [g_007b8c0c]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     esi, dword ptr [eax + ecx*4]
        mov     ecx, dword ptr [ebp - 0x10]
        call    FUN_004cfc90
        lea     ecx, [ebp - 0x3c]
        call    FUN_0041e710
        mov     eax, dword ptr [ebp - 0xc]
        test    eax, eax
        jz      L_4d1cf7
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4d1cf7:
        lea     ecx, [ebp - 0x74]
        call    FUN_00412b60
        lea     ecx, [ebp - 0x140]
        call    FUN_0040de20
        lea     ecx, [ebp - 0xf0]
        call    FUN_004d21c0
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jz      L_4d1d2f
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4d1d2f
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4d1d2f:
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        jz      L_4d1d49
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4d1d49
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4d1d49:
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_4d1d53:
        lea     edx, [ebp - 0x74]
        push    edx
        lea     eax, [ebp - 0x3c]
        push    eax
        mov     ecx, edi
        call    FUN_004d2680
        mov     esi, dword ptr [ebp - 0x1c]
        test    esi, esi
        mov     dword ptr [g_007db0b0], esi
        jz      L_4d1d85
        mov     ecx, edi
        call    FUN_004d2630
        test    al, al
        jnz     L_4d1d85
        lea     ecx, [ebp - 0x74]
        push    ecx
        mov     ecx, esi
        call    FUN_00412e70
L_4d1d85:
        mov     ecx, dword ptr [ebp - 0x10]
        call    FUN_004cfc90
        lea     ecx, [ebp - 0x3c]
        call    FUN_0041e710
        mov     eax, dword ptr [ebp - 0xc]
        test    eax, eax
        jz      L_4d1da5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4d1da5:
        lea     ecx, [ebp - 0x74]
        call    FUN_00412b60
        lea     ecx, [ebp - 0x140]
        call    FUN_0040de20
        lea     ecx, [ebp - 0xf0]
        call    FUN_004d21c0
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jz      L_4d1ddd
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4d1ddd
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4d1ddd:
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        jz      L_4d1df7
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4d1df7
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4d1df7:
        mov     eax, dword ptr [ebp - 0x14]
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
