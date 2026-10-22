/*
 * FUN_00684eb8 (extent 0x684eb8-0x6850a2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005d9500(void);
extern void __cdecl FUN_00687920(void);
extern void __cdecl FUN_00687940(void);
extern void __cdecl FUN_00687ee0(void);
extern void __cdecl FUN_00687f20(void);
extern void __cdecl FUN_0068f370(void);

__declspec(naked) void FUN_00684eb8(void)
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
        sub    esp, 0x14
        push    ebx
        push    esi
        mov    esi, ecx
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0xf]
        xor    ebx, ebx
        push    ecx
        lea    ecx, [esi + 0x4c]
        mov    dword ptr [esi + 0x44], ebx
        mov    dword ptr [esi + 0x48], ebx
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_00687920
        lea    edx, [esp + 0xc]
        push    edx
        lea    eax, [esp + 0xf]
        push    eax
        lea    ecx, [esi + 0x58]
        mov    dword ptr [esi + 0x50], ebx
        mov    dword ptr [esi + 0x54], ebx
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_00687940
        mov    eax, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x2c]
        mov    cl, byte ptr [esp + 0x30]
        mov    dword ptr [esi + 0x34], eax
        mov    eax, dword ptr [esp + 0x24]
        fld    dword ptr [eax + 8]
        mov    dword ptr [esi + 0x24], edx
        mov    edx, dword ptr [eax + 0xc]
        fstp    dword ptr [esi]
        mov    byte ptr [esi + 0x3e], cl
        mov    ecx, dword ptr [esp + 0x28]
        fld    dword ptr [ecx + 8]
        mov    dword ptr [esi + 0x2c], eax
        mov    eax, dword ptr [eax + 0x10]
        fstp    dword ptr [esi + 0xc]
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esp + 0x14], edx
        mov    edx, dword ptr [ecx + 0xc]
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esi + 8], eax
        mov    eax, dword ptr [ecx + 0x10]
        mov    dword ptr [esi + 0x30], ecx
        mov    ecx, edx
        mov    dword ptr [esp + 0x14], edx
        mov    edx, eax
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [esp + 0x30]
        push    ebx
        push    ecx
        mov    dword ptr [esi + 0x14], edx
        mov    edx, dword ptr [esi + 0x50]
        mov    dword ptr [esp + 0x20], eax
        mov    eax, dword ptr [esi + 0x54]
        push    edx
        push    eax
        push    eax
        mov    byte ptr [esi + 0x40], bl
        mov    dword ptr [esi + 0x38], ebx
        mov    dword ptr [esi + 0x64], ebx
        mov    byte ptr [esi + 0x3d], 1
        mov    byte ptr [esi + 0x3c], bl
        mov    dword ptr [esi + 0x5c], ebx
        call    FUN_00687f20
        mov    ecx, dword ptr [esp + 0x44]
        mov    edx, dword ptr [esi + 0x44]
        push    ebx
        push    ecx
        mov    dword ptr [esi + 0x54], eax
        mov    eax, dword ptr [esi + 0x48]
        push    edx
        push    eax
        push    eax
        call    FUN_00687ee0
        mov    dword ptr [esi + 0x48], eax
        mov    eax, dword ptr [esi + 0x50]
        mov    dword ptr [esi + 0x60], eax
        add    esp, 0x28
        mov    eax, esi
        pop    esi
        pop    ebx
        add    esp, 0x14
        ret    0x14
        nop    
        push    ecx
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esi + 0x44]
        mov    eax, dword ptr [esi + 0x48]
        push    0
        push    ecx
        push    edx
        push    eax
        push    eax
        call    FUN_00687ee0
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esi + 0x50]
        push    0
        push    ecx
        mov    dword ptr [esi + 0x48], eax
        mov    eax, dword ptr [esi + 0x54]
        push    edx
        push    eax
        push    eax
        call    FUN_00687f20
        mov    edi, dword ptr [esi + 0x64]
        add    esp, 0x28
        test    edi, edi
        mov    dword ptr [esi + 0x54], eax
        je    L_4fff
        mov    ecx, edi
        call    FUN_0068f370
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_4fff:
        mov    edi, dword ptr [esi + 0x38]
        test    edi, edi
        mov    dword ptr [esi + 0x64], 0
        je    L_501d
        mov    ecx, edi
        call    FUN_005d9500
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_501d:
        mov    eax, dword ptr [esi + 0x50]
        test    eax, eax
        mov    dword ptr [esi + 0x38], 0
        mov    dword ptr [esp + 8], eax
        je    L_5038
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_5038:
        mov    esi, dword ptr [esi + 0x44]
        test    esi, esi
        mov    dword ptr [esp + 8], esi
        je    L_504c
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_504c:
        pop    edi
        pop    esi
        pop    ecx
        ret    
        sub    esp, 0xc
        mov    edx, dword ptr [esp + 0x14]
        fld    dword ptr [edx + 8]
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [ecx + 0x30], edx
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [eax + 8]
        push    esi
        mov    esi, dword ptr [edx + 0xc]
        fstp    dword ptr [ecx]
        mov    edx, dword ptr [edx + 0x10]
        mov    dword ptr [esp + 0xc], edx
        mov    edx, esi
        mov    dword ptr [ecx + 0x10], edx
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [ecx + 0x14], edx
        mov    edx, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 0x2c], eax
        mov    eax, dword ptr [eax + 0x10]
        mov    dword ptr [esp + 8], esi
        mov    dword ptr [esp + 8], edx
        mov    dword ptr [esp + 0xc], eax
        mov    dword ptr [ecx + 4], edx
        mov    dword ptr [ecx + 8], eax
        pop    esi
        add    esp, 0xc
        ret    8
    }
}
