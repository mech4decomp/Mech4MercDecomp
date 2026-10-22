/* func_004d2c60.c - inline-asm transcription of FUN_004d2c60 (71 B) */

extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_00417230(void);
extern void __cdecl FUN_00414a20(void);
extern void __cdecl FUN_004171b0(void);

__declspec(naked) void func_004d2c60(void)
{
    __asm {
        sub esp, 0x14
        add ecx, 0x14
        push ecx
        lea ecx, [esp+0x4]
        call FUN_00417170
        __emit 0x8D  /* lea ecx,[esp] -- MSVC6 drops zero disp (8D 4C 24 00) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        __emit 0xC7  /* mov dword ptr [esp],0x7725a0 -- MSVC6 drops zero disp (C7 44 24 00) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0xA0
        __emit 0x25
        __emit 0x77
        __emit 0x00
        call FUN_00417230
        test eax, eax
        jz loc_c9a
    loc_c85:
        mov ecx, dword ptr [eax+0x10]
        call FUN_00414a20
        __emit 0x8D  /* lea ecx,[esp] -- MSVC6 drops zero disp (8D 4C 24 00) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call FUN_00417230
        test eax, eax
        jnz loc_c85
    loc_c9a:
        __emit 0x8D  /* lea ecx,[esp] -- MSVC6 drops zero disp (8D 4C 24 00) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call FUN_004171b0
        add esp, 0x14
        ret
    }
}
