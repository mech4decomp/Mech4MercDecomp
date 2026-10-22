/*
 * FUN_004FCBE0 (23 B) — Call FUN_004FCC00(param), if result != 0
 * return [result+0x10], else return 0.
 *
 * __cdecl (one stack param), RET 4.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_004fcc00(void);

__declspec(naked) void __fastcall FUN_004fcbe0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004fcc00
        test    eax, eax
        jnz     l_nonzero
        ret     4
    l_nonzero:
        mov     eax, dword ptr [eax + 0x10]
        ret     4
    }
}
