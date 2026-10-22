/*
 * DllCanUnloadNow (6 B) — __stdcall COM export.
 * Returns S_OK (1).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall DllCanUnloadNow(void)
{
    __asm {
        mov     eax, 1
        ret
    }
}
