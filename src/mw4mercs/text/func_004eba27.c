/*
 * FUN_004eba27 (extent 0x4eba27-0x4eba6a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004ec1e0(void);

__declspec(naked) void FUN_004eba27(void)
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
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 4]
        push    esi
        push    0x223
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_004ec1e0
        mov    dword ptr [esi], 0x7746e8
        mov    eax, esi
        pop    esi
        ret    0xc
    }
}
