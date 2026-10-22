/*
 * FUN_00415709 (extent 0x415709-0x41579a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004155d0(void);

__declspec(naked) void FUN_00415709(void)
{
    __asm {
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
        sete    al
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0xc]
        test    esi, esi
        jne    L_5743
        push    esi
        push    esi
        push    esi
        mov    esi, dword ptr [esp + 0x1c]
        mov    ecx, esi
        call    FUN_004155d0
        mov    dword ptr [edi + 0xc], esi
        pop    edi
        pop    esi
        pop    ebx
        ret    4
L_5743:
        mov    ebx, dword ptr [esp + 0x10]
L_5747:
        mov    eax, dword ptr [edi]
        push    esi
        push    ebx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        test    eax, eax
        jge    L_575d
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        je    L_5770
        jmp    L_5764
L_575d:
        mov    eax, dword ptr [esi + 0x14]
        test    eax, eax
        je    L_5785
L_5764:
        mov    esi, eax
        test    esi, esi
        jne    L_5747
        pop    edi
        pop    esi
        pop    ebx
        ret    4
L_5770:
        push    esi
        push    0
        push    0
        mov    ecx, ebx
        call    FUN_004155d0
        pop    edi
        mov    dword ptr [esi + 0x10], ebx
        pop    esi
        pop    ebx
        ret    4
L_5785:
        push    esi
        push    0
        push    0
        mov    ecx, ebx
        call    FUN_004155d0
        pop    edi
        mov    dword ptr [esi + 0x14], ebx
        pop    esi
        pop    ebx
        ret    4
    }
}
