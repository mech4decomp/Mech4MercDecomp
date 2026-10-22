/*
 * FUN_00516f80 (2382 B) — terrain/geometry tile-set rebuild. __thiscall,
 * RET 0x8 (this in ECX + 1 stack arg). Rebuilds the tile name/type tables
 * (0x40d18/0x40d2c/0x409a0/0x409a4) from the global object, matching tile
 * names against a list and filling per-tile type words.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00406cc0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_0041d890(void);
extern void __cdecl FUN_0041db30(void);
extern void __cdecl FUN_004129c0(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_0041db70(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_005178d0(void);
extern void __cdecl FUN_006140c0(void);
extern void __cdecl FUN_0041dac0(void);
extern void __cdecl FUN_00416c60(void);

extern void *g_0076b2b0;   /* IAT strncmp */
extern int  g_007dab40;    /* DAT_007dab40 */
extern int  g_007dab44;    /* DAT_007dab44 */
extern int  g_007b8c10;    /* DAT_007b8c10 */
extern short g_007db0ac;   /* DAT_007db0ac */
extern short g_007db0ae;   /* DAT_007db0ae */

__declspec(naked) unsigned int __fastcall FUN_00516f80(void *this)
{
    __asm {
        sub     esp, 0x8c
        mov     eax, dword ptr [esp + 0x90]
        mov     edx, dword ptr [g_007dab40]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     ebx, ecx
        mov     ecx, dword ptr [g_007dab44]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [ecx]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x4c]
        xor     edx, 0x85739531
        push    esi
        push    edi
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x98], 0x0
        mov     dword ptr [esp + 0x3c], ebp
        mov     byte ptr [esp + 0x1b], 0x0
        mov     byte ptr [esp + 0x1a], 0x0
        jz      L_6fda
        mov     byte ptr [esp + 0x1b], 0x1
L_6fda:
        mov     eax, dword ptr [eax + 0x58]
        xor     eax, 0x85739531
        jz      L_6fe9
        mov     byte ptr [esp + 0x1a], 0x1
L_6fe9:
        mov     edx, dword ptr [ebx + 0x40d18]
        lea     ecx, [ebx + 0x40d18]
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [ebx + 0x40d2c]
        test    eax, eax
        jz      L_701f
        mov     ecx, dword ptr [eax - 0x4]
        lea     esi, [eax - 0x4]
        push    0x5178f0
        push    ecx
        push    0x4
        push    eax
        call    FUN_00406cc0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_701f:
        mov     esi, dword ptr [ebx + 0x409a0]
        lea     edx, [esi*4 + 0x4]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_7050
        mov     dword ptr [eax], esi
        lea     edx, [eax + 0x4]
        lea     eax, [esi - 0x1]
        test    eax, eax
        jl      L_7052
        lea     ecx, [eax + 0x1]
        xor     eax, eax
        mov     edi, edx
        rep     stosd
        jmp     L_7052
L_7050:
        xor     edx, edx
L_7052:
        mov     eax, dword ptr [ebx + 0x409a4]
        test    eax, eax
        mov     dword ptr [ebx + 0x40d2c], edx
        jz      L_7072
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx + 0x409a4], 0x0
L_7072:
        push    0x0
        lea     eax, [esi*4 + 0x0]
        push    eax
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     dword ptr [ebx + 0x409a4], eax
        mov     eax, dword ptr [edx + 0xc]
        xor     eax, 0x85739531
        mov     cl, byte ptr [eax + 0x17]
        test    cl, cl
        jz      L_7185
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      L_70bc
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0x0
L_70bc:
        push    0x0
        push    0x80
        call    FUN_006f3c80
        mov     ebx, eax
        push    0x779ed4
        lea     ecx, [esp + 0x14]
        mov     dword ptr [ebp], ebx
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x10]
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x5c]
        call    FUN_004d2000
        push    0x779ec8
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     esi, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esi + 0x40d2c]
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_00412740
        mov     cx, word ptr [esp + 0x94]
        mov     eax, dword ptr [esi + 0x409a4]
        mov     word ptr [eax], cx
        mov     dx, word ptr [esp + 0x96]
        mov     word ptr [eax + 0x2], dx
        mov     eax, dword ptr [esp + 0x24]
        lea     ecx, [esp + 0x54]
        mov     dword ptr [eax], 0x1
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_7181
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_7181
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_7181:
        mov     ebx, dword ptr [esp + 0x1c]
L_7185:
        mov     ecx, dword ptr [g_007dab44]
        mov     edi, dword ptr [ecx]
        mov     esi, dword ptr [g_007dab40]
        push    0x14
        xor     edi, esi
        call    FUN_004084d0
        mov     esi, eax
        xor     ebp, ebp
        add     esp, 0x4
        cmp     esi, ebp
        jz      L_71cd
        mov     edx, dword ptr [edi + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x84]
        add     eax, 0x10
        push    eax
        mov     ecx, esi
        call    FUN_00416bc0
        mov     dword ptr [esi], 0x779e88
        mov     dword ptr [esp + 0x14], esi
        jmp     L_71d1
L_71cd:
        mov     dword ptr [esp + 0x14], ebp
L_71d1:
        mov     ecx, dword ptr [esp + 0x14]
        call    FUN_00416cc0
        mov     edi, eax
        cmp     edi, ebp
        jz      L_72eb
L_71e4:
        mov     al, byte ptr [esp + 0x1b]
        test    al, al
        jnz     L_71f6
        cmp     dword ptr [edi + 0x20], 0x1
        jz      L_72d8
L_71f6:
        mov     al, byte ptr [esp + 0x1a]
        test    al, al
        jnz     L_7208
        cmp     dword ptr [edi + 0x20], 0x2
        jz      L_72d8
L_7208:
        push    0x14
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebp
        jz      L_7266
        mov     eax, dword ptr [edi + 0x18]
        cmp     eax, ebp
        mov     dword ptr [esp + 0x20], eax
        jz      L_7226
        inc     byte ptr [eax - 0x1]
L_7226:
        mov     ecx, dword ptr [g_007b8c10]
        mov     eax, dword ptr [esp + 0x98]
        or      eax, 0x1
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x9c], eax
        call    FUN_00415180
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esi + 0x10]
        mov     dword ptr [esi + 0x8], ebp
        mov     dword ptr [esi + 0xc], ebp
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0040f060
        mov     dword ptr [esi], 0x76d650
        jmp     L_7268
L_7266:
        xor     esi, esi
L_7268:
        test    byte ptr [esp + 0x98], 0x1
        jz      L_729e
        mov     edx, dword ptr [esp + 0x98]
        mov     eax, dword ptr [esp + 0x20]
        and     edx, 0xfffffffe
        cmp     eax, ebp
        mov     dword ptr [esp + 0x98], edx
        jz      L_729e
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_729e
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_729e:
        mov     edi, dword ptr [edi + 0x18]
        cmp     edi, ebp
        mov     dword ptr [esp + 0x10], edi
        jz      L_72ac
        inc     byte ptr [edi - 0x1]
L_72ac:
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        lea     ecx, [ebx + 0x40d18]
        call    FUN_00416a90
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        jz      L_72d8
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_72d8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_72d8:
        mov     ecx, dword ptr [esp + 0x14]
        call    FUN_00416cc0
        mov     edi, eax
        cmp     edi, ebp
        jnz     L_71e4
L_72eb:
        push    0x779e68
        lea     ecx, [esp + 0x30]
        call    FUN_00412570
        push    0x38
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_7317
        mov     ecx, dword ptr [esp + 0x2c]
        push    0x1
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        jmp     L_7319
L_7317:
        xor     eax, eax
L_7319:
        mov     ecx, eax
        mov     dword ptr [esp + 0x20], eax
        call    FUN_0041db30
        cmp     eax, ebp
        jz      L_74bf
L_732c:
        xor     edi, edi
        push    eax
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], edi
        call    FUN_00412780
        lea     ecx, [esp + 0x10]
        call    FUN_004129c0
        mov     ecx, eax
        call    FUN_00412950
        mov     esi, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     ecx, esi
        call    FUN_00416cc0
        mov     ebp, eax
        cmp     ebp, edi
        jz      L_73e2
L_7364:
        mov     esi, dword ptr [ebp + 0x18]
        test    esi, esi
        jz      L_742d
        inc     byte ptr [esi - 0x1]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
L_737e:
        test    esi, esi
        jz      L_7385
        inc     byte ptr [esi - 0x1]
L_7385:
        mov     eax, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        push    eax
        call    dword ptr [g_0076b2b0]
        add     esp, 0xc
        mov     ebx, eax
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    esi, esi
        jz      L_73cd
        mov     cl, byte ptr [esi - 0x1]
        lea     eax, [esi - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_73b6
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_73b6:
        test    esi, esi
        jz      L_73cd
        mov     al, byte ptr [esi - 0x1]
        dec     esi
        dec     al
        mov     byte ptr [esi], al
        jnz     L_73cd
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_73cd:
        test    bl, bl
        jnz     L_73e0
        mov     ecx, dword ptr [esp + 0x14]
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        jnz     L_7364
L_73e0:
        xor     edi, edi
L_73e2:
        mov     al, byte ptr [esp + 0x1b]
        test    al, al
        jnz     L_73f4
        cmp     ebp, edi
        jz      L_73f4
        cmp     dword ptr [ebp + 0x20], 0x1
        jz      L_7406
L_73f4:
        mov     al, byte ptr [esp + 0x1a]
        test    al, al
        jnz     L_7434
        cmp     ebp, edi
        jz      L_7434
        cmp     dword ptr [ebp + 0x20], 0x2
        jnz     L_7434
L_7406:
        mov     esi, dword ptr [esp + 0x20]
        mov     ecx, esi
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, edi
        jz      L_74b0
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_74b0
        jmp     L_74a7
L_742d:
        xor     ecx, ecx
        jmp     L_737e
L_7434:
        push    0x14
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      L_7473
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        mov     ecx, esi
        call    FUN_00415180
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esi + 0x10]
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0xc], edi
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0040f060
        mov     dword ptr [esi], 0x76d650
        jmp     L_7475
L_7473:
        xor     esi, esi
L_7475:
        mov     ecx, dword ptr [esp + 0x1c]
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        add     ecx, 0x40d18
        call    FUN_00416a90
        mov     esi, dword ptr [esp + 0x20]
        mov     ecx, esi
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, edi
        jz      L_74b0
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_74b0
L_74a7:
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_74b0:
        mov     ecx, esi
        call    FUN_0041db30
        cmp     eax, edi
        jnz     L_732c
L_74bf:
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        jz      L_74cd
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L_74cd:
        mov     edi, dword ptr [esp + 0x1c]
        lea     eax, [edi + 0x40d18]
        push    eax
        lea     ecx, [esp + 0x44]
        call    FUN_00416bc0
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     dword ptr [esp + 0x40], 0x76d610
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17]
        xor     esi, esi
        test    al, al
        jz      L_750f
        mov     esi, 0x1
L_750f:
        lea     ecx, [esp + 0x40]
        call    FUN_00416cc0
        test    eax, eax
        jz      L_7570
L_751c:
        mov     ebx, dword ptr [edi + 0x409a0]
L_7522:
        cmp     esi, ebx
        jz      L_7570
        mov     eax, dword ptr [eax + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jz      L_7534
        inc     byte ptr [eax - 0x1]
L_7534:
        mov     ecx, dword ptr [edi + 0x40d2c]
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [ecx + esi*4]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_7562
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_7562
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_7562:
        lea     ecx, [esp + 0x40]
        inc     esi
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_7522
L_7570:
        mov     esi, dword ptr [edi + 0x40d2c]
        mov     edx, dword ptr [esi]
        mov     ebp, dword ptr [g_0076b2b0]
        push    0xf
        push    0x779e58
        xor     ebx, ebx
        push    edx
        mov     dword ptr [esp + 0x1c], ebx
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jz      L_75b1
L_7595:
        mov     eax, dword ptr [esi + 0x4]
        push    0xf
        add     esi, 0x4
        push    0x779e58
        push    eax
        inc     ebx
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jnz     L_7595
        mov     dword ptr [esp + 0x10], ebx
L_75b1:
        mov     eax, dword ptr [edi + 0x40d2c]
        mov     ecx, dword ptr [eax + ebx*4]
        lea     esi, [eax + ebx*4]
        push    0xf
        push    0x779e58
        push    ecx
        mov     dword ptr [esp + 0x34], esi
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jnz     L_75ea
L_75d2:
        mov     edx, dword ptr [esi + 0x4]
        push    0xf
        add     esi, 0x4
        push    0x779e58
        push    edx
        inc     ebx
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jz      L_75d2
L_75ea:
        mov     eax, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [eax + 0x40d2c]
        mov     ecx, dword ptr [eax + ebx*4]
        lea     eax, [eax + ebx*4]
        push    0x7
        push    0x779e50
        push    ecx
        mov     edi, ebx
        mov     dword ptr [esp + 0x3c], eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jnz     L_762d
L_7615:
        mov     esi, dword ptr [esp + 0x30]
L_7615b:
        mov     edx, dword ptr [esi + 0x4]
        push    0x7
        add     esi, 0x4
        push    0x779e50
        push    edx
        inc     edi
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jz      L_7615b
L_762d:
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, ebx
        sub     esi, eax
        lea     eax, [esi*4 + 0x4]
        sub     edi, ebx
        push    eax
        mov     dword ptr [esp + 0x18], edi
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_7666
        mov     dword ptr [eax], esi
        lea     ebp, [eax + 0x4]
        lea     eax, [esi - 0x1]
        test    eax, eax
        jl      L_7668
        lea     ecx, [eax + 0x1]
        xor     eax, eax
        mov     edi, ebp
        rep     stosd
        jmp     L_7668
L_7666:
        xor     ebp, ebp
L_7668:
        test    esi, esi
        mov     dword ptr [esp + 0x38], ebp
        jle     L_7693
L_7670:
        mov     edi, dword ptr [esp + 0x28]
        mov     ebx, ebp
        mov     dword ptr [esp + 0x34], esi
L_767a:
        push    edi
        mov     ecx, ebx
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x34]
        add     edi, 0x4
        add     ebx, 0x4
        dec     eax
        mov     dword ptr [esp + 0x34], eax
        jnz     L_767a
L_7693:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jle     L_76ba
L_769b:
        mov     ebx, dword ptr [esp + 0x28]
        mov     edi, dword ptr [esp + 0x30]
        mov     ebp, eax
L_76a5:
        push    edi
        mov     ecx, ebx
        call    FUN_00412740
        add     edi, 0x4
        add     ebx, 0x4
        dec     ebp
        jnz     L_76a5
        mov     ebp, dword ptr [esp + 0x38]
L_76ba:
        test    esi, esi
        jle     L_76e8
L_76be:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [eax + 0x40d2c]
        add     ecx, edx
        mov     edi, ebp
        lea     ebx, [ebx + ecx*4]
L_76d7:
        push    edi
        mov     ecx, ebx
        call    FUN_00412740
        add     edi, 0x4
        add     ebx, 0x4
        dec     esi
        jnz     L_76d7
L_76e8:
        test    ebp, ebp
        jz      L_7712
        mov     eax, dword ptr [ebp - 0x4]
        lea     ebx, [ebp - 0x4]
        lea     esi, [ebp + eax*4]
        dec     eax
        js      L_7709
L_76fc:
        lea     edi, [eax + 0x1]
L_76fcb:
        sub     esi, 0x4
        mov     ecx, esi
        call    FUN_0040d9b0
        dec     edi
        jnz     L_76fcb
L_7709:
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_7712:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     dl, byte ptr [ecx + 0x17]
        xor     eax, eax
        test    dl, dl
        mov     dword ptr [esp + 0x14], eax
        jz      L_773f
        mov     eax, 0x1
        mov     dword ptr [esp + 0x14], eax
L_773f:
        mov     edx, dword ptr [esp + 0x1c]
        cmp     eax, dword ptr [edx + 0x409a0]
        jge     L_7880
L_774f:
        mov     ecx, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [esp + 0x14]
        lea     ebp, [ecx + eax*4]
        mov     eax, dword ptr [esp + 0x24]
        sub     eax, ecx
        mov     dword ptr [esp + 0x24], eax
L_7764:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x1c]
        lea     eax, [ecx*4 + 0x0]
        mov     ecx, dword ptr [edx + 0x40d2c]
        mov     ebx, dword ptr [ecx + eax]
        test    ebx, ebx
        jz      L_7783
        inc     byte ptr [ebx - 0x1]
L_7783:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      L_7797
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0x0
L_7797:
        push    0x0
        push    0x80
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     dword ptr [ebp], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        test    ebx, ebx
        rep     movsb
        push    ecx
        mov     eax, esp
        mov     dword ptr [eax], ebx
        jz      L_77d3
        inc     byte ptr [ebx - 0x1]
L_77d3:
        call    FUN_005178d0
        mov     ecx, dword ptr [eax + 0x84]
        call    FUN_006140c0
        test    eax, eax
        jz      L_781a
        mov     cx, word ptr [eax + 0x10]
        mov     dx, word ptr [eax + 0x12]
        mov     eax, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [eax + 0x409a4]
        lea     edi, [esi*4 + 0x0]
        add     eax, edi
        mov     word ptr [eax], cx
        mov     ecx, dword ptr [esp + 0x24]
        mov     word ptr [eax + 0x2], dx
        mov     dword ptr [ecx + ebp], 0x1
        jmp     L_7851
L_781a:
        mov     edx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edx + 0x409a4]
        mov     dx, word ptr [g_007db0ae]
        lea     ecx, [esi*4 + 0x0]
        add     eax, ecx
        mov     cx, word ptr [g_007db0ac]
        mov     word ptr [eax], cx
        mov     word ptr [eax + 0x2], dx
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [eax + ebp], 0x0
L_7851:
        inc     esi
        add     ebp, 0x4
        test    ebx, ebx
        mov     dword ptr [esp + 0x14], esi
        jz      L_7870
        mov     al, byte ptr [ebx - 0x1]
        dec     ebx
        dec     al
        mov     byte ptr [ebx], al
        jnz     L_7870
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_7870:
        mov     ecx, dword ptr [esp + 0x1c]
        cmp     esi, dword ptr [ecx + 0x409a0]
        jl      L_7764
L_7880:
        mov     esi, dword ptr [esp + 0x20]
        test    esi, esi
        jz      L_7898
        mov     ecx, esi
        call    FUN_0041dac0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_7898:
        lea     ecx, [esp + 0x40]
        call    FUN_00416c60
        mov     eax, dword ptr [esp + 0x2c]
        test    eax, eax
        jz      L_78bc
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_78bc
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_78bc:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x8c
        ret     0x8
    }
}
