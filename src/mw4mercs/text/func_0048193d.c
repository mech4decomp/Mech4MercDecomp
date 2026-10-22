/*
 * FUN_0048193d (extent 0x48193d-0x481994) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da6a0;
extern int    g_007da6a4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_0048193d(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, 4
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
        je    L_1989
        mov    ecx, dword ptr [g_007da6a4]
        push    ecx
        push    0x76f9a8
        push    0x52
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007da6a0], eax
        ret    
L_1989:
        mov    dword ptr [g_007da6a0], 0
        ret    
    }
}
