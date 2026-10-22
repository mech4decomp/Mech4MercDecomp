/*
 * FUN_0068f106 (extent 0x68f106-0x68f146) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0068f106(void)
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
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [esp + 4]
        lea    eax, [eax + ecx*4]
        ret    4
        nop    
        nop    
        nop    
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi + 4], 0
        mov    dword ptr [esi], 0
        je    L_f140
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_f140:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
