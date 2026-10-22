/*
 * FUN_0041af11 (extent 0x41af11-0x41af61) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007b2200;
extern char   g_007b2201;

__declspec(naked) void FUN_0041af11(void)
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
        mov    cl, byte ptr [g_007b2200]
        xor    eax, eax
        cmp    cl, 1
        sete    al
        ret    
        nop    
        mov    cl, byte ptr [g_007b2201]
        xor    eax, eax
        cmp    cl, 1
        sete    al
        ret    
        nop    
        mov    al, byte ptr [g_007b2200]
        test    al, al
        sete    al
        mov    byte ptr [g_007b2200], al
        ret    
        mov    al, byte ptr [g_007b2201]
        test    al, al
        sete    al
        mov    byte ptr [g_007b2201], al
        ret    
        ret    
    }
}
