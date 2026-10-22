/*
 * FUN_006cee5c (extent 0x6cee5c-0x6cef34) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_006cee5c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    esi, 0x83fc00
        mov    edi, 0x80
L_ee6c:
        mov    eax, dword ptr [esi - 0xc]
        sub    esi, 0xc
        test    eax, eax
        je    L_ee89
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_ee89
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_ee89:
        dec    edi
        jne    L_ee6c
        pop    edi
        pop    esi
        ret    
        nop    
        mov    eax, dword ptr [ecx + 0x24]
        and    eax, 7
        push    esi
        xor    esi, esi
        dec    eax
        cmp    eax, 4
        ja    L_ef1d
        jmp    dword ptr [eax*4 + 0x6cef34]
        mov    edx, dword ptr [ecx + 0x14]
        mov    esi, dword ptr [ecx + 0x10]
        push    ebx
        push    edi
        mov    eax, esi
        sar    eax, 2
        mov    edi, edx
        sar    edi, 2
        add    edi, 2
        add    eax, 2
        imul    eax, edi
        mov    edi, esi
        sar    edi, 1
        mov    ebx, edx
        sar    ebx, 1
        add    edi, 2
        add    ebx, 2
        imul    edi, ebx
        add    esi, 2
        add    edx, 2
        imul    esi, edx
        add    eax, edi
        add    eax, esi
        imul    eax, dword ptr [ecx + 0x20]
        pop    edi
        pop    ebx
        mov    dword ptr [ecx + 0x2c], eax
        pop    esi
        ret    
        mov    eax, dword ptr [ecx + 0x14]
        mov    edx, dword ptr [ecx + 0x10]
        add    eax, 2
        add    edx, 2
        imul    eax, edx
        imul    eax, dword ptr [ecx + 0x20]
        mov    dword ptr [ecx + 0x2c], eax
        pop    esi
        ret    
        mov    eax, dword ptr [ecx + 0x10]
        mov    edx, dword ptr [ecx + 0x14]
        sar    eax, 3
        add    eax, 2
        add    edx, 2
        imul    eax, edx
        imul    eax, dword ptr [ecx + 0x20]
        mov    dword ptr [ecx + 0x2c], eax
        pop    esi
        ret    
L_ef1d:
        push    0x79e7d4
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_ef2f
        int 3    
L_ef2f:
        mov    eax, esi
        pop    esi
        ret    
        nop    
        // jump-table data @ 0x006CEF34 (0 relocated pointers)
        // jump-table data @ 0x006CF0E4 (0 relocated pointers)
    }
}
