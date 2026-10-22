/*
 * FUN_00602837 (extent 0x602837-0x602884) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_00602837(void)
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
        mov    eax, dword ptr [esp + 4]
        fld    dword ptr [ecx + 0x2c]
        fadd    dword ptr [eax + 0x994]
        fstp    dword ptr [eax + 0x994]
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
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x78b3d4
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        je    L_287e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_287e:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
