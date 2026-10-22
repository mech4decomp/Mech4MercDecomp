/*
 * FUN_004da2f0 (84 B) — __thiscall, RET 0x4. MLR/Adept core: sets a
 * 0x80000 flag in [this+0x10]; if arg==3 or 4, sets the 0x80 flag on
 * two sub-objects at [this+0x124] and [this+0x128].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004da2f0(void)
{
    __asm {
        or      dword ptr [ecx + 0x10], 0x80000
        mov     eax, dword ptr [esp + 0x4]
        cmp     eax, 0x3
        jz      L1
        cmp     eax, 0x4
        jnz     L2
L1:
        mov     eax, dword ptr [ecx + 0x124]
        test    eax, eax
        push    ebx
        mov     dl, 0x80
        jz      L3
        mov     bl, byte ptr [eax + 0x9c]
        __emit 0x84  /* __emit: MSVC6 swaps operands of test dl,bl -> 84 D3; ref needs 84 DA */
        __emit 0xDA
        jnz     L3
        or      bl, dl
        mov     byte ptr [eax + 0x9c], bl
L3:
        mov     eax, dword ptr [ecx + 0x128]
        test    eax, eax
        pop     ebx
        jz      L2
        mov     cl, byte ptr [eax + 0x9c]
        __emit 0x84  /* __emit: MSVC6 swaps operands of test dl,cl -> 84 D1; ref needs 84 CA */
        __emit 0xCA
        jnz     L2
        or      cl, dl
        mov     byte ptr [eax + 0x9c], cl
L2:
        ret     0x4
    }
}
