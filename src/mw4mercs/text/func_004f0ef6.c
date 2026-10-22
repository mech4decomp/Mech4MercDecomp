/*
 * FUN_004f0ef6 (extent 0x4f0ef6-0x4f0f5b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc83c;
extern int    g_007dc840;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004f0ef6(void)
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
        nop    
        mov    ecx, dword ptr [ecx + 0x24]
        jmp    dword ptr [ecx + 0x1c]
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
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_0f50
        mov    ecx, dword ptr [g_007dc83c]
        push    0
        push    0
        push    ecx
        push    0x774df0
        push    0x21a
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc840], eax
        ret    
L_0f50:
        mov    dword ptr [g_007dc840], 0
        ret    
    }
}
