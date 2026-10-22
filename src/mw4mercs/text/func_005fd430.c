/*
 * FUN_005fd430 (160 B) — __thiscall. Selects an object (this or
 * this->[0x280]) by FUN_00415230 check, then applies a recoil/offset
 * adjustment to this->[0x220]/[0x250] based on FPU comparisons.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007f25c0;
extern float g_007b220c;
extern float g_0076c5b0;

extern void __cdecl FUN_00415230(void);

__declspec(naked) void FUN_005fd430(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007f25c0]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esi+4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_44b
        mov     edi, esi
        jmp     L_467
L_44b:
        mov     edi, dword ptr [esi+0x280]
        test    edi, edi
        jz      L_4ca
        mov     eax, dword ptr [g_007f25c0]
        mov     ecx, dword ptr [edi+4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_4ca
L_467:
        test    edi, edi
        jz      L_4ca
        fld     dword ptr [edi+0x170]
        fst     dword ptr [esp+8]
        fabs
        fld     dword ptr [g_007b220c]
        fcompp
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_4ca
        mov     eax, dword ptr [edi+0x78]
        lea     ecx, [edi+0x78]
        call    dword ptr [eax+4]
        fld     dword ptr [eax+0x2f4]
        fcom    dword ptr [g_0076c5b0]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_4c8
        fld     qword ptr [esp+0x10]
        fmul    dword ptr [esp+8]
        fdivrp  st(1), st(0)
        fld     dword ptr [esi+0x220]
        fsub    st(0), st(1)
        fstp    dword ptr [esi+0x220]
        fld     dword ptr [esi+0x250]
        fsub    st(0), st(1)
        fstp    dword ptr [esi+0x250]
L_4c8:
        fstp    st(0)
L_4ca:
        pop     edi
        pop     esi
        pop     ecx
        ret     8
    }
}
