/*
 * FUN_004aa3c2 (extent 0x4aa3c2-0x4aa419) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004ab1e0(void);

__declspec(naked) void FUN_004aa3c2(void)
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
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_004ab1e0
        mov    dword ptr [esi], 0x770464
        mov    dword ptr [esi + 0x26c], 0x4c
        mov    dword ptr [esi + 0x270], 0x30
        mov    eax, esi
        pop    esi
        ret    0xc
    }
}
