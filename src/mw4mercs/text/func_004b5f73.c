/*
 * FUN_004b5f73 (extent 0x4b5f73-0x4b5fee) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daa0c;
extern int    g_007daa10;
extern int    g_007daa14;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_004b5f73(void)
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
        mov    ecx, dword ptr [g_007daa0c]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_007daa0c]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        mov    dword ptr [g_007daa0c], eax
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
        push    esi
        mov    esi, dword ptr [g_007daa14]
        test    esi, esi
        je    L_5fcb
        mov    ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_5fcb:
        mov    eax, dword ptr [g_007daa10]
        push    1
        push    eax
        mov    dword ptr [g_007daa14], 0
        call    FUN_006f4850
        mov    dword ptr [g_007daa10], 0
        pop    esi
        ret    
    }
}
