/*
 * FUN_004ec110 (extent 0x4ec110-0x4ec15d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern int    g_007dc868;
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_004ec110(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0x28]
        push    ecx
        lea    ecx, [eax + eax*4]
        lea    edx, [eax + ecx*2]
        mov    eax, dword ptr [g_007dc868]
        mov    ecx, dword ptr [eax + 0x48]
        lea    ecx, [ecx + edx*4 + 0x18]
        call    FUN_004179b0
        mov    al, 1
        ret    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        test    esi, esi
        jne    L_c143
        fld    dword ptr [g_0076d064]
        pop    esi
        ret    4
L_c143:
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x28]
        mov    eax, dword ptr [esi + 0x10]
        pop    esi
        fdiv    dword ptr [eax + 0x74]
        fsubr    dword ptr [g_0076d064]
        ret    4
    }
}
