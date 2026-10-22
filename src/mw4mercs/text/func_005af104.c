/*
 * FUN_005af104 (extent 0x5af104-0x5af1a5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc690;
extern int    g_007dc8cc;
extern int    g_007f20e0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005af104(void)
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
        mov    dword ptr [ecx + 0x168], 1
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [ecx + 0x168], 0
        ret    
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
        je    L_f19a
        mov    ecx, dword ptr [g_007dc8cc]
        mov    edx, dword ptr [g_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x678540
        push    0
        push    0x678410
        push    ecx
        push    0x678430
        push    0x5af1e0
        push    0
        push    0
        push    edx
        push    0x785b70
        push    0x498
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f20e0], eax
        ret    
L_f19a:
        mov    dword ptr [g_007f20e0], 0
        ret    
    }
}
