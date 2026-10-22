/* auto-transcribed gap function 0x1000F1B0 (34 B); review against reference; stepping stone */
extern void __cdecl FUN_1000b6e0(void);
extern void __cdecl FUN_1000f2d0(void);
__declspec(naked) void FUN_1000f1b0(void)
{
    __asm {
            sub esp, 0x10
            __emit 0x8d /* lea eax, [esp]: MSVC6 cannot encode natively */
            __emit 0x44 /* lea eax, [esp]: MSVC6 cannot encode natively */
            __emit 0x24 /* lea eax, [esp]: MSVC6 cannot encode natively */
            __emit 0x00 /* lea eax, [esp]: MSVC6 cannot encode natively */
            push eax
            call FUN_1000f2d0
            mov ecx, dword ptr [esp + 0x14]
            __emit 0x8d /* lea edx, [esp]: MSVC6 cannot encode natively */
            __emit 0x54 /* lea edx, [esp]: MSVC6 cannot encode natively */
            __emit 0x24 /* lea edx, [esp]: MSVC6 cannot encode natively */
            __emit 0x00 /* lea edx, [esp]: MSVC6 cannot encode natively */
            push ecx
            push edx
            call FUN_1000b6e0
            add esp, 0x18
            ret 4
    }
}
