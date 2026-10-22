/*
 * FUN_1003eaf3 (24 B) — __cdecl.
 * Calls IsBadCodePtr(param_1) via IAT; returns 1 if result == 0.
 *
 * CFLAGS: /O1
 */

extern void *g_1004915c;   /* IAT: IsBadCodePtr */

__declspec(naked) void __cdecl FUN_1003eaf3(void)
{
    __asm {
        push    esi
        push    1
        pop     esi
        push    dword ptr [esp + 0x8]
        call    dword ptr [g_1004915c]
        test    eax, eax
        jz      done
        xor     esi, esi
    done:
        mov     eax, esi
        pop     esi
        ret
    }
}
