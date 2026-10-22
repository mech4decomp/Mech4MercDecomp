/*
 * FUN_004169e9 (extent 0x4169e9-0x416a42) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415bd0(void);

__declspec(naked) void FUN_004169e9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        jmp    FUN_00415bd0
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
        mov    eax, dword ptr [ecx + 0xc]
        test    eax, eax
        je    L_6a21
        push    esi
L_6a08:
        mov    esi, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0xc]
        test    eax, eax
        je    L_6a1a
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_6a1a:
        test    esi, esi
        mov    eax, esi
        jne    L_6a08
        pop    esi
L_6a21:
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
        mov    ecx, dword ptr [ecx + 0xc]
        xor    eax, eax
        test    ecx, ecx
        je    L_6a41
L_6a39:
        mov    ecx, dword ptr [ecx + 0x10]
        inc    eax
        test    ecx, ecx
        jne    L_6a39
L_6a41:
        ret    
    }
}
