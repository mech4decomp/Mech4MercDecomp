/*
 * FUN_005bf170 (205 B) ??? __stdcall, RET 8 (two stack params).
 *
 * Builds a small stack struct (local_34) with two params and constants, computes
 * a normalized direction vector (DAT_0076d064 / sqrt(dot of DAT_007b8d08/0c/10)),
 * calls FUN_004e2f40(&local_34). If nonzero returns local_c*local_4+local_18,
 * else returns DAT_0076c5b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004e2f40(void);

__declspec(naked) float __stdcall FUN_005bf170(void)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007b8d10;
extern int DAT_007b8d0c;
extern int DAT_007b8d08;
extern int DAT_007dc728;
extern int DAT_0076d064;
extern int DAT_0076c5b0;
__asm {
sub     esp, 0x40
        fld dword ptr [DAT_007b8d10]
        mov     edx, dword ptr [esp + 0x44]
        fmul dword ptr [DAT_007b8d10]
        lea     eax, [esp + 0x24]
        fld dword ptr [DAT_007b8d0c]
        mov     dword ptr [esp + 0xc], eax
        fmul dword ptr [DAT_007b8d0c]
        /* __emit: MSVC6 drops the displacement for lea reg,[esp+0] (encodes 8D 0C 24) */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        xor     eax, eax
        mov     dword ptr [esp + 0x10], ecx
        faddp   st(1), st
        lea     ecx, [esp + 0xc]
        fld dword ptr [DAT_007b8d08]
        mov     dword ptr [esp + 0x14], eax
        fmul dword ptr [DAT_007b8d08]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x48]
        push    ecx
        faddp   st(1), st
        mov ecx, dword ptr [DAT_007dc728]
        mov     dword ptr [esp + 0x24], 0x1000
        mov     dword ptr [esp + 0x40], 0x447a0000
        fsqrt
        mov     dword ptr [esp + 0x28], edx
        mov     dword ptr [esp + 0x2c], 0x43fa0000
        mov     dword ptr [esp + 0x30], eax
        fdivr dword ptr [DAT_0076d064]
        fld dword ptr [DAT_007b8d08]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x34]
        fld dword ptr [DAT_007b8d0c]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x38]
        fld dword ptr [DAT_007b8d10]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x3c]
        fstp    st(0)
        call    FUN_004e2f40
        test    eax, eax
        jz      L_5bf231
        fld     dword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x3c]
        fadd    dword ptr [esp + 0x28]
        add     esp, 0x40
        ret     8
    L_5bf231:
        fld dword ptr [DAT_0076c5b0]
        add     esp, 0x40
        ret     8
    }


}
