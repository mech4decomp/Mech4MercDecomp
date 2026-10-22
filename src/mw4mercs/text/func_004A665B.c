/*
 * FUN_004A665B (483 B, true extent 0x4A665B-0x4A683E) — __thiscall (ret 8).
 * MLR update: sets a flag byte, computes a spline/curve value with FPU
 * (sin/cos), writes a vector into [esi+0x70..], stores result at [esi+0x68].
 *
 * NOTE: the enclosing data block (523 B) also contains a second function
 * at 0x4A6840 (reported as extra, not transcribed here).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_770390;   /* 0x770390 */
extern float g_76c5b0;   /* 0x76c5b0 */
extern int   g_7b8d88;   /* 0x7b8d88 */
extern int   g_7b8d8c;   /* 0x7b8d8c */
extern int   g_7b8d90;   /* 0x7b8d90 */

extern void __cdecl FUN_004A99C0(void);
extern void __cdecl FUN_00495E30(void);
extern void __cdecl FUN_00495E10(void);

__declspec(naked) void FUN_004A665B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0x1c
        mov     eax, dword ptr [esp + 0x24]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x28]
        push    esi
        push    edi
        push    eax
        mov     ebx, ecx
        push    ebp
        call    FUN_004A99C0
        mov     ecx, dword ptr [ebx + 0xb0]
        mov     edx, dword ptr [ecx + 0x18]
        mov     cl, byte ptr [edx + ebp]
        mov     edi, dword ptr [ebx + 0x10]
        lea     eax, [edx + ebp]
        or      cl, 2
        mov     byte ptr [eax], cl
        mov     eax, dword ptr [edi + 0x380]
        mov     esi, dword ptr [edi + 0x270]
        sub     eax, 2
        imul    esi, ebp
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], 0
        mov     ebp, dword ptr [ebx + 0xa8]
        mov     edx, dword ptr [ebx + 0x90]
        fild    qword ptr [esp + 0x18]
        mov     ecx, dword ptr [esi + ebp + 0x18]
        add     esi, ebp
        mov     eax, edx
        fdivr   dword ptr [g_770390]
        mov     dword ptr [esp + 0x14], ecx
        lea     ebx, [edi + 0x2b8]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esp + 0x38], edx
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00495E30
        fld     dword ptr [esp + 0x34]
        mov     edx, dword ptr [ebx + 4]
        lea     ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea     eax, [edx + ecx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov     al, byte ptr [edi + 0x2d8]
        test    al, al
        fstp    dword ptr [esp + 0x30]
        je      L_4A6723
        mov     eax, dword ptr [esp + 0x14]
        push    0
        push    eax
        lea     ecx, [edi + 0x2c4]
        call    FUN_00495E10
        fmul    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x30]
L_4A6723:
        mov     ecx, dword ptr [g_7b8d88]
        fld     dword ptr [g_76c5b0]
        mov     eax, dword ptr [g_7b8d8c]
        mov     dword ptr [esi + 0x70], ecx
        mov     ecx, dword ptr [g_7b8d90]
        mov     edx, 1
        mov     dword ptr [esi + 0x74], eax
        mov     eax, dword ptr [edi + 0x380]
        mov     dword ptr [esi + 0x78], ecx
        lea     ebp, [eax - 1]
        cmp     ebp, edx
        mov     ecx, edx
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ecx
        jbe     L_4A6811
        mov     eax, dword ptr [esi + 0x18]
        mov     dword ptr [esp + 0x34], eax
        lea     ebx, [esi + 0x84]
L_4A6770:
        mov     al, byte ptr [edi + 0x2fc]
        fld     dword ptr [edi + 0x2e4]
        test    al, al
        je      L_4A67A6
        fld     dword ptr [esp + 0x34]
        fmul    dword ptr [edi + 0x2f4]
        fadd    dword ptr [edi + 0x2f8]
        fmul    dword ptr [esp + 0x34]
        fadd    dword ptr [edi + 0x2f0]
        fmul    dword ptr [esp + 0x34]
        fadd    dword ptr [edi + 0x2ec]
        fmulp   st(1), st(0)
L_4A67A6:
        fimul   dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x30]
        __emit 0xD8 /* __emit: MSVC6 encodes fadd st(1),st(0) as DC C1; ref needs D8 C1 */
        __emit 0xC1
        fild    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x18]
        fst     dword ptr [esp + 0x10]
        fsin
        __emit 0xD8 /* __emit: MSVC6 encodes fmul st(1),st(0) as DC C9; ref needs D8 C9 */
        __emit 0xC9
        fld     dword ptr [esp + 0x10]
        fcos
        __emit 0xD8 /* __emit: MSVC6 encodes fmul st(2),st(0) as DC CA; ref needs D8 CA */
        __emit 0xCA
        fstp    dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x24]
        fstp    dword ptr [ebx - 8]
        mov     dword ptr [ebx - 4], eax
        fld     st(1)
        fstp    dword ptr [ebx]
        fld     st(0)
        __emit 0xD8 /* __emit: MSVC6 encodes fmul st(1),st(0) as DC C9; ref needs D8 C9 */
        __emit 0xC9
        fld     st(2)
        __emit 0xD8 /* __emit: MSVC6 encodes fmul st(3),st(0) as DC CB; ref needs D8 CB */
        __emit 0xCB
        faddp   st(1), st(0)
        fst     dword ptr [esp + 0x14]
        fstp    st(2)
        fstp    st(0)
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_4A67FB
        fstp    st(0)
        fld     dword ptr [esp + 0x14]
L_4A67FB:
        neg     edx
        inc     ecx
        add     ebx, 0xc
        cmp     ecx, ebp
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ecx
        jb      L_4A6770
L_4A6811:
        fsqrt
        mov     edx, dword ptr [esi + 0x7c]
        lea     ecx, [ecx + ecx*2]
        lea     eax, [esi + ecx*4 + 0x70]
        mov     ecx, dword ptr [esi + 0x80]
        pop     edi
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esi + 0x84]
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        fstp    dword ptr [esi + 0x68]
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     8
    }
}
