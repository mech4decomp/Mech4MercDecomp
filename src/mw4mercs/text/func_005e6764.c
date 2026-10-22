/*
 * FUN_005e6764 (extent 0x5e6764-0x5e67bc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005e6750(void);
extern void __cdecl FUN_005e7af0(void);
extern void __cdecl FUN_005e7b90(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_005e6764(void)
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_005e7af0
        push    edi
        mov    ecx, esi
        call    FUN_005e6750
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    esi
        push    0x76d414
        mov    esi, ecx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_67a8
        int 3    
L_67a8:
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005e7b90
        pop    esi
        pop    ebp
        ret    8
    }
}
