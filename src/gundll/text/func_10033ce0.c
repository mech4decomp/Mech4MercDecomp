/*
 * FUN_10033ce0 (24 B) — __fastcall.
 * Calls FUN_10033cc0 (returns u16 in AX), then FUN_10033ca0, returns
 * difference (result - u16).
 *
 * CFLAGS: /O1
 */

extern unsigned short __cdecl FUN_10033cc0(void);
extern int __cdecl FUN_10033ca0(void);

__declspec(naked) void __fastcall FUN_10033ce0(void)
{
    __asm {
        push    esi
        mov     edx, ecx
        call    FUN_10033cc0
        xor     esi, esi
        mov     ecx, edx
        mov     si, ax
        call    FUN_10033ca0
        sub     eax, esi
        pop     esi
        ret
    }
}
