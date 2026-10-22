/*
 * FUN_00491bae (extent 0x491bae-0x491c7c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern int    g_007b8c10;
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00717a10(void);

__declspec(naked) void FUN_00491bae(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007b8c10]
        sub    esp, 0x14
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        mov    ebx, dword ptr [esp + 0x28]
        push    ebx
        xor    ebp, ebp
        lea    ecx, [esp + 0x14]
        lea    edi, [esi + 0x10]
        push    0x7700ec
        mov    dword ptr [edi], ebp
        push    ecx
        mov    dword ptr [esi + 8], ebp
        mov    dword ptr [esi + 0xc], ebp
        mov    dword ptr [esi], 0x7700e8
        call    dword ptr [g_0076b420]
        add    esp, 0xc
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, edi
        call    FUN_00412780
        pop    edi
        mov    dword ptr [esi + 0x14], ebp
        mov    dword ptr [esi + 0x1c], ebx
        mov    dword ptr [esi + 0x20], ebp
        mov    dword ptr [esi + 0x18], 1
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
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
        mov    eax, dword ptr [g_007b8c10]
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        mov    edi, dword ptr [esp + 0x14]
        xor    ebx, ebx
        lea    ecx, [esi + 0x10]
        mov    dword ptr [ecx], ebx
        push    edi
        mov    dword ptr [esi + 8], ebx
        mov    dword ptr [esi + 0xc], ebx
        mov    dword ptr [esi], 0x7700e8
        call    FUN_00412780
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x10]
        push    ebx
        push    ebx
        push    ecx
        push    edx
        push    edi
        push    eax
        mov    dword ptr [esi + 0x18], 1
        mov    dword ptr [esi + 0x14], ebx
        call    FUN_00717a10
        mov    dword ptr [esi + 0x1c], eax
        pop    edi
        mov    dword ptr [esi + 0x20], ebx
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0x10
    }
}
