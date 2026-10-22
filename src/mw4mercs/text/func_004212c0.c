/*
 * FUN_004212c0 (80 B) — bit-range lerp helper (forward): computes
 *   _ftol((param_3 - param_2) / mask * (param_4 - param_2)) + param_2.
 * Uses FPU (FILD/FIDIV/FIMUL) on a temp stack slot.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075db4a(void); /* _ftol */

__declspec(naked) void FUN_004212c0(void)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x18]
        /* __emit: MSVC6 drops the 00 disp byte for mov [esp],eax (89 04 24); ref needs 89 44 24 00 */
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x00
        xor     eax, eax
        mov     ecx, 0x20
        sub     ecx, edx
        mov     dword ptr [esp + 0x4], eax
        /* __emit: MSVC6 drops the 00 disp byte for fild qword ptr [esp] (DF 2C 24); ref needs DF 6C 24 00 */
        __emit 0xDF
        __emit 0x6C
        __emit 0x24
        __emit 0x00
        or      edx, 0xffffffff
        shr     edx, cl
        mov     dword ptr [esp + 0x4], eax
        mov     eax, dword ptr [esp + 0x14]
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x4], edx
        fidiv   dword ptr [esp + 0x4]
        sub     eax, esi
        mov     dword ptr [esp + 0x10], eax
        fimul   dword ptr [esp + 0x10]
        call    FUN_0075db4a
        add     eax, esi
        pop     esi
        add     esp, 0x8
        ret
    }
}
