/* __CxxFrameHandler IAT thunk tail (18 B = jmp [0x100210e8] + 12-byte int3 pad)
   Split out of the old merged func_1001edfe (0x30 B) so each CRT thunk is its
   own function at its reference RVA (thunks continue at 0x1001ee10+). */
extern int g_100210e8;
__declspec(naked) void FUN_1001edfe(void)
{
    __asm {
            jmp dword ptr [g_100210e8]
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
    }
}
