/*
 * FUN_00421270 (76 B) — inverse bit-range lerp helper: computes
 *   (param_3 - param_2) / (param_4 - param_2) * mask, then _ftol().
 * Uses FPU (FILD/FIDIV/FIMUL) on a temp stack slot.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075db4a(void); /* _ftol */

__declspec(naked) void FUN_00421270(void)
{
    __asm {
        sub     esp, 0x8
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        sub     ecx, eax
        mov     dword ptr [esp + 0xc], ecx
        fild    dword ptr [esp + 0xc]
        sub     edx, eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0xc], edx
        fidiv   dword ptr [esp + 0xc]
        mov     ecx, 0x20
        sub     ecx, eax
        or      eax, 0xffffffff
        shr     eax, cl
        mov     dword ptr [esp + 0x4], 0x0
        /* __emit: MSVC6 drops the 00 disp byte for mov [esp],eax (89 04 24); ref needs 89 44 24 00 */
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x00
        /* __emit: MSVC6 drops the 00 disp byte for fimul dword ptr [esp] (DA 0C 24); ref needs DA 4C 24 00 */
        __emit 0xDA
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_0075db4a
        add     esp, 0x8
        ret
    }
}
