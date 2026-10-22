/*
 * FUN_005bf9ba (extent 0x5bf9ba-0x5bf9f9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_00415180(void);

__declspec(naked) void FUN_005bf9ba(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
        mov    dword ptr [ecx + 0x2c], eax
        mov    dword ptr [ecx + 0x30], 0x3f800000
        mov    dword ptr [ecx + 0x34], eax
        ret    
        mov    eax, dword ptr [g_007b8c10]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        xor    eax, eax
        mov    dword ptr [esi + 0x14], eax
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [esi], 0x787258
        mov    eax, esi
        pop    esi
        ret    
    }
}
