/*
 * FUN_005a8657 (extent 0x5a8657-0x5a887c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d588;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f2090;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d67d0(void);
extern void __cdecl FUN_004dd1c0(void);
extern void __cdecl FUN_004dd220(void);
extern void __cdecl FUN_005bf940(void);
extern void __cdecl FUN_005ef7a0(void);
extern void __cdecl FUN_005f0430(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005a8657(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_86a5
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [g_007f2090]
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_004dd220
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi], 0x784fdc
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_86a5:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        push    esi
        mov    esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 8], 1
        je    L_86c8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_86c8:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        push    ebx
        push    esi
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x14]
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        cmp    edi, eax
        je    L_8873
        cmp    edi, 6
        mov    esi, dword ptr [ebx + 0x18]
        jne    L_872d
        dec    eax
        je    L_8726
        sub    eax, edi
        je    L_871b
        dec    eax
        jne    L_873b
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x23c]
        fcomp    qword ptr [g_0076d588]
        fnstsw  ax
        test    ah, 0x41
        je    L_873b
        pop    edi
        pop    esi
        mov    eax, 8
        pop    ebx
        ret    8
L_871b:
        pop    edi
        pop    esi
        mov    eax, 7
        pop    ebx
        ret    8
L_8726:
        mov    edi, 8
        jmp    L_873b
L_872d:
        cmp    edi, 8
        jne    L_873b
        cmp    eax, 1
        jne    L_8873
L_873b:
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        push    edi
        mov    ecx, ebx
        call    FUN_005f0430
        dec    eax
        cmp    eax, 7
        ja    L_8869
        jmp    dword ptr [eax*4 + 0x5a887c]
        mov    edx, dword ptr [esi + 0x10]
        or    edx, 0x40
        push    0
        mov    dword ptr [esi + 0x10], edx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x23c]
        mov    eax, dword ptr [ebx + 0x14]
        pop    edi
        mov    dword ptr [esi + 0x244], 0x3e800000
        mov    dword ptr [esi + 0x1d0], 0
        pop    esi
        pop    ebx
        ret    8
        mov    edx, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [g_007dab40]
        or    edx, 0x40
        mov    dword ptr [esi + 0x10], edx
        mov    edx, dword ptr [ecx]
        xor    edx, eax
        mov    ecx, dword ptr [edx]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004d67d0
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        mov    dword ptr [esi + 0x1c8], 1
        call    dword ptr [eax + 0x70]
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        lea    edi, [esi + 0x1a4]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_87fc
        mov    ecx, edi
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_005bf940
L_87fc:
        mov    ecx, esi
        call    FUN_005ef7a0
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x23c]
        mov    edx, dword ptr [esi + 0x78]
        fstp    dword ptr [esi + 0x1d0]
        lea    ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        fld    dword ptr [esi + 0x1d0]
        fcomp    dword ptr [g_0076c5b0]
        mov    ecx, eax
        fnstsw  ax
        test    ah, 1
        je    L_8847
        mov    eax, dword ptr [ebx + 0x14]
        pop    edi
        mov    dword ptr [esi + 0x1d0], 0
        pop    esi
        pop    ebx
        ret    8
L_8847:
        fld    dword ptr [esi + 0x1d0]
        fcomp    dword ptr [ecx + 0x6c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8870
        mov    eax, dword ptr [ecx + 0x6c]
        pop    edi
        mov    dword ptr [esi + 0x1d0], eax
        mov    eax, dword ptr [ebx + 0x14]
        pop    esi
        pop    ebx
        ret    8
L_8869:
        mov    eax, dword ptr [ebx + 0x18]
        and    dword ptr [eax + 0x10], 0xffffffbf
L_8870:
        mov    eax, dword ptr [ebx + 0x14]
L_8873:
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x005A887C (0 relocated pointers)
    }
}
