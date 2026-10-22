/*
 * FUN_005b7ba8 (extent 0x5b7ba8-0x5b7c22) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2114;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d96e0(void);
extern void __cdecl FUN_005b7c30(void);
extern void __cdecl FUN_005b7e00(void);
extern void __cdecl FUN_005b8150(void);

__declspec(naked) void FUN_005b7ba8(void)
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
        mov    eax, 7
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
        push    esi
        mov    esi, ecx
        call    FUN_005b7c30
        test    byte ptr [esp + 8], 1
        je    L_7bd8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_7bd8:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004d96e0
        mov    al, byte ptr [edi + 0x69]
        test    al, al
        mov    ecx, dword ptr [edi + 0x64]
        mov    byte ptr [esi + 0x168], al
        mov    dword ptr [esi + 0x16c], ecx
        je    L_7c12
        mov    ecx, esi
        mov    byte ptr [esi + 0x168], 0
        call    FUN_005b7e00
L_7c12:
        mov    ecx, dword ptr [g_007f2114]
        call    FUN_005b8150
        pop    edi
        pop    esi
        ret    4
    }
}
