/*
 * FUN_00458e10 (967 B) — MLR (MidLevelRenderer) tube-geometry helper.
 * __thiscall, RET 0x14 (5 stack args). Builds a transformed vertex list
 * (matrix multiply + perspective divide), writes index/color data.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007da848;   /* pointer to object array */
extern int   g_007da864;   /* quality/step global */
extern float g_0076d064;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;
extern char  g_007da600;   /* pointer to char flags */
extern short g_007da5f4;   /* pointer to word table */
extern char  g_007d98fc;   /* pointer to char flags */

extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_00421f00(void);

__declspec(naked) void FUN_00458e10(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x24]
        and     eax, 0x3fff
        push    edi
        mov     byte ptr [ebp - 1], 0
        mov     dword ptr [ebp - 0x14], 0
        mov     dword ptr [ebp - 0x18], 0
        jz      L_458ef0
        test    eax, eax
        jle     L_458ef0
        mov     ecx, dword ptr [g_007da848]
        mov     edi, dword ptr [ecx + eax*4 + 0x24]
        test    edi, edi
        jz      L_458ef0
        mov     edx, dword ptr [edi]
        push    0
        mov     ecx, edi
        call    dword ptr [edx + 4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        mov     ecx, 1
        jl      L_458e78
        mov     dword ptr [g_007da864], ecx
        jmp     L_458ed3
L_458e78:
        cmp     eax, 0x80
        jl      L_458e8b
        mov     dword ptr [g_007da864], 2
        jmp     L_458ed3
L_458e8b:
        cmp     eax, 0x40
        jl      L_458e9c
        mov     dword ptr [g_007da864], 4
        jmp     L_458ed3
L_458e9c:
        cmp     eax, 0x20
        jl      L_458ead
        mov     dword ptr [g_007da864], 8
        jmp     L_458ed3
L_458ead:
        cmp     eax, 0x10
        jl      L_458ebe
        mov     dword ptr [g_007da864], 0x10
        jmp     L_458ed3
L_458ebe:
        xor     edx, edx
        cmp     eax, 8
        setl    dl
        dec     edx
        and     edx, 0xffffffe0
        add     edx, 0x40
        mov     dword ptr [g_007da864], edx
L_458ed3:
        mov     al, byte ptr [edi + 0x24]
        test    al, al
        jnz     L_458f18
        mov     edi, dword ptr [edi + 0x28]
        test    edi, edi
        jz      L_458f18
        mov     eax, dword ptr [edi + 0xc]
        mov     byte ptr [ebp - 1], cl
        mov     ecx, dword ptr [edi + 0x1c]
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x18], ecx
L_458ef0:
        push    ebx
        mov     ebx, dword ptr [esi + 0x18]
        cmp     ebx, 0x100
        mov     dword ptr [ebp - 0x10], ebx
        jle     L_458f09
        mov     dword ptr [ebp - 0x10], 0x100
        mov     ebx, dword ptr [ebp - 0x10]
L_458f09:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        jz      L_458f1e
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [edx + 0x30]
        jmp     L_458f2b
L_458f18:
        mov     byte ptr [ebp - 1], 0
        jmp     L_458ef0
L_458f1e:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx + 0x10]
        shl     eax, 5
        add     eax, edx
L_458f2b:
        cmp     word ptr [esi + 0x56], 0
        mov     dword ptr [esi + 0x44], eax
        mov     word ptr [esi + 0xa], 0
        jnz     L_458f45
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x98]
L_458f45:
        xor     edi, edi
        cmp     ebx, edi
        mov     dword ptr [ebp - 0xc], edi
        jle     L_4590f9
        mov     dword ptr [ebp - 0x8], edi
L_458f55:
        mov     ecx, dword ptr [g_007da600]
        mov     edx, dword ptr [ecx]
        cmp     byte ptr [edx + edi], 0
        jnz     L_458f6b
        inc     dword ptr [ebp - 0xc]
        jmp     L_4590e7
L_458f6b:
        mov     edx, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [g_007da5f4]
        mov     eax, edi
        sub     eax, edx
        mov     edx, dword ptr [esi + 0x1c]
        mov     dword ptr [ecx + edi*2], eax
        mov     ecx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [ebp - 0x8]
        add     eax, ecx
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0xa]
        mov     dword ptr [ebp - 0x20], eax
        mov     eax, dword ptr [esi + 0x44]
        lea     ebx, [edx + edi*8]
        shl     ecx, 5
        add     ecx, eax
        mov     dword ptr [ebp - 0x1c], ecx
        mov     edx, dword ptr [ebp + 8]
        mov     eax, dword ptr [ebp - 0x20]
        fld     dword ptr [eax]
        fld     dword ptr [eax + 4]
        fld     dword ptr [eax + 8]
        mov     eax, dword ptr [ebp - 0x1c]
        fld     dword ptr [edx + 0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx + 0x38]
        fmul    st(0), st(2)
        fxch    st(1)
        fadd    dword ptr [edx + 0x3c]
        fld     dword ptr [edx + 0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fadd    dword ptr [edx + 0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [ecx + 0xc]
        fst     dword ptr [ecx + 0xc]
        fld     st(0)
        fmul    dword ptr [ecx + 8]
        fstp    dword ptr [ecx + 8]
        fld     st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [g_007da87c]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        mov     edx, dword ptr [ebx]
        mov     dword ptr [ecx + 0x18], edx
        fmul    dword ptr [g_007da878]
        mov     edx, dword ptr [esi + 0x44]
        fmul    dword ptr [ecx + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx + 4]
        mov     eax, dword ptr [ebx + 4]
        mov     dword ptr [ecx + 0x1c], eax
        mov     eax, dword ptr [ebp + 0x14]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0xa]
        shl     ecx, 5
        mov     dword ptr [ecx + edx + 0x10], eax
        mov     al, byte ptr [ebp - 1]
        test    al, al
        jz      L_4590bb
        mov     edx, dword ptr [esi + 0x44]
        fld     dword ptr [ebp - 0x14]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0xa]
        shl     ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea     eax, [ecx + edx + 0x18]
        fstp    dword ptr [eax]
        mov     ecx, dword ptr [esi + 0x44]
        fld     dword ptr [ebp - 0x18]
        xor     eax, eax
        mov     ax, word ptr [esi + 0xa]
        shl     eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea     eax, [eax + ecx + 0x1c]
        fstp    dword ptr [eax]
L_4590bb:
        mov     ecx, dword ptr [ebp + 0x10]
        test    ecx, ecx
        jz      L_4590e0
        mov     eax, dword ptr [esi + 0x14]
        mov     edx, dword ptr [ebp - 0x8]
        add     edx, eax
        push    edx
        call    FUN_00421f00
        mov     edx, dword ptr [esi + 0x44]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0xa]
        shl     ecx, 5
        mov     byte ptr [ecx + edx + 0x17], al
L_4590e0:
        inc     word ptr [esi + 0xa]
        mov     ebx, dword ptr [ebp - 0x10]
L_4590e7:
        mov     ecx, dword ptr [ebp - 0x8]
        inc     edi
        add     ecx, 0xc
        cmp     edi, ebx
        mov     dword ptr [ebp - 0x8], ecx
        jl      L_458f55
L_4590f9:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        jnz     L_4591ca
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [edx]
        xor     eax, eax
        mov     ax, word ptr [esi + 0xa]
        add     ecx, eax
        mov     eax, dword ptr [edx + 0xc]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [edx + 0x28]
        lea     eax, [ecx + eax*2]
L_45911c:
        mov     ebx, dword ptr [esi + 0x58]
        xor     ecx, ecx
        xor     edi, edi
        cmp     ebx, ecx
        mov     dword ptr [esi + 0x50], eax
        mov     word ptr [esi + 0x54], cx
        mov     dword ptr [ebp + 0x14], ecx
        mov     dword ptr [ebp + 8], ecx
        jle     L_45919d
        mov     edx, dword ptr [g_007d98fc]
        mov     edx, dword ptr [edx]
        mov     dword ptr [ebp + 0x10], edx
        mov     edx, dword ptr [g_007da5f4]
        mov     ebx, dword ptr [ebp + 0x10]
L_459145:
        cmp     byte ptr [ebx + ecx], 0
        jz      L_45918b
        mov     ebx, dword ptr [ebp + 8]
        mov     ecx, dword ptr [esi + 0x48]
        add     ecx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx]
        add     eax, 2
        inc     edi
        add     eax, 2
        mov     bx, word ptr [edx + ebx*2]
        mov     word ptr [eax - 4], bx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + 2]
        inc     edi
        mov     bx, word ptr [edx + ebx*2]
        mov     word ptr [eax - 2], bx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + 1]
        inc     edi
        add     eax, 2
        mov     cx, word ptr [edx + ebx*2]
        mov     word ptr [eax - 2], cx
        mov     ecx, dword ptr [ebp + 0x14]
L_45918b:
        add     dword ptr [ebp + 8], 3
        mov     ebx, dword ptr [esi + 0x58]
        inc     ecx
        cmp     ecx, ebx
        mov     dword ptr [ebp + 0x14], ecx
        __emit 0x7C   /* __emit: MSVC6 miscomputes backward jcc rel8 offset (off-by-3) */
        __emit 0xAB
        mov     edx, dword ptr [ebp + 0xc]
L_45919d:
        mov     al, byte ptr [ebp + 0x18]
        test    al, al
        mov     word ptr [esi + 0x54], di
        pop     ebx
        jnz     L_4591b7
        mov     eax, dword ptr [edx + 0xc]
        and     edi, 0xffff
        add     eax, edi
        mov     dword ptr [edx + 0xc], eax
L_4591b7:
        cmp     word ptr [esi + 0xa], 0
        pop     edi
        setnz   dl
        mov     byte ptr [esi + 0x10], dl
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14
L_4591ca:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ecx + 0x48]
        mov     edx, ecx
        jmp     L_45911c
    }
}
