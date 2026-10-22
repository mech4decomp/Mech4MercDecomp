/*
 * FUN_00481337 (extent 0x481337-0x48138e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da69c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00481560(void);
extern void __cdecl FUN_00481ff0(void);

__declspec(naked) void FUN_00481337(void)
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
        mov    eax, dword ptr [g_007da69c]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00481ff0
        mov    dword ptr [esi], 0x76f988
        mov    dword ptr [esi + 0x8c], 0
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_00481560
        test    byte ptr [esp + 8], 1
        je    L_1388
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_1388:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
