/*
 * FUN_006c75d6 (extent 0x6c75d6-0x6c7618) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_006c75d6(void)
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
        push    0x79e180
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_75f2
        int 3    
L_75f2:
        ret    4
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x30], eax
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [ecx + 0x34], edx
        mov    dword ptr [ecx + 0x38], eax
        ret    0xc
    }
}
