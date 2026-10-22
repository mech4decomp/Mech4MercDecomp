/*
 * func_00518090 - XOR-decrypt vtable pointer and call virtual method at +0x10
 * Reads global at 0x007DAB44, XORs with global at 0x007DAB40,
 * dereferences offset +0x44 from result, XORs with 0x85739531,
 * then calls through [result+0x10] with this=result+0x54
 */
__declspec(naked) void func_00518090()
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov  ecx, [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov  edx, [ecx+0x44]
        xor  edx, 0x85739531
        mov  eax, [edx+0x54]
        lea  ecx, [edx+0x54]
        call dword ptr [eax+0x10]
        inc  eax
        ret
    }


}
