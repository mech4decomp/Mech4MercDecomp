// FUN_0053D070 (13 bytes)
// __stdcall: calls helper with second param, RET 8 (2 params).
__declspec(naked) void __stdcall func_0053d070(void)
{
    

extern void __cdecl FUN_100536eb0(void);
__asm {
mov  eax, [esp+8]
        push eax
        call FUN_100536eb0
        ret  8
    }


}
