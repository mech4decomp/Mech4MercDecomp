/*
 * FUN_10006140 (14 B) - __stdcall, RET 0x8.
 * Frees param_1 via FUN_10001d60.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call, 1 arg */

__declspec(naked) void __stdcall FUN_10006140(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret     0x8
    }
}
