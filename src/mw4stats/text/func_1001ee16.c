/* operator_new CRT thunk (6 B): jmp [0x10021104] = MSVCRT.??2@YAPAXI@Z IAT.
   Split out of the merged func_1001edfe tail. */
extern int g_10021104;
__declspec(naked) void FUN_1001ee16(void)
{
    __asm {
            jmp dword ptr [g_10021104]
    }
}
