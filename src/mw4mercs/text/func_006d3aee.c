/*
 * FUN_006d3aee (extent 0x6d3aee-0x6d3b84) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_006d3aee(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x10]
        mov    ecx, dword ptr [ecx + 0x10]
        cmp    eax, ecx
        jne    L_3b07
        xor    eax, eax
        ret    8
L_3b07:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx + 0x10]
        cmp    eax, ecx
        jne    L_3b36
        xor    eax, eax
        ret    8
L_3b36:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
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
        push    esi
        mov    esi, ecx
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        je    L_3b78
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_3b78:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        lea    eax, [ecx + 0x34]
        ret    
    }
}
