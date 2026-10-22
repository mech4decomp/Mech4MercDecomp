/*
 * FUN_004ee437 (extent 0x4ee437-0x4ee48c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004ee437(void)
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
        mov    eax, dword ptr [ecx + 0x24]
        mov    byte ptr [eax], 0
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
        mov    eax, dword ptr [ecx + 0x24]
        mov    byte ptr [eax], 1
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
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x774a50
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        je    L_e483
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_e483
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_e483:
        mov    ecx, esi
        call    FUN_00415380
        pop    esi
        ret    
    }
}
