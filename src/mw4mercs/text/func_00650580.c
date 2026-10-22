// FUN_00650580 - ABL symbol table pop (0x650580, 21 B)

extern unsigned int g_8058c0;   // 0x008058c0
extern unsigned int g_80da24;   // 0x0080da24

__declspec(naked) unsigned int func_00650580(void)
{
    __asm {
        MOV ECX, dword ptr [g_8058c0]
        MOV EAX, dword ptr [ECX*0x4 + g_80da24]
        DEC ECX
        MOV dword ptr [g_8058c0], ECX
        RET
    }
}
