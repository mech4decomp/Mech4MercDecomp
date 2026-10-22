/*
 * FUN_00405fa0 (35 B) -- calls FUN_00403eb0/FUN_00403ad0, then invokes
 * FUN_00404620 and FUN_004015b0 each with three null args. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00403eb0(void);
extern void __cdecl FUN_00403ad0(void);
extern void __cdecl FUN_00404620(void);
extern void __cdecl FUN_004015b0(void);

__declspec(naked) void FUN_00405fa0(void)
{
    __asm {
        call    FUN_00403eb0
        call    FUN_00403ad0
        push    0
        push    0
        push    0
        call    FUN_00404620
        push    0
        push    0
        push    0
        call    FUN_004015b0
        mov     al, 1
        ret
    }
}
