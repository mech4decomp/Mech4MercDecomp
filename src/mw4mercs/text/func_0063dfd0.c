/*
 * FUN_0063DFD0 (61 B) — __thiscall (ECX = this, 2 stack params, RET 0x8).
 *
 * Copies 12 floats from param_1 into this+0x80. If a source float
 * differs from the destination and param_2 is zero, sets this+0xE0
 * (per-element flag) to 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0063dfd0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        mov     bl, byte ptr [esp + 0xc]
        push    esi
        add     ecx, 0x80
        mov     esi, 0xc
    l_loop:
        fld     dword ptr [ecx]
        fcomp   dword ptr [edx]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_skip
        test    bl, bl
        jnz     l_skip
        mov     dword ptr [ecx + 0x60], 0x1
    l_skip:
        mov     eax, dword ptr [edx]
        mov     dword ptr [ecx], eax
        add     edx, 0x4
        add     ecx, 0x4
        dec     esi
        jnz     l_loop
        pop     esi
        pop     ebx
        ret     0x8
    }
}
