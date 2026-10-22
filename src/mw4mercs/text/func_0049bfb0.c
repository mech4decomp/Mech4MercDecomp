/*
 * FUN_0049bfb0 (extent 0x49bfb0-0x49c00a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da93c;
extern int    g_007da970;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004938b0(void);

__declspec(naked) void FUN_0049bfb0(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004938b0
        ret    4
        nop    
        nop    
        nop    
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_bffe
        mov    eax, dword ptr [g_007da93c]
        push    eax
        push    0x7b2c74
        push    0x52d
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x49c1e0
        mov    dword ptr [esi + 0x18], 0x49b510
        mov    dword ptr [g_007da970], esi
        pop    esi
        ret    
L_bffe:
        mov    dword ptr [g_007da970], 0
        pop    esi
        ret    
    }
}
