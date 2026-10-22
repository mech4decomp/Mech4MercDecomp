/*
 * FUN_00435c30 (extent 0x435c30-0x435c98) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b958c;
extern int    g_007b9824;
extern int    g_007b9828;
extern int    g_007b98e0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_00435c30(void)
{
    __asm {
        mov    eax, ecx
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
        mov    eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0
        push    0x76e41c
        call    FUN_006f4710
        push    0x18
        mov    dword ptr [g_007b9828], eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_5c8c
        mov    ecx, dword ptr [g_007b98e0]
        push    ecx
        push    0x76e3f8
        push    0x6e
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x435e50
        mov    dword ptr [g_007b9824], esi
        pop    esi
        ret    
L_5c8c:
        mov    dword ptr [g_007b9824], 0
        pop    esi
        ret    
    }
}
