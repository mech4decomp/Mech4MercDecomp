/*
 * FUN_0066bc16 (extent 0x66bc16-0x66bc85) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0066bbe0(void);
extern void __cdecl FUN_0066bc90(void);

__declspec(naked) void FUN_0066bc16(void)
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_0066bbe0
        add    eax, 2
        ret    4
        push    ecx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x20]
        push    edi
        xor    edi, edi
        test    eax, eax
        jle    L_bc81
L_bc3e:
        mov    edx, dword ptr [esi + 0x24]
        mov    ecx, dword ptr [esi + 0x10]
        mov    eax, edi
        add    eax, edx
        mov    edx, dword ptr [ecx + 0x30]
        mov    eax, dword ptr [edx + eax*4]
        cmp    dword ptr [eax + 0xc], -1
        je    L_bc6b
        push    edi
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x10], 0
        call    FUN_0066bc90
        jmp    L_bc79
L_bc6b:
        mov    dword ptr [eax + 0x28], 0
        mov    dword ptr [eax + 0x2c], 0x3f800000
L_bc79:
        mov    eax, dword ptr [esi + 0x20]
        inc    edi
        cmp    edi, eax
        jl    L_bc3e
L_bc81:
        pop    edi
        pop    esi
        pop    ecx
        ret    
    }
}
