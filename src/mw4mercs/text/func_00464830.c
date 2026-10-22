/*
 * FUN_00464830 (2008 B) — MLR mesh/lightmap build driver.
 * Allocates a mesh object, builds vertex/index/color buffers, computes
 * lightmap UVs (FPU), and drives the render object through its vtable.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9590;
extern int g_007da724;
extern int g_007b958c;
extern int g_007da5f0;
extern int g_007d9928;
extern int g_007b220c;
extern double g_0076e3e8;
extern float g_0076d064;
extern float g_0076d070;
extern float g_0076edfc;
extern int g_007b2314;
extern int g_007b2284;
extern int g_007b2288;
extern int g_007b228c;
extern void *g_0076b2ec;

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_004618d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0047f1b0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_00487ce0(void);

__declspec(naked) void FUN_00464830(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x84
        mov     eax, dword ptr [g_007b9590]
        push    ebx
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        xor     edi, edi
        add     esp, 4
        cmp     eax, edi
        jz      L_486c
        mov     ecx, dword ptr [g_007da724]
        push    ecx
        push    0x14
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [ebp-0x2c], eax
        jmp     L_486f
L_486c:
        mov     dword ptr [ebp-0x2c], edi
L_486f:
        call    FUN_006f49a0
        mov     edx, dword ptr [g_007b958c]
        push    edx
        call    FUN_006f4950
        fld     qword ptr [g_0076e3e8]
        mov     esi, dword ptr [ebp+8]
        fild    dword ptr [esi+4]
        call    FUN_0075db86
        fmul    dword ptr [esi+0x10]
        sub     esp, 8
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2ec]
        add     esp, 8
        call    FUN_0075db4a
        mov     dword ptr [ebp-0x24], eax
        lea     eax, [eax+eax*2]
        cmp     eax, 0x100
        jl      L_48bc
        mov     dword ptr [ebp-0x24], 0x55
L_48bc:
        mov     dword ptr [ebp-0x28], edi
L_48bf:
        xor     edi, edi
        push    0xa8
        mov     dword ptr [g_007da5f0], edi
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      L_48eb
        mov     ecx, dword ptr [g_007d9928]
        push    ecx
        mov     ecx, eax
        call    FUN_004618d0
        mov     dword ptr [ebp-0x20], eax
        jmp     L_48ee
L_48eb:
        mov     dword ptr [ebp-0x20], edi
L_48ee:
        mov     edx, dword ptr [ebp-0x20]
        mov     ebx, dword ptr [edx+0xc]
        mov     eax, dword ptr [ebx+0xc]
        mov     esi, dword ptr [ebp-0x24]
        cmp     esi, eax
        mov     dword ptr [ebp-8], ebx
        jz      L_495d
        cmp     esi, edi
        jbe     L_4949
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx+8]
        add     esp, 4
        test    edi, edi
        mov     dword ptr [ebp-4], eax
        jz      L_4941
        mov     eax, dword ptr [ebx+0xc]
        cmp     esi, eax
        jnc     L_4921
        mov     eax, esi
L_4921:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_4938
        mov     ecx, dword ptr [ebp-4]
L_492b:
        mov     dl, byte ptr [edi+eax]
        mov     byte ptr [eax+ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_492b
L_4938:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_4941:
        mov     eax, dword ptr [ebp-4]
        mov     dword ptr [ebx+8], eax
        jmp     L_4958
L_4949:
        mov     ecx, dword ptr [ebx+8]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx+8], edi
L_4958:
        mov     dword ptr [ebx+0xc], esi
        xor     edi, edi
L_495d:
        cmp     esi, edi
        jle     L_4979
        mov     edi, dword ptr [ebx+8]
        mov     ecx, esi
        mov     edx, ecx
        shr     ecx, 2
        mov     eax, 0x3030303
        rep stosd
        mov     ecx, edx
        and     ecx, 3
        rep stosb
L_4979:
        mov     eax, dword ptr [ebx+0x14]
        lea     edi, [ebx+0x10]
        lea     esi, [esi+esi*2]
        cmp     esi, eax
        mov     dword ptr [ebp-0xc], edi
        jz      L_4a22
        test    esi, esi
        jbe     L_4a0e
        lea     eax, [esi+esi*2]
        shl     eax, 2
        push    eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_49af
        lea     ecx, [esi-1]
        mov     dword ptr [ebp-0x18], ecx
        mov     dword ptr [ebp-0x14], eax
        jmp     L_49b6
L_49af:
        mov     dword ptr [ebp-0x14], 0
L_49b6:
        cmp     dword ptr [edi], 0
        jz      L_4a07
        mov     eax, dword ptr [edi+4]
        cmp     esi, eax
        jnc     L_49c4
        mov     eax, esi
L_49c4:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_49fc
        mov     edx, dword ptr [ebp-0x14]
        lea     ecx, [eax+eax*2]
        lea     edi, [edx+ecx*4]
        mov     ecx, dword ptr [ebp-0xc]
        mov     ecx, dword ptr [ecx]
        sub     ecx, edx
        mov     dword ptr [ebp-0x10], ecx
        lea     ebx, [eax+1]
L_49e1:
        mov     edx, dword ptr [ebp-0x10]
        add     edx, edi
        push    edx
        mov     ecx, edi
        call    FUN_0040ccd0
        dec     ebx
        sub     edi, 0xc
        test    ebx, ebx
        ja      L_49e1
        mov     edi, dword ptr [ebp-0xc]
        mov     ebx, dword ptr [ebp-8]
L_49fc:
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_4a07:
        mov     eax, dword ptr [ebp-0x14]
        mov     dword ptr [edi], eax
        jmp     L_4a1f
L_4a0e:
        mov     ecx, dword ptr [edi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], 0
L_4a1f:
        mov     dword ptr [edi+4], esi
L_4a22:
        cmp     esi, dword ptr [ebx+4]
        jz      L_4a81
        test    esi, esi
        jbe     L_4a6d
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx]
        add     esp, 4
        test    edi, edi
        mov     dword ptr [ebp-4], eax
        jz      L_4a66
        mov     eax, dword ptr [ebx+4]
        cmp     esi, eax
        jnc     L_4a46
        mov     eax, esi
L_4a46:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_4a5d
        mov     ecx, dword ptr [ebp-4]
L_4a50:
        mov     dl, byte ptr [edi+eax]
        mov     byte ptr [eax+ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_4a50
L_4a5d:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_4a66:
        mov     eax, dword ptr [ebp-4]
        mov     dword ptr [ebx], eax
        jmp     L_4a7e
L_4a6d:
        mov     ecx, dword ptr [ebx]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx], 0
L_4a7e:
        mov     dword ptr [ebx+4], esi
L_4a81:
        cmp     esi, dword ptr [ebx+0x1c]
        jz      L_4b0c
        test    esi, esi
        jbe     L_4af6
        lea     edx, [esi*8]
        push    edx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_4aac
        lea     ecx, [esi-1]
        mov     dword ptr [ebp-0x18], ecx
        mov     edi, eax
        jmp     L_4aae
L_4aac:
        xor     edi, edi
L_4aae:
        mov     ecx, dword ptr [ebx+0x18]
        test    ecx, ecx
        mov     dword ptr [ebp-4], edi
        jz      L_4af1
        mov     edx, dword ptr [ebx+0x1c]
        cmp     esi, edx
        jnc     L_4ac1
        mov     edx, esi
L_4ac1:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_4ae5
        lea     eax, [edi+edx*8]
        sub     ecx, edi
        inc     edx
L_4ace:
        mov     edi, dword ptr [ecx+eax]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ecx+eax+4]
        mov     dword ptr [eax+4], edi
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_4ace
        mov     edi, dword ptr [ebp-4]
L_4ae5:
        mov     eax, dword ptr [ebx+0x18]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_4af1:
        mov     dword ptr [ebx+0x18], edi
        jmp     L_4b09
L_4af6:
        mov     ecx, dword ptr [ebx+0x18]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx+0x18], 0
L_4b09:
        mov     dword ptr [ebx+0x1c], esi
L_4b0c:
        cmp     esi, dword ptr [ebx+0x24]
        jz      L_4b7e
        test    esi, esi
        jbe     L_4b68
        lea     edx, [esi*4]
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [ebx+0x20]
        add     esp, 4
        test    edx, edx
        mov     edi, eax
        mov     dword ptr [ebp-0x10], edi
        jz      L_4b63
        mov     ecx, dword ptr [ebx+0x24]
        cmp     esi, ecx
        jnc     L_4b3a
        mov     ecx, esi
L_4b3a:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_4b57
        lea     eax, [edi+ecx*4]
        sub     edx, edi
        inc     ecx
L_4b47:
        mov     edi, dword ptr [edx+eax]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_4b47
        mov     edi, dword ptr [ebp-0x10]
L_4b57:
        mov     eax, dword ptr [ebx+0x20]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_4b63:
        mov     dword ptr [ebx+0x20], edi
        jmp     L_4b7b
L_4b68:
        mov     ecx, dword ptr [ebx+0x20]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebx+0x20], 0
L_4b7b:
        mov     dword ptr [ebx+0x24], esi
L_4b7e:
        mov     eax, dword ptr [ebp-0x28]
        lea     edx, [eax+eax*2]
        lea     ecx, [ebp-0x80]
        lea     edx, [edx*4+g_007b2314]
        mov     edi, 3
L_4b93:
        mov     eax, dword ptr [edx]
        lea     eax, [eax+eax*2]
        shl     eax, 2
        mov     ebx, dword ptr [eax+g_007b2284]
        mov     dword ptr [ecx-4], ebx
        mov     ebx, dword ptr [eax+g_007b2288]
        mov     eax, dword ptr [eax+g_007b228c]
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx+4], eax
        add     edx, 4
        add     ecx, 0xc
        dec     edi
        jnz     L_4b93
        mov     edi, dword ptr [ebp+8]
        mov     ecx, dword ptr [edi+0xc]
        mov     edx, dword ptr [ebp-0x24]
        mov     eax, dword ptr [edi+4]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [ebp-0x6c]
        push    ecx
        mov     ecx, dword ptr [ebp-0xc]
        lea     edx, [ebp-0x78]
        push    edx
        mov     edx, dword ptr [ecx]
        lea     eax, [ebp-0x84]
        push    eax
        push    edx
        call    FUN_0047f1b0
        mov     ecx, dword ptr [ebp-0x24]
        mov     edx, dword ptr [ebp-8]
        mov     ebx, dword ptr [ebp-0x20]
        mov     eax, dword ptr [ebx]
        add     esp, 0x1c
        push    1
        push    ecx
        mov     ecx, dword ptr [edx+8]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax+0xc]
        cmp     byte ptr [edi+8], 1
        jnz     L_4d29
        lea     edx, [esi+esi*2]
        shl     edx, 2
        push    edx
        mov     edi, 1
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_4c2e
        lea     ecx, [esi-1]
        mov     dword ptr [ebp-0x18], ecx
        mov     dword ptr [ebp-0x1c], eax
        jmp     L_4c35
L_4c2e:
        mov     dword ptr [ebp-0x1c], 0
L_4c35:
        mov     edx, dword ptr [ebp-0xc]
        mov     ebx, dword ptr [edx]
        mov     ecx, dword ptr [ebp-0x1c]
        push    ebx
        call    FUN_0040c410
        cmp     esi, 1
        mov     eax, dword ptr [ebp-8]
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp-0x18], eax
        mov     byte ptr [eax], 0
        mov     dword ptr [ebp-0x10], 1
        jle     L_4cd0
        mov     ecx, dword ptr [ebp-0x1c]
        add     ebx, 0xc
        add     ecx, 0xc
        mov     dword ptr [ebp-0x14], ebx
        mov     dword ptr [ebp-0x30], ecx
L_4c69:
        xor     ebx, ebx
        test    edi, edi
        jle     L_4c9d
        mov     edx, dword ptr [ebp-0x1c]
        mov     dword ptr [ebp-4], edx
L_4c75:
        mov     eax, dword ptr [g_007b220c]
        mov     ecx, dword ptr [ebp-4]
        mov     edx, dword ptr [ebp-0x14]
        push    eax
        push    ecx
        push    edx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_4c9d
        mov     ecx, dword ptr [ebp-4]
        inc     ebx
        add     ecx, 0xc
        cmp     ebx, edi
        mov     dword ptr [ebp-4], ecx
        jl      L_4c75
L_4c9d:
        cmp     ebx, edi
        jnz     L_4cb6
        mov     eax, dword ptr [ebp-0x30]
        mov     ecx, eax
        add     eax, 0xc
        mov     dword ptr [ebp-0x30], eax
        mov     eax, dword ptr [ebp-0x14]
        push    eax
        inc     edi
        call    FUN_0040c410
L_4cb6:
        mov     eax, dword ptr [ebp-0x10]
        mov     ecx, dword ptr [ebp-0x18]
        mov     edx, dword ptr [ebp-0x14]
        mov     byte ptr [ecx+eax], bl
        inc     eax
        add     edx, 0xc
        cmp     eax, esi
        mov     dword ptr [ebp-0x10], eax
        mov     dword ptr [ebp-0x14], edx
        jl      L_4c69
L_4cd0:
        mov     ebx, dword ptr [ebp-0xc]
        push    edi
        mov     ecx, ebx
        call    FUN_0040c2e0
        mov     eax, dword ptr [ebx+4]
        test    eax, eax
        jbe     L_4d0a
        mov     ecx, dword ptr [ebp-0x1c]
        mov     edx, ebx
L_4ce7:
        mov     ebx, dword ptr [edx]
        sub     ecx, ebx
        mov     dword ptr [ebp-0x18], ecx
        mov     dword ptr [ebp-0x10], eax
L_4cf1:
        mov     eax, dword ptr [ebp-0x18]
        add     eax, ebx
        push    eax
        mov     ecx, ebx
        call    FUN_0040c410
        mov     eax, dword ptr [ebp-0x10]
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [ebp-0x10], eax
        jnz     L_4cf1
L_4d0a:
        mov     eax, dword ptr [ebp-0xc]
        mov     ecx, dword ptr [eax]
        mov     ebx, dword ptr [ebp-0x20]
        mov     edx, dword ptr [ebx]
        push    edi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [ebp-0x1c]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        jmp     L_4d4f
L_4d29:
        xor     eax, eax
        test    esi, esi
        mov     edi, esi
        jle     L_4d3e
        mov     ecx, dword ptr [ebp-8]
        mov     ecx, dword ptr [ecx]
L_4d36:
        mov     byte ptr [ecx+eax], al
        inc     eax
        cmp     eax, esi
        jl      L_4d36
L_4d3e:
        mov     eax, dword ptr [ebp-0xc]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ebx]
        push    esi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x24]
        mov     ebx, dword ptr [ebp-0x20]
L_4d4f:
        mov     eax, dword ptr [ebp-8]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ebx]
        push    esi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x88]
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx+0x94]
        mov     esi, dword ptr [ebp+0xc]
        test    esi, esi
        jnz     L_4d99
        test    edi, edi
        jle     L_4e21
        mov     eax, dword ptr [ebp-8]
        mov     eax, dword ptr [eax+0x18]
        mov     dword ptr [ebp-0x4c], esi
        mov     dword ptr [ebp-0x48], esi
        mov     ecx, edi
        mov     edx, esi
L_4d89:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+4], esi
        add     eax, 8
        dec     ecx
        jnz     L_4d89
        jmp     L_4e21
L_4d99:
        mov     edx, dword ptr [ebx]
        push    0
        push    esi
        mov     ecx, ebx
        call    dword ptr [edx+0x14]
        test    dword ptr [esi], 0x3fff
        jbe     L_4df6
        test    edi, edi
        jle     L_4e21
        mov     eax, dword ptr [ebp-8]
        mov     edx, dword ptr [ebp-0xc]
        mov     ecx, dword ptr [eax+0x18]
        mov     eax, dword ptr [edx]
        mov     edx, edi
L_4dbc:
        fld     dword ptr [eax]
        add     eax, 0xc
        fadd    dword ptr [g_0076d064]
        add     ecx, 8
        dec     edx
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x3c]
        fld     dword ptr [eax-8]
        mov     esi, dword ptr [ebp-0x3c]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [ecx-8], esi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x38]
        mov     esi, dword ptr [ebp-0x38]
        mov     dword ptr [ecx-4], esi
        jnz     L_4dbc
        jmp     L_4e21
L_4df6:
        test    edi, edi
        jle     L_4e21
        mov     eax, dword ptr [ebp-8]
        mov     eax, dword ptr [eax+0x18]
        mov     dword ptr [ebp-0x44], 0
        mov     edx, dword ptr [ebp-0x44]
        mov     dword ptr [ebp-0x40], 0
        mov     esi, dword ptr [ebp-0x40]
        mov     ecx, edi
L_4e16:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+4], esi
        add     eax, 8
        dec     ecx
        jnz     L_4e16
L_4e21:
        mov     eax, dword ptr [ebp-8]
        mov     ecx, dword ptr [eax+0x18]
        mov     edx, dword ptr [ebx]
        push    edi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x2c]
        xor     edx, edx
        test    edi, edi
        jle     L_4f89
        lea     eax, [ebp-0x60]
        mov     dword ptr [ebp-0x18], eax
        mov     dword ptr [ebp-4], edx
L_4e43:
        mov     ecx, dword ptr [ebp-0xc]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ebp-4]
        fld     dword ptr [eax+ecx+8]
        add     eax, ecx
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [eax+4]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [eax]
        mov     dword ptr [ebp-0x54], 0x3f800000
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x60]
        fstp    dword ptr [ebp-0x5c]
        fstp    dword ptr [ebp-0x58]
        fld     dword ptr [g_0076edfc]
        mov     esi, dword ptr [ebp-0x18]
        fld     dword ptr [esi+0xc]
        mov     ecx, dword ptr [esi+0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x50]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x50]
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
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x50]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x50]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x34]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp-0x34], ecx
        fld     dword ptr [esi+4]
        mov     ecx, dword ptr [esi+4]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x50]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x50]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x34]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp-0x34], ecx
        mov     ecx, dword ptr [esi+8]
        fadd    dword ptr [esi+8]
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x50]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x50]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x34]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp-0x34], ecx
        mov     eax, dword ptr [ebp-8]
        mov     ecx, dword ptr [eax+0x20]
        mov     eax, dword ptr [ebp-0x34]
        mov     dword ptr [ecx+edx*4], eax
        mov     ecx, dword ptr [ebp-4]
        inc     edx
        add     ecx, 0xc
        cmp     edx, edi
        mov     dword ptr [ebp-4], ecx
        jl      L_4e43
L_4f89:
        mov     eax, dword ptr [ebp-8]
        mov     ecx, dword ptr [eax+0x20]
        mov     esi, dword ptr [ebp-0x20]
        mov     edx, dword ptr [esi]
        push    edi
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx+0xa4]
        mov     edx, dword ptr [esi]
        mov     eax, 0x41800000
        mov     dword ptr [esi+0x98], eax
        mov     dword ptr [esi+0x9c], eax
        mov     eax, dword ptr [ebp+0x10]
        push    1
        xor     edi, edi
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi+0x90], edi
        mov     dword ptr [esi+0x94], edi
        call    dword ptr [edx+0x14]
        mov     ecx, dword ptr [ebp-0x2c]
        push    esi
        call    FUN_00487ce0
        dec     word ptr [esi+8]
        cmp     word ptr [esi+8], di
        jnz     L_4fe9
        cmp     esi, edi
        jz      L_4fe9
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]
L_4fe9:
        mov     eax, dword ptr [ebp-0x28]
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [ebp-0x28], eax
        jl      L_48bf
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
