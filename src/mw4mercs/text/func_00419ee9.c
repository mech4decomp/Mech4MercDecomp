/*
 * FUN_00419ee9 (extent 0x419ee9-0x419f2e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00419f90(void);
extern void __cdecl FUN_0041a070(void);

__declspec(naked) void FUN_00419ee9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00419f90
        xor    eax, eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [esi + 0x2c], eax
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_0041a070
        xor    eax, eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [esi + 0x2c], eax
        mov    eax, esi
        pop    esi
        ret    4
    }
}
