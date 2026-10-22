/*
 * FUN_004ed9a0 (extent 0x4ed9a0-0x4eda11) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004ed9a0(void)
{
    __asm {
        mov    byte ptr [ecx + 0x2c], 0
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
        mov    byte ptr [ecx + 0x2c], 1
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
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x774928
        mov    eax, dword ptr [esi + 0x38]
        test    eax, eax
        je    L_d9e3
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_d9e3
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_d9e3:
        mov    eax, dword ptr [esi + 0x34]
        test    eax, eax
        je    L_d9fd
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_d9fd
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_d9fd:
        mov    ecx, esi
        call    FUN_00415380
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
        ret    
    }
}
