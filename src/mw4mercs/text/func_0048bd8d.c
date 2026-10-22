/*
 * FUN_0048bd8d (extent 0x48bd8d-0x48bdd7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da834;
extern char   g_007da838;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);

__declspec(naked) void FUN_0048bd8d(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_007da838]
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
        mov    al, byte ptr [g_007da838]
        test    al, al
        sete    al
        mov    byte ptr [g_007da838], al
        ret    
        push    esi
        mov    esi, dword ptr [g_007da834]
        test    esi, esi
        je    L_bdcb
        mov    ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_bdcb:
        mov    dword ptr [g_007da834], 0
        pop    esi
        ret    
    }
}
