/*
 * FUN_0048616e (extent 0x48616e-0x4861b4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da714;
extern int    g_007da720;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_0048616e(void)
{
    __asm {
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
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_61a9
        mov    ecx, dword ptr [g_007da720]
        push    ecx
        push    0x76fbe0
        push    0x4d
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007da714], eax
        ret    
L_61a9:
        mov    dword ptr [g_007da714], 0
        ret    
    }
}
