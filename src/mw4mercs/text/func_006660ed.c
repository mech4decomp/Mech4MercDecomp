/*
 * FUN_006660ed (extent 0x6660ed-0x6662d9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0077dff4;
extern float  g_0077dff8;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0055f510(void);
extern void __cdecl FUN_0055f5b0(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00640fa0(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_006660ed(void)
{
    __asm {
        nop    
        nop    
        nop    
        sub    esp, 0x38
        push    ebx
        push    esi
        mov    ebx, ecx
        push    edi
        lea    eax, [ebx + 0x14]
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x20]
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_611c
        fmul    dword ptr [g_0077dff8]
L_611c:
        fld    dword ptr [esp + 0x24]
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_6133
        fmul    dword ptr [g_0077dff4]
L_6133:
        mov    ecx, dword ptr [esp + 0x28]
        fxch    st(1)
        fstp    dword ptr [esp + 0x38]
        lea    edx, [ebx + 0x20]
        mov    dword ptr [esp + 0x40], ecx
        push    edx
        fstp    dword ptr [esp + 0x40]
        lea    ecx, [esp + 0x24]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x20]
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_6169
        fmul    dword ptr [g_0077dff8]
L_6169:
        fld    dword ptr [esp + 0x24]
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_6180
        fmul    dword ptr [g_0077dff4]
L_6180:
        mov    esi, dword ptr [ebx + 0x5c]
        fxch    st(1)
        mov    eax, dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x2c]
        mov    ecx, dword ptr [ebx + 0x34]
        and    esi, 0xff
        fstp    dword ptr [esp + 0x30]
        and    ecx, 0xffffff
        lea    edx, [esp + 0xc]
        mov    dword ptr [esp + 0x34], eax
        shl    esi, 0x18
        push    edx
        lea    eax, [esp + 0x1c]
        add    esi, ecx
        lea    edi, [ebx + 0x38]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], 0
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [edi]
        mov    dword ptr [esp + 0x10], eax
        je    L_61d8
        mov    ecx, dword ptr [esp + 0xc]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_6213
L_61d8:
        lea    edx, [esp + 0x14]
        push    edx
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x1c], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_6213:
        mov    ecx, dword ptr [ebx + 0x50]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0055f510
        push    1
        push    0
        push    esi
        lea    edx, [esp + 0x38]
        push    edx
        lea    eax, [esp + 0x48]
        push    eax
        lea    ecx, [esp + 0x28]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x2c], 0
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x38
        ret    
        mov    eax, dword ptr [esp + 0x10]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [esi + 0x34], eax
        xor    eax, eax
        cmp    ecx, eax
        jle    L_62a7
        fild    dword ptr [esp + 0x18]
        push    eax
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00707e70
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esi + 0x60]
        fld    dword ptr [esi + 0x50]
        fsub    dword ptr [esp + 8]
        fdiv    dword ptr [esp + 0x18]
        fstp    dword ptr [esi + 0x64]
        fld    dword ptr [esp + 0xc]
        fsub    dword ptr [esi + 0x14]
        fdiv    dword ptr [esp + 0x18]
        fstp    dword ptr [esi + 0x68]
        fld    dword ptr [esp + 0x10]
        fsub    dword ptr [esi + 0x18]
        fdiv    dword ptr [esp + 0x18]
        fstp    dword ptr [esi + 0x6c]
        pop    esi
        ret    0x14
L_62a7:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x14], ecx
        mov    ecx, dword ptr [esp + 8]
        push    eax
        mov    dword ptr [esi + 0x68], eax
        mov    dword ptr [esi + 0x6c], eax
        mov    dword ptr [esi + 0x60], eax
        mov    dword ptr [esi + 0x18], edx
        mov    dword ptr [esi + 0x1c], 0x3f666666
        mov    dword ptr [esi + 0x50], ecx
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x70]
        pop    esi
        ret    0x14
    }
}
