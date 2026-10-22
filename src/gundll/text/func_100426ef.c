/*
 * FUN_100426ef (27 B) - __cdecl. If global function pointer DAT_10075724 is
 * non-null, call it with param_1; return 1 if it returns nonzero, else 0.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10075724;   /* A1 absolute load of DAT_10075724 */

__declspec(naked) void __cdecl FUN_100426ef(void)
{
    __asm {
        mov     eax, dword ptr [g_10075724]
        test    eax, eax
        jz      L_ret0
        push    dword ptr [esp + 4]
        call    eax
        test    eax, eax
        pop     ecx
        jz      L_ret0
        push    1
        pop     eax
        ret
L_ret0:
        xor     eax, eax
        ret
    }
}
