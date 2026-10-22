/*
 * FUN_00747D00 (74 B) — __stdcall, RET 0xC (3 params), returns bool.
 *
 * Loop writing param_2 bytes via an IAT function (0x008AACC4), with a
 * failure path calling another IAT function (0x008AAC84).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_008AACC4;   /* IAT slot */
extern void *g_008AAC84;   /* IAT slot */

__declspec(naked) int __stdcall FUN_00747D00(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1C]
        test    edi, edi
        jle     done
        mov     ebp, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x18]
again:
        push    0x0
        push    edi
        push    ebx
        push    ebp
        call    dword ptr [g_008AACC4]
        mov     esi, eax
        test    esi, esi
        jz      fail
        cmp     esi, -0x1
        jnz     cont
        call    dword ptr [g_008AAC84]
cont:
        sub     edi, esi
        add     ebx, esi
        test    edi, edi
        jg      again
done:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0xC
fail:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0xC
    }
}
