/*
 * FUN_00428ae7 (extent 0x428ae7-0x428b4e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b964c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00428c00(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00428ae7(void)
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
        mov    eax, dword ptr [g_007b964c]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        xor    eax, eax
        mov    dword ptr [esi + 8], eax
        push    0x76d414
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi], 0x76df7c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_8b1e
        int 3    
L_8b1e:
        mov    eax, esi
        pop    esi
        ret    4
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
        mov    esi, ecx
        call    FUN_00428c00
        test    byte ptr [esp + 8], 1
        je    L_8b48
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_8b48:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
