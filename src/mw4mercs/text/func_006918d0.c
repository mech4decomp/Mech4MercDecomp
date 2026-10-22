/*
 * FUN_006918d0 (extent 0x6918d0-0x691991) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006918d0(void)
{
    __asm {
        push    ecx
        mov    eax, dword ptr [ecx]
        test    eax, eax
        __emit 0x89  // mov dword ptr [esp], eax
__emit 0x44
__emit 0x24
__emit 0x00
        je    L_18e4
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_18e4:
        pop    ecx
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
        push    esi
        push    0x10
        mov    esi, ecx
        call    FUN_004084d0
        xor    edx, edx
        add    esp, 4
        cmp    eax, edx
        je    L_1921
        mov    ecx, dword ptr [esp + 8]
        push    edi
        mov    edi, dword ptr [ecx]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], edx
        mov    dword ptr [eax + 8], edi
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax], edx
        pop    edi
        jmp    L_1923
L_1921:
        xor    eax, eax
L_1923:
        inc    dword ptr [esi + 8]
        mov    ecx, dword ptr [esi + 4]
        cmp    ecx, edx
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax], ecx
        je    L_1935
        mov    dword ptr [ecx + 4], eax
L_1935:
        mov    dword ptr [esi + 4], eax
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 4]
        test    eax, eax
        mov    dword ptr [edi], 0x798fb8
        je    L_1974
        push    esi
L_1951:
        test    eax, eax
        mov    esi, dword ptr [eax]
        je    L_196d
        mov    dword ptr [eax + 4], 0
        push    eax
        mov    dword ptr [eax], 0
        call    FUN_004084e0
        add    esp, 4
L_196d:
        test    esi, esi
        mov    eax, esi
        jne    L_1951
        pop    esi
L_1974:
        test    byte ptr [esp + 8], 1
        mov    dword ptr [edi + 4], 0
        je    L_198b
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_198b:
        mov    eax, edi
        pop    edi
        ret    4
    }
}
