/*
 * FUN_00753694 (extent 0x753694-0x7536e5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0085a254;
extern int    g_008b2880;
extern int    g_008b2884;
extern void __cdecl FUN_007358e0(void);
extern void __cdecl FUN_00735b60(void);
extern void __cdecl FUN_00748750(void);

__declspec(naked) void FUN_00753694(void)
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
        mov    eax, dword ptr [g_008b2880]
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi + 0x24], eax
        mov    eax, dword ptr [g_008b2884]
        mov    dword ptr [esi + 0x28], eax
        inc    eax
        mov    dword ptr [g_008b2884], eax
        mov    eax, dword ptr [g_0085a254]
        test    eax, eax
        jne    L_36d8
        call    FUN_00735b60
        test    al, al
        je    L_36d8
        push    0
        push    1
        mov    ecx, esi
        call    FUN_007358e0
        pop    esi
        ret    
L_36d8:
        push    0
        push    1
        mov    ecx, esi
        call    FUN_00748750
        pop    esi
        ret    
    }
}
