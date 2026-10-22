/*
 * FUN_005c0ae9 (extent 0x5c0ae9-0x5c0b4d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005dd740(void);

__declspec(naked) void FUN_005c0ae9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 0x5f4]
        test    ecx, 0xfffffffc
        je    L_0b06
        and    ecx, 0xfffffffc
        mov    eax, dword ptr [ecx]
        jmp    dword ptr [eax + 0x2c]
L_0b06:
        mov    al, 1
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x5f4]
        test    eax, 0xfffffffc
        je    L_0b2f
        mov    edx, dword ptr [esp + 4]
        mov    ecx, eax
        and    ecx, 0xfffffffc
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x30]
        ret    4
L_0b2f:
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_005dd740
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [eax], ecx
        ret    4
    }
}
