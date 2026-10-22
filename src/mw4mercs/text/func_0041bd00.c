/*
 * FUN_0041bd00 (189 B) — quaternion lerp (__thiscall).
 * ECX = output quaternion; stack args: q1, q2, t.
 * Computes dot product, optionally negates q2, then lerps.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern void __cdecl FUN_0041b720(void);

__declspec(naked) void FUN_0041bd00(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x8]
        fld     dword ptr [edx+0xc]
        sub     esp, 0x10
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x18]
        fmul    dword ptr [ecx+0xc]
        fld     dword ptr [ecx+0x8]
        fmul    dword ptr [edx+0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ecx+0x4]
        fmul    dword ptr [edx+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [ecx]
        fmul    dword ptr [edx]
        faddp   st(1), st(0)
        fcomp   dword ptr [g_0076c5b0]
        fld     dword ptr [edx]
        __emit  0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        __emit  0xF6        /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jz      L1
        fchs
        fst     dword ptr [esp+0x18]
        fld     dword ptr [edx+0x4]
        mov     eax, dword ptr [esp+0x18]
        fchs
        mov     dword ptr [esp+0x10], eax
        fstp    dword ptr [esp+0x8]
        fld     dword ptr [edx+0x8]
        fchs
        fstp    dword ptr [esp+0xc]
        jmp     L2
L1:
        mov     eax, dword ptr [edx+0x4]
        mov     dword ptr [esp+0x8], eax
        mov     eax, dword ptr [edx+0x8]
        mov     edx, dword ptr [edx+0xc]
        mov     dword ptr [esp+0xc], eax
        mov     dword ptr [esp+0x10], edx
L2:
        fsub    dword ptr [ecx]
        fmul    dword ptr [esp+0x20]
        fadd    dword ptr [ecx]
        fstp    dword ptr [esi]
        fld     dword ptr [esp+0x8]
        fsub    dword ptr [ecx+0x4]
        fmul    dword ptr [esp+0x20]
        fadd    dword ptr [ecx+0x4]
        fstp    dword ptr [esi+0x4]
        fld     dword ptr [esp+0xc]
        fsub    dword ptr [ecx+0x8]
        fmul    dword ptr [esp+0x20]
        fadd    dword ptr [ecx+0x8]
        fstp    dword ptr [esi+0x8]
        fld     dword ptr [esp+0x10]
        fsub    dword ptr [ecx+0xc]
        fmul    dword ptr [esp+0x20]
        fadd    dword ptr [ecx+0xc]
        mov     ecx, esi
        fstp    dword ptr [esi+0xc]
        call    FUN_0041b720
        mov     eax, esi
        pop     esi
        add     esp, 0x10
        ret     0xc
    }
}
