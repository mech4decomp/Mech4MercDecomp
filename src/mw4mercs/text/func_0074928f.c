/*
 * FUN_0074928f (extent 0x74928f-0x7492e1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008b79e8;
extern void __cdecl FUN_00740db0(void);

__declspec(naked) void FUN_0074928f(void)
{
    __asm {
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
        mov    eax, dword ptr [g_008b79e8]
        push    esi
        xor    esi, esi
        test    eax, eax
        jle    L_92d4
        push    edi
        mov    edi, 0x8b69d8
L_92b2:
        mov    eax, dword ptr [edi]
        push    eax
        call    FUN_00740db0
        mov    eax, dword ptr [g_008b79e8]
        inc    esi
        add    edi, 4
        cmp    esi, eax
        jl    L_92b2
        pop    edi
        mov    dword ptr [g_008b79e8], 0
        pop    esi
        ret    
L_92d4:
        mov    dword ptr [g_008b79e8], 0
        pop    esi
        ret    
        ret    
    }
}
