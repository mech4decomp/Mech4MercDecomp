/*
 * FUN_00481f5d (extent 0x481f5d-0x481fb4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da6a4;
extern int    g_007da850;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_00481f5d(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, 3
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
        mov    eax, dword ptr [ecx + 0x8c]
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
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_1fa9
        mov    ecx, dword ptr [g_007da850]
        push    ecx
        push    0x76f9e8
        push    0x51
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007da6a4], eax
        ret    
L_1fa9:
        mov    dword ptr [g_007da6a4], 0
        ret    
    }
}
