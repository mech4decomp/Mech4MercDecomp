/*
 * func_00513D70 - XOR-decrypt vtable pointer and call through it
 * Reads global at 0x007DAB44, XORs with global at 0x007DAB40,
 * dereferences offset +0x0C from result, XORs with 0x85739531,
 * then loads from [result+0x00205D20]
 */
__declspec(naked) void __stdcall func_00513D70()
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov  ecx, [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov  edx, [ecx+0xC]
        xor  edx, 0x85739531
        mov  eax, [edx+0x205D20]
        ret  0xC
    }


}
