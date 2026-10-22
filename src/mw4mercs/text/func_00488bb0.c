/*
 * FUN_00488bb0 (3026 B) __thiscall MLR render/lighting driver: iterates
 * light slots (0x7da794), sorts, dispatches per-type via jump tables
 * (0x7b2450/0x7b2464), does FPU color math, and calls virtual methods.
 *
 * CFLAGS: /O1
 */

extern int g_007da880;
extern int g_007da794[];
extern int g_007b2214;
extern int g_007da744[];
extern int g_008bd548;
extern int g_008bd54c;
extern int g_008bd550;
extern int g_008bd554;
extern int g_007b9490;
extern int g_007b9494;
extern int g_007b9498;
extern int g_007b949c;
extern int g_007b94a0;
extern int g_007da784;
extern int g_007b2220;
extern int g_007da7f8;
extern int g_007da848;
extern int g_007da864;
extern int g_007da7dc;
extern int g_007b2218;
extern int g_007b2464[];
extern int g_007b2450[];
extern int g_007b2438;
extern int g_007b9574;
extern float g_0076fd54;
extern float g_0076fcd0;
extern int g_007da7e0;
extern int g_007da7e4;
extern void __cdecl FUN_00422fe0(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_0048b230(void);
extern void __cdecl FUN_00423e00(void);
extern void __cdecl FUN_00423110(void);
extern void __cdecl FUN_00713c80(void);
extern void __cdecl FUN_00713aa0(void);
extern void __cdecl FUN_0048ad90(void);

__declspec(naked) void FUN_00488bb0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xb0
        mov     eax, dword ptr [ecx+0x10]
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp-0x18], ecx
        mov     dword ptr [g_007da880], eax
        mov     dword ptr [ebp-0x14], 0
loc_488bce:
        mov     eax, dword ptr [ebp-0x14]
        mov     edi, dword ptr [eax*4 + g_007da794]
        test    edi, edi
        mov     dword ptr [ebp-0x8], 0
        mov     dword ptr [ebp-0xc], edi
        jz      loc_4893ff
        mov     ecx, dword ptr [g_007b2214]
        test    ecx, ecx
        jz      loc_488cc6
        cmp     eax, 2
        jz      loc_488cc6
        mov     ecx, dword ptr [eax*4 + g_007da744]
        mov     ecx, dword ptr [ecx]
        mov     eax, 0x38e38e39
        imul    edi
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        mov     esi, 1
        add     edx, eax
        cmp     edx, esi
        jle     loc_488c33
loc_488c23:
        lea     esi, [esi+esi*2+1]
        cmp     esi, edx
        jl      loc_488c23
        test    esi, esi
        jle     loc_488cc6
loc_488c33:
        cmp     esi, edi
        mov     edx, esi
        mov     dword ptr [ebp-0x4], edx
        jge     loc_488cae
loc_488c3c:
        cmp     edx, esi
        mov     ebx, dword ptr [ecx+edx*8]
        lea     eax, [edx*8+0]
        mov     dword ptr [ebp-0x30], ebx
        mov     ebx, dword ptr [ecx+eax+4]
        mov     dword ptr [ebp-0x2c], ebx
        mov     ebx, edx
        mov     dword ptr [ebp-0x10], ebx
        jl      loc_488c99
        lea     edi, [esi*8+0]
loc_488c60:
        mov     ebx, dword ptr [ebp-0x2c]
        mov     edx, eax
        sub     edx, edi
        mov     edx, dword ptr [edx+ecx+4]
        cmp     edx, ebx
        jbe     loc_488d95
        mov     edx, eax
        sub     edx, edi
        mov     ebx, dword ptr [edx+ecx]
        mov     dword ptr [eax+ecx], ebx
        mov     ebx, dword ptr [ebp-0x10]
        mov     edx, dword ptr [edx+ecx+4]
        sub     ebx, esi
        mov     dword ptr [eax+ecx+4], edx
        sub     eax, edi
        cmp     ebx, esi
        mov     dword ptr [ebp-0x10], ebx
        jge     loc_488c60
        mov     edi, dword ptr [ebp-0xc]
loc_488c96:
        mov     edx, dword ptr [ebp-0x4]
loc_488c99:
        mov     eax, dword ptr [ebp-0x30]
        mov     dword ptr [ecx+ebx*8], eax
        mov     eax, dword ptr [ebp-0x2c]
        inc     edx
        cmp     edx, edi
        mov     dword ptr [ecx+ebx*8+4], eax
        mov     dword ptr [ebp-0x4], edx
        jl      loc_488c3c
loc_488cae:
        mov     eax, 0x55555556
        imul    esi
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     esi, edx
        test    esi, esi
        jg      loc_488c33
loc_488cc6:
        test    edi, edi
        mov     ecx, dword ptr [g_008bd548]
        mov     edx, dword ptr [g_008bd54c]
        mov     eax, dword ptr [g_008bd550]
        mov     dword ptr [g_007b9490], ecx
        mov     ecx, dword ptr [g_008bd554]
        mov     dword ptr [g_007b94a0], 0xffffffff
        mov     dword ptr [g_007b9494], edx
        mov     dword ptr [g_007b9498], eax
        mov     dword ptr [g_007b949c], ecx
        mov     dword ptr [ebp-0xc], 0
        jle     loc_4893ff
loc_488d0d:
        mov     edx, dword ptr [ebp-0x14]
        mov     eax, dword ptr [edx*4 + g_007da744]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ebp-0xc]
        mov     eax, dword ptr [ecx+edx*8]
        mov     edx, dword ptr [g_007da784]
        lea     ecx, [eax+eax*2]
        shl     ecx, 4
        add     ecx, eax
        mov     eax, dword ptr [edx]
        lea     edi, [eax+ecx*4]
        mov     eax, dword ptr [edi+0xb8]
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [ebp-0x10], ebx
        jle     loc_488d83
        lea     ecx, [edi+0x98]
        mov     dword ptr [ebp-0x4], ecx
loc_488d4a:
        mov     edx, dword ptr [ebp-0x4]
        mov     esi, dword ptr [edx]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+0x1c]
        mov     edx, dword ptr [ebp-0x10]
        neg     eax
        sbb     eax, eax
        neg     eax
        add     edx, eax
        lea     eax, [edi+0x68]
        mov     dword ptr [ebp-0x10], edx
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x18]
        mov     ecx, dword ptr [ebp-0x4]
        mov     eax, dword ptr [edi+0xb8]
        inc     ebx
        add     ecx, 4
        cmp     ebx, eax
        mov     dword ptr [ebp-0x4], ecx
        jl      loc_488d4a
loc_488d83:
        mov     eax, dword ptr [g_007b2220]
        test    eax, eax
        jnz     loc_488da0
        mov     dword ptr [ebp-0x10], 0
        jmp     loc_488dc1
loc_488d95:
        mov     edi, dword ptr [ebp-0xc]
        mov     ebx, dword ptr [ebp-0x10]
        jmp     loc_488c96
loc_488da0:
        mov     eax, dword ptr [ebp-0x10]
        test    eax, eax
        jz      loc_488dc1
        lea     eax, [edi+4]
        push    eax
        mov     eax, dword ptr [g_007da7f8]
        lea     ecx, [edi+0x24]
        push    ecx
        lea     edx, [edi+0x28]
        push    edx
        push    eax
        call    FUN_00422fe0
        add     esp, 0x10
loc_488dc1:
        mov     eax, dword ptr [edi+0xc0]
        sub     eax, 0
        mov     ecx, dword ptr [edi+0xbc]
        mov     dword ptr [g_007b94a0], ecx
        jz      loc_48906c
        dec     eax
        jz      loc_488f21
        dec     eax
        jnz     loc_4893d1
        mov     eax, dword ptr [edi+4]
        and     eax, 0x3fff
        mov     ebx, dword ptr [edi]
        jz      loc_488e8c
        test    eax, eax
        jle     loc_488e8c
        mov     edx, dword ptr [g_007da848]
        mov     ecx, dword ptr [edx+eax*4+0x24]
        test    ecx, ecx
        jz      loc_488e8c
        mov     eax, dword ptr [ecx]
        push    0
        call    dword ptr [eax+4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      loc_488e31
        mov     dword ptr [g_007da864], 1
        jmp     loc_488e8c
loc_488e31:
        cmp     eax, 0x80
        jl      loc_488e44
        mov     dword ptr [g_007da864], 2
        jmp     loc_488e8c
loc_488e44:
        cmp     eax, 0x40
        jl      loc_488e55
        mov     dword ptr [g_007da864], 4
        jmp     loc_488e8c
loc_488e55:
        cmp     eax, 0x20
        jl      loc_488e66
        mov     dword ptr [g_007da864], 8
        jmp     loc_488e8c
loc_488e66:
        cmp     eax, 0x10
        jl      loc_488e77
        mov     dword ptr [g_007da864], 0x10
        jmp     loc_488e8c
loc_488e77:
        xor     ecx, ecx
        cmp     eax, 8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_007da864], ecx
loc_488e8c:
        mov     esi, dword ptr [ebp-0x18]
        mov     edx, dword ptr [ebx]
        push    esi
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx+0xc]
        test    eax, eax
        jl      loc_4893d4
        mov     ecx, dword ptr [g_007da7dc]
        mov     edx, dword ptr [ecx]
        shl     eax, 5
        add     eax, edx
        mov     edi, eax
        jz      loc_4893d4
        cmp     dword ptr [ebp-0x14], 2
        jnz     loc_488eec
        mov     eax, dword ptr [g_007b2218]
        test    eax, eax
        jz      loc_488eec
        mov     eax, dword ptr [edi+0x1c]
        test    eax, eax
        jz      loc_488ed0
        cmp     eax, 1
        jnz     loc_488eec
loc_488ed0:
        mov     ebx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [eax*4 + g_007b2464]
        push    0
        push    ebx
        push    esi
        mov     ecx, edi
        call    eax
        add     ebx, eax
        mov     dword ptr [ebp-0x8], ebx
        jmp     loc_4893d4
loc_488eec:
        mov     ecx, dword ptr [esi+8]
        mov     ebx, dword ptr [edi]
        cmp     ecx, ebx
        jz      loc_488f10
        mov     eax, dword ptr [edi+8]
        mov     edx, eax
        shr     edx, 0x10
        push    edx
        and     eax, 0xffff
        push    eax
        push    ebx
        push    ecx
        mov     ecx, esi
        call    FUN_0048b230
        mov     dword ptr [esi+8], ebx
loc_488f10:
        mov     eax, dword ptr [edi+0x1c]
        mov     ecx, edi
        call    dword ptr [eax*4 + g_007b2450]
        jmp     loc_4893d4
loc_488f21:
        mov     ebx, dword ptr [edi]
        mov     edx, dword ptr [ebx]
        push    1
        push    1
        mov     ecx, ebx
        call    dword ptr [edx+0x40]
        mov     cl, byte ptr [edi+0x24]
        test    cl, 0x3f
        lea     eax, [edi+0x24]
        jz      loc_488f61
        mov     ecx, dword ptr [g_007b94a0]
        mov     edx, dword ptr [g_007da7f8]
        mov     esi, dword ptr [ebx]
        push    1
        push    ecx
        push    0
        push    edx
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_00423e00
        add     edi, 0x28
        push    edi
        mov     ecx, ebx
        call    dword ptr [esi+0x64]
        jmp     loc_488f7e
loc_488f61:
        mov     ecx, dword ptr [g_007b94a0]
        mov     edx, dword ptr [g_007da7f8]
        mov     eax, dword ptr [ebx]
        push    1
        push    ecx
        push    0
        push    edx
        add     edi, 0x28
        push    edi
        mov     ecx, ebx
        call    dword ptr [eax+0x68]
loc_488f7e:
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax+0x44]
        test    eax, eax
        jz      loc_4893d1
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        mov     dword ptr [ebp-0x4], 0
        call    dword ptr [edx+0x6c]
        test    eax, eax
        jle     loc_4893d1
        mov     esi, dword ptr [ebp-0x18]
loc_488fa6:
        cmp     dword ptr [ebp-0x14], 2
        jz      loc_488fbd
        mov     ecx, dword ptr [ebp-0x4]
        mov     eax, dword ptr [esi]
        push    ecx
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax+0x18]
        jmp     loc_489051
loc_488fbd:
        mov     edx, dword ptr [ebp-0x4]
        push    edx
        push    ebx
        mov     ecx, esi
        call    FUN_0048ad90
        mov     ecx, dword ptr [g_007da7dc]
        mov     edx, dword ptr [ecx]
        shl     eax, 5
        add     eax, edx
        mov     edi, eax
        mov     eax, dword ptr [g_007b2218]
        test    eax, eax
        jz      loc_48901f
        mov     eax, dword ptr [edi+0x1c]
        test    eax, eax
        jz      loc_488fed
        cmp     eax, 1
        jnz     loc_48901f
loc_488fed:
        mov     ecx, dword ptr [ebp-0x4]
        test    ecx, ecx
        mov     eax, dword ptr [eax*4 + g_007b2464]
        jnz     loc_489004
        mov     dword ptr [ebp-0x28], 0
        jmp     loc_48900d
loc_489004:
        mov     edx, dword ptr [g_007b2438]
        mov     dword ptr [ebp-0x28], edx
loc_48900d:
        mov     ecx, dword ptr [ebp-0x28]
        mov     edx, dword ptr [ebp-0x8]
        push    ecx
        push    edx
        push    esi
        mov     ecx, edi
        call    eax
        add     dword ptr [ebp-0x8], eax
        jmp     loc_489051
loc_48901f:
        mov     ecx, dword ptr [esi+8]
        cmp     ecx, dword ptr [edi]
        jz      loc_489045
        mov     eax, dword ptr [edi+8]
        mov     edx, eax
        shr     edx, 0x10
        push    edx
        and     eax, 0xffff
        push    eax
        mov     eax, dword ptr [edi]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_0048b230
        mov     eax, dword ptr [edi]
        mov     dword ptr [esi+8], eax
loc_489045:
        mov     eax, dword ptr [edi+0x1c]
        mov     ecx, edi
        call    dword ptr [eax*4 + g_007b2450]
loc_489051:
        mov     edi, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ebx]
        inc     edi
        mov     ecx, ebx
        mov     dword ptr [ebp-0x4], edi
        call    dword ptr [edx+0x6c]
        cmp     edi, eax
        jl      loc_488fa6
        jmp     loc_4893d4
loc_48906c:
        mov     ebx, dword ptr [edi]
        mov     eax, dword ptr [ebx]
        push    1
        push    1
        mov     ecx, ebx
        mov     dword ptr [ebp-0x4], ebx
        call    dword ptr [eax+0x40]
        mov     edx, dword ptr [ebx]
        lea     ecx, [edi+0x18]
        push    ecx
        lea     eax, [edi+0xc]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx+0x34]
        test    eax, eax
        jz      loc_4892eb
        mov     eax, dword ptr [g_007b9574]
        test    eax, eax
        jbe     loc_489257
        mov     eax, dword ptr [edi+0xb8]
        push    3
        push    eax
        mov     ecx, ebx
        mov     edx, dword ptr [ecx]
        lea     eax, [edi+0x98]
        push    eax
        call    dword ptr [edx+0x3c]
        mov     ecx, dword ptr [g_007b94a0]
        mov     edx, ecx
        and     edx, 0xff
        mov     esi, eax
        and     esi, 0xff
        imul    edx, esi
        mov     dword ptr [ebp-0x64], edx
        shr     ecx, 8
        shr     eax, 8
        mov     edx, ecx
        and     edx, 0xff
        mov     ebx, eax
        and     ebx, 0xff
        imul    edx, ebx
        mov     dword ptr [ebp-0x54], edx
        shr     eax, 8
        shr     ecx, 8
        mov     edx, ecx
        and     edx, 0xff
        mov     ebx, eax
        and     ebx, 0xff
        imul    edx, ebx
        xor     esi, esi
        mov     dword ptr [ebp-0x60], esi
        mov     dword ptr [ebp-0x6c], edx
        xor     edx, edx
        fild    qword ptr [ebp-0x64]
        mov     dl, ah
        mov     dword ptr [ebp-0x50], esi
        shr     ecx, 8
        fmul    dword ptr [g_0076fd54]
        mov     dword ptr [g_007b94a0], ecx
        and     ecx, 0xff
        mov     dword ptr [ebp-0x68], esi
        fstp    dword ptr [ebp-0x44]
        mov     dword ptr [ebp-0x58], esi
        fild    qword ptr [ebp-0x54]
        imul    edx, ecx
        fmul    dword ptr [g_0076fd54]
        fstp    dword ptr [ebp-0x48]
        fild    qword ptr [ebp-0x6c]
        fmul    dword ptr [g_0076fd54]
        mov     dword ptr [ebp-0x5c], edx
        lea     eax, [ebp-0x4c]
        mov     dword ptr [ebp-0x1c], eax
        fstp    dword ptr [ebp-0x4c]
        fild    qword ptr [ebp-0x5c]
        fmul    dword ptr [g_0076fd54]
        fstp    dword ptr [ebp-0x40]
        fld     dword ptr [g_0076fcd0]
        mov     esi, dword ptr [ebp-0x1c]
        fld     dword ptr [esi+0xc]
        mov     ecx, dword ptr [esi+0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x38]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x38]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp-0x24], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x38]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x38]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x24]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp-0x24], ecx
        fld     dword ptr [esi+4]
        mov     ecx, dword ptr [esi+4]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x38]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x38]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x24]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp-0x24], ecx
        mov     ecx, dword ptr [esi+8]
        fadd    dword ptr [esi+8]
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x38]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x38]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x24]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp-0x24], ecx
        mov     ecx, dword ptr [ebp-0x24]
        mov     ebx, dword ptr [ebp-0x4]
        mov     dword ptr [g_007b94a0], ecx
        jmp     loc_48926e
loc_489257:
        mov     eax, dword ptr [edi+0xb8]
        mov     edx, dword ptr [ebx]
        push    3
        push    eax
        lea     ecx, [edi+0x98]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x38]
loc_48926e:
        mov     edx, dword ptr [ebx]
        lea     eax, [ebp-0xb0]
        push    eax
        lea     eax, [edi+0xc]
        push    eax
        lea     ecx, [edi+0x68]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x80]
        mov     cl, byte ptr [edi+0x24]
        test    cl, 0x3f
        lea     edx, [edi+0x24]
        jz      loc_4892c4
        mov     ecx, dword ptr [g_007b94a0]
        mov     esi, dword ptr [ebx]
        neg     al
        push    1
        push    ecx
        lea     ecx, [ebp-0xb0]
        sbb     eax, eax
        and     eax, ecx
        push    eax
        mov     eax, dword ptr [g_007da7f8]
        push    eax
        push    ecx
        mov     ecx, esp
        push    edx
        call    FUN_00423e00
        add     edi, 0x28
        push    edi
        mov     ecx, ebx
        call    dword ptr [esi+0x64]
        jmp     loc_4892eb
loc_4892c4:
        mov     ecx, dword ptr [g_007b94a0]
        mov     edx, dword ptr [ebx]
        neg     al
        push    1
        push    ecx
        lea     ecx, [ebp-0xb0]
        sbb     eax, eax
        and     eax, ecx
        push    eax
        mov     eax, dword ptr [g_007da7f8]
        push    eax
        add     edi, 0x28
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx+0x68]
loc_4892eb:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx+0x44]
        test    eax, eax
        jz      loc_4893d1
        mov     eax, dword ptr [ebx]
        xor     edi, edi
        mov     ecx, ebx
        mov     dword ptr [ebp-0x4], edi
        call    dword ptr [eax+0x6c]
        test    eax, eax
        jle     loc_4893d1
        mov     esi, dword ptr [ebp-0x18]
loc_489311:
        cmp     dword ptr [ebp-0x14], 2
        jz      loc_489325
        mov     edx, dword ptr [esi]
        push    edi
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx+0x18]
        jmp     loc_4893b9
loc_489325:
        mov     eax, dword ptr [ebp-0x4]
        push    eax
        push    ebx
        mov     ecx, esi
        call    FUN_0048ad90
        mov     ecx, dword ptr [g_007da7dc]
        mov     edx, dword ptr [ecx]
        shl     eax, 5
        add     eax, edx
        mov     edi, eax
        mov     eax, dword ptr [g_007b2218]
        test    eax, eax
        jz      loc_489387
        mov     eax, dword ptr [edi+0x1c]
        test    eax, eax
        jz      loc_489355
        cmp     eax, 1
        jnz     loc_489387
loc_489355:
        mov     ecx, dword ptr [ebp-0x4]
        test    ecx, ecx
        mov     eax, dword ptr [eax*4 + g_007b2464]
        jnz     loc_48936c
        mov     dword ptr [ebp-0x20], 0
        jmp     loc_489375
loc_48936c:
        mov     edx, dword ptr [g_007b2438]
        mov     dword ptr [ebp-0x20], edx
loc_489375:
        mov     ecx, dword ptr [ebp-0x20]
        mov     edx, dword ptr [ebp-0x8]
        push    ecx
        push    edx
        push    esi
        mov     ecx, edi
        call    eax
        add     dword ptr [ebp-0x8], eax
        jmp     loc_4893b9
loc_489387:
        mov     ecx, dword ptr [esi+8]
        cmp     ecx, dword ptr [edi]
        jz      loc_4893ad
        mov     eax, dword ptr [edi+8]
        mov     edx, eax
        shr     edx, 0x10
        push    edx
        and     eax, 0xffff
        push    eax
        mov     eax, dword ptr [edi]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_0048b230
        mov     eax, dword ptr [edi]
        mov     dword ptr [esi+8], eax
loc_4893ad:
        mov     eax, dword ptr [edi+0x1c]
        mov     ecx, edi
        call    dword ptr [eax*4 + g_007b2450]
loc_4893b9:
        mov     edi, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ebx]
        inc     edi
        mov     ecx, ebx
        mov     dword ptr [ebp-0x4], edi
        call    dword ptr [edx+0x6c]
        cmp     edi, eax
        jl      loc_489311
        jmp     loc_4893d4
loc_4893d1:
        mov     esi, dword ptr [ebp-0x18]
loc_4893d4:
        mov     eax, dword ptr [ebp-0x10]
        test    eax, eax
        jz      loc_4893e6
        push    1
        push    esi
        call    FUN_00423110
        add     esp, 8
loc_4893e6:
        mov     eax, dword ptr [ebp-0xc]
        mov     ecx, dword ptr [ebp-0x14]
        mov     edx, dword ptr [ecx*4 + g_007da794]
        inc     eax
        cmp     eax, edx
        mov     dword ptr [ebp-0xc], eax
        jl      loc_488d0d
loc_4893ff:
        mov     edx, dword ptr [ebp-0x18]
        mov     eax, dword ptr [ebp-0x14]
        mov     ecx, dword ptr [edx+eax*4+0x14]
        test    ecx, ecx
        mov     dword ptr [ebp-0xc], ecx
        jz      loc_489614
        mov     eax, dword ptr [g_007b2214]
        test    eax, eax
        jz      loc_48950a
        mov     eax, dword ptr [ebp-0x14]
        cmp     eax, 2
        jz      loc_489580
        mov     edi, dword ptr [edx+eax*8+0x54]
        mov     eax, 0x38e38e39
        imul    ecx
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        mov     esi, 1
        add     edx, eax
        cmp     edx, esi
        jle     loc_48945a
loc_48944a:
        lea     esi, [esi+esi*2+1]
        cmp     esi, edx
        jl      loc_48944a
        test    esi, esi
        jle     loc_48950a
loc_48945a:
        cmp     esi, dword ptr [ebp-0xc]
        mov     ecx, esi
        mov     dword ptr [ebp-0x4], ecx
        jge     loc_4894ef
loc_489468:
        cmp     ecx, esi
        mov     edx, dword ptr [edi+ecx*4]
        lea     eax, [ecx*4+0]
        mov     dword ptr [ebp-0x34], edx
        mov     dword ptr [ebp-0x10], ecx
        jl      loc_4894d7
        mov     ecx, dword ptr [g_007da7dc]
        mov     ebx, dword ptr [ecx]
        shl     edx, 5
        mov     ecx, dword ptr [edx+ebx]
        and     ecx, 0x3fff
        mov     dword ptr [ebp-0x1c], ebx
        mov     dword ptr [ebp-0x3c], ecx
        lea     edx, [esi*4+0]
        jmp     loc_4894a2
loc_48949f:
        mov     ebx, dword ptr [ebp-0x1c]
loc_4894a2:
        mov     ecx, eax
        sub     ecx, edx
        mov     ecx, dword ptr [ecx+edi]
        shl     ecx, 5
        mov     ecx, dword ptr [ecx+ebx]
        mov     ebx, dword ptr [ebp-0x3c]
        and     ecx, 0x3fff
        cmp     ecx, ebx
        jbe     loc_4894d4
        mov     ecx, eax
        sub     ecx, edx
        mov     ecx, dword ptr [ecx+edi]
        mov     dword ptr [eax+edi], ecx
        mov     ecx, dword ptr [ebp-0x10]
        sub     ecx, esi
        sub     eax, edx
        cmp     ecx, esi
        mov     dword ptr [ebp-0x10], ecx
        jge     loc_48949f
loc_4894d4:
        mov     ecx, dword ptr [ebp-0x4]
loc_4894d7:
        mov     eax, dword ptr [ebp-0x10]
        mov     edx, dword ptr [ebp-0x34]
        mov     dword ptr [edi+eax*4], edx
        mov     eax, dword ptr [ebp-0xc]
        inc     ecx
        cmp     ecx, eax
        mov     dword ptr [ebp-0x4], ecx
        jl      loc_489468
loc_4894ef:
        mov     eax, 0x55555556
        imul    esi
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     esi, edx
        test    esi, esi
        jg      loc_48945a
        mov     ecx, dword ptr [ebp-0xc]
loc_48950a:
        cmp     dword ptr [ebp-0x14], 2
        jz      loc_489580
        xor     ebx, ebx
        test    ecx, ecx
        mov     dword ptr [ebp-0xc], ebx
        jle     loc_489614
        mov     edi, dword ptr [ebp-0x18]
loc_48951d:
        mov     edx, dword ptr [ebp-0x14]
        mov     eax, dword ptr [edi+edx*8+0x54]
        mov     ecx, dword ptr [g_007da7dc]
        mov     esi, dword ptr [eax+ebx*4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [edi+8]
        shl     esi, 5
        add     esi, edx
        mov     edx, dword ptr [esi]
        cmp     ecx, edx
        jz      loc_489560
        mov     eax, dword ptr [esi+8]
        mov     ebx, eax
        shr     ebx, 0x10
        push    ebx
        and     eax, 0xffff
        push    eax
        push    edx
        push    ecx
        mov     ecx, edi
        call    FUN_0048b230
        mov     edx, dword ptr [esi]
        mov     ebx, dword ptr [ebp-0xc]
        mov     dword ptr [edi+8], edx
loc_489560:
        mov     eax, dword ptr [esi+0x1c]
        mov     ecx, esi
        call    dword ptr [eax*4 + g_007b2450]
        mov     ecx, dword ptr [ebp-0x14]
        mov     eax, dword ptr [edi+ecx*4+0x14]
        inc     ebx
        cmp     ebx, eax
        mov     dword ptr [ebp-0xc], ebx
        jl      loc_48951d
        jmp     loc_489614
loc_489580:
        mov     edx, dword ptr [ebp-0x18]
        mov     eax, dword ptr [edx+0x1c]
        xor     ebx, ebx
        test    eax, eax
        mov     dword ptr [ebp-0xc], ebx
        jle     loc_489614
        mov     edi, edx
loc_489593:
        mov     eax, dword ptr [edi+0x64]
        mov     esi, dword ptr [eax+ebx*4]
        mov     ecx, dword ptr [g_007da7dc]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007b2218]
        shl     esi, 5
        add     esi, edx
        test    eax, eax
        jz      loc_4895d4
        mov     eax, dword ptr [esi+0x1c]
        test    eax, eax
        jz      loc_4895bd
        cmp     eax, 1
        jnz     loc_4895d4
loc_4895bd:
        mov     edx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [eax*4 + g_007b2464]
        push    0
        push    edx
        push    edi
        mov     ecx, esi
        call    eax
        add     dword ptr [ebp-0x8], eax
        jmp     loc_489609
loc_4895d4:
        mov     ecx, dword ptr [edi+8]
        mov     edx, dword ptr [esi]
        cmp     ecx, edx
        jz      loc_4895fd
        mov     eax, dword ptr [esi+8]
        mov     ebx, eax
        shr     ebx, 0x10
        push    ebx
        and     eax, 0xffff
        push    eax
        push    edx
        push    ecx
        mov     ecx, edi
        call    FUN_0048b230
        mov     eax, dword ptr [esi]
        mov     ebx, dword ptr [ebp-0xc]
        mov     dword ptr [edi+8], eax
loc_4895fd:
        mov     edx, dword ptr [esi+0x1c]
        mov     ecx, esi
        call    dword ptr [edx*4 + g_007b2450]
loc_489609:
        mov     eax, dword ptr [edi+0x1c]
        inc     ebx
        cmp     ebx, eax
        mov     dword ptr [ebp-0xc], ebx
        jl      loc_489593
loc_489614:
        mov     ecx, dword ptr [ebp-0x8]
        test    ecx, ecx
        jle     loc_48976b
        mov     eax, 0x38e38e39
        imul    ecx
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        mov     esi, 1
        add     edx, eax
        cmp     edx, esi
        jle     loc_489648
loc_489638:
        lea     esi, [esi+esi*2+1]
        cmp     esi, edx
        jl      loc_489638
        test    esi, esi
        jle     loc_48973b
loc_489648:
        mov     edi, dword ptr [ebp-0x18]
        jmp     loc_489650
loc_48964d:
        mov     ecx, dword ptr [ebp-0x8]
loc_489650:
        cmp     esi, ecx
        mov     eax, esi
        mov     dword ptr [ebp-0x4], eax
        jge     loc_4896b7
        mov     edx, dword ptr [edi+0xd4]
loc_489659:
        cmp     eax, esi
        mov     ebx, dword ptr [edx+eax*4]
        lea     ecx, [eax*4+0]
        mov     dword ptr [ebp-0x10], ebx
        mov     ebx, eax
        jl      loc_4896a6
        lea     edi, [esi*4+0]
loc_489672:
        mov     eax, ecx
        sub     eax, edi
        mov     eax, dword ptr [eax+edx]
        fld     dword ptr [eax]
        mov     eax, dword ptr [ebp-0x10]
        fcomp   dword ptr [eax]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      loc_4896a0
        mov     eax, ecx
        sub     eax, edi
        mov     eax, dword ptr [eax+edx]
        mov     dword ptr [ecx+edx], eax
        sub     ebx, esi
        sub     ecx, edi
        cmp     ebx, esi
        jge     loc_489672
loc_4896a0:
        mov     edi, dword ptr [ebp-0x18]
        mov     eax, dword ptr [ebp-0x4]
loc_4896a6:
        mov     ecx, dword ptr [ebp-0x10]
        mov     dword ptr [edx+ebx*4], ecx
        mov     ecx, dword ptr [ebp-0x8]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [ebp-0x4], eax
        jl      loc_489659
loc_4896b7:
        mov     eax, 0x55555556
        imul    esi
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     esi, edx
        test    esi, esi
        jg      loc_48964d
        mov     ecx, dword ptr [ebp-0x8]
loc_4896ce:
        xor     ebx, ebx
        test    ecx, ecx
        jle     loc_48976b
loc_4896d8:
        mov     ecx, dword ptr [edi+0xd4]
        mov     eax, dword ptr [ecx+ebx*4]
        mov     ecx, dword ptr [edi+8]
        mov     esi, dword ptr [eax+4]
        cmp     ecx, esi
        jz      loc_489706
        mov     eax, dword ptr [eax+0xc]
        mov     edx, eax
        shr     edx, 0x10
        push    edx
        and     eax, 0xffff
        push    eax
        push    esi
        push    ecx
        mov     ecx, edi
        call    FUN_0048b230
        mov     dword ptr [edi+8], esi
loc_489706:
        test    dword ptr [edi+8], 0x40000000
        push    3
        jz      loc_489740
        mov     eax, dword ptr [edi+0xd4]
        mov     ecx, dword ptr [eax+ebx*4]
        mov     eax, dword ptr [ecx+8]
        lea     edx, [eax+eax*2]
        mov     eax, dword ptr [g_007da7e0]
        mov     ecx, dword ptr [eax]
        push    0x7b243c
        shl     edx, 4
        push    3
        add     edx, ecx
        push    edx
        call    FUN_00713c80
        jmp     loc_48975f
loc_48973b:
        mov     edi, dword ptr [ebp-0x18]
        jmp     loc_4896ce
loc_489740:
        mov     ecx, dword ptr [edi+0xd4]
        mov     edx, dword ptr [ecx+ebx*4]
        mov     eax, dword ptr [edx+8]
        mov     ecx, dword ptr [g_007da7e4]
        mov     edx, dword ptr [ecx]
        shl     eax, 5
        add     eax, edx
        push    eax
        call    FUN_00713aa0
loc_48975f:
        mov     eax, dword ptr [ebp-0x8]
        inc     ebx
        cmp     ebx, eax
        jl      loc_4896d8
loc_48976b:
        mov     eax, dword ptr [ebp-0x14]
        inc     eax
        cmp     eax, 0x10
        mov     dword ptr [ebp-0x14], eax
        jl      loc_488bce
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
