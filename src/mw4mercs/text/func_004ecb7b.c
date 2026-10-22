/*
 * FUN_004ecb7b (extent 0x4ecb7b-0x4ecbff) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00415180(void);

__declspec(naked) void FUN_004ecb7b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x28], eax
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx + 0x2c], edx
        mov    dword ptr [ecx + 0x30], eax
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
        mov    eax, dword ptr [g_007b8c10]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        mov    edx, dword ptr [esp + 8]
        xor    eax, eax
        lea    ecx, [esi + 0x14]
        mov    dword ptr [ecx], eax
        push    edx
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi], 0x774828
        call    FUN_00412780
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x10], eax
        mov    dword ptr [esi + 0x18], ecx
        mov    eax, esi
        pop    esi
        ret    0xc
    }
}
