/*
 * FUN_00460d20 (2305 B) — large object-list processing routine with
 * FPU color/normal math and several dynamic-array resize helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int     g_007b9590;
extern int     g_007da724;
extern int     g_007b958c;
extern double  g_0076e3e8;
extern int    *g_0076b2ec;   /* IAT (ceil) */
extern int     g_007da5f0;
extern int     g_007d9910;
extern int     g_007b220c;
extern float   g_0076d064;
extern float   g_0076d070;
extern float   g_0076ed08;
extern int     g_007b2314;
extern int     g_007b2284;
extern int     g_007b2288;
extern int     g_007b228c;

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0045dba0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0047f1b0(void);
extern void __cdecl FUN_00487ce0(void);

__declspec(naked) void FUN_00460d20(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x84
        mov     eax, [g_007b9590]
        push    ebx
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        xor     edi, edi
        add     esp, 0x4
        cmp     eax, edi
        jz      L_60d5c
        mov     ecx, dword ptr [g_007da724]
        push    ecx
        push    0x14
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [ebp-0x2c], eax
        jmp     L_60d5f
L_60d5c:
        mov     dword ptr [ebp-0x2c], edi
L_60d5f:
        call    FUN_006f49a0
        mov     edx, dword ptr [g_007b958c]
        push    edx
        call    FUN_006f4950
        fld     qword ptr [g_0076e3e8]
        mov     esi, dword ptr [ebp+0x8]
        fild    dword ptr [esi+0x4]
        call    FUN_0075db86
        fmul    dword ptr [esi+0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2ec]
        add     esp, 0x8
        call    FUN_0075db4a
        mov     dword ptr [ebp-0x24], eax
        lea     eax, [eax+eax*2]
        cmp     eax, 0x100
        jl      L_60dac
        mov     dword ptr [ebp-0x24], 0x55
L_60dac:
        mov     dword ptr [ebp-0x30], edi
L_60daf:
        xor     edi, edi
        push    0xb4
        mov     dword ptr [g_007da5f0], edi
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L_60ddb
        mov     ecx, dword ptr [g_007d9910]
        push    ecx
        mov     ecx, eax
        call    FUN_0045dba0
        mov     dword ptr [ebp-0x1c], eax
        jmp     L_60dde
L_60ddb:
        mov     dword ptr [ebp-0x1c], edi
L_60dde:
        mov     edx, dword ptr [ebp-0x1c]
        mov     ebx, dword ptr [edx+0xc]
        mov     eax, dword ptr [ebx+0xc]
        mov     esi, dword ptr [ebp-0x24]
        cmp     esi, eax
        mov     dword ptr [ebp-0x14], ebx
        jz      L_60e4d
        cmp     esi, edi
        jbe     L_60e39
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx+0x8]
        add     esp, 0x4
        test    edi, edi
        mov     dword ptr [ebp-0x10], eax
        jz      L_60e31
        mov     eax, dword ptr [ebx+0xc]
        cmp     esi, eax
        jnc     L_60e11
        mov     eax, esi
L_60e11:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_60e28
        mov     ecx, dword ptr [ebp-0x10]
L_60e1b:
        mov     dl, byte ptr [edi+eax]
        mov     byte ptr [eax+ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_60e1b
L_60e28:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_60e31:
        mov     eax, dword ptr [ebp-0x10]
        mov     dword ptr [ebx+0x8], eax
        jmp     L_60e48
L_60e39:
        mov     ecx, dword ptr [ebx+0x8]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx+0x8], edi
L_60e48:
        mov     dword ptr [ebx+0xc], esi
        xor     edi, edi
L_60e4d:
        cmp     esi, edi
        jle     L_60e69
        mov     edi, dword ptr [ebx+0x8]
        mov     ecx, esi
        mov     edx, ecx
        shr     ecx, 0x2
        mov     eax, 0x3030303
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
L_60e69:
        mov     esi, dword ptr [ebp-0x24]
        mov     eax, dword ptr [ebx+0x14]
        lea     edi, [ebx+0x10]
        lea     esi, [esi+esi*2]
        cmp     esi, eax
        mov     dword ptr [ebp-0x8], edi
        mov     dword ptr [ebp-0x4], eax
        jz      L_60f1f
        test    esi, esi
        jbe     L_60f0b
        lea     eax, [esi+esi*2]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_60ea9
        lea     ecx, [esi-1]
        mov     dword ptr [ebp-0x18], ecx
        mov     dword ptr [ebp-0xc], eax
        jmp     L_60eb0
L_60ea9:
        mov     dword ptr [ebp-0xc], 0
L_60eb0:
        cmp     dword ptr [edi], 0
        jz      L_60f04
        mov     eax, dword ptr [ebp-0x4]
        cmp     esi, eax
        jnc     L_60ebe
        mov     eax, esi
L_60ebe:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_60ef3
        mov     edx, dword ptr [ebp-0xc]
        lea     ecx, [eax+eax*2]
        lea     edi, [edx+ecx*4]
        mov     ecx, dword ptr [ebp-0x8]
        mov     ecx, dword ptr [ecx]
        sub     ecx, edx
        mov     dword ptr [ebp-0x4], ecx
        lea     ebx, [eax+1]
L_60edb:
        mov     edx, dword ptr [ebp-0x4]
        add     edx, edi
        push    edx
        mov     ecx, edi
        call    FUN_0040ccd0
        dec     ebx
        sub     edi, 0xc
        test    ebx, ebx
        ja      L_60edb
        mov     ebx, dword ptr [ebp-0x14]
L_60ef3:
        mov     eax, dword ptr [ebp-0x8]
        mov     eax, dword ptr [eax]
        push    eax
        call    FUN_004084e0
        mov     edi, dword ptr [ebp-0x8]
        add     esp, 0x4
L_60f04:
        mov     ecx, dword ptr [ebp-0xc]
        mov     dword ptr [edi], ecx
        jmp     L_60f1c
L_60f0b:
        mov     edx, dword ptr [edi]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi], 0
L_60f1c:
        mov     dword ptr [edi+0x4], esi
L_60f1f:
        cmp     esi, dword ptr [ebx+0x4]
        jz      L_60f7d
        test    esi, esi
        jbe     L_60f69
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx]
        add     esp, 0x4
        test    edi, edi
        mov     ecx, eax
        mov     dword ptr [ebp-0x4], ecx
        jz      L_60f65
        mov     eax, dword ptr [ebx+0x4]
        cmp     esi, eax
        jnc     L_60f45
        mov     eax, esi
L_60f45:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_60f59
L_60f4c:
        mov     dl, byte ptr [edi+eax]
        mov     byte ptr [eax+ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_60f4c
L_60f59:
        push    edi
        call    FUN_004084e0
        mov     ecx, dword ptr [ebp-0x4]
        add     esp, 0x4
L_60f65:
        mov     dword ptr [ebx], ecx
        jmp     L_60f7a
L_60f69:
        mov     eax, dword ptr [ebx]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx], 0
L_60f7a:
        mov     dword ptr [ebx+0x4], esi
L_60f7d:
        cmp     esi, dword ptr [ebx+0x1c]
        jz      L_61010
        test    esi, esi
        jbe     L_60ffa
        lea     ecx, [esi*8]
        push    ecx
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_60fb0
        push    0x423b70
        push    esi
        push    0x8
        push    edi
        call    FUN_00406c90
        jmp     L_60fb2
L_60fb0:
        xor     edi, edi
L_60fb2:
        mov     ecx, dword ptr [ebx+0x18]
        test    ecx, ecx
        mov     dword ptr [ebp-0x10], edi
        jz      L_60ff5
        mov     edx, dword ptr [ebx+0x1c]
        cmp     esi, edx
        jnc     L_60fc5
        mov     edx, esi
L_60fc5:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_60fe9
        lea     eax, [edi+edx*8]
        sub     ecx, edi
        inc     edx
L_60fd2:
        mov     edi, dword ptr [ecx+eax]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ecx+eax+0x4]
        mov     dword ptr [eax+0x4], edi
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_60fd2
        mov     edi, dword ptr [ebp-0x10]
L_60fe9:
        mov     eax, dword ptr [ebx+0x18]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_60ff5:
        mov     dword ptr [ebx+0x18], edi
        jmp     L_6100d
L_60ffa:
        mov     ecx, dword ptr [ebx+0x18]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx+0x18], 0
L_6100d:
        mov     dword ptr [ebx+0x1c], esi
L_61010:
        cmp     esi, dword ptr [ebx+0x24]
        jz      L_61082
        test    esi, esi
        jbe     L_6106c
        lea     edx, [esi*4]
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [ebx+0x20]
        add     esp, 0x4
        test    edx, edx
        mov     edi, eax
        mov     dword ptr [ebp-0x4], edi
        jz      L_61067
        mov     ecx, dword ptr [ebx+0x24]
        cmp     esi, ecx
        jnc     L_6103e
        mov     ecx, esi
L_6103e:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_6105b
        lea     eax, [edi+ecx*4]
        sub     edx, edi
        inc     ecx
L_6104b:
        mov     edi, dword ptr [edx+eax]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_6104b
        mov     edi, dword ptr [ebp-0x4]
L_6105b:
        mov     eax, dword ptr [ebx+0x20]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_61067:
        mov     dword ptr [ebx+0x20], edi
        jmp     L_6107f
L_6106c:
        mov     ecx, dword ptr [ebx+0x20]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx+0x20], 0
L_6107f:
        mov     dword ptr [ebx+0x24], esi
L_61082:
        mov     eax, dword ptr [ebx+0x2c]
        cmp     esi, eax
        mov     dword ptr [ebp-0x4], eax
        jz      L_61138
        test    esi, esi
        jbe     L_61122
        lea     edx, [esi+esi*2]
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_610c0
        push    0x435c30
        push    esi
        push    0xc
        push    edi
        call    FUN_00406c90
        mov     dword ptr [ebp-0xc], edi
        jmp     L_610c7
L_610c0:
        mov     dword ptr [ebp-0xc], 0
L_610c7:
        mov     eax, dword ptr [ebx+0x28]
        test    eax, eax
        jz      L_6111a
        mov     ebx, dword ptr [ebp-0x4]
        cmp     esi, ebx
        jnc     L_610d7
        mov     ebx, esi
L_610d7:
        mov     eax, ebx
        dec     ebx
        test    eax, eax
        jz      L_61108
        mov     eax, dword ptr [ebp-0x14]
        mov     ecx, dword ptr [ebp-0xc]
        mov     eax, dword ptr [eax+0x28]
        lea     edx, [ebx+ebx*2]
        sub     eax, ecx
        lea     edi, [ecx+edx*4]
        mov     dword ptr [ebp-0x4], eax
        inc     ebx
L_610f3:
        mov     ecx, dword ptr [ebp-0x4]
        add     ecx, edi
        push    ecx
        mov     ecx, edi
        call    FUN_0040c410
        dec     ebx
        sub     edi, 0xc
        test    ebx, ebx
        ja      L_610f3
L_61108:
        mov     edx, dword ptr [ebp-0x14]
        mov     eax, dword ptr [edx+0x28]
        push    eax
        call    FUN_004084e0
        mov     ebx, dword ptr [ebp-0x14]
        add     esp, 0x4
L_6111a:
        mov     eax, dword ptr [ebp-0xc]
        mov     dword ptr [ebx+0x28], eax
        jmp     L_61135
L_61122:
        mov     ecx, dword ptr [ebx+0x28]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx+0x28], 0
L_61135:
        mov     dword ptr [ebx+0x2c], esi
L_61138:
        mov     eax, dword ptr [ebp-0x30]
        lea     edx, [eax+eax*2]
        lea     ecx, [ebp-0x80]
        lea     edx, [edx*4 + g_007b2314]
        mov     dword ptr [ebp-0x10], 0x3
L_6114f:
        mov     eax, dword ptr [edx]
        lea     eax, [eax+eax*2]
        shl     eax, 0x2
        mov     edi, dword ptr [eax + g_007b2284]
        mov     dword ptr [ecx-0x4], edi
        mov     edi, dword ptr [eax + g_007b2288]
        mov     eax, dword ptr [eax + g_007b228c]
        mov     dword ptr [ecx], edi
        mov     dword ptr [ecx+0x4], eax
        mov     eax, dword ptr [ebp-0x10]
        add     edx, 0x4
        add     ecx, 0xc
        dec     eax
        mov     dword ptr [ebp-0x10], eax
        jnz     L_6114f
        mov     edi, dword ptr [ebp+0x8]
        mov     ecx, dword ptr [edi+0xc]
        mov     edx, dword ptr [ebp-0x24]
        mov     eax, dword ptr [edi+0x4]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [ebp-0x6c]
        push    ecx
        mov     ecx, dword ptr [ebp-0x8]
        lea     edx, [ebp-0x78]
        push    edx
        mov     edx, dword ptr [ecx]
        lea     eax, [ebp-0x84]
        push    eax
        push    edx
        call    FUN_0047f1b0
        mov     edx, dword ptr [ebp-0x24]
        mov     ecx, dword ptr [ebp-0x1c]
        mov     eax, dword ptr [ecx]
        add     esp, 0x1c
        push    0x1
        push    edx
        mov     edx, dword ptr [ebx+0x8]
        push    edx
        call    dword ptr [eax+0xc]
        cmp     byte ptr [edi+0x8], 0x1
        jnz     L_612e9
        lea     eax, [esi+esi*2]
        shl     eax, 0x2
        push    eax
        mov     edi, 0x1
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_611eb
        lea     ecx, [esi-1]
        mov     dword ptr [ebp-0x18], ecx
        mov     dword ptr [ebp-0x20], eax
        jmp     L_611f2
L_611eb:
        mov     dword ptr [ebp-0x20], 0
L_611f2:
        mov     edx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [ebp-0x20]
        push    eax
        mov     dword ptr [ebp-0x4], eax
        call    FUN_0040c410
        cmp     esi, 0x1
        mov     ebx, dword ptr [ebx]
        mov     dword ptr [ebp-0x18], ebx
        mov     byte ptr [ebx], 0
        mov     dword ptr [ebp-0x28], 0x1
        jle     L_61290
        mov     eax, dword ptr [ebp-0x4]
        mov     ecx, dword ptr [ebp-0x20]
        add     eax, 0xc
        add     ecx, 0xc
        mov     dword ptr [ebp-0xc], eax
        mov     dword ptr [ebp-0x4], ecx
L_61229:
        xor     ebx, ebx
        test    edi, edi
        jle     L_6125d
        mov     edx, dword ptr [ebp-0x20]
        mov     dword ptr [ebp-0x10], edx
L_61235:
        mov     eax, [g_007b220c]
        mov     ecx, dword ptr [ebp-0x10]
        mov     edx, dword ptr [ebp-0xc]
        push    eax
        push    ecx
        push    edx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_6125d
        mov     ecx, dword ptr [ebp-0x10]
        inc     ebx
        add     ecx, 0xc
        cmp     ebx, edi
        mov     dword ptr [ebp-0x10], ecx
        jl      L_61235
L_6125d:
        cmp     ebx, edi
        jnz     L_61276
        mov     eax, dword ptr [ebp-0x4]
        mov     ecx, eax
        add     eax, 0xc
        mov     dword ptr [ebp-0x4], eax
        mov     eax, dword ptr [ebp-0xc]
        push    eax
        inc     edi
        call    FUN_0040c410
L_61276:
        mov     eax, dword ptr [ebp-0x28]
        mov     ecx, dword ptr [ebp-0x18]
        mov     edx, dword ptr [ebp-0xc]
        mov     byte ptr [ecx+eax], bl
        inc     eax
        add     edx, 0xc
        cmp     eax, esi
        mov     dword ptr [ebp-0x28], eax
        mov     dword ptr [ebp-0xc], edx
        jl      L_61229
L_61290:
        mov     ebx, dword ptr [ebp-0x8]
        push    edi
        mov     ecx, ebx
        call    FUN_0040c2e0
        mov     eax, dword ptr [ebx+0x4]
        test    eax, eax
        jbe     L_612ca
        mov     ecx, dword ptr [ebp-0x20]
        mov     edx, ebx
        mov     ebx, dword ptr [edx]
        sub     ecx, ebx
        mov     dword ptr [ebp-0x18], ecx
        mov     dword ptr [ebp-0x4], eax
L_612b1:
        mov     eax, dword ptr [ebp-0x18]
        add     eax, ebx
        push    eax
        mov     ecx, ebx
        call    FUN_0040c410
        mov     eax, dword ptr [ebp-0x4]
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [ebp-0x4], eax
        jnz     L_612b1
L_612ca:
        mov     eax, dword ptr [ebp-0x8]
        mov     ecx, dword ptr [eax]
        mov     ebx, dword ptr [ebp-0x1c]
        mov     edx, dword ptr [ebx]
        push    edi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [ebp-0x20]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_6130d
L_612e9:
        xor     eax, eax
        test    esi, esi
        mov     edi, esi
        jle     L_612fb
        mov     ebx, dword ptr [ebx]
L_612f3:
        mov     byte ptr [ebx+eax], al
        inc     eax
        cmp     eax, esi
        jl      L_612f3
L_612fb:
        mov     edx, dword ptr [ebp-0x8]
        mov     ecx, dword ptr [ebp-0x1c]
        mov     edx, dword ptr [edx]
        mov     eax, dword ptr [ecx]
        push    edi
        push    edx
        call    dword ptr [eax+0x24]
        mov     ebx, dword ptr [ebp-0x1c]
L_6130d:
        mov     ecx, dword ptr [ebp-0x14]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [ebx]
        push    esi
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax+0x88]
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax+0x94]
        mov     esi, dword ptr [ebp+0xc]
        test    esi, esi
        jnz     L_61357
        test    edi, edi
        jle     L_613df
        mov     ecx, dword ptr [ebp-0x14]
        mov     eax, dword ptr [ecx+0x18]
        mov     dword ptr [ebp-0x3c], esi
        mov     dword ptr [ebp-0x38], esi
        mov     ecx, edi
        mov     edx, esi
L_61347:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+0x4], esi
        add     eax, 0x8
        dec     ecx
        jnz     L_61347
        jmp     L_613df
L_61357:
        mov     edx, dword ptr [ebx]
        push    0x0
        push    esi
        mov     ecx, ebx
        call    dword ptr [edx+0x14]
        test    dword ptr [esi], 0x3fff
        jbe     L_613b4
        test    edi, edi
        jle     L_613df
        mov     eax, dword ptr [ebp-0x14]
        mov     edx, dword ptr [ebp-0x8]
        mov     ecx, dword ptr [eax+0x18]
        mov     eax, dword ptr [edx]
        mov     edx, edi
L_6137a:
        fld     dword ptr [eax]
        add     eax, 0xc
        fadd    dword ptr [g_0076d064]
        add     ecx, 0x8
        dec     edx
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x50]
        fld     dword ptr [eax-0x8]
        mov     esi, dword ptr [ebp-0x50]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [ecx-0x8], esi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x4c]
        mov     esi, dword ptr [ebp-0x4c]
        mov     dword ptr [ecx-0x4], esi
        jnz     L_6137a
        jmp     L_613df
L_613b4:
        test    edi, edi
        jle     L_613df
        mov     eax, dword ptr [ebp-0x14]
        mov     eax, dword ptr [eax+0x18]
        mov     dword ptr [ebp-0x44], 0
        mov     edx, dword ptr [ebp-0x44]
        mov     dword ptr [ebp-0x40], 0
        mov     esi, dword ptr [ebp-0x40]
        mov     ecx, edi
L_613d4:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+0x4], esi
        add     eax, 0x8
        dec     ecx
        jnz     L_613d4
L_613df:
        mov     eax, dword ptr [ebp-0x14]
        mov     ecx, dword ptr [eax+0x18]
        mov     edx, dword ptr [ebx]
        push    edi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x2c]
        test    edi, edi
        mov     dword ptr [ebp-0x28], 0
        jle     L_61593
        mov     edx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [edx]
        lea     ecx, [ebp-0x60]
        mov     dword ptr [ebp-0x18], ecx
        xor     edx, edx
L_6140a:
        fld     dword ptr [edx+eax+0x8]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [edx+eax+0x4]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [edx+eax]
        mov     dword ptr [ebp-0x54], 0x3f800000
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x60]
        fstp    dword ptr [ebp-0x5c]
        fstp    dword ptr [ebp-0x58]
        fld     dword ptr [g_0076ed08]
        mov     esi, dword ptr [ebp-0x18]
        fld     dword ptr [esi+0xc]
        mov     ecx, dword ptr [esi+0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x48]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x48]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp-0x34], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x48]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x48]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x34]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0x34], ecx
        fld     dword ptr [esi+0x4]
        mov     ecx, dword ptr [esi+0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x48]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x48]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x34]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0x34], ecx
        mov     ecx, dword ptr [esi+0x8]
        fadd    dword ptr [esi+0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x48]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x48]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x34]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0x34], ecx
        mov     esi, dword ptr [ebp-0x14]
        mov     ebx, dword ptr [ebp-0x28]
        mov     eax, dword ptr [esi+0x20]
        mov     ecx, dword ptr [ebp-0x34]
        mov     dword ptr [eax+ebx*4], ecx
        mov     eax, dword ptr [ebp-0x8]
        mov     eax, dword ptr [eax]
        fld     dword ptr [edx+eax+0x8]
        mov     ecx, edx
        fld     dword ptr [edx+eax+0x4]
        add     ecx, dword ptr [esi+0x28]
        fld     dword ptr [edx+eax]
        inc     ebx
        fld     st(0)
        add     edx, 0xc
        cmp     ebx, edi
        fmul    st(0), st(1)
        fld     st(2)
        mov     dword ptr [ebp-0x28], ebx
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fsqrt
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [edx+eax-0xc]
        fstp    dword ptr [ecx]
        fld     st(0)
        fmul    dword ptr [edx+eax-0x8]
        fstp    dword ptr [ecx+0x4]
        fmul    dword ptr [edx+eax-0x4]
        fstp    dword ptr [ecx+0x8]
        jl      L_6140a
L_61593:
        mov     ebx, dword ptr [ebp-0x14]
        mov     esi, dword ptr [ebp-0x1c]
        mov     eax, dword ptr [ebx+0x20]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0xa4]
        mov     eax, dword ptr [ebx+0x28]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0xac]
        mov     edx, dword ptr [esi]
        mov     eax, 0x41800000
        mov     dword ptr [esi+0x98], eax
        mov     dword ptr [esi+0x9c], eax
        mov     eax, dword ptr [ebp+0x10]
        push    0x1
        xor     edi, edi
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi+0x90], edi
        mov     dword ptr [esi+0x94], edi
        call    dword ptr [edx+0x14]
        mov     ecx, dword ptr [ebp-0x2c]
        push    esi
        call    FUN_00487ce0
        dec     word ptr [esi+0x8]
        cmp     word ptr [esi+0x8], di
        jnz     L_61602
        cmp     esi, edi
        jz      L_61602
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L_61602:
        mov     eax, dword ptr [ebp-0x30]
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [ebp-0x30], eax
        jl      L_60daf
        call    FUN_006f49a0
        mov     eax, dword ptr [ebp-0x2c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
