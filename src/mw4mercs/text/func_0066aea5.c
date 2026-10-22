/*
 * FUN_0066aea5 (extent 0x66aea5-0x66af94) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_0066aea5(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 0x18]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esi + 0x18]
        cmp    ecx, edx
        jne    L_aef4
        push    ebx
        mov    ebx, dword ptr [esi + 0x1c]
        push    edi
        mov    edi, dword ptr [eax + 0x1c]
        cmp    edi, ebx
        pop    edi
        pop    ebx
        jne    L_aed7
        xor    eax, eax
        pop    esi
        ret    8
L_aed7:
        cmp    ecx, edx
        jne    L_aef4
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [esi + 0x1c]
        xor    eax, eax
        cmp    ecx, edx
        setg    al
        neg    al
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
L_aef4:
        xor    eax, eax
        cmp    ecx, edx
        setg    al
        neg    al
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esi + 0x18]
        cmp    ecx, edx
        jne    L_af53
        push    ebx
        mov    ebx, dword ptr [esi + 0x1c]
        push    edi
        mov    edi, dword ptr [eax + 4]
        cmp    edi, ebx
        pop    edi
        pop    ebx
        jne    L_af36
        xor    eax, eax
        pop    esi
        ret    8
L_af36:
        cmp    ecx, edx
        jne    L_af53
        mov    ecx, dword ptr [eax + 4]
        mov    edx, dword ptr [esi + 0x1c]
        xor    eax, eax
        cmp    ecx, edx
        setg    al
        neg    al
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
L_af53:
        xor    eax, eax
        cmp    ecx, edx
        setg    al
        neg    al
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
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
        mov    dword ptr [esi], 0x796b24
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        je    L_af8e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_af8e:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
