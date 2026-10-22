/*
 * FUN_0041fb85 (extent 0x41fb85-0x41fbe4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c14;
extern int    g_007b9458;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415d70(void);

__declspec(naked) void FUN_0041fb85(void)
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
        push    0x2c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_fbd8
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        push    0x76d950
        mov    ecx, eax
        shr    ecx, 2
        push    ecx
        push    eax
        push    0x10
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b9458], esi
        pop    esi
        ret    
L_fbd8:
        mov    dword ptr [g_007b9458], 0
        pop    esi
        ret    
    }
}
