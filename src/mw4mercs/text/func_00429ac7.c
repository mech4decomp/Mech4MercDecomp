/*
 * FUN_00429ac7 (extent 0x429ac7-0x429b1e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b96b4;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00429e60(void);
extern void __cdecl FUN_00481ff0(void);

__declspec(naked) void FUN_00429ac7(void)
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
        mov    eax, dword ptr [g_007b96b4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00481ff0
        mov    dword ptr [esi], 0x76e018
        mov    dword ptr [esi + 0x8c], 0
        mov    byte ptr [esi + 0xa0], 1
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_00429e60
        test    byte ptr [esp + 8], 1
        je    L_9b18
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_9b18:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
