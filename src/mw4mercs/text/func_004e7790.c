/*
 * FUN_004e7790 (139 B) — MLR/Adept __thiscall: applies a motion/step
 * update to a float accumulator (field+0x18) based on a mode param
 * (0/1/2), using fields +0x10/+0x14 and the global 0x76d070 factor.
 * __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e7760(void);

extern float g_0076d070;   /* _DAT_0076d070 */

__declspec(naked) void FUN_004e7790(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004e7760
        mov     ecx, dword ptr [esp + 0x8]
        cmp     ecx, eax
        jz      L7817
        mov     eax, ecx
        sub     eax, 0x0
        jz      L7800
        dec     eax
        jz      L77D9
        dec     eax
        jnz     L7817
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      L77BD
        fld     dword ptr [esi + 0x14]
        fchs
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
L77BD:
        mov     ecx, dword ptr [esi + 0x2c]
        mov     edx, dword ptr [esi + 0x38]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    edx
        mov     dword ptr [esi + 0x14], 0x0
        call    dword ptr [eax + 0x88]
        pop     esi
        ret     0x4
L77D9:
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      L77F0
        fld     dword ptr [esi + 0x10]
        fmul    dword ptr [g_0076d070]
        fsub    dword ptr [esi + 0x14]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
L77F0:
        fld     dword ptr [esi + 0x10]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esi + 0x14]
        pop     esi
        ret     0x4
L7800:
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      L7811
        fld     dword ptr [esi + 0x10]
        fsub    dword ptr [esi + 0x14]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
L7811:
        mov     eax, dword ptr [esi + 0x10]
        mov     dword ptr [esi + 0x14], eax
L7817:
        pop     esi
        ret     0x4
    }
}
