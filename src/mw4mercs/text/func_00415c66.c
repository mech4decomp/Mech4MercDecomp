/*
 * FUN_00415c66 (extent 0x415c66-0x415cbd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415410(void);
extern void __cdecl FUN_00415470(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00415c66(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x76d484
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5c92
        int 3    
L_5c92:
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        call    FUN_00415410
        ret    4
        nop    
        nop    
        nop    
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        call    FUN_00415470
        ret    4
    }
}
