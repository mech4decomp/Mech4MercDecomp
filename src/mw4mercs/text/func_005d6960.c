/*
 * FUN_005d6960 (extent 0x5d6960-0x5d6b0e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411dc0(void);
extern void __cdecl FUN_00411fd0(void);
extern void __cdecl FUN_005d9fc0(void);
extern void __cdecl FUN_005d9fe0(void);

__declspec(naked) void FUN_005d6960(void)
{
    __asm {
        sub    esp, 0x1c
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        push    edi
        push    eax
        lea    ecx, [esp + 0xc]
        push    0x788190
        push    ecx
        call    dword ptr [g_0076b420]
        mov    ecx, dword ptr [esp + 0x34]
        add    esp, 0xc
        lea    edx, [esp + 8]
        push    edx
        call    FUN_0040eda0
        mov    edi, eax
        lea    eax, [esi + 8]
        push    eax
        push    0x788184
        mov    ecx, edi
        call    FUN_00411fd0
        mov    ecx, dword ptr [esi + 0x44]
        push    ecx
        push    0x774540
        mov    ecx, edi
        call    FUN_00411dc0
        mov    edx, dword ptr [esi + 0x4c]
        push    edx
        push    0x788178
        mov    ecx, edi
        call    FUN_00411dc0
        pop    edi
        pop    esi
        add    esp, 0x1c
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
        sub    esp, 8
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        push    edi
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x17]
        xor    ebx, ebx
        push    ecx
        lea    ecx, [esi + 0x1c]
        mov    dword ptr [esi + 0x14], ebx
        mov    dword ptr [esi + 0x18], ebx
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_005d9fc0
        lea    edx, [esp + 0x14]
        push    edx
        lea    eax, [esp + 0x17]
        push    eax
        lea    ecx, [esi + 0x28]
        mov    dword ptr [esi + 0x20], ebx
        mov    dword ptr [esi + 0x24], ebx
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_005d9fe0
        mov    cl, byte ptr [esp + 0x1c]
        mov    edi, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [edi]
        mov    dword ptr [esi + 0x2c], ebx
        mov    byte ptr [esi + 0x34], cl
        push    0xc
        lea    ebp, [esi + 8]
        mov    dword ptr [esi + 0x30], ebx
        push    ebp
        mov    ecx, edi
        mov    dword ptr [esi + 0x34], ebx
        mov    byte ptr [esi + 5], bl
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [ebp]
        mov    eax, 0xbf800000
        cmp    ecx, eax
        je    L_6a80
        cmp    dword ptr [esi + 0xc], eax
        je    L_6a80
        cmp    dword ptr [esi + 0x10], eax
        je    L_6a80
        mov    eax, dword ptr [edi]
        push    4
        lea    ebp, [esi + 0x44]
        push    ebp
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x4c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        fld    dword ptr [ebp]
        mov    ecx, dword ptr [esp + 0x20]
        fld    st(0)
        mov    edx, dword ptr [ecx + 0x50]
        fmul st(0), st(1)
        mov    dword ptr [esi + 0x50], edx
        mov    byte ptr [esi + 4], bl
        fstp    dword ptr [esi + 0x48]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_6a80:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    8
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
    }
}
