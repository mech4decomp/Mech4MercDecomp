/*
 * FUN_0040c0ae (extent 0x40c0ae-0x40c0f3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern void __cdecl FUN_004084c0(void);

__declspec(naked) void FUN_0040c0ae(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_c0db
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x76d038
        pop    esi
        ret    
L_c0db:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        mov    edx, dword ptr [ecx + 8]
        test    edx, edx
        je    L_c0f0
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [edx + 4]
        mov    dword ptr [ecx + 8], edx
        ret    
L_c0f0:
        xor    eax, eax
        ret    
    }
}
