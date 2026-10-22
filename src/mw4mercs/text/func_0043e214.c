/*
 * FUN_0043e214 (extent 0x43e214-0x43e2b9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00491620(void);

__declspec(naked) void FUN_0043e214(void)
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
        je    L_e22e
        lea    eax, [ecx + 0x6c]
L_e22e:
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
        je    L_e24e
        lea    eax, [ecx + 0x64]
L_e24e:
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
        lea    ecx, [esi + 0x6c]
        push    ecx
        push    edi
        lea    ecx, [esi + 0x64]
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
        jne    L_e29e
        mov    eax, dword ptr [ecx + 0x44]
        ret    4
L_e29e:
        mov    edx, dword ptr [ecx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        shl    eax, 5
        add    eax, edx
        ret    4
        nop    
        mov    eax, dword ptr [ecx + 0x84]
        ret    4
    }
}
