/*
 * FUN_006a7ce0 (22 B) — ABL record destructor (__fastcall, ECX=this). Frees
 * the dword at [this] via FUN_004084e0 if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006a7ce0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [ecx]
        test    eax, eax
        /* __emit: MSVC6 drops 00 disp byte for [esp] (89 04 24 vs ref 89 44 24 00) */
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x00
        jz      loc_6A7CF4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_6A7CF4:
        pop     ecx
        ret
    }
}
