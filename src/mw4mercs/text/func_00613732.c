/*
 * FUN_00613732 (extent 0x613732-0x6137a8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f27dc;
extern void __cdecl FUN_00613710(void);
extern void __cdecl FUN_00613760(void);
extern void __cdecl FUN_00614880(void);

__declspec(naked) void FUN_00613732(void)
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
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov    ecx, dword ptr [g_007f27dc]
        call    FUN_00613710
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x80]
        call    FUN_00614880
        ret    8
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov    ecx, dword ptr [g_007f27dc]
        call    FUN_00613760
        ret    0xc
    }
}
