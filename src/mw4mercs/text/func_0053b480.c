/* func_0053b480.c - inline-asm transcription of FUN_0053b480 (2491 B) */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007f27dc;
extern int g_007dd268;
extern int g_007db094;
extern int g_007b8d78;
extern int g_007b8d7c;
extern int g_007b8d80;
extern float g_0076c5b0;
extern int *g_0076b420;
extern int *g_0076b408;
extern int *g_0076b318;
extern int g_007f2500;
extern int g_007db090;
extern int g_007b9460;
extern char g_0076cb8c[];
extern char g_0077b6fc[];
extern char g_0077b6dc[];
extern char g_0077b6d8[];

extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_005444e0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00617920(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004fc7b0(void);
extern void __cdecl FUN_004fc920(void);
extern void __cdecl FUN_005f0be0(void);
extern void __cdecl FUN_004d6490(void);
extern void __cdecl FUN_004f3b00(void);
extern void __cdecl FUN_004f3f40(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00523e60(void);
extern void __cdecl FUN_005dcb70(void);
extern void __cdecl FUN_005dc9f0(void);
extern void __cdecl FUN_005fff00(void);
extern void __cdecl FUN_00531f00(void);
extern void __cdecl FUN_0053be60(void);

extern int g_204d00[];
extern char g_205f36[];
extern int g_205d30[];
extern char g_206068[];
extern char g_207fcc[];
extern char g_206040[];
extern int g_206044[];
extern int g_206048[];
extern int g_20604c[];
extern int g_206050[];
extern int g_206054[];
extern int g_206058[];
extern int g_20605c[];
extern int g_206060[];
extern int g_206064[];
extern char g_205f40[];

void __declspec(naked) FUN_0053b480(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x198
        push    ebx
        mov     ebx, dword ptr [ebp+0xc]
        push    esi
        push    edi
        xor     edi, edi
        cmp     ebx, edi
        mov     esi, ecx
        mov     dword ptr [ebp-0x18], esi
        jz      L_53BE28
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax+0x8]
        test    eax, eax
        jz      L_53BE28
        jmp     L_53B4B4
L_53B4AF:
        mov     esi, dword ptr [ebp-0x18]
        xor     edi, edi
L_53B4B4:
        mov     edx, dword ptr [ebx]
        push    1
        lea     eax, [ebp-0x4]
        push    eax
        mov     ecx, ebx
        mov     byte ptr [ebp-0x4], 0
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [ebx]
        push    1
        lea     eax, [ebp-0x10]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp-0x10], edi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [ebx]
        push    4
        lea     eax, [ebp-0x1c]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [ebx]
        push    4
        lea     eax, [ebp-0x24]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp-0x24], edi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx+0x4]
        mov     ecx, dword ptr [ebp-0x24]
        mov     dword ptr [ebp-0x14], eax
        mov     eax, dword ptr [ebx]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax+0x18]
        mov     edx, dword ptr [ebp-0x1c]
        mov     eax, dword ptr [ebx]
        push    edi
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax+0x4]
        push    eax
        lea     ecx, [ebp-0x110]
        call    FUN_0041e690
        mov     edx, dword ptr [ebp-0x4]
        lea     ecx, [ebp-0x110]
        push    ecx
        and     edx, 0xff
        push    edx
        mov     ecx, esi
        call    FUN_005444e0
        lea     ecx, [ebp-0x110]
        call    FUN_0041e710
        mov     eax, dword ptr [ebp-0x10]
        cmp     eax, 8
        mov     byte ptr [ebp-0xa], 0
        mov     byte ptr [ebp-0x9], 0x5f
        mov     dword ptr [ebp-0x8], edi
        jz      L_53B58E
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0xc]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx+eax*4+0x204d00]
        call    FUN_0041fd80
        cmp     eax, edi
        mov     dword ptr [ebp-0x8], eax
        jz      L_53B58E
        mov     edx, eax
        mov     al, byte ptr [edx+0x518]
        mov     byte ptr [ebp-0x9], al
        mov     byte ptr [ebp-0xa], 1
L_53B58E:
        mov     eax, dword ptr [ebp-0x4]
        mov     edx, dword ptr [esi]
        and     eax, 0xff
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x64]
        mov     edx, dword ptr [ebx]
        mov     edi, eax
        mov     eax, dword ptr [ebp-0x1c]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx+0x18]
        mov     al, byte ptr [ebp-0xa]
        test    al, al
        jz      L_53B5BB
        mov     cl, byte ptr [ebp-0x9]
        mov     byte ptr [edi+0x120], cl
L_53B5BB:
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax+0x44]
        xor     ecx, 0x85739531
        jz      L_53B5FE
        mov     edx, dword ptr [eax+0x44]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx+0x24]
        test    ecx, ecx
        jz      L_53B5FE
        mov     ecx, dword ptr [g_007f27dc]
        test    ecx, ecx
        jz      L_53B5F7
        mov     edx, dword ptr [ecx+0x40]
        test    edx, edx
        jz      L_53B5FE
L_53B5F7:
        mov     ecx, 1
        jmp     L_53B600
L_53B5FE:
        xor     ecx, ecx
L_53B600:
        mov     eax, dword ptr [eax+0xc]
        xor     eax, 0x85739531
        mov     dl, byte ptr [eax+0x17]
        test    dl, dl
        jnz     L_53B6D8
        test    ecx, ecx
        jnz     L_53B6D8
        mov     eax, dword ptr [g_007dd268]
        test    eax, eax
        jz      L_53B6D8
        mov     edx, dword ptr [eax+0x40ee8]
        test    edx, edx
        jz      L_53B6D8
        cmp     dword ptr [edi+0x58], 1
        jnz     L_53B6D8
        mov     eax, dword ptr [edx+0x54]
        lea     ecx, [eax-1]
        cmp     ecx, 3
        ja      L_53B682
        /* __emit: no-base SIB jump-table dispatch FF 24 8D [ecx*4+0x53be3c] */
        __emit 0xFF
        __emit 0x24
        __emit 0x8D
        __emit 0x3C
        __emit 0xBE
        __emit 0x53
        __emit 0x00
L_53B652:
        mov     dword ptr [edi+0x128], 0x21
        jmp     L_53B688
L_53B65E:
        mov     dword ptr [edi+0x128], 0x41
        jmp     L_53B688
L_53B66A:
        mov     dword ptr [edi+0x128], 0x25
        jmp     L_53B688
L_53B676:
        mov     dword ptr [edi+0x128], 0x27
        jmp     L_53B688
L_53B682:
        mov     dword ptr [edi+0x128], eax
L_53B688:
        mov     eax, dword ptr [edx+0x7c]
        cmp     eax, 4
        ja      L_53B6D2
        /* __emit: no-base SIB jump-table dispatch FF 24 85 [eax*4+0x53be4c] */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x4C
        __emit 0xBE
        __emit 0x53
        __emit 0x00
L_53B697:
        mov     ecx, dword ptr [edx+0x58]
        mov     dword ptr [edi+0x124], ecx
        jmp     L_53B6D8
L_53B6A2:
        mov     dword ptr [edi+0x124], 0x21
        jmp     L_53B6D8
L_53B6AE:
        mov     dword ptr [edi+0x124], 0x41
        jmp     L_53B6D8
L_53B6BA:
        mov     dword ptr [edi+0x124], 0x25
        jmp     L_53B6D8
L_53B6C6:
        mov     dword ptr [edi+0x124], 0x27
        jmp     L_53B6D8
L_53B6D2:
        mov     dword ptr [edi+0x124], eax
L_53B6D8:
        mov     ecx, dword ptr [g_007db094]
        mov     dword ptr [ebp-0x38], ecx
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [ebp-0x20], dl
        mov     ax, word ptr [eax+0x2]
        mov     word ptr [ebp-0x1e], ax
        mov     ecx, dword ptr [edi]
        push    0
        push    ecx
        push    edi
        lea     ecx, [ebp-0xa0]
        call    FUN_0041e690
        mov     edx, dword ptr [ebp-0x8c]
        fld     dword ptr [edx+0x50]
        mov     dword ptr [edx+0x5c], 0x12000000
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: test ah,imm8 F6 C4 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jz      L_53B768
        mov     eax, dword ptr [g_007b8d78]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [ebp-0xd0]
        rep     movsd
        mov     ecx, dword ptr [g_007b8d7c]
        mov     dword ptr [ebp-0xc4], eax
        mov     eax, dword ptr [g_007b8d80]
        mov     dword ptr [ebp-0xb4], ecx
        lea     edi, [edx+0x1c]
        mov     ecx, 0xc
        lea     esi, [ebp-0xd0]
        mov     dword ptr [ebp-0xa4], eax
        rep     movsd
        mov     esi, dword ptr [ebp-0x18]
L_53B768:
        push    1
        lea     ecx, [ebp-0x20]
        push    ecx
        lea     edx, [ebp-0xa0]
        push    edx
        call    FUN_004d9910
        mov     edi, eax
        mov     eax, dword ptr [ebp-0x14]
        add     esp, 0xc
        push    eax
        lea     ecx, [ebp-0x34]
        mov     dword ptr [ebp-0x2c], edi
        call    FUN_00412570
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0x20]
        lea     edx, [ebp-0x34]
        push    edx
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        lea     edx, [edi+0x14]
        push    edx
        call    dword ptr [eax+0xb8]
        mov     eax, dword ptr [ebp-0x34]
        test    eax, eax
        jz      L_53B7CF
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_53B7CF
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_53B7CF:
        mov     eax, dword ptr [ebp-0x8]
        test    eax, eax
        jz      L_53B7EB
        mov     ecx, dword ptr [ebp-0x10]
        mov     dword ptr [edi+0x4cc], ecx
        push    edi
        lea     ecx, [eax+0x520]
        call    FUN_004179b0
L_53B7EB:
        mov     ecx, dword ptr [edi+0x10]
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [g_007dab40]
        and     ecx, 0xffffffe7
        mov     dword ptr [edi+0x10], ecx
        mov     ecx, dword ptr [edx]
        xor     ecx, eax
        mov     eax, dword ptr [ecx+0x44]
        xor     eax, 0x85739531
        jz      L_53B836
        mov     eax, dword ptr [ebp-0x4]
        mov     ecx, dword ptr [ecx+0x44]
        and     eax, 0xff
        inc     eax
        push    eax
        xor     ecx, 0x85739531
        call    FUN_00617920
        test    eax, eax
        jz      L_53B836
        mov     eax, dword ptr [eax+0x10]
        test    eax, eax
        jz      L_53B836
        mov     dword ptr [edi+0x574], eax
L_53B836:
        mov     ecx, dword ptr [ebp-0x4]
        and     ecx, 0xff
        imul    ecx, ecx, 0x22ac
        mov     al, byte ptr [ecx+esi+0x205f36]
        test    al, al
        lea     esi, [edi+0x2c]
        jz      L_53B91B
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     dword ptr [ebp-0x8], eax
        jz      L_53B866
        inc     byte ptr [eax-1]
        mov     eax, dword ptr [ebp-0x8]
L_53B866:
        push    0x76cb8c
        push    eax
        lea     ecx, [ebp-0x64]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp-0x8]
        call    FUN_00412740
        mov     eax, dword ptr [ebp-0x64]
        test    eax, eax
        jz      L_53B897
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_53B897
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_53B897:
        mov     edx, dword ptr [ebp-0x14]
        mov     eax, dword ptr [ebp-0x8]
        push    edx
        push    eax
        lea     ecx, [ebp-0x5c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp-0x8]
        call    FUN_00412740
        mov     eax, dword ptr [ebp-0x5c]
        test    eax, eax
        jz      L_53B8CA
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_53B8CA
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_53B8CA:
        lea     ecx, [ebp-0x8]
        push    ecx
        mov     ecx, esi
        call    FUN_00412740
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0x10]
        push    1
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004fc7b0
        mov     eax, dword ptr [ebp-0x8]
        test    eax, eax
        jz      L_53B99C
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_53B99C
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     L_53B99C
L_53B91B:
        mov     ecx, dword ptr [ebp-0x14]
        push    ecx
        mov     ecx, esi
        call    FUN_00412780
        mov     edx, dword ptr [ebp-0x4]
        and     edx, 0xff
        push    edx
        lea     eax, [ebp-0x80]
        push    0x77b6fc
        push    eax
        call    dword ptr [g_0076b420]
        mov     edx, dword ptr [esi]
        add     esp, 0xc
        lea     ecx, [ebp-0x80]
        push    ecx
        push    edx
        lea     ecx, [ebp-0x48]
        call    FUN_004125e0
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [ebp-0x48]
        test    eax, eax
        jz      L_53B973
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_53B973
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_53B973:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx+0x10]
        push    1
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004fc7b0
        mov     edx, dword ptr [ebp-0x14]
        push    edx
        mov     ecx, esi
        call    FUN_00412780
L_53B99C:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx+0x1c]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx+0x28]
        mov     eax, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ebp-0x18]
        mov     esi, dword ptr [g_007dab44]
        mov     esi, dword ptr [esi]
        and     eax, 0xff
        mov     dword ptr [edi+0x5d0], eax
        mov     eax, dword ptr [ebp-0x4]
        mov     ecx, eax
        and     ecx, 0xff
        imul    ecx, ecx, 0x22ac
        add     ecx, edx
        mov     dword ptr [ecx+0x205d30], edi
        xor     esi, dword ptr [g_007dab40]
        mov     esi, dword ptr [esi+0xc]
        xor     esi, 0x85739531
        cmp     byte ptr [esi+0x17], 0
        jnz     L_53BA20
        and     eax, 0xff
        imul    eax, eax, 0x22ac
        lea     edi, [eax+edx+0x206068]
        mov     eax, dword ptr [ebp-0x10]
        xor     edx, edx
        mov     dl, byte ptr [ecx+0x207fcc]
        push    edx
        push    eax
        jmp     L_53BA38
L_53BA20:
        mov     ecx, dword ptr [ebp-0x10]
        and     eax, 0xff
        imul    eax, eax, 0x22ac
        push    0
        lea     edi, [eax+edx+0x206068]
        push    ecx
L_53BA38:
        call    FUN_005f0be0
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [edi]
        add     esp, 8
        push    ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004d6490
        test    eax, eax
        jz      L_53BAB1
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [ebp-0x140]
        lea     edx, [ebp-0x198]
        rep     movsd
        push    edx
        mov     ecx, eax
        call    FUN_004f3b00
        mov     esi, eax
        mov     ecx, 0xc
        lea     edi, [ebp-0x140]
        rep     movsd
        mov     esi, dword ptr [ebp-0x2c]
        lea     eax, [ebp-0x140]
        push    eax
        mov     ecx, esi
        call    FUN_004daa20
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx+0x48]
        jmp     L_53BAC3
L_53BAB1:
        push    0x77b6dc
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_53BAC3
        int     3
L_53BAC3:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx+0x14]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx+0x17fc]
        test    al, al
        jz      L_53BE31
        xor     eax, eax
        mov     ecx, 0xa
        lea     edi, [ebp-0x168]
        rep     stosd
        mov     eax, dword ptr [ebp-0x14]
        push    eax
        lea     ecx, [ebp-0x28]
        call    FUN_00412570
        mov     ecx, dword ptr [ebp-0x28]
        push    0x77b6d8
        push    ecx
        lea     ecx, [ebp-0x3c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp-0x28]
        call    FUN_00412740
        mov     eax, dword ptr [ebp-0x3c]
        test    eax, eax
        jz      L_53BB36
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_53BB36
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_53BB36:
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [ebp-0x28]
        push    8
        push    ecx
        mov     ecx, dword ptr [eax+0x10]
        xor     ecx, 0x85739531
        call    FUN_004fc920
        push    0x140
        mov     dword ptr [ebp-0x50], eax
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        test    ebx, ebx
        jz      L_53BD00
        mov     edx, dword ptr [ebp-0x4]
        mov     eax, dword ptr [ebp-0x18]
        and     edx, 0xff
        imul    edx, edx, 0x22ac
        add     eax, edx
        mov     edx, dword ptr [eax+0x206064]
        mov     ecx, dword ptr [ebp-0x2c]
        mov     esi, dword ptr [ecx+0xd8]
        mov     dword ptr [ebp-0x54], edx
        mov     edx, dword ptr [eax+0x206060]
        mov     dword ptr [ebp-0x4c], edx
        mov     edx, dword ptr [eax+0x20605c]
        mov     dword ptr [ebp-0x44], edx
        mov     edx, dword ptr [eax+0x206058]
        mov     dword ptr [ebp-0x40], edx
        mov     edx, dword ptr [eax+0x206054]
        mov     dword ptr [ebp-0x68], edx
        mov     edx, dword ptr [eax+0x206050]
        mov     dword ptr [ebp-0x70], edx
        mov     edx, dword ptr [eax+0x20604c]
        mov     dword ptr [ebp-0x60], edx
        mov     edx, dword ptr [eax+0x206048]
        mov     dword ptr [ebp-0x74], edx
        mov     edx, dword ptr [eax+0x206044]
        lea     edi, [eax+0x205f40]
        mov     eax, dword ptr [ecx+0x30]
        mov     dword ptr [ebp-0x58], edx
        mov     edx, dword ptr [ecx]
        add     esi, 0x80
        mov     dword ptr [ebp-0x6c], eax
        call    dword ptr [edx+0x60]
        mov     ecx, dword ptr [ebp-0x18]
        mov     dword ptr [ebp-0x8], eax
        mov     eax, dword ptr [ebp-0x4]
        and     eax, 0xff
        imul    eax, eax, 0x22ac
        push    0
        push    0x479
        push    0
        lea     edx, [eax+ecx+0x206040]
        push    2
        push    0x140
        mov     ecx, ebx
        mov     dword ptr [ebp-0x14], edx
        call    FUN_0053be60
        push    esi
        lea     ecx, [ebx+0x1c]
        call    FUN_004f3f40
        mov     eax, dword ptr [ebp-0x14]
        push    eax
        lea     ecx, [ebx+0x54]
        mov     dword ptr [ebx+0x4c], 2
        mov     dword ptr [ebx+0x50], 0
        call    FUN_00523e60
        mov     ecx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ebp-0x6c]
        mov     edx, dword ptr [ebp-0x50]
        mov     dword ptr [ebx+0x58], ecx
        or      ecx, 0xffffffff
        mov     dword ptr [ebx+0x60], ecx
        mov     dword ptr [ebx+0x64], eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     dword ptr [ebx+0x5c], edx
        mov     esi, edi
        lea     edx, [ebx+0x68]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        lea     edi, [ebx+0xe8]
        mov     ecx, 0xa
        lea     esi, [ebp-0x168]
        rep     movsd
        mov     ecx, dword ptr [ebp-0x58]
        mov     dword ptr [ebx+0x110], ecx
        mov     eax, dword ptr [ebp-0x60]
        mov     edx, dword ptr [ebp-0x74]
        mov     ecx, dword ptr [ebp-0x70]
        mov     dword ptr [ebx+0x118], eax
        mov     eax, dword ptr [ebp-0x40]
        mov     dword ptr [ebx+0x114], edx
        mov     edx, dword ptr [ebp-0x68]
        mov     dword ptr [ebx+0x124], eax
        mov     eax, dword ptr [ebp-0x54]
        mov     dword ptr [ebx+0x11c], ecx
        mov     ecx, dword ptr [ebp-0x44]
        mov     dword ptr [ebx+0x120], edx
        mov     edx, dword ptr [ebp-0x4c]
        mov     dword ptr [ebx+0x130], eax
        xor     eax, eax
        mov     dword ptr [ebx+0x128], ecx
        mov     dword ptr [ebx+0x12c], edx
        mov     dword ptr [ebx+0x134], eax
        mov     dword ptr [ebx+0x138], eax
        mov     dword ptr [ebx+0x13c], eax
        jmp     L_53BD02
L_53BD00:
        xor     ebx, ebx
L_53BD02:
        mov     ecx, dword ptr [ebp-0x38]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [ebp-0x30], cl
        mov     dx, word ptr [eax+0x2]
        mov     word ptr [ebp-0x2e], dx
        mov     eax, dword ptr [ebx]
        push    0
        push    eax
        push    ebx
        lea     ecx, [ebp-0xf0]
        call    FUN_0041e690
        push    0
        lea     ecx, [ebp-0x30]
        push    ecx
        lea     edx, [ebp-0xf0]
        push    edx
        call    FUN_004d9910
        mov     esi, eax
        mov     eax, dword ptr [ebp-0x2c]
        add     esp, 0xc
        push    eax
        mov     ecx, esi
        call    FUN_005dcb70
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [ecx]
        xor     eax, edx
        mov     edx, dword ptr [eax+0x44]
        xor     edx, 0x85739531
        jz      L_53BD91
        mov     ecx, dword ptr [ebp-0x4]
        and     ecx, 0xff
        inc     ecx
        push    ecx
        mov     ecx, dword ptr [eax+0x44]
        xor     ecx, 0x85739531
        call    FUN_00617920
        test    eax, eax
        jz      L_53BD91
        mov     eax, dword ptr [eax+0x18]
        test    eax, eax
        jz      L_53BD91
        push    eax
        mov     ecx, esi
        call    FUN_005dc9f0
L_53BD91:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx+0x20]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_005fff00
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0x1c]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx+0x28]
        mov     eax, dword ptr [g_007f2500]
        push    ebx
        mov     dword ptr [esi+0x2fc], eax
        call    FUN_004084e0
        add     esp, 4
        lea     ecx, [ebp-0xf0]
        call    FUN_0041e710
        mov     eax, dword ptr [ebp-0x28]
        test    eax, eax
        jz      L_53BE03
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_53BE03
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_53BE03:
        mov     ebx, dword ptr [ebp+0xc]
L_53BE06:
        mov     ecx, dword ptr [ebp-0x18]
        call    FUN_00531f00
        lea     ecx, [ebp-0xa0]
        call    FUN_0041e710
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx+0x8]
        test    eax, eax
        jnz     L_53B4AF
L_53BE28:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
L_53BE31:
        mov     ecx, dword ptr [ebp-0x38]
        call    FUN_004cec10
        jmp     L_53BE06
    }
}
