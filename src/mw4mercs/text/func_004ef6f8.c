/*
 * FUN_004ef6f8 (extent 0x4ef6f8-0x4ef74b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc818;
extern int    g_007dc83c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004ef6f8(void)
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
        je    L_f740
        mov    ecx, dword ptr [g_007dc83c]
        push    0
        push    0
        push    ecx
        push    0x774c74
        push    0x220
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc818], eax
        ret    
L_f740:
        mov    dword ptr [g_007dc818], 0
        ret    
    }
}
