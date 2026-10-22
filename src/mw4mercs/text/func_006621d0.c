/*
 * FUN_006621d0 (184 B) — __cdecl, returns float (ST0). ABL distance check:
 * reads two 3-float positions (via virtual 0x3c/0x34), computes squared
 * distance, and returns _DAT_0076d064 or _DAT_0076c5b0 based on _DAT_00795434.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_00795434;
extern float g_0076d064;
extern float g_0076c5b0;

__declspec(naked) void FUN_006621d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x3c]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0x10], ecx
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [ebp - 0x8], eax
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        fsub    dword ptr [ebp - 0x10]
        mov     edx, dword ptr [eax + 0xac]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x18], ecx
        fld     dword ptr [ebp - 0x18]
        fsub    dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x14], edx
        fld     dword ptr [ebp - 0x14]
        fsub    dword ptr [ebp - 0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0x8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x4], eax
        fld     dword ptr [ebp - 0x4]
        pop     esi
        fcomp   dword ptr [g_00795434]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_6227e
        fld     dword ptr [g_0076d064]
        mov     esp, ebp
        pop     ebp
        ret
L_6227e:
        fld     dword ptr [g_0076c5b0]
        mov     esp, ebp
        pop     ebp
        ret
    }
}
