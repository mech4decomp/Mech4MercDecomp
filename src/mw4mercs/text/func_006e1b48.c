/*
 * FUN_006e1b48 (extent 0x6e1b48-0x6e1bad) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412ab0(void);

__declspec(naked) void FUN_006e1b48(void)
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x34]
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
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x79ecec
        je    L_1b89
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_1b89:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        lea    eax, [ecx + 0x38]
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
        mov    eax, dword ptr [ecx + 0x38]
        push    eax
        call    FUN_00412ab0
        add    esp, 4
        ret    
    }
}
