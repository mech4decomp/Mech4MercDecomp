/*
 * FUN_005C04E0 (39 B) — Destroys the MechAI object at global 0x007F22C8.
 * If non-null, calls FUN_00501B40 (thiscall) then frees via FUN_004084E0,
 * then clears the global to 0.
 *
 * __cdecl (plain `ret`).
 * CFLAGS: /O1
 */

extern void FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_005c04e0(void)
{
    
__asm {
push    esi
        ; mov esi, [0x007f22c8]  -- __emit: MSVC6 encodes mov reg,[imm32] as immediate load, not memory deref
        _emit 0x8B
        _emit 0x35
        _emit 0xC8
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        test    esi, esi
        jz      l_clear
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_clear:
        ; mov dword ptr [0x007f22c8], 0  -- __emit: MSVC6 rejects mov [imm32],imm32 (C2415)
        _emit 0xC7
        _emit 0x05
        _emit 0xC8
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        pop     esi
        ret
    }


}
