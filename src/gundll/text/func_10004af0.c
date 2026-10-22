/*
 * FUN_10004AF0 (24 B) - __stdcall, RET 0x8.
 * Thin wrapper: forwards two args to the IAT function at 0x1004906c and
 * returns a boolean (1 if the call returned nonzero, else 0) via
 * neg/sbb/inc.
 *
 * CFLAGS: /O1
 */

extern void *g_1004906c;   /* IAT slot 0x1004906c */

__declspec(naked) void __stdcall FUN_10004AF0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    dword ptr [g_1004906c]
        neg     eax
        sbb     eax, eax
        inc     eax
        ret     0x8
    }
}
