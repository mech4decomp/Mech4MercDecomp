/*
 * FUN_004f1c2b (extent 0x4f1c2b-0x4f1c77) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc850;
extern int    g_007dc854;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004f1c2b(void)
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
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_1c6c
        mov    ecx, dword ptr [g_007dc850]
        push    ecx
        push    0x774fb4
        push    0x1ed
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc854], eax
        ret    
L_1c6c:
        mov    dword ptr [g_007dc854], 0
        ret    
    }
}
