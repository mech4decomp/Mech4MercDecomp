// FUN_0064fc30 - ABL symbol table lookup wrapper (0x64fc30, 20 B)

extern char g_7f3254[];         // 0x007f3254 (string)
extern int __cdecl FUN_00650080(const char *);

__declspec(naked) void func_0064fc30(void)
{
    __asm {
        PUSH offset g_7f3254
        CALL FUN_00650080
        MOV ECX, dword ptr [ESP + 0x8]
        ADD ESP, 0x4
        MOV dword ptr [ECX], EAX
        RET
    }
}
