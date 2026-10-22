/*
 * FUN_0067BFB0 (18 B) — pushes 0x80, calls FUN_0061ACF0, moves result
 * to ecx, calls FUN_0061AD20, returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad20(void);

__declspec(naked) void FUN_0067BFB0(void)
{
    __asm {
        push    0x80
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        ret
    }
}
