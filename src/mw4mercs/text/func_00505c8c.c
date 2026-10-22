/*
 * FUN_00505c8c (extent 0x505c8c-0x505d2b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00505390(void);
extern void __cdecl FUN_007226f0(void);

__declspec(naked) void FUN_00505c8c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [esp + 4]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [ecx + 4]
        fdivp st(1), st(0)
        fsubr    dword ptr [g_0076d064]
        ret    4
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
        ret    4
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
        push    ebx
        push    ebp
        push    esi
        mov    ebp, ecx
        push    edi
        lea    edi, [ebp + 0x24]
        mov    ebx, 5
L_5cee:
        mov    esi, dword ptr [edi]
        test    esi, esi
        je    L_5d04
        mov    ecx, esi
        call    FUN_00505390
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_5d04:
        add    edi, 4
        dec    ebx
        jne    L_5cee
        mov    eax, dword ptr [ebp + 0x4c]
        push    eax
        call    FUN_004084e0
        mov    ecx, dword ptr [ebp + 0x38]
        add    esp, 4
        push    0x3d08850a
        push    0
        push    ecx
        call    FUN_007226f0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
    }
}
