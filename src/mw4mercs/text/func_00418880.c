/*
 * FUN_00418880 (90 B) — __thiscall. Transforms a vector via FUN_0041c830
 * into three stack floats, then returns 1 if each component's magnitude is
 * within the box half-extents at [ESI+0x30/0x34/0x38], else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041c830(void);

__declspec(naked) void FUN_00418880(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0xc
        push    esi
        mov     esi, ecx
        push    esi
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_0041c830
        fld     dword ptr [esp + 0x4]
        fabs
        fcomp   dword ptr [esi + 0x30]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret0
        fld     dword ptr [esp + 0x8]
        fabs
        fcomp   dword ptr [esi + 0x34]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret0
        fld     dword ptr [esp + 0xc]
        fabs
        fcomp   dword ptr [esi + 0x38]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      ret0
        mov     eax, 0x1
        pop     esi
        add     esp, 0xc
        ret     0x4
    ret0:
        xor     eax, eax
        pop     esi
        add     esp, 0xc
        ret     0x4
    }
}
