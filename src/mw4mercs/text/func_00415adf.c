/*
 * FUN_00415adf (extent 0x415adf-0x415ba5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004158e0(void);
extern void __cdecl FUN_00415980(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00415adf(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_004158e0
        test    eax, eax
        je    L_5afe
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [eax + 0xc]
        pop    esi
        ret    4
L_5afe:
        xor    eax, eax
        pop    esi
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
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5b22
        int 3    
L_5b22:
        xor    eax, eax
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
        nop    
        cmp    dword ptr [esp + 4], 1
        jne    L_5b45
        mov    eax, dword ptr [esp + 8]
        cmp    eax, dword ptr [ecx + 0x10]
        jne    L_5b45
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
L_5b45:
        ret    8
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
        call    FUN_00415980
        test    byte ptr [esp + 8], 1
        je    L_5b68
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_5b68:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        push    0x76d478
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5b82
        int 3    
L_5b82:
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
        push    0x76d478
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5ba2
        int 3    
L_5ba2:
        ret    4
    }
}
