/*
 * FUN_005b4d30 (281 B) — float helper, RET 0 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004e2f40(void);
extern float DAT_0080da60;
extern float DAT_0080da58;
extern float DAT_0080da5c;
extern float DAT_0080da54;
extern float DAT_007b8d10;
extern float DAT_007b8d0c;
extern float DAT_007b8d08;
extern float DAT_0076d064;
extern float DAT_0076c5b0;
extern int *DAT_007dc728;

__declspec(naked) void __stdcall FUN_005b4d30(void *param)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        fld     dword ptr [ecx]
        sub     esp, 0x40
        fcomp   dword ptr [DAT_0080da60]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     L_4e3f
        fld     dword ptr [ecx]
        fcomp   dword ptr [DAT_0080da58]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x1
        jz      L_4e3f
        fld     dword ptr [ecx + 0x8]
        fcomp   dword ptr [DAT_0080da5c]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     L_4e3f
        fld     dword ptr [ecx + 0x8]
        fcomp   dword ptr [DAT_0080da54]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x1
        jz      L_4e3f
        fld     dword ptr [DAT_007b8d10]
        mov     eax, dword ptr [ecx]
        fmul    dword ptr [DAT_007b8d10]
        mov     edx, dword ptr [ecx + 0x4]
        fld     dword ptr [DAT_007b8d0c]
        mov     dword ptr [esp + 0x24], eax
        fmul    dword ptr [DAT_007b8d0c]
        mov     eax, dword ptr [ecx + 0x8]
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0xc], ecx
        faddp   st(1), st(0)
        lea     ecx, [esp + 0xc]
        fld     dword ptr [DAT_007b8d08]
        mov     dword ptr [esp + 0x28], edx
        fmul    dword ptr [DAT_007b8d08]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [esp + 0x48]
        /* __emit: MSVC6 drops the displacement for lea edx,[esp]; reference uses 8D 54 24 00 */
        __emit 0x8D
        __emit 0x54
        __emit 0x24
        __emit 0x00
        faddp   st(1), st(0)
        push    ecx
        mov     ecx, dword ptr [DAT_007dc728]
        mov     dword ptr [esp + 0x40], 0x44960000
        fsqrt
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x18], 0x0
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x24], 0x1000
        fdivr   dword ptr [DAT_0076d064]
        fld     dword ptr [DAT_007b8d08]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [DAT_007b8d0c]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [DAT_007b8d10]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x3c]
        fstp    st(0)
        call    FUN_004e2f40
        fld     dword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x3c]
        fadd    dword ptr [esp + 0x28]
        add     esp, 0x40
        ret
L_4e3f:
        fld     dword ptr [DAT_0076c5b0]
        add     esp, 0x40
        ret
    }
}
