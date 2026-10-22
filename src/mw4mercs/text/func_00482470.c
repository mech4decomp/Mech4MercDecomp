/*
 * FUN_00482470 (extent 0x482470-0x4824b4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da6a8;
extern int    g_007da850;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_00482470(void)
{
    __asm {
        mov    eax, 2
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
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_24a9
        mov    ecx, dword ptr [g_007da850]
        push    ecx
        push    0x76fa90
        push    0x50
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007da6a8], eax
        ret    
L_24a9:
        mov    dword ptr [g_007da6a8], 0
        ret    
    }
}
