/*
 * FUN_0067f82a (extent 0x67f82a-0x67f89e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_0067f920(void);

__declspec(naked) void FUN_0067f82a(void)
{
    __asm {
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
        xor    ebx, ebx
        lea    edi, [esi + 0x10]
        push    ebx
        mov    ecx, edi
        mov    dword ptr [esi + 8], ebx
        mov    dword ptr [esi + 0xc], ebx
        mov    dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x773328
        pop    edi
        mov    dword ptr [esi + 0x1c], ebx
        mov    dword ptr [esi + 0x20], ebx
        mov    dword ptr [esi], 0x798818
        mov    byte ptr [esi + 0x24], 1
        mov    dword ptr [esi + 0x28], 0xffffffff
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_0067f920
        test    byte ptr [esp + 8], 1
        je    L_f898
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_f898:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
