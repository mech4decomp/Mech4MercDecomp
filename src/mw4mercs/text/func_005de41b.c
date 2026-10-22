/*
 * FUN_005de41b (extent 0x5de41b-0x5de74f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0040edc0(void);
extern void __cdecl FUN_00411c80(void);
extern void __cdecl FUN_00411d40(void);
extern void __cdecl FUN_00411f50(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_005de41b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x44
        push    ebx
        push    esi
        mov    esi, ecx
        mov    ebx, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [esp + 0x50]
        push    edi
        push    ebx
        call    FUN_0040edc0
        mov    edi, eax
        push    ebx
        push    0x788754
        mov    ecx, edi
        call    FUN_00411c80
        push    1
        lea    eax, [esi + 0x14]
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_004d1f80
        mov    ecx, dword ptr [esi + 0x18]
        push    ecx
        push    0x788744
        mov    ecx, edi
        call    FUN_00411c80
        mov    edx, dword ptr [esp + 0x34]
        push    edx
        push    0x772408
        mov    ecx, edi
        call    FUN_00411c80
        xor    eax, eax
        mov    al, byte ptr [esi + 0x1c]
        mov    ecx, edi
        push    eax
        push    0x788738
        call    FUN_00411f50
        mov    ecx, dword ptr [esi + 0x20]
        push    ecx
        push    0x788728
        mov    ecx, edi
        call    FUN_00411d40
        xor    edx, edx
        mov    dl, byte ptr [esi + 0x24]
        mov    ecx, edi
        push    edx
        push    0x788720
        call    FUN_00411f50
        mov    eax, dword ptr [esi + 0x28]
        push    eax
        push    0x788718
        mov    ecx, edi
        call    FUN_00411d40
        mov    ecx, dword ptr [esi + 0x2c]
        push    ecx
        push    0x788710
        mov    ecx, edi
        call    FUN_00411d40
        mov    edx, dword ptr [esi + 0x30]
        push    edx
        push    0x788708
        mov    ecx, edi
        call    FUN_00411d40
        mov    eax, dword ptr [esi + 0x34]
        push    eax
        push    0x788700
        mov    ecx, edi
        call    FUN_00411d40
        mov    ecx, dword ptr [esi + 0x38]
        push    ecx
        push    0x7818b4
        mov    ecx, edi
        call    FUN_00411d40
        mov    edx, dword ptr [esi + 0x3c]
        push    edx
        push    0x786cf4
        mov    ecx, edi
        call    FUN_00411d40
        mov    eax, dword ptr [esi + 0x40]
        push    eax
        push    0x7886f4
        mov    ecx, edi
        call    FUN_00411d40
        mov    ecx, dword ptr [esi + 0x44]
        push    ecx
        push    0x7886e8
        mov    ecx, edi
        call    FUN_00411d40
        mov    edx, dword ptr [esi + 0x48]
        push    edx
        push    0x7886dc
        mov    ecx, edi
        call    FUN_00411d40
        mov    eax, dword ptr [esi + 0x4c]
        push    eax
        push    0x7886cc
        mov    ecx, edi
        call    FUN_00411d40
        mov    ecx, dword ptr [esi + 0x50]
        push    ecx
        push    0x7886bc
        mov    ecx, edi
        call    FUN_00411d40
        mov    edx, dword ptr [esi + 0x54]
        push    edx
        push    0x7886ac
        mov    ecx, edi
        call    FUN_00411d40
        mov    eax, dword ptr [esi + 0x58]
        push    eax
        push    0x78869c
        mov    ecx, edi
        call    FUN_00411d40
        mov    ecx, dword ptr [esi + 0x5c]
        push    ecx
        push    0x788690
        mov    ecx, edi
        call    FUN_00411d40
        mov    edx, dword ptr [esi + 0x60]
        push    edx
        push    0x788684
        mov    ecx, edi
        call    FUN_00411d40
        mov    eax, dword ptr [esi + 0x64]
        push    eax
        push    0x788674
        mov    ecx, edi
        call    FUN_00411d40
        mov    ecx, dword ptr [esi + 0x68]
        push    ecx
        push    0x788664
        mov    ecx, edi
        call    FUN_00411d40
        mov    edx, dword ptr [esi + 0x6c]
        push    edx
        push    0x788658
        mov    ecx, edi
        call    FUN_00411d40
        mov    eax, dword ptr [esi + 0x70]
        push    eax
        push    0x788644
        mov    ecx, edi
        call    FUN_00411d40
        lea    ecx, [esp + 0xc]
        call    FUN_004d21c0
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x44
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        lea    eax, [edi + 0x10]
        push    eax
        push    esi
        call    FUN_00412a50
        lea    ecx, [edi + 0x18]
        push    ecx
        push    esi
        call    FUN_00412a50
        mov    edx, dword ptr [esi]
        add    esp, 0x10
        push    4
        lea    eax, [edi + 0x14]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x1c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [edi + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x10]
        mov    dword ptr [esp + 0x10], ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x24]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x28]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x2c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x30]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x34]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x38]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x3c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x40]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x44]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x48]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x4c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x50]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x54]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x58]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x5c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x60]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x64]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x68]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [edi + 0x6c]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x10]
        mov    dword ptr [esp + 0x10], ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        add    edi, 0x70
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        ret    4
    }
}
