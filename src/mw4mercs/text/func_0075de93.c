/*
 * FUN_0075de93 (extent 0x75de93-0x75deb4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0075df96(void);

__declspec(naked) void FUN_0075de93(void)
{
    __asm {
        push    esi
        mov    esi, ecx
        call    FUN_0075df96
        test    byte ptr [esp + 8], 1
        je    L_dea9
        push    esi
        call    FUN_004084e0
        pop    ecx
L_dea9:
        mov    eax, esi
        pop    esi
        ret    4
        mov    eax, ecx
        ret    4
    }
}
