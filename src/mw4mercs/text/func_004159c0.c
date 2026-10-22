/*
 * FUN_004159c0 (extent 0x4159c0-0x415a49) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004159c0(void)
{
    __asm {
        push    esi
        push    0x76d464
        mov    esi, ecx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_59d5
        int 3    
L_59d5:
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        push    esi
        je    L_5a2a
        mov    esi, dword ptr [edx + 0x14]
        test    esi, esi
        je    L_5a06
        mov    edx, dword ptr [esi + 0x10]
        test    edx, edx
        je    L_5a01
L_59f8:
        mov    esi, edx
        mov    edx, dword ptr [esi + 0x10]
        test    edx, edx
        jne    L_59f8
L_5a01:
        mov    dword ptr [eax + 0x10], esi
        pop    esi
        ret    
L_5a06:
        mov    esi, dword ptr [edx + 0x18]
        test    esi, esi
        mov    dword ptr [eax + 0x10], 0
        je    L_5a2a
L_5a14:
        cmp    edx, dword ptr [esi + 0x10]
        je    L_5a24
        mov    edx, esi
        mov    esi, dword ptr [edx + 0x18]
        test    esi, esi
        jne    L_5a14
        pop    esi
        ret    
L_5a24:
        mov    ecx, dword ptr [edx + 0x18]
        mov    dword ptr [eax + 0x10], ecx
L_5a2a:
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x76d464
        mov    esi, ecx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5a45
        int 3    
L_5a45:
        mov    eax, esi
        pop    esi
        ret    
    }
}
