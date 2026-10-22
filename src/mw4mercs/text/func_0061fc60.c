/*
 * FUN_0061fc60 (27 B) - __cdecl. If global pointer g_007f2ba4 is non-null,
 * calls it (IAT 0x0076b0ec) with itself as arg, then clears the global.
 * Likely a one-shot cleanup/atexit-style hook.
 *
 * CFLAGS: /O1
 */

extern int g_007f2ba4;
extern void *g_0076b0ec;

__declspec(naked) void FUN_0061fc60(void)
{
    __asm {
        mov     eax, dword ptr [g_007f2ba4]
        test    eax, eax
        jz      L_70
        push    eax
        call    dword ptr [g_0076b0ec]
L_70:
        mov     dword ptr [g_007f2ba4], 0
        ret
    }
}
