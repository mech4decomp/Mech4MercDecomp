/*
 * FUN_0059b214 (extent 0x59b214-0x59b30f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_00415180(void);

__declspec(naked) void FUN_0059b214(void)
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
        mov    eax, dword ptr [g_007b8c10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        push    eax
        call    FUN_00415180
        mov    esi, dword ptr [esp + 0x14]
        xor    ecx, ecx
        lea    eax, [edi + 0x10]
        mov    dword ptr [eax], ecx
        mov    dword ptr [edi + 0x14], ecx
        lea    ebx, [edi + 0x14]
        push    eax
        mov    word ptr [edi + 0x50], 0xffff
        mov    word ptr [edi + 0x52], cx
        push    esi
        mov    dword ptr [edi + 8], ecx
        mov    dword ptr [edi + 0xc], ecx
        mov    dword ptr [edi], 0x78383c
        call    FUN_00412a00
        push    ebx
        push    esi
        call    FUN_00412a00
        mov    edx, dword ptr [esi]
        add    esp, 0x10
        push    4
        lea    eax, [edi + 0x18]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x1c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x20]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x24]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x28]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x2c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x30]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x34]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x4c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        lea    ebx, [edi + 0x38]
        mov    ebp, 5
L_b2f6:
        mov    edx, dword ptr [esi]
        push    4
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        add    ebx, 4
        dec    ebp
        jne    L_b2f6
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
    }
}
