/*
 * FUN_004FCB30 (31 B) — Wrapper function.
 *
 * __stdcall, RET 4, 1 stack param.
 * Calls a function, checks result, returns -1 on failure,
 * otherwise calls another function on the result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004fcc00(int param);
extern void __fastcall FUN_0041fd80(int this);

__declspec(naked) int __stdcall FUN_004FCB30(int param)
{
    __asm {
        mov     eax, [esp + 4]
        push    eax
        call    FUN_004fcc00
        test    eax, eax
        jnz     l_ok
        or      eax, -1
        ret     4
    l_ok:
        mov     ecx, [eax + 0x14]
        call    FUN_0041fd80
        ret     4
    }
}
