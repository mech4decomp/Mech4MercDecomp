/*
 * FUN_005a6949 (extent 0x5a6949-0x5a69af) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004dae60(void);
extern void __cdecl FUN_005a69b0(void);
extern void __cdecl FUN_005a6a60(void);

__declspec(naked) void FUN_005a6949(void)
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
        push    esi
        mov    esi, ecx
        mov    al, byte ptr [esi + 0x1ad]
        test    al, al
        je    L_6979
        call    FUN_005a6a60
        mov    byte ptr [esi + 0x1ad], 0
L_6979:
        mov    al, byte ptr [esi + 0x1ac]
        test    al, al
        je    L_6991
        mov    ecx, esi
        call    FUN_005a69b0
        mov    byte ptr [esi + 0x1ac], 0
L_6991:
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        and    edx, 0xffffffbf
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esi + 0x10], edx
        call    FUN_004dae60
        pop    esi
        ret    8
    }
}
