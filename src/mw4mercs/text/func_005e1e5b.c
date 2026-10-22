/*
 * FUN_005e1e5b (extent 0x5e1e5b-0x5e1ed9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005e1ee0(void);

__declspec(naked) void FUN_005e1e5b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 2
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
        push    edi
        mov    edi, ecx
        mov    al, byte ptr [edi + 0x41c]
        test    al, al
        jne    L_1ed7
        mov    edx, dword ptr [edi + 0x10]
        or    edx, 0x800000
        push    esi
        mov    dword ptr [edi + 0x10], edx
        call    FUN_005e1ee0
        mov    esi, dword ptr [edi + 0xd8]
        mov    eax, dword ptr [esi + 0x18]
        mov    edx, dword ptr [esi]
        and    eax, 0xffffffbf
        or    eax, 0x80
        mov    ecx, esi
        mov    dword ptr [esi + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    edx, dword ptr [edi]
        push    1
        mov    ecx, edi
        call    dword ptr [edx + 0x48]
        or    dword ptr [esi + 0x18], 0xc0
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        mov    byte ptr [edi + 0x41c], 1
        call    dword ptr [eax + 0x10]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
        pop    esi
L_1ed7:
        pop    edi
        ret    
    }
}
