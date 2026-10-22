/*
 * FUN_004e7ac0 (184 B) — MLR/Adept __thiscall: applies a motion/step
 * update to a float accumulator (field+0x40) based on a mode param
 * (0/1/2) using fields +0x10/+0x14 and the global 0x76d070 factor,
 * then recomputes a ratio into +0x48 and stores it via +0x3c.
 * __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e7a90(void);
extern void __cdecl FUN_004e6480(void);

extern float g_0076d070;   /* _DAT_0076d070 */

__declspec(naked) void FUN_004e7ac0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004e7a90
        mov     ecx, dword ptr [esp + 0x8]
        cmp     ecx, eax
        jz      L7B32
        mov     eax, ecx
        sub     eax, 0x0
        jz      L7B1B
        dec     eax
        jz      L7AF6
        dec     eax
        jnz     L7B32
        mov     eax, dword ptr [esi + 0x40]
        test    eax, eax
        jz      L7AED
        fld     dword ptr [esi + 0x14]
        fchs
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
L7AED:
        mov     dword ptr [esi + 0x14], 0x0
        jmp     L7B32
L7AF6:
        mov     eax, dword ptr [esi + 0x40]
        test    eax, eax
        jz      L7B0D
        fld     dword ptr [esi + 0x10]
        fmul    dword ptr [g_0076d070]
        fsub    dword ptr [esi + 0x14]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
L7B0D:
        fld     dword ptr [esi + 0x10]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esi + 0x14]
        jmp     L7B32
L7B1B:
        mov     eax, dword ptr [esi + 0x40]
        test    eax, eax
        jz      L7B2C
        fld     dword ptr [esi + 0x10]
        fsub    dword ptr [esi + 0x14]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
L7B2C:
        mov     eax, dword ptr [esi + 0x10]
        mov     dword ptr [esi + 0x14], eax
L7B32:
        mov     ecx, esi
        call    FUN_004e6480
        mov     ecx, dword ptr [esi + 0x38]
        test    ecx, ecx
        mov     dword ptr [esi + 0x44], eax
        jz      L7B45
        mov     dword ptr [ecx], eax
L7B45:
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      L7B5C
        fld     dword ptr [eax + 0x14]
        fadd    dword ptr [esi + 0x14]
        fld     dword ptr [eax + 0x10]
        fadd    dword ptr [esi + 0x10]
        fdivp   st(1), st(0)
        jmp     L7B62
L7B5C:
        fld     dword ptr [esi + 0x14]
        fdiv    dword ptr [esi + 0x10]
L7B62:
        fst     dword ptr [esi + 0x48]
        mov     esi, dword ptr [esi + 0x3c]
        test    esi, esi
        jz      L7B72
        fstp    dword ptr [esi]
        pop     esi
        ret     0x4
L7B72:
        fstp    st(0)
        pop     esi
        ret     0x4
    }
}
