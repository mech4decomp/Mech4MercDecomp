/*
 * FUN_006cc7e0 (788 B) - Script math operator dispatcher. __stdcall, RET 0xC
 * (3 params: float a, float b, int op). Dispatches on (op>>8)-1 via a jump
 * table at 0x6ccaf4 (outside this function's byte range) to implement
 * sub/add/div/mul/mod/shl/cmp/<=/</shr/>=/>/==/xor/&&/and/||/or.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;   /* 0.0f constant */
extern float g_76dd60;   /* 0.5f rounding constant */
extern float g_76d064;   /* 1.0f constant */
extern void __cdecl FUN_006bfa50(void);   /* error_log */

__declspec(naked) void __stdcall FUN_006cc7e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        sar     eax, 0x8
        dec     eax
        cmp     eax, 0x11
        ja      L_cade
        jmp     dword ptr [eax*4 + 0x6ccaf4]

    L_c7f8: /* case 0: sub */
        fld     dword ptr [esp + 0x4]
        fsub    dword ptr [esp + 0x8]
        ret     0xc

    L_c803: /* case 1: add */
        fld     dword ptr [esp + 0x4]
        fadd    dword ptr [esp + 0x8]
        ret     0xc

    L_c80e: /* case 2: div */
        fld     dword ptr [esp + 0x8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_c82c
        push    0x77e034
        call    FUN_006bfa50
        add     esp, 0x4
    L_c82c:
        fld     dword ptr [esp + 0x4]
        fdiv    dword ptr [esp + 0x8]
        ret     0xc

    L_c837: /* case 3: mul */
        fld     dword ptr [esp + 0x4]
        fmul    dword ptr [esp + 0x8]
        ret     0xc

    L_c842: /* case 4: mod */
        fld     dword ptr [esp + 0x8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_c860
        push    0x77e034
        call    FUN_006bfa50
        add     esp, 0x4
    L_c860:
        fld     dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        and     eax, 0x7fffff
        sub     eax, 0x400000
        fstp    dword ptr [esp + 0x8]
        cdq
        mov     ecx, dword ptr [esp + 0x8]
        and     ecx, 0x7fffff
        sub     ecx, 0x400000
        idiv    ecx
        mov     dword ptr [esp + 0x8], edx
        fild    dword ptr [esp + 0x8]
        ret     0xc

    L_c8a8: /* case 5: shl */
        fld     dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        and     eax, 0x7fffff
        sub     eax, 0x400000
        fstp    dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x8]
        lea     ecx, [edx + 0xffc00000]
        shl     eax, cl
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        ret     0xc

    L_c8e9: /* case 6: cmp */
        fld     dword ptr [esp + 0x4]
        fcomp   dword ptr [esp + 0x8]
        jmp     L_ca85

    L_c8f6: /* case 7: <= */
        fld     dword ptr [esp + 0x4]
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_caeb
        fld     dword ptr [g_76d064]
        ret     0xc

    L_c912: /* case 8: < */
        fld     dword ptr [esp + 0x4]
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jz      L_caeb
        fld     dword ptr [g_76d064]
        ret     0xc

    L_c92e: /* case 9: shr */
        fld     dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        and     edx, 0x7fffff
        sub     edx, 0x400000
        fstp    dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x8]
        add     ecx, 0xffc00000
        sar     edx, cl
        mov     dword ptr [esp + 0x8], edx
        fild    dword ptr [esp + 0x8]
        ret     0xc

    L_c971: /* case 10: >= */
        fld     dword ptr [esp + 0x4]
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_caeb
        fld     dword ptr [g_76d064]
        ret     0xc

    L_c98d: /* case 11: > */
        fld     dword ptr [esp + 0x4]
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_caeb
        fld     dword ptr [g_76d064]
        ret     0xc

    L_c9a9: /* case 12: == */
        fld     dword ptr [esp + 0x4]
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x40
        jz      L_caeb
        fld     dword ptr [g_76d064]
        ret     0xc

    L_c9c5: /* case 13: xor */
        fld     dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        and     ecx, 0x7fffff
        sub     ecx, 0x400000
        fstp    dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x8]
        and     eax, 0x7fffff
        sub     eax, 0x400000
        xor     eax, ecx
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        ret     0xc

    L_ca0c: /* case 14: && */
        fld     dword ptr [esp + 0x4]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_caeb
        jmp     L_ca7b

    L_ca23: /* case 15: and */
        fld     dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        and     eax, 0x7fffff
        sub     eax, 0x400000
        fstp    dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x8]
        and     edx, 0x7fffff
        sub     edx, 0x400000
        and     edx, eax
        mov     dword ptr [esp + 0x8], edx
        fild    dword ptr [esp + 0x8]
        ret     0xc

    L_ca6a: /* case 16: || */
        fld     dword ptr [esp + 0x4]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_ca8c
    L_ca7b:
        fld     dword ptr [esp + 0x8]
        fcomp   dword ptr [g_76c5b0]
    L_ca85:
        fnstsw  ax
        test    ah, 0x40
        jnz     L_caeb
    L_ca8c:
        fld     dword ptr [g_76d064]
        ret     0xc

    L_ca95: /* case 17: or */
        fld     dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        fadd    dword ptr [g_76dd60]
        and     edx, 0x7fffff
        sub     edx, 0x400000
        fstp    dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x8]
        and     ecx, 0x7fffff
        sub     ecx, 0x400000
        or      ecx, edx
        mov     dword ptr [esp + 0x8], ecx
        fild    dword ptr [esp + 0x8]
        ret     0xc

    L_cade: /* default: bad operator */
        push    0x79d104
        call    FUN_006bfa50
        add     esp, 0x4
    L_caeb:
        fld     dword ptr [g_76c5b0]
        ret     0xc
    }
}
