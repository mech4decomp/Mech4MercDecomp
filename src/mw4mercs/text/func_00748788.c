/*
 * FUN_00748788 (extent 0x748788-0x7487e4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008b287c;
extern int    g_008b28c0;
extern void __cdecl FUN_00749190(void);
extern void __cdecl FUN_00753930(void);

__declspec(naked) void FUN_00748788(void)
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
        push    esi
        mov    esi, dword ptr [g_008b287c]
        test    esi, esi
        je    L_87e2
L_879b:
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        mov    dword ptr [esi + 0x2c], 0
        je    L_87c2
        mov    eax, dword ptr [g_008b28c0]
        inc    eax
        mov    ecx, esi
        mov    dword ptr [g_008b28c0], eax
        call    FUN_00749190
        mov    ecx, esi
        call    FUN_00753930
L_87c2:
        xor    eax, eax
        mov    ax, word ptr [esi + 0x1a]
        test    ax, ax
        je    L_87e2
        and    eax, 0xffff
        lea    ecx, [eax*8]
        sub    ecx, eax
        lea    esi, [esi + ecx*8]
        test    esi, esi
        jne    L_879b
L_87e2:
        pop    esi
        ret    
    }
}
