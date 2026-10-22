/*
 * FUN_00494d78 (extent 0x494d78-0x494fda) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_00770160;
extern float  g_00770164;
extern float  g_00770168;
extern float  g_0077016c;
extern float  g_007b220c;
extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00494c30(void);
extern void __cdecl FUN_004abcc0(void);
extern void __cdecl FUN_004ad160(void);
extern void __cdecl FUN_004aed40(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_00494d78(void)
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
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x2b4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4db9
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_00494c30
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_4db9:
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1c
        push    ebx
        mov    ebx, dword ptr [ebp + 8]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x268]
        mov    eax, 0x100
        cmp    ecx, eax
        push    edi
        jle    L_4e11
        test    bl, bl
        je    L_4fcf
        mov    dword ptr [esi + 0x268], eax
        mov    eax, dword ptr [esi + 4]
        push    eax
        push    0x7b2984
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_4e11
        int 3    
L_4e11:
        lea    ecx, [ebp - 0x18]
        push    ecx
        lea    edx, [ebp - 0x14]
        lea    edi, [esi + 0x274]
        push    edx
        mov    ecx, edi
        call    FUN_004ad160
        fld    dword ptr [g_007b220c]
        fmul    dword ptr [g_0077016c]
        fcomp    dword ptr [ebp - 0x14]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4e83
        test    bl, bl
        je    L_4fcf
        fld    dword ptr [g_007b220c]
        lea    ecx, [edi + 4]
        fmul    dword ptr [g_00770168]
        fsqrt    
        fstp    dword ptr [ebp - 0x1c]
        mov    ebx, dword ptr [ebp - 0x1c]
        push    ebx
        call    FUN_004aed40
        push    ebx
        lea    ecx, [edi + 0x10]
        call    FUN_004aed40
        mov    eax, dword ptr [esi + 4]
        push    eax
        push    0x7b29d0
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_4e80
        int 3    
L_4e80:
        mov    ebx, dword ptr [ebp + 8]
L_4e83:
        lea    ecx, [ebp - 8]
        push    ecx
        lea    edx, [ebp - 4]
        push    edx
        lea    ecx, [esi + 0x2ac]
        call    FUN_004ad160
        fld    dword ptr [ebp - 4]
        fcomp    dword ptr [g_0076c5b0]
        mov    eax, dword ptr [ebp - 4]
        mov    dword ptr [ebp + 8], eax
        fnstsw  ax
        test    ah, 0x41
        jne    L_4eb3
        mov    dword ptr [ebp + 8], 0
L_4eb3:
        mov    ecx, dword ptr [ebp - 8]
        lea    edx, [ebp - 0xc]
        push    edx
        lea    eax, [ebp - 0x10]
        mov    dword ptr [ebp - 0x1c], ecx
        push    eax
        lea    ecx, [esi + 0x29c]
        call    FUN_004ad160
        fld    dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x1c]
        mov    edi, 0x3f800000
        fcomp    dword ptr [g_00770164]
        fnstsw  ax
        test    ah, 0x41
        je    L_4ef7
        fld    dword ptr [ebp - 0x10]
        fadd    dword ptr [ebp + 8]
        fcomp    dword ptr [g_00770160]
        fnstsw  ax
        test    ah, 1
        je    L_4f25
L_4ef7:
        test    bl, bl
        je    L_4fcf
        mov    dword ptr [esi + 0x2a0], 0
        mov    dword ptr [esi + 0x2b0], edi
        mov    ecx, dword ptr [esi + 4]
        push    ecx
        push    0x7b2a10
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_4f25
        int 3    
L_4f25:
        lea    edx, [ebp - 8]
        push    edx
        lea    eax, [ebp - 4]
        push    eax
        lea    ecx, [esi + 0x2a4]
        call    FUN_004ad160
        fld    dword ptr [ebp - 4]
        fcomp    dword ptr [g_0076c5b0]
        mov    ecx, dword ptr [ebp - 4]
        mov    dword ptr [ebp + 8], ecx
        fnstsw  ax
        test    ah, 0x41
        jne    L_4f55
        mov    dword ptr [ebp + 8], 0
L_4f55:
        mov    edx, dword ptr [ebp - 8]
        lea    eax, [ebp - 0xc]
        push    eax
        lea    ecx, [ebp - 0x10]
        push    ecx
        lea    ecx, [esi + 0x294]
        mov    dword ptr [ebp - 0x1c], edx
        call    FUN_004ad160
        fld    dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x1c]
        fcomp    dword ptr [g_00770164]
        fnstsw  ax
        test    ah, 0x41
        je    L_4f94
        fld    dword ptr [ebp - 0x10]
        fadd    dword ptr [ebp + 8]
        fcomp    dword ptr [g_00770160]
        fnstsw  ax
        test    ah, 1
        je    L_4fbe
L_4f94:
        test    bl, bl
        je    L_4fcf
        mov    dword ptr [esi + 0x298], 0
        mov    dword ptr [esi + 0x2a8], edi
        mov    edx, dword ptr [esi + 4]
        push    edx
        push    0x7b2a5c
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_4fbe
        int 3    
L_4fbe:
        push    ebx
        mov    ecx, esi
        call    FUN_004abcc0
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_4fcf:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
