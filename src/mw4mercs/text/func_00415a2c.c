/*
 * FUN_00415a2c (extent 0x415a2c-0x415a73) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00415a2c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x76d464
        mov    esi, ecx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5a45
        int 3    
L_5a45:
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x18]
        mov    edi, eax
        test    edi, edi
        je    L_5a66
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x10]
L_5a66:
        mov    eax, edi
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
        ret    
    }
}
