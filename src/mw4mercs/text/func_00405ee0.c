/*
 * FUN_00405ee0 (51 B) -- teardown: calls several shutdown helpers, then
 * frees the DAT_007b7e40 buffer if non-null and clears it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004cc060(void);
extern void __cdecl FUN_006f8b20(void);
extern void __cdecl FUN_006f9050(void);
extern void __cdecl FUN_00403eb0(void);
extern void __cdecl FUN_00701de0(void);
extern void __cdecl FUN_006f4230(void);
extern int g_007b7e40;

__declspec(naked) void FUN_00405ee0(void)
{
    __asm {
        call    FUN_004cc060
        call    FUN_006f8b20
        call    FUN_006f9050
        call    FUN_00403eb0
        call    FUN_00701de0
        mov     eax, dword ptr [g_007b7e40]
        test    eax, eax
        jz      skip
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7e40], 0
skip:
        ret
    }
}
