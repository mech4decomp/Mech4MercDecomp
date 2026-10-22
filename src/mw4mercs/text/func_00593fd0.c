/*
 * FUN_00593fd0 (extent 0x593fd0-0x594000) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_00593fd0(void)
{
    __asm {
        add    ecx, 0x24
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        call    FUN_004154d0
        ret    4
        mov    eax, dword ptr [esp + 4]
        push    eax
        add    ecx, 0x2c
        call    FUN_004179b0
        ret    4
        add    ecx, 0x2c
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        call    FUN_004154d0
        ret    4
    }
}
