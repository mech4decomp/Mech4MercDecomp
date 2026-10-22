/*
 * FUN_004e8e97 (extent 0x4e8e97-0x4e8f11) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc7a8;
extern char   g_007dc7ac;
extern char   g_007dc7ad;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);

__declspec(naked) void FUN_004e8e97(void)
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
        mov    al, byte ptr [g_007dc7ad]
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
        mov    al, byte ptr [g_007dc7ad]
        test    al, al
        sete    al
        mov    byte ptr [g_007dc7ad], al
        ret    
        mov    cl, byte ptr [g_007dc7ac]
        xor    eax, eax
        test    cl, cl
        setne    al
        ret    
        nop    
        nop    
        mov    al, byte ptr [g_007dc7ac]
        test    al, al
        sete    al
        mov    byte ptr [g_007dc7ac], al
        ret    
        push    esi
        mov    esi, dword ptr [g_007dc7a8]
        test    esi, esi
        je    L_8efb
        mov    ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_8efb:
        mov    dword ptr [g_007dc7a8], 0
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
