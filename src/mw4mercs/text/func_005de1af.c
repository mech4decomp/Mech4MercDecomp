/*
 * FUN_005de1af (extent 0x5de1af-0x5de3a4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_005de420(void);
extern void __cdecl FUN_00637ac0(void);

__declspec(naked) void FUN_005de1af(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [esp + 4]
        sub    esp, 0x50
        push    esi
        push    0
        push    0
        mov    esi, ecx
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_0040dca0
        mov    esi, dword ptr [esi + 0x10]
L_e1cb:
        test    esi, esi
        je    L_e1e4
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_e1e4
        lea    edx, [esp + 4]
        push    edx
        call    FUN_005de420
        jmp    L_e1cb
L_e1e4:
        lea    ecx, [esp + 4]
        call    FUN_0040de20
        pop    esi
        add    esp, 0x50
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
        push    ecx
        mov    eax, dword ptr [g_007b8c10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        push    eax
        call    FUN_00415180
        xor    eax, eax
        mov    dword ptr [edi + 0x10], eax
        lea    esi, [edi + 0x10]
        lea    ebx, [edi + 0x14]
        mov    word ptr [ebx + 2], ax
        mov    word ptr [ebx], 0xffff
        lea    ebp, [edi + 0x18]
        mov    dword ptr [ebp], eax
        mov    dword ptr [edi + 8], eax
        mov    dword ptr [edi + 0xc], eax
        mov    dword ptr [edi], 0x788640
        call    FUN_00637ac0
        push    esi
        mov    esi, dword ptr [esp + 0x1c]
        push    esi
        call    FUN_00412a00
        push    ebp
        push    esi
        call    FUN_00412a00
        mov    edx, dword ptr [esi]
        add    esp, 0x10
        push    4
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [edi + 0x1c]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x24]
        mov    dword ptr [edi + 0x20], ecx
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
        lea    eax, [edi + 0x38]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x3c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x40]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x44]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x48]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x4c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x50]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x54]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x58]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x5c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x60]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x64]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x68]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x70]
        mov    dword ptr [edi + 0x6c], ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
    }
}
