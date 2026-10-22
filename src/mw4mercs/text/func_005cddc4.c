/*
 * FUN_005cddc4 (extent 0x5cddc4-0x5cddfe) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005cde00(void);

__declspec(naked) void FUN_005cddc4(void)
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
        fld    dword ptr [g_0076c5b0]
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
        push    esi
        mov    esi, ecx
        call    FUN_005cde00
        test    byte ptr [esp + 8], 1
        je    L_ddf8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_ddf8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
