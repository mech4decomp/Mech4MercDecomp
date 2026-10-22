/*
 * FUN_00493E30 (24 B) — __cdecl.
 * Scans byte array at 0x007da944 for first zero entry (max 18 entries).
 * Returns 0 if found, 1 if all entries are nonzero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_00493e30(void)
{
    __asm {
        xor     eax, eax
l_loop:
        mov     cl, byte ptr [eax + 0x7da944]
        test    cl, cl
        jz      l_found
        inc     eax
        cmp     eax, 0x12
        jc      l_loop
        mov     al, 1
        ret
l_found:
        xor     al, al
        ret
    }
}
