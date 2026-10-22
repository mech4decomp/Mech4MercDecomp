/*
 * FUN_004188e0 (406 B) — __thiscall. Sphere/OBB merge: computes the
 * distance between two sphere centers, and depending on overlap either
 * copies a default template (DAT_007b9460) + interpolated position into
 * the output object, or copies the sphere data from one of the inputs.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern float g_0076d070;
extern int   g_007b8d68;
extern int   g_007b8d6c;
extern int   g_007b8d70;
extern int   g_007b9460;
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040cb70(void);

__declspec(naked) void FUN_004188e0(void)
{
    __asm {
        sub     esp, 0x28
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x34]
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp + 0x2c]
        mov     ebx, ecx
        mov     ecx, dword ptr [ebp + 0x1c]
        push    esi
        mov     esi, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x14], ecx
        push    esi
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x1c], edx
        call    FUN_00419480
        fld     dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x18]
        fst     dword ptr [esp + 0x30]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fsqrt
        fstp    dword ptr [esp + 0x38]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [esp + 0x38]
        fadd    dword ptr [ebp + 0x3c]
        fcomp   dword ptr [esi + 0x3c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     copy_esi
        fld     dword ptr [ebp + 0x3c]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jnz     copy_esi
        fld     dword ptr [esp + 0x38]
        fadd    dword ptr [esi + 0x3c]
        fst     dword ptr [esp + 0xc]
        fcomp   dword ptr [ebp + 0x3c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     copy_ebp
        fld     dword ptr [esi + 0x3c]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jnz     copy_ebp
        fld     dword ptr [esp + 0xc]
        mov     eax, dword ptr [g_007b8d68]
        fsub    dword ptr [ebp + 0x3c]
        mov     edx, dword ptr [g_007b8d70]
        fld     dword ptr [esp + 0x38]
        push    edi
        fadd    st(0), st(0)
        mov     ecx, 0xc
        mov     esi, offset g_007b9460
        fdivp   st(1), st(0)
        mov     edi, ebx
        rep movsd
        mov     ecx, dword ptr [g_007b8d6c]
        push    ecx
        mov     dword ptr [ebx + 0x30], eax
        mov     dword ptr [ebx + 0x34], ecx
        lea     eax, [esp + 0x24]
        lea     ecx, [esp + 0x18]
        mov     dword ptr [ebx + 0x38], edx
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_0040cb70
        fld     dword ptr [ebp + 0x3c]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ebx + 0xc], edx
        mov     edx, dword ptr [esp + 0x40]
        fadd    dword ptr [edx + 0x3c]
        pop     edi
        mov     dword ptr [ebx + 0x1c], eax
        pop     esi
        fadd    dword ptr [esp + 0x34]
        mov     dword ptr [ebx + 0x2c], ecx
        pop     ebp
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebx + 0x3c]
        pop     ebx
        add     esp, 0x28
        ret     0x8
    copy_ebp:
        cmp     ebx, ebp
        jz      epilogue
        push    ebp
        mov     ecx, ebx
        call    FUN_00419460
        lea     eax, [ebp + 0x30]
        push    eax
        lea     ecx, [ebx + 0x30]
        call    FUN_0040c410
        mov     ecx, dword ptr [ebp + 0x3c]
        pop     esi
        pop     ebp
        mov     dword ptr [ebx + 0x3c], ecx
        pop     ebx
        add     esp, 0x28
        ret     0x8
    copy_esi:
        cmp     ebx, esi
        jz      epilogue
        push    esi
        mov     ecx, ebx
        call    FUN_00419460
        mov     edx, dword ptr [esi + 0x30]
        mov     eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [esi + 0x38]
        mov     dword ptr [ebx + 0x30], edx
        mov     edx, dword ptr [esi + 0x3c]
        mov     dword ptr [ebx + 0x34], eax
        mov     dword ptr [ebx + 0x38], ecx
        mov     dword ptr [ebx + 0x3c], edx
    epilogue:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret     0x8
    }
}
