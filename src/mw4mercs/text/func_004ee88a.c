/*
 * FUN_004ee88a (extent 0x4ee88a-0x4ee8ef) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc808;
extern int    g_007dc80c;
extern int    g_007dc83c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004ee88a(void)
{
    __asm {
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
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_e8da
        mov    ecx, dword ptr [g_007dc83c]
        push    0
        push    0
        push    ecx
        push    0x774be0
        push    0x224
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc80c], eax
        mov    dword ptr [g_007dc808], 0
        ret    
L_e8da:
        mov    dword ptr [g_007dc80c], 0
        mov    dword ptr [g_007dc808], 0
        ret    
    }
}
