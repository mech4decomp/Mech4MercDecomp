/*
 * FUN_0064a020 (29 B) — guarded pointer-offset helper. If a global flag is
 * clear, returns 0. Otherwise stores (g_00805914 - this) into *param and
 * returns the previous *param value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007b5a2f;
extern int  g_00805914;

__declspec(naked) int FUN_0064a020(void)
{
    __asm {
        mov     al, byte ptr [g_007b5a2f]
        test    al, al
        jnz     L1
        xor     eax, eax
        ret
L1:
        mov     ecx, dword ptr [esp+4]
        mov     edx, dword ptr [g_00805914]
        mov     eax, dword ptr [ecx]
        sub     edx, ecx
        mov     dword ptr [ecx], edx
        ret
    }
}
