/*
 * FUN_005b92a1 (extent 0x5b92a1-0x5b92ee) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005b92f0(void);

__declspec(naked) void FUN_005b92a1(void)
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x184]
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
        xor    al, al
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
        call    FUN_005b92f0
        test    byte ptr [esp + 8], 1
        je    L_92e8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_92e8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
