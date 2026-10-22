/*
 * FUN_005d6a8c (extent 0x5d6a8c-0x5d6b4f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005d9fc0(void);

__declspec(naked) void FUN_005d6a8c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [eax + 4]
        push    ebx
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esi + 8], ecx
        mov    dword ptr [esi + 0xc], edx
        lea    ecx, [esp + 8]
        xor    ebx, ebx
        push    ecx
        lea    edx, [esp + 0x14]
        push    edx
        lea    ecx, [esi + 0x1c]
        mov    dword ptr [esi + 0x10], eax
        mov    dword ptr [esi + 0x14], ebx
        mov    dword ptr [esi + 0x18], ebx
        mov    dword ptr [esp + 0x10], ebx
        call    FUN_005d9fc0
        fld    dword ptr [esp + 0x14]
        mov    al, byte ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x14]
        mov    cl, byte ptr [esp + 0x14]
        mov    dword ptr [esi + 0x20], ebx
        fstp    dword ptr [esi + 0x48]
        mov    byte ptr [esi + 0x28], al
        mov    dword ptr [esi + 0x28], ebx
        mov    dword ptr [esi + 0x24], ebx
        mov    dword ptr [esi + 0x2c], ebx
        mov    dword ptr [esi + 0x30], ebx
        mov    eax, edx
        mov    byte ptr [esi + 0x34], cl
        mov    dword ptr [esi + 0x4c], eax
        mov    dword ptr [esi + 0x34], ebx
        mov    byte ptr [esi + 5], bl
        mov    dword ptr [esi + 0x44], edx
        mov    byte ptr [esi + 4], 1
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ecx
        ret    8
        nop    
        nop    
        push    ecx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x2c]
        test    eax, eax
        je    L_6b24
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6b24:
        mov    eax, dword ptr [esi + 0x20]
        test    eax, eax
        mov    dword ptr [esp + 4], eax
        je    L_6b38
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6b38:
        mov    esi, dword ptr [esi + 0x14]
        test    esi, esi
        mov    dword ptr [esp + 4], esi
        je    L_6b4c
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6b4c:
        pop    esi
        pop    ecx
        ret    
    }
}
