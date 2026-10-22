/*
 * FUN_004A973F (626 B) — __thiscall method (this in ecx, ret 4). MLR-related
 * geometry/transform routine. Checks a flag at [this+0x9c], calls
 * FUN_004ac210, then loops over [this+0xa0] elements of a structure at
 * [this+0xa8], doing FPU transforms (fcomp against DAT_0076d064, fmul by
 * DAT_0076d070, fadd DAT_007b220c) and calling FUN_00420790 / FUN_00420a40 /
 * FUN_00417d80 / FUN_004188e0.
 *
 * __thiscall (this in ecx), returns al, ret 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d064;  /* 0x0076d064 */
extern float g_76d070;  /* 0x0076d070 */
extern float g_7b220c;  /* 0x007b220c */

extern char __cdecl FUN_004ac210(void);
extern void __cdecl FUN_00420790(void *a, void *b, void *c);
extern void __cdecl FUN_00420a40(void *a, void *b);
extern void __cdecl FUN_00417d80(void *p);
extern void __cdecl FUN_004188e0(void *a, void *b);

__declspec(naked) void FUN_004A973F(void)
{
    __asm {
        nop
        sub     esp, 0xb8
        push    edi
        mov     edi, ecx
        test    byte ptr [edi + 0x9c], 1
        mov     dword ptr [esp + 0x20], edi
        jne     L_4a9762
        xor     al, al
        pop     edi
        add     esp, 0xb8
        ret     4
L_4a9762:
        mov     eax, dword ptr [esp + 0xc0]
        push    eax
        mov     ecx, edi
        call    FUN_004ac210
        test    al, al
        jne     L_4a977f
        pop     edi
        add     esp, 0xb8
        ret     4
L_4a977f:
        push    ebp
        mov     ebp, dword ptr [edi + 0xa0]
        test    ebp, ebp
        jle     L_4a99a4
        push    ebx
        push    esi
        push    0x7b8d88
        push    0x7b8d88
        lea     ecx, [esp + 0x1c]
        call    FUN_00420790
        xor     ebx, ebx
        test    ebp, ebp
        jbe     L_4a9836
        mov     ecx, dword ptr [edi + 0x10]
        mov     eax, dword ptr [ecx + 0x270]
        mov     esi, dword ptr [edi + 0xa8]
        xor     edx, edx
        mov     dword ptr [esp + 0x10], eax
L_4a97c2:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, edx
        fld     dword ptr [ecx + esi + 0x1c]
        add     edx, eax
        fcomp   dword ptr [g_76d064]
        inc     ebx
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_4a97e2
        cmp     ebx, ebp
        jb      L_4a97c2
        jmp     L_4a9836
L_4a97e2:
        fld     dword ptr [ecx + esi + 0x68]
        lea     edx, [ecx + esi + 0x68]
        fmul    dword ptr [ecx + esi + 0x6c]
        lea     eax, [ecx + esi + 0x6c]
        fadd    dword ptr [ecx + esi + 0x30]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [edx]
        fmul    dword ptr [eax]
        fsubr   dword ptr [ecx + esi + 0x30]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [edx]
        fmul    dword ptr [eax]
        fadd    dword ptr [ecx + esi + 0x34]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [edx]
        fmul    dword ptr [eax]
        fsubr   dword ptr [ecx + esi + 0x34]
        lea     ecx, [ecx + esi + 0x38]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [edx]
        fmul    dword ptr [eax]
        fadd    dword ptr [ecx]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [edx]
        fmul    dword ptr [eax]
        fsubr   dword ptr [ecx]
        fstp    dword ptr [esp + 0x24]
L_4a9836:
        cmp     ebx, ebp
        jae     L_4a98c9
        mov     ecx, dword ptr [edi + 0x10]
        mov     edx, dword ptr [ecx + 0x270]
        mov     esi, dword ptr [edi + 0xa8]
        mov     edi, edx
        imul    edi, ebx
        mov     dword ptr [esp + 0x10], edx
        sub     ebp, ebx
L_4a9858:
        mov     ecx, edi
        fld     dword ptr [ecx + esi + 0x1c]
        add     edi, edx
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      L_4a98c6
        fld     dword ptr [ecx + esi + 0x6c]
        lea     eax, [ecx + esi + 0x38]
        fmul    dword ptr [ecx + esi + 0x68]
        lea     edx, [esp + 0x30]
        fld     dword ptr [ecx + esi + 0x30]
        push    edx
        fsub    st(0), st(1)
        fstp    dword ptr [esp + 0x34]
        fld     st(0)
        fadd    dword ptr [ecx + esi + 0x30]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [ecx + esi + 0x34]
        fsub    st(0), st(1)
        fstp    dword ptr [esp + 0x3c]
        fld     st(0)
        fadd    dword ptr [ecx + esi + 0x34]
        lea     ecx, [esp + 0x18]
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [eax]
        fsub    st(0), st(1)
        fstp    dword ptr [esp + 0x44]
        fadd    dword ptr [eax]
        lea     eax, [esp + 0x18]
        push    eax
        fstp    dword ptr [esp + 0x4c]
        call    FUN_00420a40
        mov     edx, dword ptr [esp + 0x10]
L_4a98c6:
        dec     ebp
        jne     L_4a9858
L_4a98c9:
        fld     dword ptr [esp + 0x18]
        mov     ecx, 0xc
        fsub    dword ptr [esp + 0x14]
        mov     esi, 0x7b8c28
        lea     edi, [esp + 0x48]
        rep movsd
        mov     ecx, dword ptr [esp + 0x2c]
        fmul    dword ptr [g_76d070]
        add     ecx, 0x58
        push    ecx
        lea     edx, [esp + 0x4c]
        fstp    dword ptr [esp + 0x7c]
        push    edx
        fld     dword ptr [esp + 0x28]
        lea     ecx, [esp + 0x90]
        fsub    dword ptr [esp + 0x24]
        fmul    dword ptr [g_76d070]
        fstp    dword ptr [esp + 0x84]
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x2c]
        fmul    dword ptr [g_76d070]
        fst     dword ptr [esp + 0x88]
        fld     dword ptr [esp + 0x80]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [esp + 0x84]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x6c]
        fld     st(0)
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x7c]
        fld     dword ptr [esp + 0x84]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x80]
        fmul    dword ptr [esp + 0x80]
        faddp   st(1), st(0)
        fsqrt
        fstp    st(2)
        fstp    st(0)
        fadd    dword ptr [g_7b220c]
        fstp    dword ptr [esp + 0x8c]
        call    FUN_00417d80
        mov     eax, dword ptr [esp + 0xcc]
        mov     ecx, dword ptr [eax + 0x18]
        lea     edx, [esp + 0x88]
        push    edx
        push    ecx
        call    FUN_004188e0
        pop     esi
        pop     ebx
L_4a99a4:
        pop     ebp
        mov     al, 1
        pop     edi
        add     esp, 0xb8
        ret     4
    }
}
