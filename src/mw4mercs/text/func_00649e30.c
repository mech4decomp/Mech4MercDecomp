/*
 * FUN_00649e30 (37 B) — __cdecl printf wrapper.
 *
 * DAT_00805900++; printf("Page %d   %s   %s\n\n",
 *                        DAT_00805900, &DAT_007f3154, &DAT_007f3138);
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __imp__printf;               /* 0x0076B2F4 - IAT printf */
extern int DAT_00805900;                /* 0x00805900 - page counter */
extern const char DAT_007f3138[];       /* 0x007F3138 */
extern const char DAT_007f3154[];       /* 0x007F3154 */
extern const char DAT_007929e0[];       /* 0x007929E0 - "Page %d   %s   %s\n\n" */

__declspec(naked) void __cdecl FUN_00649e30(void)
{
    __asm {
        mov     eax, dword ptr [DAT_00805900]
        push    offset DAT_007f3138
        inc     eax
        push    offset DAT_007f3154
        push    eax
        push    offset DAT_007929e0
        mov     dword ptr [DAT_00805900], eax
        call    dword ptr [__imp__printf]
        add     esp, 0x10
        ret
    }
}
