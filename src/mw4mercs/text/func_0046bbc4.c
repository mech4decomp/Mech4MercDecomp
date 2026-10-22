/*
 * FUN_0046bbc4 (extent 0x46bbc4-0x46bc5f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00491620(void);

__declspec(naked) void FUN_0046bbc4(void)
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        lea    eax, [ecx + 0x2c]
        je    L_bbde
        lea    eax, [ecx + 0x70]
L_bbde:
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
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        lea    eax, [ecx + 0x24]
        je    L_bbfe
        lea    eax, [ecx + 0x68]
L_bbfe:
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
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        lea    eax, [esi + 0x2c]
        push    eax
        push    edi
        lea    ecx, [esi + 0x24]
        call    FUN_00491620
        lea    ecx, [esi + 0x70]
        push    ecx
        push    edi
        lea    ecx, [esi + 0x68]
        call    FUN_00491620
        pop    edi
        pop    esi
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jne    L_bc4e
        mov    eax, dword ptr [ecx + 0x44]
        ret    4
L_bc4e:
        mov    edx, dword ptr [ecx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        shl    eax, 5
        add    eax, edx
        ret    4
    }
}
