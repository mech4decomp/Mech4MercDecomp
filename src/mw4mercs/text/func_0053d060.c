// FUN_0053D060 (13 bytes)
// __stdcall: calls helper with first param, RET 8 (2 params).
__declspec(naked) void __stdcall func_0053d060(void)
{
    

extern void __cdecl FUN_100536df0(void);
__asm {
mov  eax, [esp+4]
        push eax
        call FUN_100536df0
        ret  8
    }


}
