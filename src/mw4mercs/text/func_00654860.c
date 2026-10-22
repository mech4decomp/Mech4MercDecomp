/*
 * FUN_00654860 (2902 B) — __thiscall ABL terrain/slope rasterizer.
 * Computes slope-direction flags into a 2-byte-per-cell heightmap
 * (param_3+8 / param_4+8) from a list of 12-byte terrain entries.
 * Heavy FPU compare handlers (fnstsw/test ah), a 6-entry jump table
 * (0x6553b8) for bytecode opcodes, IAT call (_strnicmp), __thiscall
 * helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0080da58;
extern float g_0080da60;
extern float g_00788100;
extern float g_0080da54;
extern float g_0080da5c;
extern float g_0076c5b0;
extern float g_0079494c;
extern float g_00794948;
extern float g_00770168;
extern float g_0077016c;
extern float g_00787ebc;
extern int   g_007dab44;
extern int   g_007dab40;
extern int   g_007f25c0;
extern int   g_007f22bc;
extern int   g_007f2564;
extern int   g_6553b8;   /* jump table in .text */

extern void FUN_00658390(void);
extern void FUN_0075db4a(void);
extern void FUN_00658640(void);
extern void FUN_006540f0(void);
extern void FUN_00658850(void);
extern void FUN_00657e70(void);
extern void FUN_006581c0(void);
extern void FUN_00654120(void);
extern void FUN_00637b40(void);
extern void FUN_00637a20(void);
extern void FUN_006fab90(void);
extern void FUN_0041fd80(void);
extern void FUN_00417d80(void);
extern void FUN_00420840(void);
extern void FUN_00415230(void);
extern void FUN_006541f0(void);
extern void FUN_004084e0(void);
extern int *g_0076b2b0;  /* IAT: _strnicmp */

__declspec(naked) void FUN_00654860(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc0
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        lea     eax, [ebp-0x39]
        push    eax
        lea     ecx, [ebp-0x48]
        mov     dword ptr [ebp-0x38], ebx
        call    FUN_00658390
        fld     dword ptr [g_0080da58]
        fsub    dword ptr [g_0080da60]
        lea     ecx, [ebp-0x48]
        add     ebx, 0x400004
        mov     dword ptr [ebp-0x1c], ebx
        fmul    dword ptr [g_00788100]
        push    ecx
        fstp    dword ptr [ebp-0xc]
        fld     dword ptr [g_0080da54]
        fsub    dword ptr [g_0080da5c]
        fmul    dword ptr [g_00788100]
        fstp    dword ptr [ebp-0x28]
        fld     dword ptr [ebp-0xc]
        call    FUN_0075db4a
        push    eax
        mov     ecx, ebx
        call    FUN_00658640
        fld     dword ptr [g_0076c5b0]
        fcomp   dword ptr [ebp-0xc]
        xor     edi, edi
        fnstsw  ax
        test    ah, 0x1
        jz      L_5490b
        fld     dword ptr [ebp-0x28]
        call    FUN_0075db4a
        mov     esi, dword ptr [ebx]
        mov     dword ptr [ebp-0x28], eax
    L_548e3:
        lea     ecx, [ebp-0x80]
        call    FUN_006540f0
        mov     edx, dword ptr [ebp-0x28]
        push    eax
        push    edx
        mov     ecx, esi
        call    FUN_00658850
        inc     edi
        mov     dword ptr [ebp-0x4], edi
        fild    dword ptr [ebp-0x4]
        add     esi, 0xc
        fcomp   dword ptr [ebp-0xc]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_548e3
    L_5490b:
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [ebx+0x4]
        sub     ecx, eax
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     esi, edx
        mov     dword ptr [ebp-0x18], esi
        mov     edi, dword ptr [ebp+0x10]
        mov     ecx, edi
        fild    dword ptr [ebp-0x18]
        mov     dword ptr [ebp-0x30], 0
        fdivr   dword ptr [ebp+0xc]
        fstp    dword ptr [ebp-0x28]
        call    FUN_00657e70
        mov     ecx, dword ptr [ebp+0x14]
        call    FUN_006581c0
        test    esi, esi
        mov     eax, dword ptr [ebp+0x8]
        mov     dword ptr [ebp-0x4], 0
        jle     L_549ff
        mov     ebx, dword ptr [ebx]
        mov     dword ptr [ebp+0xc], ebx
        jmp     L_54965
    L_54962:
        mov     eax, dword ptr [ebp+0x8]
    L_54965:
        test    eax, eax
        fld     dword ptr [ebp-0x28]
        fadd    dword ptr [ebp-0x30]
        fstp    dword ptr [ebp-0x30]
        jz      L_5497b
        mov     ecx, dword ptr [ebp-0x30]
        push    ecx
        call    eax
        add     esp, 4
    L_5497b:
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [ebx+0x4]
        sub     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     edi, edx
        xor     esi, esi
        test    edi, edi
        mov     dword ptr [ebp-0x10], esi
        jle     L_549e1
        fild    dword ptr [ebp-0x4]
        mov     ebx, dword ptr [ebx]
        fmul    dword ptr [g_00770168]
        fstp    dword ptr [ebp-0x8]
    L_549ac:
        fild    dword ptr [ebp-0x10]
        push    ecx
        fmul    dword ptr [g_00770168]
        fadd    dword ptr [g_0080da5c]
        fstp    dword ptr [esp]
        fld     dword ptr [ebp-0x8]
        push    ecx
        fadd    dword ptr [g_0080da60]
        mov     ecx, ebx
        fstp    dword ptr [esp]
        call    FUN_00654120
        inc     esi
        add     ebx, 0x28
        cmp     esi, edi
        mov     dword ptr [ebp-0x10], esi
        jl      L_549ac
        mov     ebx, dword ptr [ebp+0xc]
    L_549e1:
        mov     eax, dword ptr [ebp-0x4]
        mov     ecx, dword ptr [ebp-0x18]
        inc     eax
        add     ebx, 0xc
        cmp     eax, ecx
        mov     dword ptr [ebp-0x4], eax
        mov     dword ptr [ebp+0xc], ebx
        jl      L_54962
        mov     ebx, dword ptr [ebp-0x1c]
        mov     edi, dword ptr [ebp+0x10]
    L_549ff:
        fld     dword ptr [g_0080da60]
        fmul    dword ptr [g_00788100]
        call    FUN_0075db4a
        fld     dword ptr [g_0080da5c]
        fmul    dword ptr [g_00788100]
        mov     dword ptr [ebp-0x2c], eax
        call    FUN_0075db4a
        mov     esi, eax
        mov     eax, dword ptr [ebp-0x18]
        test    eax, eax
        jle     L_54b44
        mov     eax, dword ptr [ebp-0x2c]
        mov     ebx, dword ptr [ebx]
        mov     edx, 0xffffff00
        sub     edx, eax
        lea     ecx, [eax+0x100]
        mov     dword ptr [ebp-0x8], ebx
        mov     dword ptr [ebp-0xc], edx
    L_54a49:
        mov     eax, dword ptr [ebx]
        mov     edx, dword ptr [ebx+0x4]
        sub     edx, eax
        mov     eax, 0x66666667
        imul    edx
        sar     edx, 4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     eax, edx
        xor     edx, edx
        test    eax, eax
        mov     dword ptr [ebp-0x24], eax
        jle     L_54b2d
        mov     ebx, dword ptr [ebx]
        add     ebx, 4
        mov     dword ptr [ebp+0xc], ebx
        xor     eax, eax
    L_54a78:
        mov     al, byte ptr [ebx]
        add     eax, -0x16
        cmp     eax, 5
        ja      L_54b00
        jmp     dword ptr [eax*4 + g_6553b8]
    L_54a8b:
        mov     edi, dword ptr [edi+0x8]
        lea     eax, [esi+edx+0x100]
        mov     ebx, eax
        shl     eax, 9
        shl     ebx, 9
        add     eax, ecx
        add     ebx, ecx
        lea     eax, [edi+eax*2]
        mov     word ptr [edi+ebx*2], 0x100
        or      byte ptr [eax], 0x1c
        mov     edi, dword ptr [ebp+0x10]
        jmp     L_54b15
    L_54ab2:
        mov     edi, dword ptr [edi+0x8]
        lea     eax, [esi+edx+0x100]
        mov     ebx, eax
        shl     eax, 9
        shl     ebx, 9
        add     eax, ecx
        add     ebx, ecx
        lea     eax, [edi+eax*2]
        mov     word ptr [edi+ebx*2], 0x200
        or      byte ptr [eax], 0xc
        mov     edi, dword ptr [ebp+0x10]
        jmp     L_54b15
    L_54ad9:
        mov     edi, dword ptr [edi+0x8]
        lea     eax, [esi+edx+0x100]
        mov     ebx, eax
        shl     eax, 9
        shl     ebx, 9
        add     eax, ecx
        add     ebx, ecx
        lea     eax, [edi+eax*2]
        mov     word ptr [edi+ebx*2], 0x300
        or      byte ptr [eax], 0xd
        mov     edi, dword ptr [ebp+0x10]
        jmp     L_54b15
    L_54b00:
        mov     ebx, dword ptr [edi+0x8]
        lea     eax, [esi+edx+0x100]
        shl     eax, 9
        add     eax, ecx
        mov     word ptr [ebx+eax*2], 0x10
    L_54b15:
        mov     ebx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ebp-0x24]
        inc     edx
        add     ebx, 0x28
        cmp     edx, eax
        mov     dword ptr [ebp+0xc], ebx
        __emit 0x0F      /* jl L_54a78: MSVC6 miscomputes backward rel (off-by-2) */
        __emit 0x8C
        __emit 0x4E
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        mov     ebx, dword ptr [ebp-0x8]
    L_54b2d:
        mov     edx, dword ptr [ebp-0xc]
        mov     eax, dword ptr [ebp-0x18]
        add     ebx, 0xc
        inc     ecx
        add     edx, ecx
        cmp     edx, eax
        mov     dword ptr [ebp-0x8], ebx
        jl      L_54a49
    L_54b44:
        call    FUN_00637b40
        mov     dword ptr [ebp-0x14], eax
        mov     eax, dword ptr [ebp-0x18]
        test    eax, eax
        jle     L_5507b
        mov     eax, dword ptr [ebp-0x2c]
        mov     ecx, dword ptr [ebp-0x2c]
        lea     ebx, [eax+0x100]
        mov     eax, 0xffffff00
        sub     eax, ecx
        mov     dword ptr [ebp-0x20], 0
        mov     dword ptr [ebp-0xc], eax
    L_54b74:
        mov     ecx, dword ptr [ebp-0x1c]
        mov     eax, dword ptr [ecx]
        mov     edi, dword ptr [ebp-0x20]
        mov     ecx, dword ptr [eax+edi+0x4]
        mov     edx, dword ptr [eax+edi]
        add     eax, edi
        sub     ecx, edx
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        xor     edi, edi
        test    edx, edx
        mov     dword ptr [ebp-0x24], edx
        jle     L_55062
        mov     eax, dword ptr [ebp-0xc]
        mov     edx, esi
        shl     edx, 9
        add     edx, ebx
        add     edx, eax
        mov     eax, dword ptr [ebp-0x2c]
        xor     ecx, ecx
        add     edx, eax
        lea     eax, [edx+edx+0x40200]
        mov     dword ptr [ebp-0x8], ecx
        mov     dword ptr [ebp-0x34], eax
        jmp     L_54bca
    L_54bc7:
        mov     ecx, dword ptr [ebp-0x8]
    L_54bca:
        mov     edx, dword ptr [ebp-0x1c]
        mov     eax, dword ptr [edx]
        mov     edx, dword ptr [ebp-0x20]
        add     eax, edx
        mov     edx, dword ptr [eax]
        fld     dword ptr [edx+ecx+0x8]
        mov     eax, edx
        fstp    dword ptr [ebp+0xc]
        fld     dword ptr [edx+ecx+0x10]
        fstp    dword ptr [ebp-0x10]
        fld     dword ptr [eax+ecx+0xc]
        fstp    dword ptr [ebp-0x4]
        fld     dword ptr [ebp-0x10]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_54c68
        fld     dword ptr [g_0079494c]
        fchs
        fcomp   dword ptr [ebp+0xc]
        fnstsw  ax
        test    ah, 0x41
        jz      L_54c23
        fld     dword ptr [ebp+0xc]
        fcomp   dword ptr [g_0079494c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_54e4e
    L_54c23:
        fld     dword ptr [ebp+0xc]
        fcomp   dword ptr [g_0079494c]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_54c68
        fld     dword ptr [g_00794948]
        fsub    dword ptr [g_0079494c]
        fcomp   dword ptr [ebp+0xc]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_54c68
        mov     ecx, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ecx+0x8]
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [edx+eax*2+0x1], 0x10
        lea     eax, [edx+eax*2]
        jmp     L_54e4e
    L_54c68:
        fld     dword ptr [ebp+0xc]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_54cb9
        fld     dword ptr [g_0079494c]
        fchs
        fcomp   dword ptr [ebp-0x10]
        fnstsw  ax
        test    ah, 0x41
        jz      L_54cb9
        fld     dword ptr [ebp-0x10]
        fcomp   dword ptr [g_0079494c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_54cb9
        mov     ecx, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ecx+0x8]
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [edx+eax*2+0x1], 0x20
        lea     eax, [edx+eax*2]
        jmp     L_54e4e
    L_54cb9:
        fld     dword ptr [ebp-0x10]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_54d9a
        fld     dword ptr [ebp+0xc]
        fcomp   dword ptr [g_0079494c]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_54d12
        fld     dword ptr [g_00794948]
        fsub    dword ptr [g_0079494c]
        fcomp   dword ptr [ebp+0xc]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_54d12
        mov     ecx, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ecx+0x8]
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [edx+eax*2+0x1], 0x30
        lea     eax, [edx+eax*2]
        jmp     L_54e4e
    L_54d12:
        fld     dword ptr [g_0079494c]
        fchs
        fld     dword ptr [ebp+0xc]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_54d57
        fld     dword ptr [ebp+0xc]
        fcomp   dword ptr [g_0079494c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_54d57
        mov     ecx, dword ptr [ebp+0x10]
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
        mov     edx, dword ptr [ecx+0x8]
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [edx+eax*2+0x1], 0x40
        lea     eax, [edx+eax*2]
        jmp     L_54e4e
    L_54d57:
        fld     dword ptr [ebp+0xc]
        fcomp
        fnstsw  ax
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
        test    ah, 0x41
        jz      L_54d9a
        fld     dword ptr [g_0079494c]
        fsub    dword ptr [g_00794948]
        fcomp   dword ptr [ebp+0xc]
        fnstsw  ax
        test    ah, 0x41
        jz      L_54d9a
        mov     ecx, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ecx+0x8]
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [edx+eax*2+0x1], 0x50
        lea     eax, [edx+eax*2]
        jmp     L_54e4e
    L_54d9a:
        fld     dword ptr [ebp+0xc]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_54de8
        fld     dword ptr [g_0079494c]
        fchs
        fcomp   dword ptr [ebp-0x10]
        fnstsw  ax
        test    ah, 0x41
        jz      L_54de8
        fld     dword ptr [ebp-0x10]
        fcomp   dword ptr [g_0079494c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_54de8
        mov     ecx, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ecx+0x8]
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [edx+eax*2+0x1], 0x60
        lea     eax, [edx+eax*2]
        jmp     L_54e4e
    L_54de8:
        fld     dword ptr [ebp-0x10]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_54e3c
        fld     dword ptr [g_0079494c]
        fchs
        fcomp   dword ptr [ebp+0xc]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_54e3c
        fld     dword ptr [g_0079494c]
        fsub    dword ptr [g_00794948]
        fcomp   dword ptr [ebp+0xc]
        fnstsw  ax
        test    ah, 0x41
        jz      L_54e3c
        mov     ecx, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ecx+0x8]
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [edx+eax*2+0x1], 0x70
        lea     eax, [edx+eax*2]
        jmp     L_54e4e
    L_54e3c:
        push    0x794968
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_54e4e
        int     3
    L_54e4e:
        mov     ecx, dword ptr [ebp-0x14]
        push    0x83
        call    FUN_00637a20
        fcomp   dword ptr [ebp-0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_54e7e
        mov     ecx, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ecx+0x8]
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [edx+eax*2], 0x1
        lea     eax, [edx+eax*2]
    L_54e7e:
        mov     ecx, dword ptr [ebp-0x14]
        push    0x85
        call    FUN_00637a20
        fcomp   dword ptr [ebp-0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_54eae
        mov     ecx, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ecx+0x8]
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [edx+eax*2], 0x4
        lea     eax, [edx+eax*2]
    L_54eae:
        mov     ecx, dword ptr [ebp-0x14]
        push    0x87
        call    FUN_00637a20
        fcomp   dword ptr [ebp-0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_54ede
        mov     ecx, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ecx+0x8]
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [edx+eax*2], 0x8
        lea     eax, [edx+eax*2]
    L_54ede:
        mov     ecx, dword ptr [ebp-0x14]
        push    0x89
        call    FUN_00637a20
        fcomp   dword ptr [ebp-0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_54f18
        mov     eax, dword ptr [ebp+0x10]
        mov     ecx, dword ptr [eax+0x8]
        mov     edx, dword ptr [ebp-0x34]
        test    byte ptr [ecx+edx+0x1], 0x3
        jnz     L_54f18
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [ecx+eax*2], 0x2
        lea     eax, [ecx+eax*2]
    L_54f18:
        mov     ecx, dword ptr [ebp-0x14]
        push    0x82
        call    FUN_00637a20
        fcomp   dword ptr [ebp-0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_54f60
        mov     ecx, dword ptr [ebp-0x14]
        push    0x83
        call    FUN_00637a20
        fcomp   dword ptr [ebp-0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_54f60
        mov     ecx, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ecx+0x8]
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [edx+eax*2+0x1], 0xc
        lea     eax, [edx+eax*2]
    L_54f60:
        mov     ecx, dword ptr [ebp-0x14]
        push    0x84
        call    FUN_00637a20
        fcomp   dword ptr [ebp-0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_54fa8
        mov     ecx, dword ptr [ebp-0x14]
        push    0x85
        call    FUN_00637a20
        fcomp   dword ptr [ebp-0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_54fa8
        mov     ecx, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ecx+0x8]
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [edx+eax*2+0x1], 0x8
        lea     eax, [edx+eax*2]
    L_54fa8:
        mov     ecx, dword ptr [ebp-0x14]
        push    0x86
        call    FUN_00637a20
        fcomp   dword ptr [ebp-0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_54ff0
        mov     ecx, dword ptr [ebp-0x14]
        push    0x87
        call    FUN_00637a20
        fcomp   dword ptr [ebp-0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_54ff0
        mov     ecx, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ecx+0x8]
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [edx+eax*2+0x1], 0x4
        lea     eax, [edx+eax*2]
    L_54ff0:
        mov     ecx, dword ptr [ebp-0x14]
        push    0x88
        call    FUN_00637a20
        fcomp   dword ptr [ebp-0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_55041
        mov     ecx, dword ptr [ebp-0x14]
        push    0x89
        call    FUN_00637a20
        fcomp   dword ptr [ebp-0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_55041
        mov     eax, dword ptr [ebp+0x10]
        mov     ecx, dword ptr [eax+0x8]
        mov     edx, dword ptr [ebp-0x34]
        test    byte ptr [ecx+edx+0x1], 0x3
        jnz     L_55041
        lea     eax, [esi+edi+0x100]
        shl     eax, 9
        add     eax, ebx
        or      byte ptr [ecx+eax*2], 0x2
        lea     eax, [ecx+eax*2]
    L_55041:
        mov     edx, dword ptr [ebp-0x34]
        mov     ecx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ebp-0x24]
        inc     edi
        add     edx, 0x400
        add     ecx, 0x28
        cmp     edi, eax
        mov     dword ptr [ebp-0x34], edx
        mov     dword ptr [ebp-0x8], ecx
        jl      L_54bc7
    L_55062:
        mov     edx, dword ptr [ebp-0x20]
        mov     eax, dword ptr [ebp-0xc]
        add     edx, 0xc
        inc     ebx
        lea     ecx, [ebx+eax]
        cmp     ecx, dword ptr [ebp-0x18]
        mov     dword ptr [ebp-0x20], edx
        jl      L_54b74
    L_5507b:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0x10]
        xor     ecx, 0x85739531
        lea     edx, [ebp-0x58]
        mov     dword ptr [ebp-0x58], 0xc
        mov     dword ptr [ebp-0x54], 0
        mov     dword ptr [ebp-0x50], 0xd
        mov     dword ptr [ebp-0x4c], 1
        mov     dword ptr [ebp+0xc], 0
        mov     dword ptr [ebp-0x24], ecx
        mov     dword ptr [ebp-0x8], edx
        mov     dword ptr [ebp-0x20], 4
    L_550c5:
        mov     eax, dword ptr [ebp-0x8]
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [ecx+edx*8+0x14]
        test    eax, eax
        mov     dword ptr [ebp-0x34], edx
        jle     L_5521e
        mov     edi, dword ptr [ecx+edx*8+0x10]
        add     edi, 0x18
        mov     dword ptr [ebp-0xc], eax
    L_550e3:
        mov     ecx, dword ptr [edi-0x8]
        push    5
        push    0x794960
        push    ecx
        call    dword ptr [g_0076b2b0]
        add     esp, 0xc
        test    eax, eax
        jz      L_5520b
        mov     ecx, dword ptr [edi-0x4]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      L_5520b
        mov     ecx, dword ptr [esi+0x124]
        test    ecx, ecx
        jnz     L_55129
        mov     eax, dword ptr [esi+0x128]
        test    eax, eax
        jz      L_5520b
    L_55129:
        mov     eax, dword ptr [esi+0x128]
        test    eax, eax
        jnz     L_55135
        mov     eax, ecx
    L_55135:
        mov     edx, dword ptr [esi+0xd8]
        add     edx, 0x80
        push    edx
        add     eax, 0x10
        push    eax
        lea     ecx, [ebp-0xc0]
        call    FUN_00417d80
        lea     eax, [ebp-0xc0]
        push    eax
        lea     ecx, [ebp-0x70]
        call    FUN_00420840
        mov     eax, dword ptr [g_007f25c0]
        mov     ebx, dword ptr [esi+0x4]
        push    eax
        mov     ecx, ebx
        call    FUN_00415230
        test    al, al
        jz      L_5518d
        fld     dword ptr [ebp-0x64]
        fsub    dword ptr [ebp-0x68]
        fld     dword ptr [ebp+0xc]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jz      L_5518b
        fstp    dword ptr [ebp+0xc]
        jmp     L_5518d
    L_5518b:
        __emit 0xDD      /* fstp st0: MSVC6 rejects st0 operand */
        __emit 0xD8
    L_5518d:
        mov     eax, dword ptr [esi+0x10]
        mov     dword ptr [ebp-0x2c], eax
        and     eax, 0x60000
        cmp     eax, 0x60000
        jz      L_5520b
        mov     esi, dword ptr [esi+0x2fc]
        test    esi, esi
        jz      L_551c1
        cmp     dword ptr [ebp-0x34], 1
        jnz     L_551c1
        mov     eax, dword ptr [g_007f22bc]
        mov     ecx, dword ptr [esi+0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_5520b
    L_551c1:
        mov     ecx, dword ptr [ebp-0x2c]
        shr     ecx, 0xf
        test    cl, 0x1
        jz      L_5520b
        mov     eax, dword ptr [g_007f2564]
        push    eax
        mov     ecx, ebx
        call    FUN_00415230
        test    al, al
        push    0
        jz      L_551f2
        mov     edx, dword ptr [ebp+0x14]
        mov     eax, dword ptr [ebp+0x10]
        mov     ecx, dword ptr [edi]
        push    edx
        push    eax
        push    1
        push    ecx
        lea     edx, [ebp-0x70]
        push    edx
        jmp     L_55203
    L_551f2:
        mov     eax, dword ptr [ebp+0x14]
        mov     ecx, dword ptr [ebp+0x10]
        mov     edx, dword ptr [edi]
        push    eax
        push    ecx
        push    0
        push    edx
        lea     eax, [ebp-0x70]
        push    eax
    L_55203:
        mov     ecx, dword ptr [ebp-0x38]
        call    FUN_006541f0
    L_5520b:
        mov     eax, dword ptr [ebp-0xc]
        add     edi, 0x1c
        dec     eax
        mov     dword ptr [ebp-0xc], eax
        jnz     L_550e3
        mov     ecx, dword ptr [ebp-0x24]
    L_5521e:
        mov     edx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ebp-0x20]
        add     edx, 4
        dec     eax
        mov     dword ptr [ebp-0x8], edx
        mov     dword ptr [ebp-0x20], eax
        jnz     L_550c5
        fld     dword ptr [ebp+0xc]
        fadd    dword ptr [g_0077016c]
        fstp    dword ptr [ebp+0xc]
        fld     dword ptr [g_0080da60]
        fmul    dword ptr [g_00788100]
        call    FUN_0075db4a
        mov     ecx, dword ptr [ebp-0x18]
        test    ecx, ecx
        mov     dword ptr [ebp-0x4], 0
        jle     L_5539d
        mov     ecx, dword ptr [ebp-0x1c]
        mov     esi, dword ptr [ecx]
        add     eax, 0x100
        mov     dword ptr [ebp-0x38], eax
        mov     dword ptr [ebp-0x1c], eax
    L_55273:
        fld     dword ptr [ebp-0x28]
        mov     eax, dword ptr [ebp+0x8]
        test    eax, eax
        fadd    dword ptr [ebp-0x30]
        fstp    dword ptr [ebp-0x30]
        jz      L_5528c
        mov     edx, dword ptr [ebp-0x30]
        push    edx
        call    eax
        add     esp, 4
    L_5528c:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi+0x4]
        sub     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        xor     edi, edi
        test    edx, edx
        mov     dword ptr [ebp-0x24], edx
        mov     dword ptr [ebp-0x10], edi
        jle     L_55381
        mov     eax, dword ptr [esi]
        xor     ebx, ebx
        add     eax, 0x1c
        mov     dword ptr [ebp-0x8], eax
    L_552be:
        mov     ecx, dword ptr [ebp-0x8]
        cmp     dword ptr [ecx], -1
        jnz     L_55366
        mov     edx, dword ptr [esi]
        cmp     dword ptr [ebx+edx+0x18], -1
        jz      L_55366
        mov     eax, dword ptr [ebp-0x38]
        mov     edx, dword ptr [ebp-0x1c]
        mov     ecx, dword ptr [ebp+0x10]
        add     eax, edi
        shl     eax, 9
        add     eax, edx
        mov     edx, dword ptr [ecx+0x8]
        or      byte ptr [edx+eax*2], 0x3f
        lea     eax, [edx+eax*2]
        mov     eax, dword ptr [esi]
        fld     dword ptr [ebx+eax+0x24]
        fcomp   dword ptr [ebp+0xc]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_55366
        fild    dword ptr [ebp-0x10]
        fmul    dword ptr [g_00770168]
        fadd    dword ptr [g_0080da5c]
        fadd    dword ptr [g_0077016c]
        fsub    dword ptr [g_0080da5c]
        fmul    dword ptr [g_00787ebc]
        call    FUN_0075db4a
        fild    dword ptr [ebp-0x4]
        mov     dword ptr [ebp-0xc], eax
        fmul    dword ptr [g_00770168]
        fadd    dword ptr [g_0080da60]
        fadd    dword ptr [g_0077016c]
        fsub    dword ptr [g_0080da60]
        fmul    dword ptr [g_00787ebc]
        call    FUN_0075db4a
        mov     ecx, dword ptr [ebp+0x14]
        mov     edx, dword ptr [ecx+0x8]
        mov     ecx, dword ptr [ebp-0xc]
        mov     edx, dword ptr [edx+ecx*4]
        mov     cl, byte ptr [eax+edx]
        add     eax, edx
        or      cl, 0x1
        mov     byte ptr [eax], cl
    L_55366:
        mov     ecx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ebp-0x24]
        inc     edi
        add     ecx, 0x28
        add     ebx, 0x28
        cmp     edi, eax
        mov     dword ptr [ebp-0x10], edi
        mov     dword ptr [ebp-0x8], ecx
        jl      L_552be
    L_55381:
        mov     eax, dword ptr [ebp-0x4]
        mov     edi, dword ptr [ebp-0x1c]
        mov     ecx, dword ptr [ebp-0x18]
        inc     eax
        inc     edi
        add     esi, 0xc
        cmp     eax, ecx
        mov     dword ptr [ebp-0x4], eax
        mov     dword ptr [ebp-0x1c], edi
        jl      L_55273
    L_5539d:
        mov     eax, dword ptr [ebp-0x48]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebx
        jz      L_553b0
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_553b0:
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
