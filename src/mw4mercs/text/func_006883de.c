/*
 * FUN_006883de (extent 0x6883de-0x688462) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006b0710(void);

__declspec(naked) void FUN_006883de(void)
{
    __asm {
        nop    
        nop    
        sub    esp, 0xc
        mov    eax, dword ptr [ecx + 0x20]
        mov    eax, dword ptr [eax + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    ecx, dword ptr [eax + 0xac]
        fld    dword ptr [eax + 0x9c]
        add    eax, 0x80
        mov    eax, dword ptr [esp + 0x10]
        fxch    st(1)
        fstp    dword ptr [eax]
        mov    edx, ecx
        mov    dword ptr [esp + 8], ecx
        fstp    dword ptr [eax + 4]
        mov    dword ptr [eax + 8], edx
        add    esp, 0xc
        ret    8
        nop    
        nop    
        nop    
        mov    eax, 1
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
        mov    eax, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_006b0710
        xor    eax, eax
        mov    dword ptr [esi], 0x798c84
        mov    dword ptr [esi + 0x28], eax
        mov    dword ptr [esi + 0x20], eax
        mov    dword ptr [esi + 0x24], eax
        mov    dword ptr [esi + 8], 7
        mov    eax, esi
        pop    esi
        ret    8
    }
}
