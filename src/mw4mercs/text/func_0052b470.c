// FUN_0052B470 (14 bytes)
// __thiscall: calls 0x0052B47F (next instruction) with arg 0.
// The call $+5 pattern pushes return address (0x0052B47F) onto stack.
__declspec(naked) void func_0052b470(void)
{
    

extern void __cdecl FUN_0052b480(void);
__asm {
push esi
        mov  esi, ecx
        push 0
        call FUN_0052b480
        mov  eax, esi
        pop  esi
        ret
    }


}
