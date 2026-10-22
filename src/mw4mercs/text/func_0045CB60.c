/*
 * FUN_0045CB60 (889 B) — MLR triangle/vertex processing routine.
 * __thiscall (this in ecx), 2 args, returns a byte flag in al.
 * Heavy FPU math: computes per-vertex deltas, does barycentric-style
 * interpolation checks against epsilon constants, and writes a result
 * vector to arg2 (optionally negated).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern float g_7b220c;
extern float g_76d064;

extern void __cdecl FUN_00766cb0(void);
extern void __cdecl FUN_0040cbb0(void);

__declspec(naked) char FUN_0045CB60(void)
{
    __asm {
        sub     esp, 0x58
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x58]
        push    edi
        xor     edi, edi
        xor     al, al
        cmp     ecx, edi
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x2c], edi
        mov     byte ptr [esp + 0xb], al
        mov     dword ptr [esp + 0x3c], edi
        jle     L_45ced1
        push    ebx
        mov     ebx, dword ptr [esp + 0x68]
        push    ebp
        mov     dword ptr [esp + 0x48], edi
L_45cb90:
        mov     edx, dword ptr [esi + 0x5c]
        lea     eax, [esp + 0x4c]
        add     edi, edx
        push    eax
        push    edi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x48], edi
        call    FUN_00766cb0
        fst     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6            /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jne     L_45cea1
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [ebx + 0x18]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        je      L_45cea1
        fld     dword ptr [g_7b220c]
        mov     byte ptr [esp + 0x12], 0
        fchs
        fcomp   dword ptr [esp + 0x4c]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        je      L_45cc01
        mov     edx, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [edx + 0x1c]
        mov     eax, dword ptr [eax + 4]
        and     eax, 0x10
        cmp     al, 0x10
        je      L_45cea1
        mov     byte ptr [esp + 0x12], 1
L_45cc01:
        fld     dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x50]
        fmul    dword ptr [ebx + 0xc]
        push    ecx
        push    ebx
        lea     ecx, [esp + 0x64]
        fstp    dword ptr [esp + 0x58]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [ebx + 0x10]
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [ebx + 0x14]
        fstp    dword ptr [esp + 0x60]
        call    FUN_0040cbb0
        fld     dword ptr [edi]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jne     L_45cc48
        mov     edx, dword ptr [edi]
        mov     dword ptr [esp + 0x24], edx
        jmp     L_45cc50
L_45cc48:
        fld     dword ptr [edi]
        fchs
        fstp    dword ptr [esp + 0x24]
L_45cc50:
        fld     dword ptr [edi + 4]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jne     L_45cc69
        mov     eax, dword ptr [edi + 4]
        mov     dword ptr [esp + 0x28], eax
        jmp     L_45cc72
L_45cc69:
        fld     dword ptr [edi + 4]
        fchs
        fstp    dword ptr [esp + 0x28]
L_45cc72:
        fld     dword ptr [edi + 8]
        fcomp   dword ptr [g_76c5b0]
        fld     dword ptr [edi + 8]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        je      L_45cc87
        fchs
L_45cc87:
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [esp + 0x28]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jne     L_45ccb1
        fld     dword ptr [esp + 0x24]
        fcomp   st(1)
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        fstp    st(0)
        __emit 0xF6            /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jne     L_45ccc9
        mov     eax, 1
        mov     ecx, 2
        jmp     L_45ccd0
L_45ccb1:
        fld     dword ptr [esp + 0x28]
        fcomp   st(1)
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        fstp    st(0)
        __emit 0xF6            /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jne     L_45ccc9
        mov     eax, 2
        xor     ecx, ecx
        jmp     L_45ccd0
L_45ccc9:
        xor     eax, eax
        mov     ecx, 1
L_45ccd0:
        mov     edx, dword ptr [esi + 0x48]
        fld     dword ptr [esp + eax*4 + 0x5c]
        mov     edi, dword ptr [esp + 0x34]
        mov     ebp, dword ptr [esi + 0x14]
        add     edi, edx
        xor     edx, edx
        mov     dl, byte ptr [edi]
        xor     ebx, ebx
        mov     bl, byte ptr [edi + 2]
        lea     edx, [edx + edx*2]
        lea     esi, [ebp + edx*4]
        fsub    dword ptr [esi + eax*4]
        xor     edx, edx
        mov     dl, byte ptr [edi + 1]
        mov     edi, ebx
        fstp    dword ptr [esp + 0x30]
        lea     edi, [edi + edi*2]
        fld     dword ptr [esp + ecx*4 + 0x5c]
        fsub    dword ptr [esi + ecx*4]
        fstp    dword ptr [esp + 0x38]
        lea     edx, [edx + edx*2]
        lea     edx, [ebp + edx*4]
        fld     dword ptr [edx + eax*4]
        lea     ebp, [ebp + edi*4]
        fsub    dword ptr [esi + eax*4]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [edx + ecx*4]
        fsub    dword ptr [esi + ecx*4]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [ebp + eax*4]
        fsub    dword ptr [esi + eax*4]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [ebp + ecx*4]
        fsub    dword ptr [esi + ecx*4]
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x1c]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jne     L_45cdc3
        fld     dword ptr [esp + 0x30]
        fdiv    dword ptr [esp + 0x2c]
        fst     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jne     L_45ce99
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_76d064]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        je      L_45ce99
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x3c]
        fsubr   dword ptr [esp + 0x38]
        fdiv    dword ptr [esp + 0x20]
        fcom    dword ptr [g_76c5b0]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jne     L_45ce97
        fadd    dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_76d064]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jne     L_45ce41
        jmp     L_45ce99
L_45cdc3:
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x30]
        fsubp   st(1), st(0)
        fld     dword ptr [esp + 0x3c]
        fmul    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x2c]
        fmul    dword ptr [esp + 0x20]
        fsubp   st(1), st(0)
        fdivp   st(1), st(0)
        fst     dword ptr [esp + 0x20]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jne     L_45ce99
        fld     dword ptr [esp + 0x20]
        fcomp   dword ptr [g_76d064]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        je      L_45ce99
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x2c]
        fsubr   dword ptr [esp + 0x30]
        fdiv    dword ptr [esp + 0x1c]
        fcom    dword ptr [g_76c5b0]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,1 */
        __emit 0xC4
        __emit 0x01
        jne     L_45ce97
        fadd    dword ptr [esp + 0x20]
        fcomp   dword ptr [g_76d064]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        je      L_45ce99
L_45ce41:
        mov     eax, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x6c]
        mov     dword ptr [ebx + 0x18], eax
        mov     al, byte ptr [esp + 0x12]
        test    al, al
        mov     eax, dword ptr [esp + 0x40]
        mov     byte ptr [esp + 0x13], 1
        je      L_45ce7d
        fld     dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x70]
        mov     esi, dword ptr [esp + 0x18]
        fchs
        fstp    dword ptr [ecx]
        fld     dword ptr [eax + 4]
        fchs
        fstp    dword ptr [ecx + 4]
        fld     dword ptr [eax + 8]
        fchs
        fstp    dword ptr [ecx + 8]
        jmp     L_45cea1
L_45ce7d:
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x70]
        mov     esi, dword ptr [esp + 0x18]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [ecx + 4], edx
        mov     dword ptr [ecx + 8], eax
        jmp     L_45cea1
L_45ce97:
        fstp    st(0)
L_45ce99:
        mov     esi, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [esp + 0x6c]
L_45cea1:
        mov     ebp, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x44]
        mov     edi, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [esi + 0x58]
        add     ebp, 3
        inc     eax
        add     edi, 0x10
        cmp     eax, ecx
        mov     dword ptr [esp + 0x34], ebp
        mov     dword ptr [esp + 0x44], eax
        mov     dword ptr [esp + 0x48], edi
        jl      L_45cb90
        mov     al, byte ptr [esp + 0x13]
        pop     ebp
        pop     ebx
L_45ced1:
        pop     edi
        pop     esi
        add     esp, 0x58
        ret     8
    }
}
