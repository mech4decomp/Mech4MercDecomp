/*
 * FUN_00416a74 (extent 0x416a74-0x416b5b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415be0(void);
extern void __cdecl FUN_00416970(void);

__declspec(naked) void FUN_00416a74(void)
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
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esi]
        push    ebp
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    ebx, dword ptr [esi + 0xc]
        test    ebx, ebx
        mov    edi, eax
        jne    L_6acf
        push    ebx
        push    ebx
        mov    ecx, edi
        call    FUN_00416970
        push    edi
        push    ebx
        mov    ecx, esi
        mov    dword ptr [esi + 0xc], edi
        mov    dword ptr [esi + 0x10], edi
        call    FUN_00415be0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_6acf:
        mov    edx, dword ptr [esi]
        push    ebx
        push    ebp
        mov    ecx, esi
        call    dword ptr [edx + 0x28]
        test    eax, eax
        jl    L_6ae5
        mov    ebx, dword ptr [ebx + 0x10]
        test    ebx, ebx
        jne    L_6acf
        jmp    L_6ae9
L_6ae5:
        test    ebx, ebx
        jne    L_6b0d
L_6ae9:
        mov    ebx, dword ptr [esi + 0x10]
        push    ebx
        push    0
        mov    ecx, edi
        call    FUN_00416970
        push    edi
        push    0
        mov    ecx, esi
        mov    dword ptr [ebx + 0x10], edi
        mov    dword ptr [esi + 0x10], edi
        call    FUN_00415be0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_6b0d:
        mov    ebp, dword ptr [esi + 0xc]
        cmp    ebx, ebp
        jne    L_6b35
        push    0
        push    ebp
        mov    ecx, edi
        call    FUN_00416970
        push    edi
        push    0
        mov    ecx, esi
        mov    dword ptr [ebp + 0x14], edi
        mov    dword ptr [esi + 0xc], edi
        call    FUN_00415be0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_6b35:
        mov    eax, dword ptr [ebx + 0x14]
        push    eax
        push    ebx
        mov    ecx, edi
        call    FUN_00416970
        mov    ecx, dword ptr [ebx + 0x14]
        push    edi
        mov    dword ptr [ecx + 0x10], edi
        push    0
        mov    ecx, esi
        mov    dword ptr [ebx + 0x14], edi
        call    FUN_00415be0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
    }
}
