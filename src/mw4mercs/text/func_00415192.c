/*
 * FUN_00415192 (extent 0x415192-0x4151fa) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c0c;
extern void __cdecl FUN_004152b0(void);

__declspec(naked) void FUN_00415192(void)
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
        mov    eax, dword ptr [ecx + 4]
        mov    eax, dword ptr [eax + 4]
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0xc]
        xor    edx, edx
        mov    dword ptr [esi + 4], ecx
        mov    ecx, dword ptr [esp + 0x10]
        cmp    ecx, edx
        push    edi
        mov    edi, dword ptr [g_007b8c0c]
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 8], edx
        mov    dword ptr [esi + 0xc], edx
        mov    dword ptr [esi + 0x10], ecx
        mov    dword ptr [edi + eax*4], esi
        je    L_51f3
        push    esi
        call    FUN_004152b0
L_51f3:
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0xc
    }
}
