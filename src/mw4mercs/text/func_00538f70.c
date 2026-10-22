// FUN_00538F70 (21 bytes)
// Reads from global pointers, XORs values, returns result.
// __stdcall, no params.
__declspec(naked) void __stdcall func_00538f70(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov  ecx, [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov  eax, [ecx]
        xor  eax, 0x85739531
        ret
    }


}
