/*
 * FUN_00652580 (22 B) — __fastcall destructor-ish: if *this != 0, calls
 * FUN_004084e0(*this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00652580(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [ecx]
        test    eax, eax
        /* __emit: MSVC6 drops the 00 disp byte for [esp] mem op (89 04 24 vs ref 89 44 24 00) */
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x00
        jz      L_652594
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_652594:
        pop     ecx
        ret
    }
}
