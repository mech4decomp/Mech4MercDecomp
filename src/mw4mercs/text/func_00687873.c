/*
 * FUN_00687873 (extent 0x687873-0x687935) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00687873(void)
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
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 4]
        mov    eax, edi
        test    eax, eax
        je    L_78a7
        mov    edx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [edx]
L_7891:
        cmp    dword ptr [eax + 8], edx
        je    L_78a3
        mov    eax, dword ptr [eax]
        test    eax, eax
        jne    L_7891
        pop    edi
        xor    al, al
        pop    esi
        ret    4
L_78a3:
        test    eax, eax
        jne    L_78ae
L_78a7:
        pop    edi
        xor    al, al
        pop    esi
        ret    4
L_78ae:
        dec    dword ptr [ecx + 8]
        mov    edx, dword ptr [eax]
        test    edx, edx
        je    L_78bd
        mov    esi, dword ptr [eax + 4]
        mov    dword ptr [edx + 4], esi
L_78bd:
        mov    esi, dword ptr [eax + 4]
        test    esi, esi
        je    L_78c6
        mov    dword ptr [esi], edx
L_78c6:
        cmp    eax, edi
        jne    L_78cf
        mov    edx, dword ptr [edi]
        mov    dword ptr [ecx + 4], edx
L_78cf:
        mov    dword ptr [eax], 0
        mov    dword ptr [eax + 4], 0
        push    eax
        mov    dword ptr [eax + 4], 0
        mov    dword ptr [eax], 0
        call    FUN_004084e0
        add    esp, 4
        pop    edi
        mov    al, 1
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 4], 0
        mov    dword ptr [eax], 0
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    dl, byte ptr [ecx]
        mov    ecx, dword ptr [esp + 8]
        mov    byte ptr [eax], dl
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        ret    8
    }
}
