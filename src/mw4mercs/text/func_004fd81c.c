/*
 * FUN_004fd81c (extent 0x4fd81c-0x4fd884) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004fd81c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b8c10]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 0xc]
        xor    eax, eax
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi + 0x10], ecx
        mov    dword ptr [esi + 0x14], edx
        mov    dword ptr [esi], 0x776020
        mov    eax, esi
        pop    esi
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
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x776020
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        je    L_d87e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_d87e:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
