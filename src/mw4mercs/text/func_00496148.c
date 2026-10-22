/*
 * FUN_00496148 (extent 0x496148-0x4961b7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007da95c;
extern char   g_007da95d;
extern int    g_007da960;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);

__declspec(naked) void FUN_00496148(void)
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
        mov    al, byte ptr [g_007da95d]
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
        mov    al, byte ptr [g_007da95d]
        test    al, al
        sete    al
        mov    byte ptr [g_007da95d], al
        ret    
        mov    al, byte ptr [g_007da95c]
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
        mov    al, byte ptr [g_007da95c]
        test    al, al
        sete    al
        mov    byte ptr [g_007da95c], al
        ret    
        push    esi
        mov    esi, dword ptr [g_007da960]
        test    esi, esi
        je    L_61ab
        mov    ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_61ab:
        mov    dword ptr [g_007da960], 0
        pop    esi
        ret    
    }
}
