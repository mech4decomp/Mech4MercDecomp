/*
 * FUN_005b2374 (extent 0x5b2374-0x5b23ee) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005b23f0(void);
extern void __cdecl FUN_005c9960(void);
extern void __cdecl FUN_005c9e20(void);
extern void __cdecl FUN_005dbb70(void);

__declspec(naked) void FUN_005b2374(void)
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
        jmp    FUN_005dbb70
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
        mov    eax, dword ptr [ecx + 0x4e0]
        and    eax, 0xfffffffc
        neg    eax
        sbb    eax, eax
        neg    eax
        xor    ecx, ecx
        cmp    eax, 1
        sete    cl
        mov    al, cl
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_005c9960
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_005c9e20
        ret    4
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_005b23f0
        test    byte ptr [esp + 8], 1
        je    L_23e8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_23e8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
