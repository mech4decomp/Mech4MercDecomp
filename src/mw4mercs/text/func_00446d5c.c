/*
 * FUN_00446d5c (extent 0x446d5c-0x446da4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b9890;
extern int    g_007da720;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_00446d5c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0xac]
        ret    4
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
        je    L_6d99
        mov    ecx, dword ptr [g_007da720]
        push    ecx
        push    0x76e7e8
        push    0x69
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007b9890], eax
        ret    
L_6d99:
        mov    dword ptr [g_007b9890], 0
        ret    
    }
}
