/*
 * FUN_006a49b4 (extent 0x6a49b4-0x6a4a3c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern void __cdecl FUN_00665670(void);
extern void __cdecl FUN_00682ec0(void);

__declspec(naked) void FUN_006a49b4(void)
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
        mov    eax, dword ptr [esp + 4]
        push    0
        push    0
        push    1
        push    0
        push    eax
        call    FUN_00665670
        fld    dword ptr [g_0076d064]
        add    esp, 0x14
        ret    4
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        mov    eax, dword ptr [ecx]
        push    0x40800000
        call    dword ptr [eax + 0x88]
        cmp    al, 1
        jne    L_49fc
        fld    dword ptr [g_0076d064]
        ret    
L_49fc:
        fld    dword ptr [g_0076c5b0]
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
        mov    ecx, dword ptr [esp + 4]
        mov    eax, dword ptr [ecx]
        push    0
        push    0
        push    0
        push    0
        call    dword ptr [eax + 0x34]
        push    eax
        call    FUN_00682ec0
        add    esp, 0x14
        cmp    al, 1
        jne    L_4a35
        fld    dword ptr [g_0076d064]
        ret    
L_4a35:
        fld    dword ptr [g_0076c5b0]
        ret    
    }
}
