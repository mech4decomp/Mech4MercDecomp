/*
 * FUN_005f0cb0 (1562 B) — __thiscall constructor, RET 0x10 (4 stack params).
 * Large object initializer: calls a base ctor, sets up sub-objects, reads
 * several obfuscated globals (XOR 0x85739531 chains through DAT_007dab44 /
 * DAT_007dab40), builds a string, and manages a growable array at this+0x1d0.
 *
 * Absolute-address globals are referenced via extern symbols so MSVC6 emits
 * the correct memory-deref encodings (8B 0D / A1 / 33 0D / D8 1D / FF 15 ...);
 * the 4-byte address relocs are masked by the diff harness.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007dab44;
extern int DAT_007dab40;
extern short DAT_007db0ac;
extern short DAT_007db0ae;
extern int DAT_007db098;
extern int DAT_007f27dc;
extern float DAT_0076c5b0;
extern void (*DAT_0076b420)(void);
extern int DAT_007db090;
extern int DAT_007b8d80;
extern int DAT_007b8d78;
extern int DAT_007b8d7c;

extern void FUN_004f4180(int a, int b, int c, int d);
extern void FUN_005f1560(void);
extern void FUN_00580520(void *p);
extern void FUN_005d6610(void *p);
extern void FUN_005b38b0(void *p);
extern void FUN_004d1f80(void *a, int b);
extern void *FUN_004cec10(void);
extern void *FUN_004d9910(void *a, void *b, int c);
extern void FUN_004d21c0(void);
extern void FUN_004d2310(void);
extern void *FUN_004084d0(unsigned int size);
extern void *FUN_0041fd80(void);
extern void FUN_0041e690(void *a, void *b, int c);
extern void FUN_00419460(void *p);
extern void FUN_0040d030(void *p);
extern void FUN_004084e0(void *p);
extern void FUN_004179b0(void *p);
extern void *FUN_004cdfa0(int c);
extern void FUN_00412780(void *p);
extern void FUN_00412570(void *p);
extern void FUN_004125e0(void *a, void *b);
extern void *FUN_00412740(void *p);
extern void *FUN_004fca80(void *p);
extern void FUN_004fc7b0(void *a, int b);
extern void *FUN_005f0be0(int a, int b);
extern void FUN_004daa20(void *p);
extern void FUN_004e2690(void *p);
extern void FUN_004f4370(void *p);
extern void FUN_0041e710(void);

__declspec(naked) void *FUN_005f0cb0(void)
{
    
__asm {
mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        sub     esp, 0xc8
        push    ebx
        mov     ebx, dword ptr [esp + 0xd4]
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        mov     ecx, dword ptr [esp + 0xe4]
        push    eax
        push    ecx
        push    ebx
        push    edx
        mov     ecx, ebp
        call    FUN_004f4180
        lea     ecx, [ebp + 0x1b0]
        call    FUN_005f1560
        lea     eax, [esp + 0x13]
        push    eax
        lea     ecx, [ebp + 0x1b8]
        mov     dword ptr [ebp + 0x1b4], 0x8
        call    FUN_00580520
        lea     ecx, [esp + 0x13]
        push    ecx
        lea     ecx, [ebp + 0x1c4]
        call    FUN_005d6610
        lea     edx, [esp + 0x13]
        lea     ecx, [ebp + 0x1d0]
        push    edx
        call    FUN_005b38b0
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x20]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    ebp
        mov     dword ptr [ebp], 0x78a250
        mov     byte ptr [ebp + 0x168], 0x0
        call    dword ptr [edx + 0x28]
        mov     ax, word ptr [DAT_007db0ac]
        mov     cx, word ptr [DAT_007db0ae]
        mov     word ptr [ebp + 0x17c], ax
        mov     eax, dword ptr [ebp + 0x10]
        and     eax, 0x7
        cmp     eax, 0x4
        mov     dword ptr [ebp + 0x178], 0x0
        mov     word ptr [ebp + 0x17e], cx
        jz      L_0d80
        test    eax, eax
        jnz     L_0de1
L_0d80:
        push    0x1
        lea     esi, [ebx + 0x68]
        push    esi
        lea     ecx, [esp + 0x38]
        call    FUN_004d1f80
        mov     ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0x14], dl
        mov     ax, word ptr [eax + 0x2]
        push    0x1
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x38]
        push    edx
        mov     word ptr [esp + 0x22], ax
        call    FUN_004d9910
        mov     cx, word ptr [esi + 0x2]
        mov     dword ptr [ebp + 0x178], eax
        mov     ax, word ptr [esi]
        mov     word ptr [ebp + 0x17e], cx
        add     esp, 0xc
        lea     ecx, [esp + 0x30]
        mov     word ptr [ebp + 0x17c], ax
        call    FUN_004d21c0
L_0de1:
        lea     eax, [ebx + 0x64]
        push    0x1
        push    eax
        lea     ecx, [esp + 0x9c]
        mov     dword ptr [esp + 0x28], eax
        call    FUN_004d1f80
        lea     ecx, [esp + 0x94]
        call    FUN_004d2310
        mov     edx, dword ptr [esp + 0xb0]
        push    edx
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0xb4]
        mov     esi, dword ptr [esp + 0xac]
        mov     edx, eax
        mov     eax, ecx
        shr     ecx, 0x2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x44]
        add     esp, 0x4
        xor     ecx, 0x85739531
        mov     dword ptr [esp + 0x18], edx
        jz      L_0e71
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        mov     esi, dword ptr [ecx + 0x24]
        test    esi, esi
        jz      L_0e71
        mov     ecx, dword ptr [DAT_007f27dc]
        test    ecx, ecx
        jz      L_0e83
        mov     esi, dword ptr [ecx + 0x40]
        test    esi, esi
        jnz     L_0e83
L_0e71:
        mov     ecx, dword ptr [ebx + 0x78]
        mov     dword ptr [edx + 0x128], ecx
        mov     ecx, dword ptr [ebx + 0x74]
        mov     dword ptr [edx + 0x124], ecx
L_0e83:
        mov     ecx, dword ptr [ebx + 0x6c]
        cmp     ecx, 0x8
        mov     dword ptr [esp + 0x14], 0x0
        jz      L_1165
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + ecx*4 + 0x204d00]
        call    FUN_0041fd80
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jz      L_0ec4
        mov     cl, byte ptr [eax + 0x518]
        mov     edx, dword ptr [esp + 0x18]
        mov     byte ptr [edx + 0x120], cl
L_0ec4:
        mov     edx, dword ptr [esp + 0x18]
L_0ec8:
        mov     eax, dword ptr [edx]
        push    0x0
        push    eax
        push    edx
        lea     ecx, [esp + 0x80]
        call    FUN_0041e690
        mov     esi, dword ptr [esp + 0x88]
        fld     dword ptr [esi + 0x50]
        mov     dword ptr [esi + 0x5c], 0x12000000
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x40
        jz      L_0f22
        push    0x7b9460
        lea     ecx, [esp + 0x34]
        call    FUN_00419460
        push    0x7b8d78
        lea     ecx, [esp + 0x34]
        call    FUN_0040d030
        lea     edi, [esi + 0x1c]
        mov     ecx, 0xc
        lea     esi, [esp + 0x30]
        rep     movsd
L_0f22:
        mov     ecx, dword ptr [esp + 0xe4]
        push    0x1
        push    ecx
        lea     edx, [esp + 0x7c]
        push    edx
        call    FUN_004d9910
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        mov     dword ptr [ebp + 0x170], ebx
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x10
        test    eax, eax
        jz      L_0f75
        mov     ecx, dword ptr [esp + 0xe0]
        mov     esi, dword ptr [ecx + 0x6c]
        push    ebx
        lea     ecx, [eax + 0x520]
        mov     dword ptr [ebx + 0x4cc], esi
        call    FUN_004179b0
        mov     dword ptr [ebp + 0x1b4], esi
L_0f75:
        mov     edx, dword ptr [ebx + 0x10]
        mov     ecx, dword ptr [DAT_007dab40]
        and     edx, 0xffffffe7
        mov     dword ptr [ebx + 0x10], edx
        mov     edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x1c]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    ebx
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    ebx
        call    dword ptr [edx + 0x8]
        mov     al, byte ptr [ebx + 0x14]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     byte ptr [esp + 0x1c], al
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [esp + 0x1c]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x14]
        and     edx, 0xff
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        mov     eax, dword ptr [eax + 0x30]
        lea     esi, [ebx + 0x2c]
        push    eax
        mov     ecx, esi
        call    FUN_00412780
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_1016
        mov     edi, eax
        test    edi, edi
        jz      L_1016
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp + 0x1c], ecx
        jnz     L_10c4
L_1016:
        mov     eax, dword ptr [ebp + 0x18]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x28]
        lea     edx, [esp + 0x24]
        push    ecx
        push    0x78a248
        push    edx
        call    dword ptr [DAT_0076b420]
        add     esp, 0xc
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x18], 0x0
        call    FUN_00412570
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L_1082
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_1082
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_1082:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      L_109d
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_109d
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_109d:
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_10c4
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_10c4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_10c4:
        mov     edx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        mov     esi, dword ptr [esi]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004fca80
        mov     esi, dword ptr [DAT_007dab40]
        mov     dword ptr [ebx + 0x30], eax
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, esi
        mov     ecx, dword ptr [ecx + 0x10]
        push    0x1
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004fc7b0
        mov     edx, dword ptr [ebp + 0x18]
        cmp     edx, dword ptr [DAT_007db090]
        jz      L_111d
        mov     dword ptr [ebx + 0x140], 0x2
L_111d:
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    ebx
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [esp + 0xe0]
        fld     dword ptr [eax + 0x50]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x40
        jnz     L_1186
        mov     ecx, dword ptr [ebx + 0xd8]
        add     ecx, 0x20
        push    ecx
        mov     ecx, ebp
        call    FUN_004f4370
        jmp     L_11fb
L_1165:
        mov     eax, dword ptr [eax + 0xc]
        xor     eax, 0x85739531
        mov     cl, byte ptr [eax + 0x17]
        test    cl, cl
        jz      L_0ec8
        mov     cl, byte ptr [ebx + 0x70]
        mov     byte ptr [edx + 0x120], cl
        jmp     L_0ec8
L_1186:
        mov     edx, dword ptr [ebp + 0x1b4]
        push    0x0
        push    edx
        call    FUN_005f0be0
        mov     edx, dword ptr [DAT_007b8d80]
        mov     dword ptr [ebp + 0x16c], eax
        mov     eax, dword ptr [DAT_007b8d78]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x38]
        rep     movsd
        mov     ecx, dword ptr [DAT_007b8d7c]
        mov     dword ptr [esp + 0x44], eax
        add     esp, 0x8
        lea     eax, [esp + 0x30]
        mov     dword ptr [esp + 0x4c], ecx
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esp + 0x60], edx
        call    FUN_004daa20
        mov     edx, dword ptr [ebx]
        push    0x1
        mov     ecx, ebx
        call    dword ptr [edx + 0x48]
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x1c]
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004e2690
L_11fb:
        mov     eax, dword ptr [esp + 0x20]
        mov     dx, word ptr [eax]
        mov     ax, word ptr [eax + 0x2]
        mov     ecx, dword ptr [ebp + 0x1d8]
        mov     word ptr [ebp + 0x174], dx
        mov     word ptr [ebp + 0x176], ax
        mov     esi, dword ptr [ebp + 0x1d0]
        sub     ecx, esi
        sar     ecx, 0x2
        cmp     ecx, 0x32
        jnc     L_12a6
        mov     edi, dword ptr [ebp + 0x1d4]
        mov     ebx, edi
        sub     ebx, esi
        sar     ebx, 0x2
        test    esi, esi
        push    0xc8
        jz      L_1281
        call    FUN_004084d0
        mov     edx, esi
        add     esp, 0x4
        cmp     edx, edi
        jz      L_1266
L_124e:
        mov     ecx, edx
        sub     ecx, esi
        add     ecx, eax
L_1254:
        test    ecx, ecx
        jz      L_125c
        mov     esi, dword ptr [edx]
        mov     dword ptr [ecx], esi
L_125c:
        add     edx, 0x4
        add     ecx, 0x4
        cmp     edx, edi
        jnz     L_1254
L_1266:
        mov     esi, eax
        mov     eax, dword ptr [ebp + 0x1d0]
        test    eax, eax
        mov     dword ptr [esp + 0x20], eax
        jz      L_128b
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_128b
L_1281:
        call    FUN_004084d0
        add     esp, 0x4
        mov     esi, eax
L_128b:
        lea     edx, [esi + ebx*4]
        mov     dword ptr [ebp + 0x1d0], esi
        add     esi, 0xc8
        mov     dword ptr [ebp + 0x1d4], edx
        mov     dword ptr [ebp + 0x1d8], esi
L_12a6:
        lea     ecx, [esp + 0x74]
        call    FUN_0041e710
        lea     ecx, [esp + 0x94]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0xc8
        ret     0x10
    }


}
