/*
 * FUN_00429060 (180 B) — __thiscall MLR light/material helper. Computes a
 * normalized length (dot product of a 3-vector at +0x54/+0x64/+0x74),
 * converts to a float via the int->float trick (SAR + 0x1fc00000), then
 * clamps a scalar at +0x8c against bounds at +0x80/+0x84 with a factor at
 * +0x88. FPU-heavy.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00490460(void *p);

__declspec(naked) void FUN_00429060(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     eax, dword ptr [ebp+8]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00490460
        fld     dword ptr [esi+0x54]
        fld     dword ptr [esi+0x64]
        fld     dword ptr [esi+0x74]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp+8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp+8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp-4], eax
        fld     dword ptr [ebp-4]
        mov     ecx, 0x3f800000
        fstp    dword ptr [ebp+8]
        fld     dword ptr [ebp+8]
        mov     dword ptr [esi+0x8c], ecx
        fcomp   dword ptr [esi+0x80]
        fnstsw  ax
        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jz      L_dc
        mov     dword ptr [esi+0x8c], ecx
L_c6:
        fld     dword ptr [esi+8]
        fmul    dword ptr [esi+0x8c]
        fstp    dword ptr [esi+0x8c]
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
L_dc:
        fld     dword ptr [ebp+8]
        fcomp   dword ptr [esi+0x84]
        fnstsw  ax
        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      L_103
        fld     dword ptr [esi+0x84]
        fsub    dword ptr [ebp+8]
        fmul    dword ptr [esi+0x88]
        fstp    dword ptr [esi+0x8c]
        jmp     L_c6
L_103:
        mov     dword ptr [esi+0x8c], 0xbf800000
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
