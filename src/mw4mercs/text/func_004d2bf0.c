/* func_004d2bf0.c - inline-asm transcription of FUN_004d2bf0 (107 B) */

extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_00417230(void);
extern void __cdecl FUN_004d2ae0(void);
extern void __cdecl FUN_004171b0(void);

__declspec(naked) void func_004d2bf0(void)
{
    __asm {
        sub esp, 0x14
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi+0x2c]
    loop_bfa:
        test esi, esi
        jz loc_c16
        mov ecx, dword ptr [esi]
        test ecx, ecx
        mov esi, dword ptr [esi+0x4]
        jz loc_c16
        mov al, byte ptr [ecx+0x1c]
        test al, al
        jz loop_bfa
        mov eax, dword ptr [ecx]
        push 0x1
        call dword ptr [eax]
        jmp loop_bfa
    loc_c16:
        add edi, 0x14
        push edi
        lea ecx, [esp+0xc]
        call FUN_00417170
        lea ecx, [esp+0x8]
        mov dword ptr [esp+0x8], 0x7725a0
        call FUN_00417230
        test eax, eax
        pop edi
        pop esi
        jz loc_c4e
    loc_c3a:
        mov ecx, eax
        call FUN_004d2ae0
        __emit 0x8D  /* lea ecx,[esp] -- MSVC6 drops zero disp (8D 4C 24 00) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call FUN_00417230
        test eax, eax
        jnz loc_c3a
    loc_c4e:
        __emit 0x8D  /* lea ecx,[esp] -- MSVC6 drops zero disp (8D 4C 24 00) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call FUN_004171b0
        add esp, 0x14
        ret
    }
}
