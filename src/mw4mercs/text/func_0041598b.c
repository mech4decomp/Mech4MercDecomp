/*
 * FUN_0041598b (extent 0x41598b-0x4159d9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00415c70(void);

__declspec(naked) void FUN_0041598b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        jmp    FUN_00415c70
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
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 4]
        mov    ecx, dword ptr [ecx + 0xc]
        test    ecx, ecx
        je    L_59bc
        mov    edx, dword ptr [ecx + 0x10]
        test    edx, edx
        je    L_59bc
L_59b3:
        mov    ecx, edx
        mov    edx, dword ptr [ecx + 0x10]
        test    edx, edx
        jne    L_59b3
L_59bc:
        mov    dword ptr [eax + 0x10], ecx
        ret    
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
    }
}
