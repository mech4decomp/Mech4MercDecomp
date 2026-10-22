/*
 * FUN_004e865d (extent 0x4e865d-0x4e86d1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc790;
extern char   g_007dc798;
extern char   g_007dc799;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);

__declspec(naked) void FUN_004e865d(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_007dc798]
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
        mov    al, byte ptr [g_007dc798]
        test    al, al
        sete    al
        mov    byte ptr [g_007dc798], al
        ret    
        mov    al, byte ptr [g_007dc799]
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
        mov    al, byte ptr [g_007dc799]
        test    al, al
        sete    al
        mov    byte ptr [g_007dc799], al
        ret    
        push    esi
        mov    esi, dword ptr [g_007dc790]
        test    esi, esi
        je    L_86bb
        mov    ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_86bb:
        mov    dword ptr [g_007dc790], 0
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
