/*
 * FUN_1001c2f0 (14 B) - calls InternetCloseHandle(param_1).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__cdecl *g_InternetCloseHandle)(void *);

__declspec(naked) void __cdecl FUN_1001c2f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    dword ptr [g_InternetCloseHandle]
        ret     0x4
    }
}
