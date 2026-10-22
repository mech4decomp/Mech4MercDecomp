/*
 * DllRegisterServer (6 B) — __stdcall COM export.
 * Returns E_NOTIMPL (0x80004005).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall DllRegisterServer(void)
{
    __asm {
        mov     eax, 0x80004005
        ret
    }
}
