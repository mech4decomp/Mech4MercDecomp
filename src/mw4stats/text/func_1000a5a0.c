/*
 * FUN_1000a5a0 (26 B) - FindClose wrapper. Returns 1 if the handle is
 * NULL, otherwise returns the result of FindClose(handle).
 *
 * __stdcall, 1 param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021074;   /* FindClose IAT @ 0x10021074 */

__declspec(naked) int __cdecl FUN_1000a5a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jnz     L_close
        mov     eax, 0x1
        ret     0x4
L_close:
        push    eax
        call    dword ptr [g_10021074]
        ret     0x4
    }
}
