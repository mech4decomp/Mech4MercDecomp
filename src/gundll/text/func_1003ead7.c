/*
 * FUN_1003ead7 (28 B) - __cdecl. Returns (IsBadWritePtr(param_1,param_2) == 0).
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_1004914c;   /* IAT: IsBadWritePtr */

__declspec(naked) void __cdecl FUN_1003ead7(void)
{
    __asm {
        push    esi
        push    1
        pop     esi
        push    dword ptr [esp + 0xc]
        push    dword ptr [esp + 0xc]
        call    dword ptr [g_1004914c]
        test    eax, eax
        jz      L_done
        xor     esi, esi
L_done:
        mov     eax, esi
        pop     esi
        ret
    }
}
