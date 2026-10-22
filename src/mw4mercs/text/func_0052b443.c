/*
 * FUN_0052b443 (extent 0x52b443-0x52b47e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f27c8;
extern void __cdecl FUN_0052b480(void);
extern void __cdecl FUN_006e2150(void);

__declspec(naked) void FUN_0052b443(void)
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
        mov    ecx, dword ptr [g_007f27c8]
        test    ecx, ecx
        je    L_b464
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006e2150
L_b464:
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
        push    esi
        mov    esi, ecx
        push    0
        call    FUN_0052b480
        mov    eax, esi
        pop    esi
        ret    
    }
}
