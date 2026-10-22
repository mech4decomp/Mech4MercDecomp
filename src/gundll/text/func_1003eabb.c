/*
 * FUN_1003eabb (28 B) - __cdecl. Returns (IsBadReadPtr(param_1,param_2) == 0).
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10049158;   /* IAT: IsBadReadPtr */

__declspec(naked) void __cdecl FUN_1003eabb(void)
{
    __asm {
        push    esi
        push    1
        pop     esi
        push    dword ptr [esp + 0xc]
        push    dword ptr [esp + 0xc]
        call    dword ptr [g_10049158]
        test    eax, eax
        jz      L_done
        xor     esi, esi
L_done:
        mov     eax, esi
        pop     esi
        ret
    }
}
