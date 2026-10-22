/*
 * FUN_00583e83 (extent 0x583e83-0x583ece) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00584800(void);

__declspec(naked) void FUN_00583e83(void)
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
        mov    edx, dword ptr [ecx + 0x3e0]
        xor    eax, eax
        test    edx, edx
        setne    al
        ret    
        nop    
        nop    
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
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_00584800
        test    byte ptr [esp + 8], 1
        je    L_3ec8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_3ec8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
