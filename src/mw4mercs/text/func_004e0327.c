/*
 * FUN_004e0327 (extent 0x4e0327-0x4e0387) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007dc6cc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004e0327(void)
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
        je    L_037c
        mov    ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x773aa0
        push    0x1c3
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc6cc], eax
        ret    
L_037c:
        mov    dword ptr [g_007dc6cc], 0
        ret    
    }
}
