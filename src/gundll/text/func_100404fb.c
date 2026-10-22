/*
 * FUN_100404fb (54 B) - __stdcall. Calls GetVersionExA (IAT 0x10049114);
 * returns 1 if platform id == 2 (NT), else 0.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10049114;   /* IAT: GetVersionExA */

__declspec(naked) void __stdcall FUN_100404fb(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x94
        lea     eax, [ebp - 0x94]
        mov     dword ptr [ebp - 0x94], 0x94
        push    eax
        call    dword ptr [g_10049114]
        test    eax, eax
        jz      L_2d
        cmp     dword ptr [ebp - 0x84], 2
        jnz     L_2d
        push    1
        pop     eax
        leave
        ret
L_2d:
        xor     eax, eax
        leave
        ret
    }
}
