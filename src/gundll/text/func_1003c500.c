/*
 * FUN_1003c500 (7 B) - __cdecl. Tail-jump into shared strcpy body at
 * 0x1003c571 (rel8 EB 6A).
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_1003c500(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 8]
        /* __emit: MSVC6 cannot emit a rel8 (EB) jump to an external
           function symbol (it would emit rel32 E9); reference uses the
           short form EB 6A to reach 0x1003c571. */
        __emit  0xEB
        __emit  0x6A
    }
}
