/*
 * FUN_00487106 (extent 0x487106-0x48713e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00487106(void)
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
        mov    edx, dword ptr [ecx + 0xc]
        xor    eax, eax
        test    edx, edx
        jle    L_7125
        mov    ecx, dword ptr [ecx + 0x18]
L_711c:
        and    byte ptr [ecx + eax], 0xfe
        inc    eax
        cmp    eax, edx
        jl    L_711c
L_7125:
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
        mov    eax, dword ptr [ecx]
        test    eax, eax
        je    L_713d
        push    eax
        call    FUN_004084e0
        pop    ecx
L_713d:
        ret    
    }
}
