/*
 * FUN_0046b200 (2441 B) — MLR (MidLevelRenderer) graphics library.
 * Main render/lighting pass: allocates/resizes per-frame buffers, computes
 * vertex colors (FPU-heavy RGBA8 packing), normalizes vectors (fsqrt), and
 * dispatches through virtual calls on the renderer object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9590;
extern int g_007da724;
extern int g_007b958c;
extern double g_0076e3e8;
extern int g_007da5f0;
extern int g_007d9950;
extern float g_0076d064;
extern float g_0076d070;
extern float g_0076efe4;
extern int g_007b220c;
extern int g_007b2314;
extern int g_007b2284;
extern int g_007b2288;
extern int g_007b228c;
extern int g_0076b2ec;

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00467da0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_00423b80(void);
extern void __cdecl FUN_00439bc0(void);
extern void __cdecl FUN_0047f1b0(void);
extern void __cdecl FUN_00487ce0(void);

__declspec(naked) void FUN_0046b200(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xa0
        mov     eax, dword ptr [g_007b9590]
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
        jz      L_b23c
        mov     ecx, dword ptr [g_007da724]
        push    ecx
        push    0x14
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [ebp-0x34], eax
        jmp     L_b23f
L_b23c:
        mov     dword ptr [ebp-0x34], edi
L_b23f:
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
        mov     dword ptr [ebp-0x2c], eax
        lea     eax, [eax+eax*2]
        cmp     eax, 0x100
        jl      L_b28c
        mov     dword ptr [ebp-0x2c], 0x55
L_b28c:
        mov     dword ptr [ebp-0x30], edi
L_b28f:
        xor     edi, edi
        push    0x9c
        mov     dword ptr [g_007da5f0], edi
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L_b2bb
        mov     ecx, dword ptr [g_007d9950]
        push    ecx
        mov     ecx, eax
        call    FUN_00467da0
        mov     dword ptr [ebp-0x10], eax
        jmp     L_b2be
L_b2bb:
        mov     dword ptr [ebp-0x10], edi
L_b2be:
        mov     edx, dword ptr [ebp-0x10]
        mov     ebx, dword ptr [edx+0xc]
        mov     eax, dword ptr [ebx+0xc]
        mov     esi, dword ptr [ebp-0x2c]
        cmp     esi, eax
        mov     dword ptr [ebp-0x18], ebx
        jz      L_b32d
        cmp     esi, edi
        jbe     L_b319
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx+0x8]
        add     esp, 0x4
        test    edi, edi
        mov     dword ptr [ebp-0x4], eax
        jz      L_b311
        mov     eax, dword ptr [ebx+0xc]
        cmp     esi, eax
        jnc     L_b2f1
        mov     eax, esi
L_b2f1:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_b308
L_b2fb:
        mov     ecx, dword ptr [ebp-0x4]
        mov     dl, byte ptr [edi+eax]
        mov     byte ptr [eax+ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        __emit 0x75 /* jnz L_b2fb: MSVC6 miscomputes backward rel-offset (off-by-3) */
        __emit 0xF3
L_b308:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_b311:
        mov     eax, dword ptr [ebp-0x4]
        mov     dword ptr [ebx+0x8], eax
        jmp     L_b328
L_b319:
        mov     ecx, dword ptr [ebx+0x8]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx+0x8], edi
L_b328:
        mov     dword ptr [ebx+0xc], esi
        xor     edi, edi
L_b32d:
        cmp     esi, edi
        jle     L_b349
        mov     edi, dword ptr [ebx+0x8]
        mov     ecx, esi
        mov     edx, ecx
        shr     ecx, 0x2
        mov     eax, 0x3030303
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
L_b349:
        lea     eax, [ebx+0x10]
        lea     edi, [esi+esi*2]
        mov     esi, dword ptr [eax+0x4]
        cmp     edi, esi
        mov     dword ptr [ebp-0x8], eax
        mov     dword ptr [ebp-0x1c], edi
        jz      L_b3fc
        test    edi, edi
        jbe     L_b3e2
        lea     eax, [edi+edi*2]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_b382
        lea     ecx, [edi-1]
        mov     dword ptr [ebp-0x14], ecx
        mov     dword ptr [ebp-0x4], eax
        jmp     L_b389
L_b382:
        mov     dword ptr [ebp-0x4], 0x0
L_b389:
        mov     edx, dword ptr [ebp-0x8]
        cmp     dword ptr [edx], 0x0
        jz      L_b3d8
        cmp     edi, esi
        mov     ebx, edi
        jc      L_b399
        mov     ebx, esi
L_b399:
        mov     eax, ebx
        dec     ebx
        test    eax, eax
        jz      L_b3c7
L_b3a0:
        mov     edx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ebp-0x4]
        mov     esi, dword ptr [edx]
        lea     ecx, [ebx+ebx*2]
        sub     esi, eax
        lea     edi, [eax+ecx*4]
        inc     ebx
L_b3b1:
        lea     eax, [esi+edi]
        push    eax
        mov     ecx, edi
        call    FUN_0040ccd0
        dec     ebx
        sub     edi, 0xc
        test    ebx, ebx
        ja      L_b3b1
        mov     edi, dword ptr [ebp-0x1c]
L_b3c7:
        mov     ecx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ecx]
        push    eax
        call    FUN_004084e0
        mov     ebx, dword ptr [ebp-0x18]
        add     esp, 0x4
L_b3d8:
        mov     edx, dword ptr [ebp-0x4]
        mov     eax, dword ptr [ebp-0x8]
        mov     dword ptr [eax], edx
        jmp     L_b3f6
L_b3e2:
        mov     ecx, dword ptr [eax]
        push    ecx
        call    FUN_004084e0
        mov     edx, dword ptr [ebp-0x8]
        add     esp, 0x4
        mov     dword ptr [edx], 0x0
L_b3f6:
        mov     eax, dword ptr [ebp-0x8]
        mov     dword ptr [eax+0x4], edi
L_b3fc:
        cmp     edi, dword ptr [ebx+0x4]
        jz      L_b45b
        test    edi, edi
        jbe     L_b447
        push    edi
        call    FUN_004084d0
        mov     esi, dword ptr [ebx]
        add     esp, 0x4
        test    esi, esi
        mov     dword ptr [ebp-0x4], eax
        jz      L_b440
        mov     eax, dword ptr [ebx+0x4]
        cmp     edi, eax
        jnc     L_b420
        mov     eax, edi
L_b420:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_b437
L_b42a:
        mov     ecx, dword ptr [ebp-0x4]
        mov     dl, byte ptr [esi+eax]
        mov     byte ptr [eax+ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        __emit 0x75 /* jnz L_b42a: MSVC6 miscomputes backward rel-offset (off-by-3) */
        __emit 0xF3
L_b437:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_b440:
        mov     eax, dword ptr [ebp-0x4]
        mov     dword ptr [ebx], eax
        jmp     L_b458
L_b447:
        mov     ecx, dword ptr [ebx]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx], 0x0
L_b458:
        mov     dword ptr [ebx+0x4], edi
L_b45b:
        mov     edx, dword ptr [ebp-0x18]
        mov     ebx, dword ptr [ebp-0x2c]
        mov     eax, dword ptr [edx+0x1c]
        lea     esi, [edx+0x18]
        lea     ebx, [ebx+ebx*2]
        shl     ebx, 0x1
        cmp     ebx, eax
        mov     dword ptr [ebp-0x28], esi
        mov     dword ptr [ebp-0x14], esi
        jz      L_b510
        test    ebx, ebx
        jbe     L_b4fc
        lea     eax, [ebx*8]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        mov     dword ptr [ebp-0x4], eax
        jz      L_b4ad
        push    0x423b70
        push    ebx
        push    0x8
        mov     ecx, eax
        push    ecx
        call    FUN_00406c90
        mov     edx, dword ptr [ebp-0x4]
        mov     dword ptr [ebp-0x4], edx
        jmp     L_b4b4
L_b4ad:
        mov     dword ptr [ebp-0x4], 0x0
L_b4b4:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      L_b4f5
        mov     edx, dword ptr [esi+0x4]
        cmp     ebx, edx
        jnc     L_b4c3
        mov     edx, ebx
L_b4c3:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_b4ea
L_b4ca:
        mov     esi, dword ptr [ebp-0x4]
        lea     eax, [esi+edx*8]
        sub     ecx, esi
        inc     edx
L_b4d3:
        mov     esi, dword ptr [ecx+eax]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx+eax+0x4]
        mov     dword ptr [eax+0x4], esi
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_b4d3
        mov     esi, dword ptr [ebp-0x28]
L_b4ea:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_b4f5:
        mov     ecx, dword ptr [ebp-0x4]
        mov     dword ptr [esi], ecx
        jmp     L_b50d
L_b4fc:
        mov     edx, dword ptr [esi]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
L_b50d:
        mov     dword ptr [esi+0x4], ebx
L_b510:
        mov     eax, dword ptr [ebp-0x18]
        lea     esi, [eax+0x20]
        cmp     edi, dword ptr [esi+0x4]
        mov     dword ptr [ebp-0x40], esi
        mov     dword ptr [ebp-0x14], esi
        jz      L_b589
        test    edi, edi
        jbe     L_b575
        lea     ecx, [edi*4]
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        test    edx, edx
        mov     ebx, eax
        mov     dword ptr [ebp-0x20], ebx
        jz      L_b571
        mov     ecx, dword ptr [esi+0x4]
        cmp     edi, ecx
        jnc     L_b549
        mov     ecx, edi
L_b549:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_b566
L_b550:
        lea     eax, [ebx+ecx*4]
        sub     edx, ebx
        inc     ecx
L_b556:
        mov     ebx, dword ptr [edx+eax]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_b556
        mov     ebx, dword ptr [ebp-0x20]
L_b566:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_b571:
        mov     dword ptr [esi], ebx
        jmp     L_b586
L_b575:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
L_b586:
        mov     dword ptr [esi+0x4], edi
L_b589:
        mov     edx, dword ptr [ebp-0x18]
        mov     eax, dword ptr [edx+0x2c]
        cmp     edi, eax
        lea     esi, [edx+0x28]
        mov     dword ptr [ebp-0x4], esi
        mov     dword ptr [ebp-0x14], esi
        jz      L_b63c
        test    edi, edi
        jbe     L_b628
        lea     eax, [edi+edi*2]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 0x4
        test    ebx, ebx
        jz      L_b5d0
        push    0x435c30
        push    edi
        push    0xc
        push    ebx
        call    FUN_00406c90
        mov     dword ptr [ebp-0xc], ebx
        jmp     L_b5d7
L_b5d0:
        mov     dword ptr [ebp-0xc], 0x0
L_b5d7:
        cmp     dword ptr [esi], 0x0
        jz      L_b621
        mov     ebx, dword ptr [esi+0x4]
        cmp     edi, ebx
        jnc     L_b5e5
        mov     ebx, edi
L_b5e5:
        mov     ecx, ebx
        dec     ebx
        test    ecx, ecx
        jz      L_b613
L_b5ec:
        mov     ecx, dword ptr [ebp-0x4]
        mov     eax, dword ptr [ebp-0xc]
        mov     esi, dword ptr [ecx]
        lea     edx, [ebx+ebx*2]
        sub     esi, eax
        lea     edi, [eax+edx*4]
        inc     ebx
L_b5fd:
        lea     edx, [esi+edi]
        push    edx
        mov     ecx, edi
        call    FUN_0040c410
        dec     ebx
        sub     edi, 0xc
        test    ebx, ebx
        ja      L_b5fd
        mov     esi, dword ptr [ebp-0x4]
L_b613:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        mov     edi, dword ptr [ebp-0x1c]
        add     esp, 0x4
L_b621:
        mov     eax, dword ptr [ebp-0xc]
        mov     dword ptr [esi], eax
        jmp     L_b639
L_b628:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
L_b639:
        mov     dword ptr [esi+0x4], edi
L_b63c:
        mov     eax, dword ptr [ebp-0x30]
        lea     edx, [eax+eax*2]
        lea     ecx, [ebp-0x9c]
        lea     edx, [edx*4 + g_007b2314]
        mov     edi, 0x3
L_b654:
        mov     eax, dword ptr [edx]
        lea     eax, [eax+eax*2]
        shl     eax, 0x2
        mov     esi, dword ptr [eax + g_007b2284]
        mov     dword ptr [ecx-0x4], esi
        mov     esi, dword ptr [eax + g_007b2288]
        mov     eax, dword ptr [eax + g_007b228c]
        mov     dword ptr [ecx], esi
        mov     dword ptr [ecx+0x4], eax
        add     edx, 0x4
        add     ecx, 0xc
        dec     edi
        jnz     L_b654
        mov     esi, dword ptr [ebp+0x8]
        mov     ecx, dword ptr [esi+0xc]
        mov     edi, dword ptr [ebp-0x2c]
        mov     edx, dword ptr [esi+0x4]
        push    ecx
        push    edi
        push    edx
        lea     eax, [ebp-0x88]
        push    eax
        mov     eax, dword ptr [ebp-0x8]
        lea     ecx, [ebp-0x94]
        push    ecx
        mov     ecx, dword ptr [eax]
        lea     edx, [ebp-0xa0]
        push    edx
        push    ecx
        call    FUN_0047f1b0
        mov     eax, dword ptr [ebp-0x18]
        mov     ecx, dword ptr [ebp-0x10]
        mov     eax, dword ptr [eax+0x8]
        mov     edx, dword ptr [ecx]
        add     esp, 0x1c
        push    0x1
        push    edi
        push    eax
        call    dword ptr [edx+0xc]
        cmp     byte ptr [esi+0x8], 0x1
        jnz     L_b7e3
        mov     edi, dword ptr [ebp-0x1c]
        lea     ecx, [edi+edi*2]
        shl     ecx, 0x2
        mov     esi, 0x1
        push    ecx
        mov     dword ptr [ebp-0xc], esi
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_b6f4
        dec     edi
        mov     dword ptr [ebp-0x14], edi
        mov     dword ptr [ebp-0x24], eax
        jmp     L_b6fb
L_b6f4:
        mov     dword ptr [ebp-0x24], 0x0
L_b6fb:
        mov     edx, dword ptr [ebp-0x8]
        mov     ebx, dword ptr [edx]
        mov     ecx, dword ptr [ebp-0x24]
        push    ebx
        call    FUN_0040c410
        mov     eax, dword ptr [ebp-0x18]
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp-0x14], eax
        mov     byte ptr [eax], 0x0
        cmp     dword ptr [ebp-0x1c], esi
        mov     edi, esi
        mov     dword ptr [ebp-0x20], edi
        jle     L_b78f
        mov     ecx, dword ptr [ebp-0x24]
        add     ebx, 0xc
        add     ecx, 0xc
        mov     dword ptr [ebp-0xc], ebx
        mov     dword ptr [ebp-0x38], ecx
        xor     ebx, ebx
L_b72d:
        test    esi, esi
        jle     L_b759
L_b733:
        mov     edi, dword ptr [ebp-0x24]
        mov     edx, dword ptr [g_007b220c]
        mov     eax, dword ptr [ebp-0xc]
        push    edx
        push    edi
        push    eax
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_b756
        inc     ebx
        add     edi, 0xc
        cmp     ebx, esi
        __emit 0x7C /* jl L_b736: MSVC6 miscomputes backward rel-offset (off-by-3) */
        __emit 0xE0
L_b756:
        mov     edi, dword ptr [ebp-0x20]
L_b759:
        cmp     ebx, esi
        jnz     L_b772
        mov     eax, dword ptr [ebp-0x38]
        mov     edx, dword ptr [ebp-0xc]
        mov     ecx, eax
        add     eax, 0xc
        push    edx
        inc     esi
        mov     dword ptr [ebp-0x38], eax
        call    FUN_0040c410
L_b772:
        mov     eax, dword ptr [ebp-0x14]
        mov     ecx, dword ptr [ebp-0xc]
        mov     byte ptr [eax+edi], bl
        mov     eax, dword ptr [ebp-0x1c]
        inc     edi
        add     ecx, 0xc
        cmp     edi, eax
        mov     dword ptr [ebp-0x20], edi
        mov     dword ptr [ebp-0xc], ecx
        __emit 0x7C /* jl L_b72d: MSVC6 miscomputes backward rel-offset (off-by-2) */
        __emit 0xA1
        mov     dword ptr [ebp-0xc], esi
L_b78f:
        mov     edi, dword ptr [ebp-0x8]
        push    esi
        mov     ecx, edi
        call    FUN_0040c2e0
        mov     eax, dword ptr [edi+0x4]
        test    eax, eax
        jbe     L_b7c4
L_b7a1:
        mov     ebx, dword ptr [ebp-0x24]
        mov     ecx, edi
        mov     edi, dword ptr [ecx]
        sub     ebx, edi
        mov     dword ptr [ebp-0x20], eax
L_b7ad:
        lea     edx, [ebx+edi]
        push    edx
        mov     ecx, edi
        call    FUN_0040c410
        mov     eax, dword ptr [ebp-0x20]
        add     edi, 0xc
        dec     eax
        mov     dword ptr [ebp-0x20], eax
        jnz     L_b7ad
L_b7c4:
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ecx]
        mov     edi, dword ptr [ebp-0x10]
        mov     eax, dword ptr [edi]
        push    esi
        push    edx
        mov     ecx, edi
        call    dword ptr [eax+0x24]
        mov     eax, dword ptr [ebp-0x24]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_b850
L_b7e3:
        mov     eax, dword ptr [ebp-0x1c]
        xor     ecx, ecx
        mov     esi, eax
        xor     edi, edi
        cmp     eax, ecx
        mov     dword ptr [ebp-0xc], esi
        jle     L_b83e
        mov     ebx, dword ptr [ebp-0x18]
        jmp     L_b7fa
L_b7f8:
        xor     ecx, ecx
L_b7fa:
        mov     dword ptr [ebp-0x48], ecx
        mov     dword ptr [ebp-0x44], ecx
        mov     ecx, edi
        and     ecx, 0xff
        push    ecx
        lea     ecx, [ebp-0x48]
        call    FUN_00423b80
        lea     edx, [ebp-0x48]
        cmp     ebx, edx
        jz      L_b823
        lea     eax, [ebp-0x48]
        push    eax
        mov     ecx, ebx
        call    FUN_00439bc0
L_b823:
        mov     eax, dword ptr [ebp-0x48]
        test    eax, eax
        jz      L_b833
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_b833:
        mov     eax, dword ptr [ebp-0x1c]
        inc     edi
        add     ebx, 0x8
        cmp     edi, eax
        jl      L_b7f8
L_b83e:
        mov     ecx, dword ptr [ebp-0x10]
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [ebp-0x8]
        mov     eax, dword ptr [eax]
        push    eax
        call    dword ptr [edx+0x24]
        mov     edi, dword ptr [ebp-0x10]
L_b850:
        mov     eax, dword ptr [ebp-0x1c]
        mov     ecx, dword ptr [ebp-0x18]
        mov     edx, dword ptr [edi]
        push    eax
        mov     eax, dword ptr [ecx]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x88]
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx+0x94]
        mov     ebx, dword ptr [ebp+0xc]
        test    ebx, ebx
        jnz     L_b89e
        test    esi, esi
        jle     L_b965
        mov     eax, dword ptr [ebp-0x28]
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp-0x50], ebx
        mov     dword ptr [ebp-0x4c], ebx
        mov     ecx, esi
        mov     edx, ebx
        mov     edi, ebx
L_b88e:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+0x4], edi
        add     eax, 0x8
        dec     ecx
        jnz     L_b88e
        jmp     L_b965
L_b89e:
        mov     edx, dword ptr [edi]
        push    0x0
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx+0x14]
        test    dword ptr [ebx], 0x3fff
        jbe     L_b93a
        test    esi, esi
        jle     L_b965
        mov     eax, dword ptr [ebp-0x28]
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ecx]
        mov     ecx, edx
        lea     edx, [edx+esi*8]
        mov     edi, esi
L_b8cd:
        fld     dword ptr [eax]
        add     ecx, 0x8
        fadd    dword ptr [g_0076d064]
        add     edx, 0x8
        add     eax, 0xc
        dec     edi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x68]
        fld     dword ptr [eax-0x8]
        mov     ebx, dword ptr [ebp-0x68]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [ecx-0x8], ebx
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x64]
        fld     dword ptr [eax-0xc]
        mov     ebx, dword ptr [ebp-0x64]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [ecx-0x4], ebx
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x58]
        fld     dword ptr [eax-0x4]
        mov     ebx, dword ptr [ebp-0x58]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [edx-0x8], ebx
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x54]
        mov     ebx, dword ptr [ebp-0x54]
        mov     dword ptr [edx-0x4], ebx
        jnz     L_b8cd
        jmp     L_b965
L_b93a:
        lea     ecx, [esi+esi]
        test    ecx, ecx
        jle     L_b965
        mov     edx, dword ptr [ebp-0x28]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebp-0x60], 0x0
        mov     edx, dword ptr [ebp-0x60]
        mov     dword ptr [ebp-0x5c], 0x0
        mov     edi, dword ptr [ebp-0x5c]
L_b95a:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+0x4], edi
        add     eax, 0x8
        dec     ecx
        jnz     L_b95a
L_b965:
        mov     ecx, dword ptr [ebp-0x10]
        mov     eax, dword ptr [ecx]
        lea     edx, [esi+esi]
        push    edx
        mov     edx, dword ptr [ebp-0x28]
        mov     edx, dword ptr [edx]
        push    edx
        call    dword ptr [eax+0x2c]
        xor     edi, edi
        test    esi, esi
        jle     L_bb15
        mov     eax, dword ptr [ebp-0x8]
        mov     eax, dword ptr [eax]
        lea     ecx, [ebp-0x7c]
        mov     dword ptr [ebp-0x14], ecx
        xor     edx, edx
L_b98e:
        fld     dword ptr [eax+edx+0x8]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [eax+edx+0x4]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [eax+edx]
        mov     dword ptr [ebp-0x70], 0x3f800000
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x7c]
        fstp    dword ptr [ebp-0x78]
        fstp    dword ptr [ebp-0x74]
        fld     dword ptr [g_0076efe4]
        mov     esi, dword ptr [ebp-0x14]
        fld     dword ptr [esi+0xc]
        mov     ecx, dword ptr [esi+0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x6c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x6c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp-0x3c], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x6c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x6c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x3c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0x3c], ecx
        fld     dword ptr [esi+0x4]
        mov     ecx, dword ptr [esi+0x4]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x6c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x6c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x3c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0x3c], ecx
        mov     ecx, dword ptr [esi+0x8]
        fadd    dword ptr [esi+0x8]
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x6c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x6c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x3c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0x3c], ecx
        mov     eax, dword ptr [ebp-0x40]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [ebp-0x3c]
        mov     dword ptr [ecx+edi*4], eax
        mov     ecx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ecx]
        fld     dword ptr [eax+edx+0x8]
        mov     ecx, dword ptr [ebp-0x4]
        fld     dword ptr [eax+edx+0x4]
        mov     ecx, dword ptr [ecx]
        fld     dword ptr [eax+edx]
        add     ecx, edx
        fld     st(0)
        inc     edi
        fmul    st(0), st(1)
        add     edx, 0xc
        fld     st(2)
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
        fmul    dword ptr [eax+edx-0xc]
        fstp    dword ptr [ecx]
        fld     st(0)
        fmul    dword ptr [eax+edx-0x8]
        fstp    dword ptr [ecx+0x4]
        fmul    dword ptr [eax+edx-0x4]
        fstp    dword ptr [ecx+0x8]
        mov     ecx, dword ptr [ebp-0xc]
        cmp     edi, ecx
        jl      L_b98e
L_bb15:
        mov     eax, dword ptr [ebp-0x40]
        mov     edi, dword ptr [ebp-0xc]
        mov     ecx, dword ptr [eax]
        mov     esi, dword ptr [ebp-0x10]
        mov     edx, dword ptr [esi]
        push    edi
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx+0xa4]
        mov     eax, dword ptr [ebp-0x4]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esi]
        push    edi
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx+0xac]
        mov     eax, dword ptr [ebp+0x10]
        mov     edx, dword ptr [esi]
        push    0x1
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x14]
        mov     ecx, dword ptr [ebp-0x34]
        push    esi
        call    FUN_00487ce0
        dec     word ptr [esi+0x8]
        cmp     word ptr [esi+0x8], 0x0
        jnz     L_bb6a
        test    esi, esi
        jz      L_bb6a
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L_bb6a:
        mov     eax, dword ptr [ebp-0x30]
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [ebp-0x30], eax
        jl      L_b28f
        call    FUN_006f49a0
        mov     eax, dword ptr [ebp-0x34]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
