/*
 * FUN_00513c8b (extent 0x513c8b-0x513d69) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;

__declspec(naked) void FUN_00513c8b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x3534]
        ret    0xc
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0xc]
        xor    eax, 0x85739531
        cmp    ecx, dword ptr [eax + 0x205524]
        mov    dword ptr [edx], 0
        jl    L_3ce5
        xor    eax, eax
        pop    esi
        ret    0xc
L_3ce5:
        mov    esi, dword ptr [eax + ecx*4 + 0x205128]
        mov    eax, dword ptr [eax + ecx*4 + 0x204d2c]
        mov    dword ptr [edx], esi
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x205524]
        ret    0xc
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0xc]
        xor    eax, 0x85739531
        cmp    ecx, dword ptr [eax + 0x205d20]
        mov    dword ptr [edx], 0
        jl    L_3d55
        xor    eax, eax
        pop    esi
        ret    0xc
L_3d55:
        mov    esi, dword ptr [eax + ecx*4 + 0x205924]
        mov    eax, dword ptr [eax + ecx*4 + 0x205528]
        mov    dword ptr [edx], esi
        pop    esi
        ret    0xc
    }
}
