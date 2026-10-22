/* _ftol CRT thunk (6 B): jmp [0x100210fc] = MSVCRT._ftol IAT. Split out of the
   merged func_1001edfe tail; callers that reached _ftol reference this function. */
extern int g_100210fc;
__declspec(naked) void FUN_1001ee10(void)
{
    __asm {
            jmp dword ptr [g_100210fc]
    }
}
