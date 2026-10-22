/* operator_delete CRT thunk (6 B): jmp [0x100210d0] = MSVCRT.??3@YAXPAX@Z IAT.
   Split out of the merged func_1001edfe tail; callers that freed memory
   reference this function. */
extern int g_100210d0;
__declspec(naked) void FUN_1001ee22(void)
{
    __asm {
            jmp dword ptr [g_100210d0]
    }
}
