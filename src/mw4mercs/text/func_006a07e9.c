/*
 * FUN_006a07e9 (extent 0x6a07e9-0x6a0877) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0064e100(void);

__declspec(naked) void FUN_006a07e9(void)
{
    __asm {
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
        mov    dword ptr [esi], 0x799c54
        je    L_0809
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_0809:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov    ecx, ebx
        call    FUN_0064e100
        mov    edi, dword ptr [eax + 4]
        mov    ecx, ebx
        call    FUN_0064e100
        mov    esi, dword ptr [eax]
        cmp    esi, edi
        je    L_0840
        mov    eax, dword ptr [esp + 0x10]
        mov    eax, dword ptr [eax + 0x30]
L_0835:
        cmp    dword ptr [esi], eax
        je    L_0840
        add    esi, 4
        cmp    esi, edi
        jne    L_0835
L_0840:
        mov    ecx, ebx
        call    FUN_0064e100
        cmp    esi, dword ptr [eax + 4]
        mov    ecx, ebx
        jne    L_0863
        call    FUN_0064e100
        mov    ecx, eax
        mov    eax, dword ptr [ecx + 4]
        mov    edx, dword ptr [ecx]
        pop    edi
        sub    eax, edx
        pop    esi
        sar    eax, 2
        pop    ebx
        ret    
L_0863:
        call    FUN_0064e100
        mov    ecx, eax
        mov    edx, dword ptr [ecx]
        mov    eax, esi
        pop    edi
        sub    eax, edx
        pop    esi
        sar    eax, 2
        pop    ebx
        ret    
    }
}
