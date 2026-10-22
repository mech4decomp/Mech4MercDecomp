/*
 * FUN_00750450 (39 B) — Thin wrapper that forwards one argument through an
 * IAT function at 0x0076B12C (8 args) and returns the constant 0x8B9B90.
 *
 * __stdcall (RET 4, one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__stdcall *g_76b12c)(int, int, int, int, int, int, int, int);

__declspec(naked) int __stdcall FUN_00750450(int param)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    0
        push    0
        push    0x103
        push    0x8b9b90
        push    -1
        push    eax
        push    0
        push    0
        call    dword ptr [g_76b12c]
        mov     eax, 0x8b9b90
        ret     4
    }
}
