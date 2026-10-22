/*
 * FUN_0041de3e (extent 0x41de3e-0x41de80) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8ee8;
extern void __cdecl FUN_0041e6d0(void);

__declspec(naked) void FUN_0041de3e(void)
{
    __asm {
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
        mov    eax, dword ptr [g_007b8ee8]
        push    esi
        push    0
        push    0
        push    0
        mov    esi, ecx
        push    eax
        call    FUN_0041e6d0
        mov    dword ptr [esi], 0x76d720
        mov    dword ptr [esi + 0x24], 0
        mov    byte ptr [esi + 0x2c], 0
        mov    dword ptr [esi + 0x28], 0
        mov    eax, esi
        pop    esi
        ret    
    }
}
