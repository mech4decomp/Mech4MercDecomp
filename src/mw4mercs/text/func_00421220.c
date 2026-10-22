/*
 * FUN_00421220 (71 B) — bit-range lerp helper: computes
 *   (param_3 - param_2) * ((masked_bits / full_mask)) + param_2
 * where masked_bits = (0xffffffff >> (32 - param_4)) & param_1.
 * Uses FPU (FILD/FIDIV) on a temp stack slot.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00421220(void)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, 0x20
        sub     ecx, eax
        or      eax, 0xffffffff
        shr     eax, cl
        mov     ecx, eax
        and     ecx, edx
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (89 0C 24); ref needs 89 4C 24 00 */
        __emit 0x89
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        xor     ecx, ecx
        mov     dword ptr [esp + 0x4], ecx
        /* __emit: MSVC6 drops the 00 disp byte for fild qword ptr [esp] (DF 2C 24); ref needs DF 6C 24 00 */
        __emit 0xDF
        __emit 0x6C
        __emit 0x24
        __emit 0x00
        /* __emit: MSVC6 drops the 00 disp byte for mov [esp],eax (89 04 24); ref needs 89 44 24 00 */
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 0x4], ecx
        /* __emit: MSVC6 drops the 00 disp byte for fidiv dword ptr [esp] (DA 34 24); ref needs DA 74 24 00 */
        __emit 0xDA
        __emit 0x74
        __emit 0x24
        __emit 0x00
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x10]
        fmulp   st(1), st(0)
        fadd    dword ptr [esp + 0x10]
        add     esp, 0x8
        ret
    }
}
