/*
 * FUN_10002433 (28 B) — one-time init: if the 0x100058c8 flag is clear,
 * call FUN_1000205b(-3) and set the flag.
 *
 * __stdcall, 0 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_100058c8;                                /* 0x100058c8 */
extern int __cdecl FUN_1000205b(int);

__declspec(naked) void __stdcall FUN_10002433(void)
{
    __asm {
        cmp     dword ptr [g_100058c8], 0
        jnz     L244E
        push    -3
        call    FUN_1000205b
        pop     ecx
        mov     dword ptr [g_100058c8], 1
L244E:
        ret
    }
}
