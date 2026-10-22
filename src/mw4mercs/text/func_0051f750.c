// Auto-generated: read globals, XOR, tail call to FUN_00617b50
// FUN_0051f750, 29 bytes

void FUN_00617b50(void);

__declspec(naked) void func_0051f750(void)
{
    extern int DAT_007dab44;
    extern int DAT_007dab40;
    __asm {
        mov  eax, dword ptr [DAT_007dab44]
        mov  ecx, dword ptr [DAT_007dab40]
        mov  eax, [eax]
        xor  eax, ecx
        mov  ecx, [eax+0x44]
        xor  ecx, 0x85739531
        jmp  FUN_00617b50
    }
}
