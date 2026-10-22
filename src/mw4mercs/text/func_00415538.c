/*
 * FUN_00415538 (extent 0x415538-0x415588) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415d40(void);

__declspec(naked) void FUN_00415538(void)
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
        mov    edx, dword ptr [ecx + 0xc]
        mov    ecx, edx
        test    ecx, ecx
        jne    L_554c
        xor    eax, eax
        ret    
L_554c:
        xor    eax, eax
L_554e:
        mov    ecx, dword ptr [ecx + 0x10]
        inc    eax
        cmp    ecx, edx
        jne    L_554e
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi + 4], eax
        mov    eax, dword ptr [esp + 0xc]
        push    eax
        mov    dword ptr [esi + 0xc], eax
        call    FUN_00415d40
        xor    eax, eax
        mov    dword ptr [esi + 0x10], eax
        mov    dword ptr [esi + 0x14], eax
        mov    dword ptr [esi + 0x18], eax
        mov    eax, esi
        pop    esi
        ret    8
    }
}
