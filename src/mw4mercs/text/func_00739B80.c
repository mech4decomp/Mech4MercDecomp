/*
 * FUN_00739B80 (17 B) — __stdcall thunk: pushes arg0, calls IAT
 * [0x76B294], add esp,4, ret 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b294;

__declspec(naked) void FUN_00739B80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b294]
        add     esp, 4
        ret     4
    }
}
