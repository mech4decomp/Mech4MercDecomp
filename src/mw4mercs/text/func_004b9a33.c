/*
 * FUN_004b9a33 (extent 0x4b9a33-0x4b9a9e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daa3c;
extern int    g_007daa40;
extern char   g_007daa44;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_004b9a33(void)
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
        mov    al, byte ptr [g_007daa44]
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
        mov    al, byte ptr [g_007daa44]
        test    al, al
        sete    al
        mov    byte ptr [g_007daa44], al
        ret    
        push    esi
        mov    esi, dword ptr [g_007daa40]
        test    esi, esi
        je    L_9a7b
        mov    ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_9a7b:
        mov    eax, dword ptr [g_007daa3c]
        push    1
        push    eax
        mov    dword ptr [g_007daa40], 0
        call    FUN_006f4850
        mov    dword ptr [g_007daa3c], 0
        pop    esi
        ret    
    }
}
