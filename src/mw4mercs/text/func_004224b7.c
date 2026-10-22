/*
 * FUN_004224b7 (extent 0x4224b7-0x42250e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00422660(void);

__declspec(naked) void FUN_004224b7(void)
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
        mov    eax, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        xor    eax, eax
        mov    dword ptr [esi + 0x10], eax
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi + 0x20], eax
        mov    dword ptr [esi + 0x34], eax
        mov    dword ptr [esi], 0x76ddc0
        mov    eax, esi
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_00422660
        test    byte ptr [esp + 8], 1
        je    L_2508
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2508:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
