/*
 * FUN_004f4826 (extent 0x4f4826-0x4f488d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc89c;
extern int    g_007dc8cc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_004f4826(void)
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
        je    L_4881
        mov    eax, dword ptr [g_007dc8cc]
        push    0x5052a0
        push    0x4f48c0
        push    0x775378
        push    4
        push    eax
        push    0x7753d8
        push    0x1d2
        mov    ecx, esi
        call    FUN_004dd270
        mov    dword ptr [g_007dc89c], esi
        pop    esi
        ret    
L_4881:
        mov    dword ptr [g_007dc89c], 0
        pop    esi
        ret    
    }
}
