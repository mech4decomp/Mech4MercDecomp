/*
 * FUN_006035db (extent 0x6035db-0x603632) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f26c0;
extern int    g_007f27a0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_006035db(void)
{
    __asm {
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
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3627
        mov    ecx, dword ptr [g_007f27a0]
        push    0
        push    0
        push    0x78b470
        push    0x1d
        push    ecx
        push    0x78b778
        push    0x46d
        mov    ecx, eax
        call    FUN_004dd270
        mov    dword ptr [g_007f26c0], eax
        ret    
L_3627:
        mov    dword ptr [g_007f26c0], 0
        ret    
    }
}
