/*
 * FUN_004d2ac0 (extent 0x4d2ac0-0x4d2ae0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004149a0(void);
extern void __cdecl FUN_00414990(void);

__declspec(naked) void FUN_004d2ac0(void)
{
    __asm {
        mov    ecx, dword ptr [ecx + 0x10]
        jmp    FUN_00414990
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 0x10]
        push    eax
        call    FUN_004149a0
        ret    4
    }
}
