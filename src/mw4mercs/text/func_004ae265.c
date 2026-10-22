/*
 * FUN_004ae265 (extent 0x4ae265-0x4ae2a9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004ae265(void)
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
        push    0x7b3248
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_e282
        int 3    
L_e282:
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
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx], eax
        mov    dword ptr [ecx + 4], 0
        mov    dword ptr [ecx + 8], edx
        mov    al, 1
        ret    8
    }
}
