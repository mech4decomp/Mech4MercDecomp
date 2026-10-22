/*
 * FUN_0041f869 (extent 0x41f869-0x41fa70) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2e0;
extern int    g_0076b420;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040df40(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412670(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412bf0(void);
extern void __cdecl FUN_00412e70(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0041e710(void);

__declspec(naked) void FUN_0041f869(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        fld    dword ptr [eax + 0xc]
        push    esi
        sub    esp, 8
        fstp    qword ptr [esp]
        sub    esp, 8
        fld    dword ptr [eax + 8]
        sub    esp, 8
        fstp    qword ptr [esp + 8]
        sub    esp, 8
        fld    dword ptr [eax + 4]
        mov    esi, ecx
        fstp    qword ptr [esp + 8]
        fld    dword ptr [eax]
        fstp    qword ptr [esp]
        push    0x76d944
        push    0x7b9308
        call    dword ptr [g_0076b420]
        add    esp, 0x28
        push    0x7b9308
        lea    ecx, [esi + 0x18]
        call    FUN_00412780
        mov    eax, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [eax + 0x10]
        mov    byte ptr [ecx + 4], 1
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x34
        push    ebx
        push    esi
        mov    ebx, ecx
        mov    esi, dword ptr [ebx + 0x18]
        push    3
        push    0x76d158
        push    esi
        call    dword ptr [g_0076b2e0]
        add    esp, 0xc
        test    eax, eax
        je    L_f93b
        push    0
        push    esi
        lea    ecx, [esp + 0x14]
        call    FUN_0041de80
        mov    eax, dword ptr [esp + 0x30]
        mov    esi, dword ptr [esp + 0x40]
        push    eax
        mov    ecx, esi
        call    FUN_00412780
        lea    ecx, [esp + 0xc]
        push    ecx
        lea    ecx, [esi + 0xc]
        call    FUN_00412bf0
        push    0
        push    0
        push    0
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, esi
        call    FUN_0040df40
        lea    ecx, [esp + 0xc]
        call    FUN_0041dec0
        pop    esi
        pop    ebx
        add    esp, 0x34
        ret    4
L_f93b:
        push    edi
        or    ecx, 0xffffffff
        mov    edi, esi
        xor    eax, eax
        repne scasb
        not    ecx
        push    0
        add    ecx, -4
        push    ecx
        add    esi, 3
        push    esi
        lea    ecx, [esp + 0x1c]
        call    FUN_0041e690
        mov    eax, dword ptr [ebx + 0x10]
        mov    esi, dword ptr [eax + 0x10]
        mov    edi, dword ptr [esp + 0x44]
        lea    ecx, [esi + 0xc]
        push    ecx
        lea    ecx, [edi + 0xc]
        call    FUN_00412e70
        mov    esi, dword ptr [esi]
        test    esi, esi
        je    L_fa4c
        push    esi
        lea    ecx, [esp + 0x48]
        call    FUN_00412570
        mov    edx, dword ptr [esp + 0x44]
        push    0x5b
        push    edx
        lea    ecx, [esp + 0x14]
        call    FUN_00412670
        push    eax
        lea    ecx, [esp + 0x48]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_f9b9
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f9b9
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f9b9:
        mov    eax, dword ptr [ebx + 0x14]
        mov    ecx, dword ptr [esp + 0x44]
        push    eax
        push    ecx
        lea    ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x48]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_f9f0
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f9f0
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f9f0:
        mov    edx, dword ptr [esp + 0x44]
        push    0x5d
        push    edx
        lea    ecx, [esp + 0x14]
        call    FUN_00412670
        push    eax
        lea    ecx, [esp + 0x48]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_fa25
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_fa25
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_fa25:
        lea    eax, [esp + 0x44]
        push    eax
        mov    ecx, edi
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x44]
        test    eax, eax
        je    L_fa4c
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_fa4c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_fa4c:
        push    1
        push    0
        push    0
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, edi
        call    FUN_0040df40
        lea    ecx, [esp + 0x10]
        call    FUN_0041e710
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x34
        ret    4
    }
}
