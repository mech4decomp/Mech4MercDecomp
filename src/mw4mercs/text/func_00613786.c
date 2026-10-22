/*
 * FUN_00613786 (extent 0x613786-0x613818) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007f27dc;
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00613760(void);

__declspec(naked) void FUN_00613786(void)
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov    ecx, dword ptr [g_007f27dc]
        call    FUN_00613760
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b8c10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        mov    ebx, dword ptr [esp + 0x14]
        xor    ecx, ecx
        lea    eax, [esi + 0x1c]
        lea    edi, [esi + 0x10]
        mov    word ptr [edi], 0xffff
        mov    word ptr [edi + 2], cx
        lea    ebp, [esi + 0x18]
        mov    dword ptr [ebp], ecx
        push    eax
        mov    dword ptr [eax], ecx
        push    ebx
        mov    dword ptr [esi + 8], ecx
        mov    dword ptr [esi + 0xc], ecx
        mov    dword ptr [esi], 0x78c280
        call    FUN_00412a00
        mov    edx, dword ptr [ebx]
        add    esp, 8
        push    4
        push    edi
        mov    ecx, ebx
        call    dword ptr [edx + 0x20]
        push    ebp
        push    ebx
        mov    dword ptr [esi + 0x14], 0xffffffff
        call    FUN_00412a00
        add    esp, 8
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
    }
}
