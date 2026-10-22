/*
 * FUN_0041fcff (extent 0x41fcff-0x41fd8e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0041fcff(void)
{
    __asm {
        nop    
        push    0x76d478
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_fd12
        int 3    
L_fd12:
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
        push    0x76d478
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_fd32
        int 3    
L_fd32:
        xor    eax, eax
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
        push    0x76d478
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_fd52
        int 3    
L_fd52:
        xor    eax, eax
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
        push    0x76d478
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_fd72
        int 3    
L_fd72:
        xor    al, al
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
        mov    eax, dword ptr [ecx + 4]
        test    eax, eax
        je    L_fd8b
        mov    eax, dword ptr [eax + 0xc]
        ret    
L_fd8b:
        xor    eax, eax
        ret    
    }
}
