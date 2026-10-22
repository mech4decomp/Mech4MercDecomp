/* FUN_00561A20 - 14 bytes - free pointer if non-NULL */
__declspec(naked) void FUN_00561A20(void)
{
    

extern void __cdecl FUN_1004084de(void);
__asm {
mov eax, dword ptr [ecx]
        test eax, eax
        je skip
        push eax
        call FUN_1004084de
        pop ecx
skip:
        ret
    }


}
