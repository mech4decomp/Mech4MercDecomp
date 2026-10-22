/*
 * FUN_006bef9a (extent 0x6bef9a-0x6befcd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0082f350;
extern int    g_0082f354;
extern void __cdecl FUN_006befc0(void);
extern void __cdecl FUN_006befd0(void);

__declspec(naked) void FUN_006bef9a(void)
{
    __asm {
        mov    edi, edi
        push    0x71006bef
        out    dx, eax
        imul    eax, dword ptr [eax], 0x71
        out    dx, eax
        imul    eax, dword ptr [eax], 0x68
        out    dx, eax
        imul    eax, dword ptr [eax], -0x70
        nop    
        nop    
        nop    
        call    FUN_006befc0
        jmp    FUN_006befd0
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
        mov    dword ptr [g_0082f350], eax
        mov    dword ptr [g_0082f354], eax
        ret    
    }
}
