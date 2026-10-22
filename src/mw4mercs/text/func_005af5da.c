/*
 * FUN_005af5da (extent 0x5af5da-0x5af664) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f20e4;
extern int    g_007f2548;
extern int    g_007f255c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005af5da(void)
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
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_f658
        mov    eax, dword ptr [g_007f255c]
        mov    ecx, dword ptr [g_007f2548]
        push    0x502c60
        push    0x5028b0
        push    0x675a60
        push    0
        push    0x675a40
        push    eax
        push    0x674b00
        push    0x5af6a0
        push    0
        push    0
        push    ecx
        push    0x785c30
        push    0x497
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x5ef970
        mov    dword ptr [g_007f20e4], esi
        pop    esi
        ret    
L_f658:
        mov    dword ptr [g_007f20e4], 0
        pop    esi
        ret    
    }
}
