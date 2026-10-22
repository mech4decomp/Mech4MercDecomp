/*
 * FUN_0041655e (extent 0x41655e-0x4165ce) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_00415c40(void);
extern void __cdecl FUN_00416820(void);

__declspec(naked) void FUN_0041655e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0x18
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_659d
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esi + 0x10]
        mov    dword ptr [eax + 0xc], ecx
        mov    ecx, dword ptr [esi + 0x14]
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax + 0x14], ecx
        mov    dword ptr [eax], 0x76d4b8
        pop    esi
        ret    
L_659d:
        xor    eax, eax
        pop    esi
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
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x76d4b8
        mov    dword ptr [esi + 0x10], 0xffffffff
        call    FUN_00416820
        mov    ecx, esi
        call    FUN_00415c40
        pop    esi
        ret    
    }
}
