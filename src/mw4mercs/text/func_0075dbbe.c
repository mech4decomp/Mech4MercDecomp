/*
 * FUN_0075dbbe (extent 0x75dbbe-0x75dbd0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0075db92(void);

__declspec(naked) void FUN_0075dbbe(void)
{
    __asm {
        push    dword ptr [esp + 4]
        call    FUN_0075db92
        neg    eax
        sbb    eax, eax
        pop    ecx
        neg    eax
        dec    eax
        ret    
    }
}
