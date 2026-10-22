/*
 * FUN_004eb28b (extent 0x4eb28b-0x4eb2e7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc7c0;
extern int    g_007dc854;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004eb28b(void)
{
    __asm {
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
        je    L_b2dc
        mov    ecx, dword ptr [g_007dc854]
        push    ecx
        push    0x774658
        push    0x22d
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc7c0], eax
        ret    
L_b2dc:
        mov    dword ptr [g_007dc7c0], 0
        ret    
    }
}
