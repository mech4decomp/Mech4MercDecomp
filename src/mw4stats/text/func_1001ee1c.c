/* _purecall CRT thunk (6 B): jmp [0x10021114] = MSVCRT._purecall IAT.
   Split out of the merged func_1001edfe tail. */
extern int g_10021114;
__declspec(naked) void FUN_1001ee1c(void)
{
    __asm {
            jmp dword ptr [g_10021114]
    }
}
