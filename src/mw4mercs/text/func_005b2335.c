/*
 * FUN_005b2335 (extent 0x5b2335-0x5b23cd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005c9960(void);
extern void __cdecl FUN_005c9e20(void);
extern void __cdecl FUN_005dbb10(void);
extern void __cdecl FUN_005dbb70(void);

__declspec(naked) void FUN_005b2335(void)
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
        mov    eax, 8
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
        mov    al, 1
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
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        call    dword ptr [eax + 0x1c4]
        mov    ecx, esi
        call    FUN_005dbb10
        pop    esi
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
    }
}
