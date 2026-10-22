/*
 * FUN_00616830 (622 B) — Loads saved-game version header, compares the
 * version string (warns if newer), then initializes a set of sub-objects
 * via FUN_004d1f80 + FUN_0059xxxx and stores handles into ESI.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00595c80(void);
extern void __cdecl FUN_0059f490(void);
extern void __cdecl FUN_0059e3b0(void);
extern void __cdecl FUN_0059c5c0(void);
extern void __cdecl FUN_0059b860(void);
extern void __cdecl FUN_005de090(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d2110(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00616830(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x244
        push    ebx
        push    esi
        push    edi
        push    0x1
        lea     eax, [ebp - 0x24]
        mov     esi, ecx
        mov     ebx, 0x5
        push    eax
        lea     ecx, [ebp - 0xac]
        mov     word ptr [ebp - 0x24], bx
        mov     word ptr [ebp - 0x22], 0x1
        call    FUN_004d1f80
        lea     ecx, [ebp - 0x1c]
        push    ecx
        lea     edx, [ebp - 0xac]
        push    edx
        mov     dword ptr [ebp - 0x1c], 0x0
        call    FUN_00412a00
        add     esp, 0x8
        push    0x773040
        lea     ecx, [ebp - 0x20]
        call    FUN_00412570
        mov     edi, dword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebp - 0x1c]
L_688b:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [edi]
        jnz     L_68af
        test    cl, cl
        jz      L_68ab
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [edi + 0x1]
        jnz     L_68af
        add     eax, 0x2
        add     edi, 0x2
        test    cl, cl
        jnz     L_688b
L_68ab:
        xor     eax, eax
        jmp     L_68b4
L_68af:
        sbb     eax, eax
        sbb     eax, -0x1
L_68b4:
        test    eax, eax
        jle     L_68ca
        push    0x78c310
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_68ca
        int     3
L_68ca:
        push    0x1
        lea     eax, [ebp - 0x18]
        push    eax
        lea     ecx, [ebp - 0x244]
        mov     word ptr [ebp - 0x18], bx
        mov     word ptr [ebp - 0x16], 0x3
        call    FUN_004d1f80
        lea     ecx, [ebp - 0x18]
        push    ecx
        call    FUN_00595c80
        add     esp, 0x4
        push    0x1
        lea     edx, [ebp - 0xc]
        push    edx
        lea     ecx, [ebp - 0x1bc]
        mov     dword ptr [esi + 0x34], eax
        mov     word ptr [ebp - 0xc], bx
        mov     word ptr [ebp - 0xa], 0x4
        call    FUN_004d1f80
        lea     eax, [ebp - 0xc]
        push    eax
        call    FUN_0059f490
        add     esp, 0x4
        push    0x1
        lea     ecx, [ebp - 0x10]
        push    ecx
        lea     ecx, [ebp - 0x134]
        mov     dword ptr [esi + 0x24], eax
        mov     word ptr [ebp - 0x10], bx
        mov     word ptr [ebp - 0xe], bx
        call    FUN_004d1f80
        lea     edx, [ebp - 0x10]
        push    edx
        call    FUN_0059e3b0
        add     esp, 0x4
        mov     dword ptr [esi + 0x2c], eax
        push    0x1
        lea     eax, [ebp - 0x14]
        push    eax
        lea     ecx, [ebp - 0x200]
        mov     word ptr [ebp - 0x14], bx
        mov     word ptr [ebp - 0x12], 0x6
        call    FUN_004d1f80
        lea     ecx, [ebp - 0x14]
        push    ecx
        call    FUN_0059c5c0
        add     esp, 0x4
        push    0x1
        lea     edx, [ebp - 0x4]
        push    edx
        lea     ecx, [ebp - 0xf0]
        mov     dword ptr [esi + 0x1c], eax
        mov     word ptr [ebp - 0x4], bx
        mov     word ptr [ebp - 0x2], 0x7
        call    FUN_004d1f80
        push    ecx
        mov     cx, word ptr [ebp - 0x4]
        mov     eax, esp
        mov     word ptr [eax], cx
        mov     dx, word ptr [ebp - 0x2]
        mov     word ptr [eax + 0x2], dx
        call    FUN_0059b860
        add     esp, 0x4
        mov     dword ptr [esi + 0x20], eax
        push    0x1
        lea     eax, [ebp - 0x8]
        push    eax
        lea     ecx, [ebp - 0x178]
        mov     word ptr [ebp - 0x8], bx
        mov     word ptr [ebp - 0x6], 0x8
        call    FUN_004d1f80
        push    ecx
        mov     cx, word ptr [ebp - 0x8]
        mov     eax, esp
        mov     word ptr [eax], cx
        mov     dx, word ptr [ebp - 0x6]
        mov     word ptr [eax + 0x2], dx
        call    FUN_005de090
        add     esp, 0x4
        mov     dword ptr [esi + 0x38], eax
        push    0x0
        lea     ecx, [esi + 0x74]
        call    FUN_0041fd80
        push    eax
        push    0x78c2f4
        lea     ecx, [ebp - 0x68]
        call    FUN_004d2110
        mov     eax, dword ptr [ebp - 0x2c]
        test    eax, eax
        jz      L_6a0a
        mov     eax, dword ptr [ebp - 0x4c]
        test    eax, eax
        jbe     L_6a0a
        mov     byte ptr [esi + 0x70], 0x1
L_6a0a:
        lea     ecx, [ebp - 0x68]
        mov     byte ptr [esi + 0x70], 0x0
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x178]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0xf0]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x200]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x134]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x1bc]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x244]
        call    FUN_004d21c0
        mov     eax, dword ptr [ebp - 0x20]
        test    eax, eax
        jz      L_6a72
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6a72
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6a72:
        mov     eax, dword ptr [ebp - 0x1c]
        test    eax, eax
        jz      L_6a8c
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6a8c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6a8c:
        lea     ecx, [ebp - 0xac]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
