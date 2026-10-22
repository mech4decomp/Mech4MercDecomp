/*
 * FUN_00416e93 (extent 0x416e93-0x416f1b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415bd0(void);

__declspec(naked) void FUN_00416e93(void)
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
        mov    eax, dword ptr [ecx + 0x14]
        test    eax, eax
        jle    L_6ed9
        mov    ecx, dword ptr [ecx + 0xc]
        push    esi
        push    edi
        lea    esi, [ecx + eax*4]
        mov    edi, eax
L_6ec1:
        mov    edx, dword ptr [esi - 4]
        mov    ecx, dword ptr [edx + 0xc]
        sub    esi, 4
        test    ecx, ecx
        je    L_6ed4
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_6ed4:
        dec    edi
        jne    L_6ec1
        pop    edi
        pop    esi
L_6ed9:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x14]
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
        mov    eax, dword ptr [esp + 4]
        cmp    eax, dword ptr [ecx + 0x14]
        jae    L_6f05
        mov    ecx, dword ptr [ecx + 0xc]
        mov    edx, dword ptr [ecx + eax*4]
        mov    eax, dword ptr [edx + 0xc]
        ret    4
L_6f05:
        xor    eax, eax
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [ecx + 0x14]
        xor    eax, eax
        test    edx, edx
        sete    al
        ret    
    }
}
