/*
 * FUN_00767f6b (extent 0x767f6b-0x76803e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00767a60(void);
extern void __cdecl FUN_00767c30(void);

__declspec(naked) void FUN_00767f6b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 4]
        mov    dword ptr [esp + 8], ecx
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        or    ecx, 0xffffffff
        xor    eax, eax
        xor    ebx, ebx
        repne scasb
        not    ecx
        add    ecx, 8
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        test    ebp, ebp
        mov    edi, eax
        je    L_7fe0
L_7f9d:
        mov    eax, dword ptr [esp + 0x18]
        lea    esi, [ebp + 8]
L_7fa4:
        mov    dl, byte ptr [eax]
        mov    cl, dl
        cmp    dl, byte ptr [esi]
        jne    L_7fc8
        test    cl, cl
        je    L_7fc4
        mov    dl, byte ptr [eax + 1]
        mov    cl, dl
        cmp    dl, byte ptr [esi + 1]
        jne    L_7fc8
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_7fa4
L_7fc4:
        xor    eax, eax
        jmp    L_7fcd
L_7fc8:
        sbb    eax, eax
        sbb    eax, -1
L_7fcd:
        test    eax, eax
        jl    L_7fdc
        mov    ebx, ebp
        mov    ebp, dword ptr [ebp]
        test    ebp, ebp
        jne    L_7f9d
        jmp    L_7fe0
L_7fdc:
        test    ebp, ebp
        jne    L_7fe7
L_7fe0:
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], edi
L_7fe7:
        test    ebx, ebx
        jne    L_7ff4
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx + 4], edi
        jmp    L_7ff6
L_7ff4:
        mov    dword ptr [ebx], edi
L_7ff6:
        mov    eax, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x1c]
        push    eax
        mov    ecx, edi
        mov    dword ptr [edi + 4], edx
        mov    dword ptr [edi], ebp
        call    FUN_00767c30
        lea    eax, [edi + 8]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
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
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_00767a60
        test    byte ptr [esp + 8], 1
        je    L_8038
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_8038:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
