/*
 * FUN_0068772b (extent 0x68772b-0x6877f6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0068772b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0xc
        mov    esi, ecx
        call    FUN_004084d0
        xor    edx, edx
        add    esp, 4
        cmp    eax, edx
        je    L_7753
        mov    ecx, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax], edx
        jmp    L_7755
L_7753:
        xor    eax, eax
L_7755:
        inc    dword ptr [esi + 8]
        mov    ecx, dword ptr [esi + 4]
        cmp    ecx, edx
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax], ecx
        je    L_7767
        mov    dword ptr [ecx + 4], eax
L_7767:
        mov    dword ptr [esi + 4], eax
        pop    esi
        ret    4
        nop    
        nop    
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 4]
        test    eax, eax
        mov    dword ptr [edi], 0x798bfc
        je    L_77a4
        push    esi
L_7781:
        test    eax, eax
        mov    esi, dword ptr [eax]
        je    L_779d
        mov    dword ptr [eax + 4], 0
        push    eax
        mov    dword ptr [eax], 0
        call    FUN_004084e0
        add    esp, 4
L_779d:
        test    esi, esi
        mov    eax, esi
        jne    L_7781
        pop    esi
L_77a4:
        test    byte ptr [esp + 8], 1
        mov    dword ptr [edi + 4], 0
        je    L_77bb
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_77bb:
        mov    eax, edi
        pop    edi
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
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi + 4], 0
        mov    dword ptr [esi], 0
        je    L_77f0
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_77f0:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
