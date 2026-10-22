/*
 * FUN_005f0ada (extent 0x5f0ada-0x5f0b55) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc890;
extern int    g_007dc8cc;
extern int    g_007f25b8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005f0ada(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
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
        je    L_0b4a
        mov    ecx, dword ptr [g_007dc8cc]
        mov    edx, dword ptr [g_007dc890]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0
        push    0x501eb0
        push    ecx
        push    0x507620
        push    0x5f0b90
        push    0
        push    0
        push    edx
        push    0x78a208
        push    0x426
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f25b8], eax
        ret    
L_0b4a:
        mov    dword ptr [g_007f25b8], 0
        ret    
    }
}
