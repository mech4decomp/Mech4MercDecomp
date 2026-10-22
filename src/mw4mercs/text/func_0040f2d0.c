/*
 * FUN_0040f2d0 (extent 0x40f2d0-0x40f300) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0040f2d0(void)
{
    __asm {
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
        je    L_f2ff
        push    eax
        call    FUN_004084e0
        pop    ecx
L_f2ff:
        ret    
    }
}
