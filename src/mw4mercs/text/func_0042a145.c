/*
 * FUN_0042a145 (extent 0x42a145-0x42a1d4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b96c8;
extern int    g_007da714;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_0042a145(void)
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
        nop    
        mov    eax, 7
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
        ret    4
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
        ret    4
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
        mov    al, byte ptr [ecx + 0xa0]
        test    al, al
        je    L_a191
        mov    eax, dword ptr [ecx + 0x8c]
        ret    
L_a191:
        xor    eax, eax
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
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_a1c9
        mov    ecx, dword ptr [g_007da714]
        push    ecx
        push    0x76e06c
        push    0x72
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007b96c8], eax
        ret    
L_a1c9:
        mov    dword ptr [g_007b96c8], 0
        ret    
    }
}
