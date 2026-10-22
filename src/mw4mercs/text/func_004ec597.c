/*
 * FUN_004ec597 (extent 0x4ec597-0x4ec5e7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007dc7dc;
extern int    g_007dc7e0;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);

__declspec(naked) void FUN_004ec597(void)
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
        mov    al, byte ptr [g_007dc7dc]
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
        mov    al, byte ptr [g_007dc7dc]
        test    al, al
        sete    al
        mov    byte ptr [g_007dc7dc], al
        ret    
        push    esi
        mov    esi, dword ptr [g_007dc7e0]
        test    esi, esi
        je    L_c5db
        mov    ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_c5db:
        mov    dword ptr [g_007dc7e0], 0
        pop    esi
        ret    
    }
}
