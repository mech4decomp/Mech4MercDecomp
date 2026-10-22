/*
 * FUN_004a41ff (extent 0x4a41ff-0x4a446f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_007b220c;
extern int    g_007da884;
extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_00492560(void);
extern void __cdecl FUN_004a4130(void);
extern void __cdecl FUN_004a99c0(void);
extern void __cdecl FUN_004a9b40(void);
extern void __cdecl FUN_004ac970(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a41ff(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0xb0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4239
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004a4130
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_4239:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
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
        sub    esp, 0x1c
        mov    eax, dword ptr [esp + 0x24]
        push    ebx
        mov    ebx, dword ptr [esp + 0x24]
        push    esi
        push    edi
        push    eax
        mov    edi, ecx
        push    ebx
        call    FUN_004a99c0
        mov    eax, dword ptr [edi + 0x10]
        mov    esi, dword ptr [eax + 0x270]
        mov    ecx, dword ptr [eax + 0x2b4]
        imul    esi, ebx
        mov    edx, dword ptr [edi + 0xa8]
        push    5
        push    ecx
        mov    ecx, dword ptr [g_007da884]
        add    esi, edx
        call    FUN_00492560
        mov    edx, dword ptr [esi + 0x30]
        mov    ebx, eax
        mov    eax, dword ptr [esi + 0x34]
        lea    ecx, [ebx + 0x58]
        mov    dword ptr [ecx + 0xc], edx
        mov    edx, dword ptr [esi + 0x38]
        mov    dword ptr [ecx + 0x1c], eax
        lea    eax, [esi + 0x48]
        push    eax
        mov    dword ptr [esi + 0x70], ebx
        mov    dword ptr [esi + 0x68], 0
        mov    dword ptr [ecx + 0x2c], edx
        call    FUN_0041a160
        fld    dword ptr [esi + 0x18]
        mov    dword ptr [esp + 0x18], 0
        fld    qword ptr [edi + 0x88]
        mov    dword ptr [esp + 0x1c], 0xbf800000
        fstp    qword ptr [esp + 0xc]
        add    edi, 0x28
        fstp    dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x20], edi
        mov    dword ptr [esp + 0x24], 0
        mov    ecx, dword ptr [esi + 0x1c]
        mov    dword ptr [esp + 0x18], ecx
        mov    edx, dword ptr [esi + 0x20]
        lea    ecx, [esp + 0xc]
        mov    dword ptr [esp + 0x1c], edx
        mov    eax, dword ptr [ebx]
        push    ecx
        mov    ecx, ebx
        call    dword ptr [eax + 4]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x1c
        ret    8
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x5c
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x10]
        mov    ecx, dword ptr [esp + 0x64]
        push    esi
        mov    esi, dword ptr [eax + 0x270]
        mov    eax, dword ptr [ebx + 0xa8]
        imul    esi, ecx
        fld    dword ptr [esi + eax + 0x1c]
        fcomp    dword ptr [g_0076d064]
        add    esi, eax
        push    edi
        fnstsw  ax
        test    ah, 1
        jne    L_4350
        fld    dword ptr [g_0076d064]
        fsub    dword ptr [g_007b220c]
        fstp    dword ptr [esi + 0x1c]
L_4350:
        mov    edx, dword ptr [esp + 0x78]
        mov    eax, dword ptr [esp + 0x74]
        push    edx
        mov    edx, dword ptr [esp + 0x74]
        push    eax
        push    edx
        push    ecx
        mov    ecx, ebx
        call    FUN_004a9b40
        mov    edi, dword ptr [esi + 0x70]
        mov    eax, dword ptr [esi + 0x30]
        mov    edx, dword ptr [esi + 0x34]
        lea    ecx, [edi + 0x58]
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, dword ptr [esi + 0x38]
        mov    dword ptr [ecx + 0x1c], edx
        lea    edx, [esi + 0x48]
        push    edx
        mov    dword ptr [ecx + 0x2c], eax
        call    FUN_0041a160
        mov    ecx, dword ptr [esp + 0x78]
        mov    eax, dword ptr [esp + 0x74]
        mov    dword ptr [esp + 0x10], ecx
        lea    edx, [esp + 0x28]
        lea    ecx, [esp + 0xc]
        add    ebx, 0x28
        mov    dword ptr [esp + 0xc], eax
        mov    dword ptr [esp + 0x14], 0xbf800000
        mov    dword ptr [esp + 0x20], ebx
        mov    dword ptr [esp + 0x24], edx
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x1c], 0xbf800000
        mov    eax, dword ptr [edi]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0xc]
        test    al, al
        je    L_4405
        fld    dword ptr [esp + 0x54]
        pop    edi
        fmul    dword ptr [esp + 0x50]
        mov    al, 1
        fld    dword ptr [esp + 0x40]
        fmul    dword ptr [esp + 0x40]
        faddp st(1), st(0)
        fld    dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x30]
        faddp st(1), st(0)
        fsqrt    
        fadd    dword ptr [g_007b220c]
        fadd    dword ptr [esp + 0x60]
        fstp    dword ptr [esi + 0x68]
        pop    esi
        pop    ebx
        add    esp, 0x5c
        ret    0x10
L_4405:
        mov    ecx, dword ptr [esi + 0x70]
        xor    edi, edi
        cmp    ecx, edi
        mov    dword ptr [esi + 0x68], edi
        je    L_4417
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_4417:
        mov    dword ptr [esi + 0x70], edi
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0x5c
        ret    0x10
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
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x10]
        mov    esi, dword ptr [eax + 0x270]
        mov    ecx, dword ptr [edi + 0xa8]
        imul    esi, ebx
        add    esi, ecx
        mov    ecx, dword ptr [esi + 0x70]
        test    ecx, ecx
        je    L_4461
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov    dword ptr [esi + 0x70], 0
L_4461:
        push    ebx
        mov    ecx, edi
        call    FUN_004ac970
        pop    edi
        pop    esi
        pop    ebx
        ret    4
    }
}
