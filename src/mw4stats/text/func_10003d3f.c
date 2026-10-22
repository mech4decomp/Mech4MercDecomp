/* auto-transcribed gap function 0x10003D3F (33 B); review against reference; stepping stone */
extern void __cdecl FUN_10002fa0(void);
extern void __cdecl FUN_10003d60(void);
__declspec(naked) void FUN_10003d3f(void)
{
    __asm {
            nop
            push esi
            add ecx, 4
            call FUN_10002fa0
            mov esi, dword ptr [esp + 8]
            push eax
            mov ecx, esi
            call FUN_10003d60
            mov eax, esi
            pop esi
            ret 4
            nop
            nop
            nop
            nop
            nop
    }
}
