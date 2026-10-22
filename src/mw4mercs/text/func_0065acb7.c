/*
 * FUN_0065acb7 (extent 0x65acb7-0x65ad33) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00637b40(void);

__declspec(naked) void FUN_0065acb7(void)
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
        mov    al, 1
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
        sub    esp, 0xc
        mov    eax, dword ptr [ecx + 8]
        mov    eax, dword ptr [eax + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    ecx, dword ptr [eax + 0xac]
        fld    dword ptr [eax + 0x9c]
        add    eax, 0x80
        mov    eax, dword ptr [esp + 0x10]
        fxch    st(1)
        fstp    dword ptr [eax]
        mov    edx, ecx
        mov    dword ptr [esp + 8], ecx
        fstp    dword ptr [eax + 4]
        mov    dword ptr [eax + 8], edx
        add    esp, 0xc
        ret    4
        nop    
        nop    
        nop    
        push    0x5e
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        ret    
        nop    
        xor    al, al
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
        xor    al, al
        ret    
    }
}
