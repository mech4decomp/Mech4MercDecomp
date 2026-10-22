/*
 * FUN_005bce49 (extent 0x5bce49-0x5bcf1d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2270;
extern int    g_007f2274;
extern int    g_007f2278;
extern int    g_007f227c;
extern int    g_007f2280;
extern int    g_007f2284;
extern int    g_007f2288;
extern int    g_007f228c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0067c2f0(void);
extern void __cdecl FUN_0067dd80(void);
extern void __cdecl FUN_0067ddc0(void);

__declspec(naked) void FUN_005bce49(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
        mov    dword ptr [g_007f2288], eax
        mov    dword ptr [g_007f228c], eax
        mov    dword ptr [g_007f2280], eax
        mov    dword ptr [g_007f2284], eax
        mov    dword ptr [g_007f2278], eax
        mov    dword ptr [g_007f227c], eax
        mov    dword ptr [g_007f2270], eax
        mov    dword ptr [g_007f2274], eax
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
        push    esi
        push    0x4c
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_ceb0
        mov    ecx, eax
        call    FUN_0067dd80
        mov    dword ptr [esi + 0x930], eax
        pop    esi
        ret    
L_ceb0:
        xor    eax, eax
        mov    dword ptr [esi + 0x930], eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x930]
        test    esi, esi
        je    L_cee8
        mov    ecx, esi
        call    FUN_0067ddc0
        push    esi
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi + 0x930], 0
L_cee8:
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x6ba0
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_cf13
        mov    ecx, eax
        call    FUN_0067c2f0
        mov    dword ptr [esi + 0x92c], eax
        pop    esi
        ret    
L_cf13:
        xor    eax, eax
        mov    dword ptr [esi + 0x92c], eax
        pop    esi
        ret    
    }
}
