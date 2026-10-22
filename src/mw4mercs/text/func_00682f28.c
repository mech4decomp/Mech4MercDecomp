/*
 * FUN_00682f28 (extent 0x682f28-0x68304b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0077431c;
extern int    g_007f2094;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005ef700(void);
extern void __cdecl FUN_005ef710(void);
extern void __cdecl FUN_00682d20(void);
extern void __cdecl FUN_00682e30(void);
extern void __cdecl FUN_00682ea0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00682f28(void)
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
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        push    eax
        mov    eax, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        push    esi
        call    FUN_00682e30
        push    esi
        mov    edi, eax
        call    FUN_00682ea0
        add    esp, 0x18
        cmp    edi, eax
        sbb    eax, eax
        pop    edi
        neg    eax
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi + 0xe0]
        test    eax, eax
        je    L_3047
        cmp    dword ptr [eax + 0x14], 5
        je    L_3047
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 0xb8]
        test    al, al
        je    L_3047
        mov    ecx, esi
        call    FUN_005ef700
        fld    qword ptr [esp + 0x18]
        fsub    qword ptr [esp + 0x10]
        push    0
        fmulp st(1), st(0)
        fadd    qword ptr [esp + 0x14]
        fstp    qword ptr [esp + 0x14]
        call    FUN_00707e70
        mov    ecx, esi
        fstp    qword ptr [esp + 0x18]
        call    FUN_005ef710
        fadd    qword ptr [esp + 0x10]
        fcomp    qword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        je    L_3047
        fld    dword ptr [esp + 0xc]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_3000
        push    esi
        call    FUN_00682d20
        fcomp    dword ptr [esp + 0x10]
        add    esp, 4
        fnstsw  ax
        test    ah, 1
        jne    L_3047
L_3000:
        mov    eax, dword ptr [g_007f2094]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_3043
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 0xb8]
        cmp    al, 1
        jne    L_3024
        pop    esi
        ret    
L_3024:
        mov    eax, dword ptr [esi + 0xe0]
        cmp    dword ptr [eax + 0x14], 8
        jne    L_3047
        fld    dword ptr [esi + 0x244]
        fcomp    dword ptr [g_0077431c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_3047
L_3043:
        mov    al, 1
        pop    esi
        ret    
L_3047:
        xor    al, al
        pop    esi
        ret    
    }
}
