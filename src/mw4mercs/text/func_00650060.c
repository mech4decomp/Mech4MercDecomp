// FUN_00650060 - ABL symbol table lookup (0x650060, 20 B)

extern unsigned int g_80da24;   // 0x0080da24
extern void *__cdecl FUN_0064ffc0(unsigned int, unsigned int);

__declspec(naked) void func_00650060(void)
{
    __asm {
        MOV EAX, dword ptr [g_80da24]
        MOV ECX, dword ptr [ESP + 0x4]
        PUSH EAX
        PUSH ECX
        CALL FUN_0064ffc0
        ADD ESP, 0x8
        RET
    }
}
