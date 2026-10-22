/*
 * FUN_004b63f0 (extent 0x4b63f0-0x4b647a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004b63f0(void)
{
    __asm {
        push    0x77086c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_6402
        int 3    
L_6402:
        xor    al, al
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
        push    0x77086c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_6422
        int 3    
L_6422:
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
        mov    dword ptr [ecx + 0x13c], 0x4b6440
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    0xc
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
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax + 0x190], ecx
        add    eax, 0x144
        push    eax
        call    dword ptr [edx + 8]
        ret    4
    }
}
