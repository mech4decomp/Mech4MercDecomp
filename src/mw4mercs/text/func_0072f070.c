/*
 * FUN_0072f070 (extent 0x72f070-0x72f0b7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0072f660(void);
extern void __cdecl FUN_0072f780(void);

__declspec(naked) void FUN_0072f070(void)
{
    __asm {
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        call    FUN_0072f780
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
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, dword ptr [edi]
        test    esi, esi
        je    L_f0ac
        mov    ecx, esi
        call    FUN_0072f660
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_f0ac:
        mov    dword ptr [edi], 0
        pop    edi
        pop    esi
        ret    4
    }
}
