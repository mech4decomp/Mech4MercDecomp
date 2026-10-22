/*
 * FUN_005d9ff5 (extent 0x5d9ff5-0x5da032) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005d9ff5(void)
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
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    dl, byte ptr [ecx]
        mov    ecx, dword ptr [esp + 8]
        mov    byte ptr [eax], dl
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        ret    8
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_a02f
        push    eax
        call    FUN_004084e0
        pop    ecx
L_a02f:
        ret    8
    }
}
