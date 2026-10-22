/*
 * FUN_100031b8 (27 B) — call the registered callback (0x10005538) with the
 * given arg; return 1 if it returned nonzero, else 0.
 *
 * __cdecl, 1 arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_10005538)(void *);   /* 0x10005538 */

__declspec(naked) int __cdecl FUN_100031b8(void)
{
    __asm {
        mov     eax, dword ptr [g_10005538]
        test    eax, eax
        jz      L31D0
        push    dword ptr [esp + 4]
        call    eax
        test    eax, eax
        pop     ecx
        jz      L31D0
        push    0x1
        pop     eax
        ret
L31D0:
        xor     eax, eax
        ret
    }
}
