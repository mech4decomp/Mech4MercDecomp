/*
 * FUN_0060cfed (extent 0x60cfed-0x60d01f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f27e0;
extern void __cdecl FUN_004c3a10(void);

__declspec(naked) void FUN_0060cfed(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007f27e0]
        test    ecx, ecx
        je    L_d001
        push    1
        call    FUN_004c3a10
L_d001:
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
        mov    dword ptr [ecx + 0x2c], 0
        mov    eax, 1
        ret    8
    }
}
