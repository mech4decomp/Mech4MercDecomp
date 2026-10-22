/*
 * FUN_00546509 (extent 0x546509-0x54654f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00546509(void)
{
    __asm {
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
        xor    eax, eax
        add    ecx, 0x205f34
L_6528:
        cmp    byte ptr [ecx], 0
        je    L_654e
        inc    eax
        add    ecx, 0x22ac
        cmp    eax, 0x18
        jl    L_6528
        push    0x77b878
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_654b
        int 3    
L_654b:
        or    eax, 0xffffffff
L_654e:
        ret    
    }
}
