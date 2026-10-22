/*
 * FUN_005e683c (extent 0x5e683c-0x5e689d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f255c;
extern int    g_007f25b0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_005e683c(void)
{
    __asm {
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
        push    0x24
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_6891
        mov    eax, dword ptr [g_007f25b0]
        push    0x5052a0
        push    0x5e68d0
        push    0x7891d8
        push    2
        push    eax
        push    0x789204
        push    0x46f
        mov    ecx, esi
        call    FUN_004dd270
        mov    dword ptr [g_007f255c], esi
        pop    esi
        ret    
L_6891:
        mov    dword ptr [g_007f255c], 0
        pop    esi
        ret    
    }
}
