// FUN_00532820 (18 bytes)
// __stdcall: calls helper with one param, returns boolean (0/1), RET 4 (1 param).
__declspec(naked) void __stdcall func_00532820(void)
{
    

extern void __cdecl FUN_006fc4d0(void);
__asm {
mov  eax, [esp+4]
        push eax
        call FUN_006fc4d0
        test al, al
        setnz al
        ret  4
    }


}
