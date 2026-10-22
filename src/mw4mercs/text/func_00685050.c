/*
 * FUN_00685050 (extent 0x685050-0x6850f4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005d8530(void);

__declspec(naked) void FUN_00685050(void)
{
    __asm {
        sub    esp, 0xc
        mov    edx, dword ptr [esp + 0x14]
        fld    dword ptr [edx + 8]
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [ecx + 0x30], edx
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [eax + 8]
        push    esi
        mov    esi, dword ptr [edx + 0xc]
        fstp    dword ptr [ecx]
        mov    edx, dword ptr [edx + 0x10]
        mov    dword ptr [esp + 0xc], edx
        mov    edx, esi
        mov    dword ptr [ecx + 0x10], edx
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [ecx + 0x14], edx
        mov    edx, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 0x2c], eax
        mov    eax, dword ptr [eax + 0x10]
        mov    dword ptr [esp + 8], esi
        mov    dword ptr [esp + 8], edx
        mov    dword ptr [esp + 0xc], eax
        mov    dword ptr [ecx + 4], edx
        mov    dword ptr [ecx + 8], eax
        pop    esi
        add    esp, 0xc
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
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [esp + 8]
        push    esi
        mov    esi, dword ptr [edx]
        mov    dword ptr [ecx + 8], eax
        lea    eax, [ecx + 0xc]
        mov    dword ptr [eax], esi
        mov    esi, dword ptr [edx + 4]
        mov    edx, dword ptr [edx + 8]
        mov    dword ptr [eax + 8], edx
        lea    edx, [ecx + 0x30]
        push    edx
        lea    edx, [ecx + 0x2c]
        push    edx
        push    0
        push    eax
        push    ecx
        mov    ecx, dword ptr [ecx + 0x34]
        mov    dword ptr [eax + 4], esi
        call    FUN_005d8530
        pop    esi
        ret    8
    }
}
