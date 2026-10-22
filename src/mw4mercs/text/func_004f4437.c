/*
 * FUN_004f4437 (extent 0x4f4437-0x4f44b5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc690;
extern int    g_007dc894;
extern int    g_007dc8cc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_004f4437(void)
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
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_44aa
        mov    ecx, dword ptr [g_007dc8cc]
        mov    edx, dword ptr [g_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0
        push    0x501eb0
        push    ecx
        push    0x507790
        push    0x4f44f0
        push    0
        push    0
        push    edx
        push    0x77528c
        push    0x1ce
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007dc894], eax
        ret    
L_44aa:
        mov    dword ptr [g_007dc894], 0
        ret    
    }
}
