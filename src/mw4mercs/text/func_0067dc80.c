/*
 * FUN_0067DC80 (245 B) — __stdcall, RET 4 (1 stack param).
 * Per-slot animation/state update. Computes an index into a table,
 * calls FUN_00707e70 for a time value, and conditionally updates
 * float/int slots. Uses FPU comparisons with fnstsw/test ah.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_7dab44;   /* 0x007dab44 */
extern unsigned long g_7dab40;   /* 0x007dab40 */
extern float g_77b63c;           /* 0x0077b63c */
extern float g_76c5b0;           /* 0x0076c5b0 */
extern double g_7888a0;          /* 0x007888a0 */

extern float __stdcall FUN_00707e70(int a);
extern void __stdcall FUN_005bdf90(int a);

__declspec(naked) void __stdcall FUN_0067DC80(int param_1)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     eax, dword ptr [eax]
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0xc]
        mov     edi, dword ptr [eax + 0x14]
        mov     edx, esi
        shl     edx, 0x7
        add     edx, esi
        shl     edx, 0x3
        xor     ecx, 0x85739531
        sub     edx, esi
        mov     eax, dword ptr [ecx + edx*8 + 0x35c0]
        lea     ebx, [ecx + edx*8]
        xor     edi, 0x85739531
        test    eax, eax
        jnz     L_DD6F
        push    0x0
        call    FUN_00707e70
        fst     dword ptr [esp + 0x10]
        cmp     dword ptr [ebx + 0x35c4], 0xbf800000
        jnz     L_DCFD
        mov     dword ptr [edi + esi*4 + 0x1004], 0x0
        fstp    dword ptr [ebx + 0x35c4]
        mov     dword ptr [edi + esi*4 + 0x1400], 0x0
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
L_DCFD:
        fsub    dword ptr [ebx + 0x35c4]
        fcomp   dword ptr [g_77b63c]
        fnstsw  ax
        __emit 0xF6   /* test ah,imm8 — MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_DD6F
        mov     eax, dword ptr [esp + 0x10]
        fld     dword ptr [g_76c5b0]
        mov     dword ptr [ebx + 0x35c4], eax
        mov     eax, dword ptr [edi + esi*4 + 0x1004]
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      L_DD3C
        fstp    st(0)
        fild    dword ptr [edi + esi*4 + 0x1400]
        fidiv   dword ptr [esp + 0x10]
L_DD3C:
        fcomp   qword ptr [g_7888a0]
        fnstsw  ax
        __emit 0xF6   /* test ah,imm8 — MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_DD6F
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx]
        push    esi
        xor     ecx, 0x85739531
        mov     dword ptr [ebx + 0x35c0], 0x1
        call    FUN_005bdf90
L_DD6F:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
