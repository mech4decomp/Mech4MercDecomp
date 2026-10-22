/*
 * FUN_004e2c9b (extent 0x4e2c9b-0x4e2cf1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc72c;
extern char   g_007dc730;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);

__declspec(naked) void FUN_004e2c9b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_007dc730]
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
        mov    al, byte ptr [g_007dc730]
        test    al, al
        sete    al
        mov    byte ptr [g_007dc730], al
        ret    
        push    esi
        mov    esi, dword ptr [g_007dc72c]
        test    esi, esi
        je    L_2cdb
        mov    ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2cdb:
        mov    dword ptr [g_007dc72c], 0
        pop    esi
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
        ret    
    }
}
