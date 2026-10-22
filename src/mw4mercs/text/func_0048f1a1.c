/*
 * FUN_0048f1a1 (extent 0x48f1a1-0x48f20e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da84c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0048f2b0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0048f1a1(void)
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007da84c]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        xor    eax, eax
        mov    dword ptr [esi + 8], eax
        push    0x76d414
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi], 0x76fee4
        mov    dword ptr [esi + 0x10038], eax
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_f1e4
        int 3    
L_f1e4:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_0048f2b0
        test    byte ptr [esp + 8], 1
        je    L_f208
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_f208:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
