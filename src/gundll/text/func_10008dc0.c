/*
 * FUN_10008dc0 (25 B) — __stdcall.
 * Lazy-init: if global 0x10055028 is 0, call FUN_1002f650(&g_10055028);
 * return the global.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10055028;
extern void __cdecl FUN_1002f650(void);

__declspec(naked) void __stdcall FUN_10008dc0(void)
{
    __asm {
        mov     eax, dword ptr [g_10055028]
        test    eax, eax
        jnz     done
        push    offset g_10055028
        call    FUN_1002f650
        mov     eax, dword ptr [g_10055028]
    done:
        ret
    }
}
