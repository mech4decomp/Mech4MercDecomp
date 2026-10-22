/*
 * FUN_00694bd4 (extent 0x694bd4-0x694d92) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0082db1c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_00547c60(void);
extern void __cdecl FUN_005634e0(void);
extern void __cdecl FUN_005ddec0(void);
extern void __cdecl FUN_0067c040(void);
extern void __cdecl FUN_00694ce0(void);
extern void __cdecl FUN_00696c30(void);
extern void __cdecl FUN_00696e80(void);

__declspec(naked) void FUN_00694bd4(void)
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
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        push    edi
        mov    edi, dword ptr [esp + 0x1c]
        mov    al, byte ptr [edi + 8]
        lea    ecx, [esp + 0x10]
        push    ecx
        xor    ebx, ebx
        lea    edx, [esp + 0x20]
        push    edx
        lea    ecx, [esi + 8]
        mov    byte ptr [esp + 0x24], al
        mov    dword ptr [esi], ebx
        mov    dword ptr [esi + 4], ebx
        mov    dword ptr [esp + 0x18], ebx
        call    FUN_00547ba0
        mov    eax, dword ptr [edi + 4]
        mov    ecx, dword ptr [edi]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_0067c040
        mov    ebp, dword ptr [esp + 0x20]
        mov    dl, byte ptr [ebp + 8]
        lea    eax, [esp + 0x20]
        lea    edi, [esi + 0xc]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [edi + 8]
        mov    byte ptr [esp + 0x24], dl
        mov    dword ptr [edi], ebx
        mov    dword ptr [edi + 4], ebx
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00547ba0
        mov    edx, dword ptr [ebp + 4]
        mov    eax, dword ptr [ebp]
        push    edx
        push    eax
        mov    ecx, edi
        call    FUN_0067c040
        mov    cl, byte ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        mov    ebp, dword ptr [esp + 0x24]
        mov    al, byte ptr [ebp + 8]
        mov    dword ptr [esi + 0x18], ebx
        mov    byte ptr [esi + 0x20], cl
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esi + 0x24], edx
        lea    edi, [esi + 0x28]
        push    ecx
        lea    edx, [esp + 0x20]
        mov    dword ptr [esi + 0x1c], ebx
        mov    dword ptr [esi + 0x20], ebx
        push    edx
        lea    ecx, [edi + 8]
        mov    byte ptr [esp + 0x24], al
        mov    dword ptr [edi], ebx
        mov    dword ptr [edi + 4], ebx
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00547ba0
        mov    eax, dword ptr [ebp + 4]
        mov    ebp, dword ptr [ebp]
        mov    dword ptr [esp + 0x1c], eax
        sub    eax, ebp
        inc    eax
        push    eax
        mov    ecx, edi
        call    FUN_005634e0
        mov    eax, dword ptr [edi]
        mov    ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    ebp
        call    FUN_005ddec0
        mov    edx, dword ptr [esp + 0x34]
        add    esp, 0xc
        mov    dword ptr [edi + 4], eax
        mov    byte ptr [eax], bl
        mov    eax, dword ptr [g_0082db1c]
        inc    eax
        pop    edi
        mov    dword ptr [g_0082db1c], eax
        mov    dword ptr [esi + 0x34], edx
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    0x14
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x1c]
        mov    edx, dword ptr [esi + 0x18]
        push    edi
        mov    edi, dword ptr [g_0082db1c]
        dec    edi
        sub    eax, edx
        sar    eax, 2
        mov    dword ptr [g_0082db1c], edi
        je    L_4d49
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        mov    ebx, edx
L_4d07:
        mov    edi, dword ptr [ebx]
        test    edi, edi
        je    L_4d1d
        mov    ecx, edi
        call    FUN_00694ce0
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_4d1d:
        mov    edi, dword ptr [esi + 0x1c]
        lea    eax, [ebx + 4]
        cmp    eax, edi
        je    L_4d35
        push    0
        push    ebp
        push    ebx
        push    edi
        push    eax
        call    FUN_00696e80
        add    esp, 0x14
L_4d35:
        mov    edx, dword ptr [esi + 0x18]
        add    edi, -4
        mov    ecx, edi
        sub    ecx, edx
        sar    ecx, 2
        mov    dword ptr [esi + 0x1c], edi
        jne    L_4d07
        pop    ebp
        pop    ebx
L_4d49:
        mov    eax, dword ptr [esi + 0x28]
        mov    edx, dword ptr [esi + 0x30]
        sub    edx, eax
        push    edx
        push    eax
        call    FUN_00547c60
        mov    eax, dword ptr [esi + 0x18]
        mov    ecx, dword ptr [esi + 0x20]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        mov    dword ptr [esp + 0x18], eax
        call    FUN_00696c30
        mov    eax, dword ptr [esi + 0xc]
        mov    edx, dword ptr [esi + 0x14]
        sub    edx, eax
        push    edx
        push    eax
        call    FUN_00547c60
        mov    eax, dword ptr [esi]
        mov    ecx, dword ptr [esi + 8]
        sub    ecx, eax
        push    ecx
        push    eax
        call    FUN_00547c60
        add    esp, 0x20
        pop    edi
        pop    esi
        pop    ecx
        ret    
    }
}
