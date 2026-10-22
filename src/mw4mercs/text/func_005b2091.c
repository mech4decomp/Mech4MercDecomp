/*
 * FUN_005b2091 (extent 0x5b2091-0x5b2118) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc8cc;
extern int    g_007f20f4;
extern int    g_007f23b0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005b2091(void)
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
        je    L_210d
        mov    ecx, dword ptr [g_007dc8cc]
        mov    edx, dword ptr [g_007f23b0]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0
        push    0x501eb0
        push    ecx
        push    0x678cb0
        push    0x5b2150
        push    0x7860d8
        push    1
        push    edx
        push    0x7860e4
        push    0x494
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f20f4], eax
        ret    
L_210d:
        mov    dword ptr [g_007f20f4], 0
        ret    
    }
}
