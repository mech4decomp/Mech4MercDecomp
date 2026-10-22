/*
 * FUN_100011b9 (45 B) — calls optional callback then two FUN_100012bd
 * table-walkers over the (start,end) pairs at 0x10006008/0x10006010 and
 * 0x10006000/0x10006004.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_100011b9 (45 B) -- __stdcall.
 * Calls an optional callback, then runs the two (start,end] init-table
 * walkers over the ranges 0x10006008..0x10006010 and 0x10006000..0x10006004.
 */

extern void __stdcall FUN_100012bd(void *start, void *end);

extern unsigned int g_10009114;   /* function pointer at 0x10009114 */

__declspec(naked) void __stdcall FUN_100011b9(void)
{
    __asm {
        mov     eax, dword ptr [g_10009114]
        test    eax, eax
        jz      L_c4
        call    eax
L_c4:
        push    0x10006010
        push    0x10006008
        call    FUN_100012bd
        push    0x10006004
        push    0x10006000
        call    FUN_100012bd
        add     esp, 0x10
        ret
    }
}
