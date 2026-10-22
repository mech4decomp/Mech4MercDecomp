/*
 * FUN_00629270 (30 B) -- ABL helper: calls FUN_00629290 with the stack arg,
 * returns 1 if the result is non-null and its byte+4 == 1, else 0.
 * __stdcall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00629290(void);

__declspec(naked) void FUN_00629270(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    FUN_00629290
        test    eax, eax
        jz      L629289
        cmp     byte ptr [eax + 0x4], 0x1
        jnz     L629289
        mov     al, 0x1
        ret     0x4
L629289:
        xor     al, al
        ret     0x4
    }
}
