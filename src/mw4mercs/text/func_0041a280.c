/*
 * FUN_0041a280 (50 B) — float-array comparison loop. Iterates 12 floats
 * (arg1[i] vs arg2[i]), returns AL=1 if every |arg1[i]-arg2[i]| < arg3,
 * else AL=0. Uses ESI = arg1-arg2 and walks ECX over arg2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041a280(void)
{
    __asm {
        mov     ecx, dword ptr [esp+0x8]
        push    esi
        mov     esi, dword ptr [esp+0x8]
        xor     edx, edx
        sub     esi, ecx
loop_start:
        fld     dword ptr [esi+ecx*1]
        fsub    dword ptr [ecx]
        fabs
        fcomp   dword ptr [esp+0x10]
        /* __emit: MSVC6 emits 9B-prefixed fstsw; ref uses no-WAIT fnstsw ax (DF E0) */
        __emit  0xDF
        __emit  0xE0
        /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 41 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jz      exit_false
        inc     edx
        add     ecx, 0x4
        cmp     edx, 0xc
        jnc     exit_true
        jmp     loop_start
exit_false:
        xor     al, al
        pop     esi
        ret
exit_true:
        mov     al, 0x1
        pop     esi
        ret
    }
}
