// FUN_00527140 (21 bytes)
// __stdcall: calls global object method with arg 1, returns 1, RET 8 (2 params).
__declspec(naked) void __stdcall func_00527140(void)
{
    

extern int DAT_007dd230;
extern void __cdecl FUN_10050ac7d(void);
__asm {
        mov ecx, dword ptr [DAT_007dd230]
        push 1
        call FUN_10050ac7d
        mov  eax, 1
        ret  8
    }


}
