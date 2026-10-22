/*
 * FUN_005E7D70 (extent 0x5E7D70-0x5E7D8F, 31 B) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern float g_0076d064;
extern void  __cdecl FUN_00637B40(void);
extern void  __cdecl FUN_00637A20(void);

__declspec(naked) void FUN_005E7D70(void)
{
    __asm {
        call   FUN_00637B40
        test   eax, eax
        je     L1
        push   2
        call   FUN_00637B40
        mov    ecx, eax
        call   FUN_00637A20
        ret
    L1:
        fld    dword ptr [g_0076d064]
        ret
    }
}
