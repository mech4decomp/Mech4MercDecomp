/*
 * FUN_00700640 (26 B) - if DAT_008589cc is non-null, calls FUN_006f4230
 * on it and clears the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void);

extern int g_008589cc;   /* DAT_008589cc */

__declspec(naked) void FUN_00700640(void)
{
    __asm {
        mov     eax, dword ptr [g_008589cc]
        test    eax, eax
        jz      L0659
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_008589cc], 0x0
L0659:
        ret
    }
}
