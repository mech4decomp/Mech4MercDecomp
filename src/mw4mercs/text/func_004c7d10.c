/*
 * FUN_004c7d10 (340 B) — MLR frustum/plane test (extended). Calls
 * FUN_004206b0([esi+0xf0]) then loops over 6 planes calling
 * FUN_00766050(plane, buf); computes signed distances and returns a 6-bit
 * mask of outside planes, or 0xffffffff if inside all. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_00766050(void);
extern float g_0076c5b0;

__declspec(naked) void FUN_004c7d10(void)
{
    __asm {
        sub     esp, 0x4c
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     eax, [esi+0xf0]
        push    eax
        lea     ecx, [esp+0x30]
        call    FUN_004206b0
        mov     ecx, dword ptr [esp+0x60]
        xor     ebp, ebp
        lea     ebx, [ecx+0x1ac]
        xor     edi, edi
L_7d37:
        lea     edx, [esp+0x2c]
        push    edx
        push    ebx
        lea     ecx, [esp+0x24]
        call    FUN_00766050
        fld     dword ptr [esp+0x1c]
        fcomp   dword ptr [g_0076c5b0]
        fld     dword ptr [esi+0x120]
        __emit 0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_7d6b
        mov     eax, dword ptr [esi+0x120]
        fchs
        mov     dword ptr [esp+0x10], eax
        jmp     L_7d77
L_7d6b:
        fld     dword ptr [esi+0x120]
        fchs
        fstp    dword ptr [esp+0x10]
L_7d77:
        fld     dword ptr [esp+0x20]
        fcomp   dword ptr [g_0076c5b0]
        fld     dword ptr [esi+0x124]
        __emit 0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_7d9c
        mov     ecx, dword ptr [esi+0x124]
        fchs
        mov     dword ptr [esp+0x14], ecx
        jmp     L_7da8
L_7d9c:
        fld     dword ptr [esi+0x124]
        fchs
        fstp    dword ptr [esp+0x14]
L_7da8:
        fld     dword ptr [esp+0x24]
        fcomp   dword ptr [g_0076c5b0]
        fld     dword ptr [esi+0x128]
        __emit 0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_7dcd
        mov     edx, dword ptr [esi+0x128]
        fchs
        mov     dword ptr [esp+0x18], edx
        jmp     L_7dd9
L_7dcd:
        fld     dword ptr [esi+0x128]
        fchs
        fstp    dword ptr [esp+0x18]
L_7dd9:
        fmul    dword ptr [esp+0x24]
        fxch
        fmul    dword ptr [esp+0x20]
        faddp   st(1), st(0)
        fxch
        fmul    dword ptr [esp+0x1c]
        faddp   st(1), st(0)
        fsub    dword ptr [esp+0x28]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_7e57
        fld     dword ptr [esp+0x18]
        shl     ebp, 1
        fmul    dword ptr [esp+0x24]
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [esp+0x20]
        faddp   st(1), st(0)
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [esp+0x1c]
        faddp   st(1), st(0)
        fsub    dword ptr [esp+0x28]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_7e30
        or      ebp, 1
L_7e30:
        inc     edi
        add     ebx, 0x10
        cmp     edi, 6
        jl      L_7d37
        test    ebp, ebp
        jnz     L_7e4b
        mov     eax, dword ptr [esp+0x60]
        mov     dword ptr [eax+0x264], esi
L_7e4b:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret     4
L_7e57:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x4c
        ret     4
    }
}
