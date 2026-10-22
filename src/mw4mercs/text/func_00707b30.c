/*
 * FUN_00707b30 (13 B) — calls timeEndPeriod(DAT_00858af0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00858af0;
extern void *g_0076b5c8;   /* IAT: timeEndPeriod */

__declspec(naked) void FUN_00707b30(void)
{
    __asm {
        mov     eax, dword ptr [g_00858af0]
        push    eax
        call    dword ptr [g_0076b5c8]
        ret
    }
}
