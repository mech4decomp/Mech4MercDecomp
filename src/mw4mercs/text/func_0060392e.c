/*
 * FUN_0060392e (extent 0x60392e-0x6039a0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc69c;
extern int    g_007f27a0;
extern int    g_007f27a4;
extern int    g_007f27b4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);
extern void __cdecl FUN_00604e50(void);
extern void __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_0060392e(void)
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
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3978
        mov    ecx, dword ptr [g_007dc69c]
        push    0
        push    0
        push    0x78b7c8
        push    9
        push    ecx
        push    0x78b898
        push    0x46b
        mov    ecx, eax
        call    FUN_004dd270
        mov    dword ptr [g_007f27a0], eax
        jmp    L_3982
L_3978:
        mov    dword ptr [g_007f27a0], 0
L_3982:
        call    FUN_00604e50
        mov    edx, dword ptr [g_007f27b4]
        push    edx
        push    0
        push    0x78b884
        call    FUN_006f4710
        mov    dword ptr [g_007f27a4], eax
        ret    
    }
}
