/*
 * FUN_00402280 (18 B) — pushes a global pointer, calls FUN_00401c30,
 * returns 0.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b7960;
extern void __cdecl FUN_00401c30(void);

__declspec(naked) void FUN_00402280(void)
{
    __asm {
        push    offset g_007b7960
        call    FUN_00401c30
        add     esp, 4
        xor     eax, eax
        ret     0xc
    }
}
