/*
 * FUN_00409565 (extent 0x409565-0x4095f9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_00415180(void);

__declspec(naked) void FUN_00409565(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [ecx + 0x1c]
        cmp    eax, ecx
        jne    L_9587
        xor    eax, eax
        ret    8
L_9587:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx + 0x1c]
        cmp    eax, ecx
        jne    L_95b6
        xor    eax, eax
        ret    8
L_95b6:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
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
        mov    eax, dword ptr [g_007b8c10]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        mov    ecx, dword ptr [esp + 8]
        xor    eax, eax
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi], 0x76cdfc
        mov    dword ptr [esi + 0x10], ecx
        mov    eax, esi
        pop    esi
        ret    4
    }
}
