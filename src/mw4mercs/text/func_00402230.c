/*
 * FUN_00402230 (21 B) — pushes a global object pointer (0x7b7960), calls
 * FUN_00401c30, returns 1. __stdcall, 3 stack params (ret 0xc).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00401c30(void);
extern char g_7b7960;

__declspec(naked) void func_00402230(void)
{
    __asm {
        push    offset g_7b7960
        call    FUN_00401c30
        add     esp, 4
        mov     eax, 1
        ret     0xc
    }
}
