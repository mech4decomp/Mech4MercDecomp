/*
 * FUN_5e0040b0 (526 B) — DirectDraw wrapper: 3x3 matrix multiply + two
 * matrix-multiply helper calls, gated by flags in the word at obj+0x45a8.
 *
 * __thiscall-style (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e012210(void);

__declspec(naked) void FUN_5e0040b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ax, word ptr [esi + 0x45a8]
        test    al, 0xc
        jz      L_272
        fld     dword ptr [esi + 0x440c]
        fmul    dword ptr [esi + 0x444c]
        fld     dword ptr [esi + 0x4418]
        fmul    dword ptr [esi + 0x447c]
        mov     ecx, dword ptr [esi + 0x4418]
        mov     edx, dword ptr [esi + 0x4428]
        mov     dword ptr [esi + 0x4498], ecx
        mov     ecx, dword ptr [esi + 0x4438]
        faddp   st(1), st(0)
        mov     dword ptr [esi + 0x44a8], edx
        mov     edx, dword ptr [esi + 0x4448]
        mov     dword ptr [esi + 0x44b8], ecx
        mov     dword ptr [esi + 0x44c8], edx
        fstp    dword ptr [esi + 0x448c]
        fld     dword ptr [esi + 0x4410]
        fmul    dword ptr [esi + 0x4460]
        fld     dword ptr [esi + 0x4480]
        fmul    dword ptr [esi + 0x4418]
        faddp   st(1), st(0)
        fstp    dword ptr [esi + 0x4490]
        fld     dword ptr [esi + 0x4414]
        fmul    dword ptr [esi + 0x4474]
        fld     dword ptr [esi + 0x4418]
        fmul    dword ptr [esi + 0x4484]
        faddp   st(1), st(0)
        fstp    dword ptr [esi + 0x4494]
        fld     dword ptr [esi + 0x441c]
        fmul    dword ptr [esi + 0x444c]
        fld     dword ptr [esi + 0x447c]
        fmul    dword ptr [esi + 0x4428]
        faddp   st(1), st(0)
        fstp    dword ptr [esi + 0x449c]
        fld     dword ptr [esi + 0x4420]
        fmul    dword ptr [esi + 0x4460]
        fld     dword ptr [esi + 0x4480]
        fmul    dword ptr [esi + 0x4428]
        faddp   st(1), st(0)
        fstp    dword ptr [esi + 0x44a0]
        fld     dword ptr [esi + 0x4424]
        fmul    dword ptr [esi + 0x4474]
        fld     dword ptr [esi + 0x4484]
        fmul    dword ptr [esi + 0x4428]
        faddp   st(1), st(0)
        fstp    dword ptr [esi + 0x44a4]
        fld     dword ptr [esi + 0x442c]
        fmul    dword ptr [esi + 0x444c]
        fld     dword ptr [esi + 0x447c]
        fmul    dword ptr [esi + 0x4438]
        faddp   st(1), st(0)
        fstp    dword ptr [esi + 0x44ac]
        fld     dword ptr [esi + 0x4430]
        fmul    dword ptr [esi + 0x4460]
        fld     dword ptr [esi + 0x4480]
        fmul    dword ptr [esi + 0x4438]
        faddp   st(1), st(0)
        fstp    dword ptr [esi + 0x44b0]
        fld     dword ptr [esi + 0x4434]
        fmul    dword ptr [esi + 0x4474]
        fld     dword ptr [esi + 0x4438]
        fmul    dword ptr [esi + 0x4484]
        faddp   st(1), st(0)
        fstp    dword ptr [esi + 0x44b4]
        fld     dword ptr [esi + 0x443c]
        fmul    dword ptr [esi + 0x444c]
        fld     dword ptr [esi + 0x4448]
        fmul    dword ptr [esi + 0x447c]
        faddp   st(1), st(0)
        fstp    dword ptr [esi + 0x44bc]
        fld     dword ptr [esi + 0x4440]
        fmul    dword ptr [esi + 0x4460]
        fld     dword ptr [esi + 0x4480]
        fmul    dword ptr [esi + 0x4448]
        faddp   st(1), st(0)
        fstp    dword ptr [esi + 0x44c0]
        fld     dword ptr [esi + 0x4444]
        fmul    dword ptr [esi + 0x4474]
        fld     dword ptr [esi + 0x4448]
        fmul    dword ptr [esi + 0x4484]
        faddp   st(1), st(0)
        fstp    dword ptr [esi + 0x44c4]
L_272:
        test    al, 0xe
        jz      L_290
        lea     eax, [esi + 0x44cc]
        lea     ecx, [esi + 0x448c]
        push    eax
        lea     edx, [esi + 0x43cc]
        push    ecx
        push    edx
        call    FUN_5e012210
L_290:
        test    byte ptr [esi + 0x45a8], 0xf
        jz      L_2b3
        lea     eax, [esi + 0x450c]
        lea     ecx, [esi + 0x44cc]
        push    eax
        lea     edx, [esi + 0x438c]
        push    ecx
        push    edx
        call    FUN_5e012210
L_2b3:
        __emit 0x66            /* __emit: AND word ptr [esi+0x45a8],0xffe0 (66 81 A6 ... E0 FF); MSVC6 emits imm8 sign-extended 83 form */
        __emit 0x81
        __emit 0xA6
        __emit 0xA8
        __emit 0x45
        __emit 0x00
        __emit 0x00
        __emit 0xE0
        __emit 0xFF
        pop     esi
        ret
    }
}
