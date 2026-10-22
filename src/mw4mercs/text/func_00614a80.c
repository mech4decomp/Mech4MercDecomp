/*
 * FUN_00614A80 (1619 B) — __thiscall constructor (ECX = this), RET 4
 * (one stack param at EBP+8).
 *
 * Initializes a large object: sets up sub-object vtables (0x76cd9c,
 * 0x78c3a8, 0x78c37c, 0x78bfd0, 0x78c378), builds several string/name
 * objects via FUN_00412570/FUN_004125e0/FUN_00412740, registers them with
 * the DAT_007dab44/DAT_007dab40 XOR-obfuscated global, and creates a set of
 * child objects via FUN_004d1f80 + FUN_0059xxxx/FUN_005dxxxx factories.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_004d2d00(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006187b0(void);
extern void __cdecl FUN_00595c80(void);
extern void __cdecl FUN_0059f490(void);
extern void __cdecl FUN_0059e3b0(void);
extern void __cdecl FUN_0059c5c0(void);
extern void __cdecl FUN_0059b860(void);
extern void __cdecl FUN_005de090(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d2110(void);
extern void __cdecl FUN_00615d20(void);
extern void __cdecl FUN_006187f0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004129c0(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_00594820(void);
extern void __cdecl FUN_00416c60(void);

extern int DAT_007b8c10;   /* 0x007B8C10 */
extern int DAT_007dab44;   /* 0x007DAB44 */
extern int DAT_007dab40;   /* 0x007DAB40 */
extern int DAT_007db0b8;   /* 0x007DB0B8 */

__declspec(naked) void __stdcall FUN_00614a80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x340
        mov     eax, dword ptr [DAT_007b8c10]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     ebx, ebx
        push    0x1
        lea     edi, [esi + 0x40]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x76cd9c
        mov     dword ptr [esi + 0x10], ebx
        mov     byte ptr [esi + 0x14], bl
        mov     dword ptr [esi + 0x18], ebx
        mov     dword ptr [esi + 0x28], 0x1
        call    FUN_00416990
        mov     dword ptr [edi], 0x78c3a8
        push    0x1
        lea     edi, [esi + 0x54]
        push    ebx
        mov     ecx, edi
        call    FUN_00416990
        mov     dword ptr [edi], 0x78c37c
        mov     dword ptr [esi + 0x6c], ebx
        lea     ebx, [esi + 0x74]
        push    0x0
        mov     ecx, ebx
        call    FUN_0041fc80
        mov     dword ptr [ebx], 0x78bfd0
        push    0x77a0c8
        lea     ecx, [ebp - 0x4]
        mov     dword ptr [esi], 0x78c378
        call    FUN_00412570
        mov     ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [ebp - 0x4]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0xb0]
        push    eax
        push    ecx
        lea     ecx, [ebp - 0xc]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp - 0x4]
        call    FUN_00412740
        lea     ecx, [ebp - 0xc]
        call    FUN_0040d9b0
        mov     edx, dword ptr [ebp - 0x4]
        push    0x78c370
        push    edx
        lea     ecx, [ebp - 0xc]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp - 0x4]
        call    FUN_00412740
        lea     ecx, [ebp - 0xc]
        call    FUN_0040d9b0
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp - 0x4]
        push    eax
        push    ecx
        lea     ecx, [ebp - 0xc]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp - 0x4]
        call    FUN_00412740
        lea     ecx, [ebp - 0xc]
        call    FUN_0040d9b0
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        mov     dword ptr [ebp - 0x8], eax
        jz      l_614b90
        inc     byte ptr [eax - 0x1]
l_614b90:
        mov     edx, dword ptr [ebp - 0x8]
        push    0x779f4c
        push    edx
        lea     ecx, [ebp - 0xc]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp - 0x8]
        call    FUN_00412740
        lea     ecx, [ebp - 0xc]
        call    FUN_0040d9b0
        mov     eax, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [DAT_007db0b8]
        push    0x0
        push    0x0
        push    0x0
        push    0x3f
        push    0x5
        push    0x0
        push    eax
        call    FUN_004d2d00
        push    eax
        mov     ecx, ebx
        call    FUN_0041fcd0
        push    0x1
        lea     ecx, [ebp - 0x40]
        push    ecx
        lea     ecx, [ebp - 0x120]
        mov     word ptr [ebp - 0x40], 0x5
        mov     word ptr [ebp - 0x3e], 0x1
        call    FUN_004d1f80
        lea     edx, [ebp - 0x10]
        push    edx
        lea     eax, [ebp - 0x120]
        push    eax
        mov     dword ptr [ebp - 0x10], 0x0
        call    FUN_00412a00
        add     esp, 0x8
        push    0x773040
        lea     ecx, [ebp - 0x28]
        call    FUN_00412570
        mov     edi, dword ptr [ebp - 0x28]
        mov     eax, dword ptr [ebp - 0x10]
l_614c1f:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [edi]
        jnz     l_614c43
        test    cl, cl
        jz      l_614c3f
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [edi + 0x1]
        jnz     l_614c43
        add     eax, 0x2
        add     edi, 0x2
        test    cl, cl
        jnz     l_614c1f
l_614c3f:
        xor     eax, eax
        jmp     l_614c48
l_614c43:
        sbb     eax, eax
        sbb     eax, -0x1
l_614c48:
        test    eax, eax
        jle     l_614c5e
        push    0x78c310
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      l_614c5e
        int     3
l_614c5e:
        push    0x78c300
        lea     ecx, [ebp - 0x20]
        call    FUN_00412570
        mov     edi, dword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebp - 0x10]
l_614c71:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [edi]
        jnz     l_614c95
        test    cl, cl
        jz      l_614c91
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [edi + 0x1]
        jnz     l_614c95
        add     eax, 0x2
        add     edi, 0x2
        test    cl, cl
        jnz     l_614c71
l_614c91:
        xor     eax, eax
        jmp     l_614c9a
l_614c95:
        sbb     eax, eax
        sbb     eax, -0x1
l_614c9a:
        test    eax, eax
        jge     l_614d08
        lea     ecx, [ebp - 0x20]
        call    FUN_0040d9b0
        lea     ecx, [ebp - 0x28]
        call    FUN_0040d9b0
        lea     ecx, [ebp - 0x10]
        call    FUN_0040d9b0
        lea     ecx, [ebp - 0x120]
        call    FUN_004d21c0
        mov     eax, dword ptr [ebp - 0x8]
        test    eax, eax
        jz      l_614cdb
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_614cdb
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_614cdb:
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        jz      l_6150c8
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_6150c8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
l_614d08:
        push    0x1
        lea     eax, [ebp - 0x38]
        mov     edi, 0x5
        push    eax
        lea     ecx, [ebp - 0x1a8]
        mov     word ptr [ebp - 0x38], di
        mov     word ptr [ebp - 0x36], 0x2
        call    FUN_004d1f80
        lea     ecx, [ebp - 0x1a8]
        push    ecx
        mov     ecx, esi
        call    FUN_006187b0
        push    0x1
        lea     edx, [ebp - 0x1c]
        push    edx
        lea     ecx, [ebp - 0x340]
        mov     word ptr [ebp - 0x1c], di
        mov     word ptr [ebp - 0x1a], 0x3
        call    FUN_004d1f80
        lea     eax, [ebp - 0x1c]
        push    eax
        call    FUN_00595c80
        add     esp, 0x4
        push    0x1
        lea     ecx, [ebp - 0x30]
        push    ecx
        lea     ecx, [ebp - 0x2b8]
        mov     dword ptr [esi + 0x34], eax
        mov     word ptr [ebp - 0x30], di
        mov     word ptr [ebp - 0x2e], 0x4
        call    FUN_004d1f80
        lea     edx, [ebp - 0x30]
        push    edx
        call    FUN_0059f490
        add     esp, 0x4
        mov     dword ptr [esi + 0x24], eax
        push    0x1
        lea     eax, [ebp - 0x24]
        push    eax
        lea     ecx, [ebp - 0x230]
        mov     word ptr [ebp - 0x24], di
        mov     word ptr [ebp - 0x22], di
        call    FUN_004d1f80
        lea     ecx, [ebp - 0x24]
        push    ecx
        call    FUN_0059e3b0
        add     esp, 0x4
        push    0x1
        lea     edx, [ebp - 0x2c]
        push    edx
        lea     ecx, [ebp - 0x2fc]
        mov     dword ptr [esi + 0x2c], eax
        mov     word ptr [ebp - 0x2c], di
        mov     word ptr [ebp - 0x2a], 0x6
        call    FUN_004d1f80
        lea     eax, [ebp - 0x2c]
        push    eax
        call    FUN_0059c5c0
        add     esp, 0x4
        push    0x1
        lea     ecx, [ebp - 0x14]
        push    ecx
        lea     ecx, [ebp - 0x1ec]
        mov     dword ptr [esi + 0x1c], eax
        mov     word ptr [ebp - 0x14], di
        mov     word ptr [ebp - 0x12], 0x7
        call    FUN_004d1f80
        mov     dx, word ptr [ebp - 0x14]
        push    ecx
        mov     eax, esp
        mov     word ptr [eax], dx
        mov     cx, word ptr [ebp - 0x12]
        mov     word ptr [eax + 0x2], cx
        call    FUN_0059b860
        add     esp, 0x4
        push    0x1
        lea     edx, [ebp - 0x18]
        mov     dword ptr [esi + 0x20], eax
        mov     word ptr [ebp - 0x18], di
        mov     word ptr [ebp - 0x16], 0x8
        push    edx
        lea     ecx, [ebp - 0x274]
        call    FUN_004d1f80
        push    ecx
        mov     cx, word ptr [ebp - 0x18]
        mov     eax, esp
        mov     word ptr [eax], cx
        mov     dx, word ptr [ebp - 0x16]
        mov     word ptr [eax + 0x2], dx
        call    FUN_005de090
        add     esp, 0x4
        push    0x0
        mov     ecx, ebx
        mov     dword ptr [esi + 0x38], eax
        call    FUN_0041fd80
        push    eax
        push    0x78c2f4
        lea     ecx, [ebp - 0x164]
        call    FUN_004d2110
        mov     eax, dword ptr [ebp - 0x128]
        test    eax, eax
        jz      l_614e7e
        mov     eax, dword ptr [ebp - 0x148]
        test    eax, eax
        jbe     l_614e7e
        mov     byte ptr [esi + 0x70], 0x1
l_614e7e:
        push    0x1
        lea     eax, [ebp - 0x34]
        push    eax
        lea     ecx, [ebp - 0xdc]
        mov     byte ptr [esi + 0x70], 0x0
        mov     word ptr [ebp - 0x34], di
        mov     word ptr [ebp - 0x32], 0xa
        call    FUN_004d1f80
        push    0x1
        lea     ecx, [ebp - 0x3c]
        push    ecx
        lea     ecx, [ebp - 0x98]
        mov     word ptr [ebp - 0x3c], di
        mov     word ptr [ebp - 0x3a], 0xb
        call    FUN_004d1f80
        mov     edx, dword ptr [ebp - 0x98]
        push    0x0
        lea     ecx, [ebp - 0x98]
        call    dword ptr [edx + 0xc]
        lea     eax, [ebp - 0x98]
        mov     edi, 0xffffffec
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp - 0x90], edi
        call    FUN_00615d20
        mov     edx, dword ptr [ebp - 0xdc]
        push    0x0
        lea     ecx, [ebp - 0xdc]
        call    dword ptr [edx + 0xc]
        lea     eax, [ebp - 0xdc]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp - 0xd4], edi
        call    FUN_006187f0
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [esi + 0x7c]
        xor     edx, eax
        mov     eax, dword ptr [edx + 0xc]
        mov     edx, dword ptr [ebp + 0x8]
        xor     eax, 0x85739531
        mov     dword ptr [eax + 0x3508], ecx
        push    edx
        lea     ecx, [esi + 0x6c]
        call    FUN_00412780
        lea     eax, [esi + 0x40]
        push    eax
        lea     ecx, [ebp - 0x54]
        mov     dword ptr [esi + 0x80], 0x0
        call    FUN_00416bc0
        lea     ecx, [ebp - 0x54]
        mov     dword ptr [ebp - 0x54], 0x77a38c
        call    FUN_00416cc0
        test    eax, eax
        jz      l_614f68
l_614f5c:
        lea     ecx, [ebp - 0x54]
        call    FUN_00416cc0
        test    eax, eax
        jnz     l_614f5c
l_614f68:
        mov     edi, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edi + 0x4c]
        cmp     dword ptr [eax + 0x18], 0x2
        jnz     l_614fb9
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        mov     dword ptr [ebp + 0x8], eax
        jz      l_614f83
        inc     byte ptr [eax - 0x1]
l_614f83:
        lea     ecx, [ebp + 0x8]
        call    FUN_004129c0
        lea     ecx, [ebp + 0x8]
        call    FUN_00412950
        mov     edx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [edi + 0x50]
        push    edx
        call    FUN_00594820
        mov     eax, dword ptr [ebp + 0x8]
        test    eax, eax
        jz      l_614fb9
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_614fb9
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_614fb9:
        lea     ecx, [ebp - 0x54]
        mov     byte ptr [esi + 0x71], 0x0
        mov     byte ptr [esi + 0x68], 0x0
        mov     byte ptr [esi + 0x14], 0x1
        call    FUN_00416c60
        lea     ecx, [ebp - 0x98]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0xdc]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x164]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x274]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x1ec]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x2fc]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x230]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x2b8]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x340]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x1a8]
        call    FUN_004d21c0
        mov     eax, dword ptr [ebp - 0x20]
        test    eax, eax
        jz      l_615055
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_615055
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_615055:
        mov     eax, dword ptr [ebp - 0x28]
        test    eax, eax
        jz      l_61506f
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_61506f
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_61506f:
        mov     eax, dword ptr [ebp - 0x10]
        test    eax, eax
        jz      l_615089
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_615089
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_615089:
        lea     ecx, [ebp - 0x120]
        call    FUN_004d21c0
        mov     eax, dword ptr [ebp - 0x8]
        test    eax, eax
        jz      l_6150ae
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_6150ae
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_6150ae:
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        jz      l_6150c8
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_6150c8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_6150c8:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
