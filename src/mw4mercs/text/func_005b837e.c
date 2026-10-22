/*
 * FUN_005b837e (extent 0x5b837e-0x5b83f5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc690;
extern int    g_007dc8cc;
extern int    g_007f211c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005b837e(void)
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
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_83ea
        mov    ecx, dword ptr [g_007dc8cc]
        mov    edx, dword ptr [g_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0
        push    0x501eb0
        push    ecx
        push    0x679940
        push    0x5b8430
        push    0
        push    0
        push    edx
        push    0x786a00
        push    0x488
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f211c], eax
        ret    
L_83ea:
        mov    dword ptr [g_007f211c], 0
        ret    
    }
}
