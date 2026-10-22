/*
 * FUN_004e6c84 (extent 0x4e6c84-0x4e6cd1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc770;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004e7200(void);
extern void __cdecl FUN_006f3c80(void);

__declspec(naked) void FUN_004e6c84(void)
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
        push    esi
        mov    esi, ecx
        call    FUN_004e7200
        test    byte ptr [esp + 8], 1
        je    L_6cb8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6cb8:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        mov    eax, dword ptr [g_007dc770]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    FUN_006f3c80
        ret    
    }
}
