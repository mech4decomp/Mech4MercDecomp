/* FUN_00545a10 (35 B) — XOR-based lookup and virtual call */
__declspec(naked) void __stdcall func_00545a10(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov  ecx, [eax]
        xor  ecx, edx
        mov  ecx, [ecx+0x20]
        xor  ecx, 0x85739531
        mov  edx, [ecx]
        call dword ptr [edx+0xA8]
        ret  8
    }


}
