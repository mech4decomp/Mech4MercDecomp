/*
 * FUN_00682537 (extent 0x682537-0x682769) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0077d094;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f1f84;
extern int    g_007f25c0;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_005c1bc0(void);
extern void __cdecl FUN_005c6000(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_005c9850(void);
extern void __cdecl FUN_005c98a0(void);

__declspec(naked) void FUN_00682537(void)
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
        push    esi
        mov    esi, dword ptr [ecx + 4]
        fld    dword ptr [esi + 0x530]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_259c
        push    0
        call    FUN_00707e70
        fld    dword ptr [esi + 0x530]
        fadd    dword ptr [g_0077d094]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        je    L_259c
        push    0
        call    FUN_00707e70
        fld    dword ptr [esp + 8]
        fadd    dword ptr [esi + 0x530]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_2596
        mov    eax, 1
        pop    esi
        ret    4
L_2596:
        xor    eax, eax
        pop    esi
        ret    4
L_259c:
        xor    al, al
        pop    esi
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 4]
        add    eax, 0x534
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f25c0]
        push    esi
        mov    esi, dword ptr [ecx + 4]
        push    edi
        mov    edi, dword ptr [esi + 0x170]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_2628
        test    edi, edi
        je    L_2628
        mov    eax, dword ptr [g_007f25c0]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        mov    ecx, dword ptr [g_007f1f84]
        neg    al
        push    ecx
        sbb    eax, eax
        and    eax, edi
        mov    ecx, dword ptr [eax + 4]
        call    FUN_00415230
        cmp    al, 1
        jne    L_2628
        mov    eax, dword ptr [g_007f25c0]
        mov    esi, edi
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        neg    al
        sbb    eax, eax
        and    eax, esi
        mov    ecx, eax
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0xac]
L_2628:
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 4]
        jmp    FUN_005c9850
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 4]
        jmp    FUN_005c98a0
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        push    edx
        call    FUN_005c6000
        ret    8
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
        push    edi
        mov    edi, dword ptr [ecx + 4]
        push    0
        call    FUN_00707e70
        fsub    dword ptr [esp + 0xc]
        fld    dword ptr [edi + 0x1d8]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_270c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        je    L_270c
        mov    ecx, dword ptr [edi + 0x1d4]
        cmp    ecx, -1
        je    L_270c
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        test    eax, eax
        je    L_270c
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_270c
        mov    esi, dword ptr [edi + 0x170]
        cmp    eax, esi
        je    L_270c
        test    esi, esi
        je    L_2705
        mov    edx, dword ptr [eax]
        push    ebx
        mov    ecx, eax
        call    dword ptr [edx + 0x60]
        mov    ebx, eax
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x60]
        cmp    ebx, eax
        pop    ebx
        jne    L_2705
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0xc8]
        cmp    al, 1
        je    L_270c
L_2705:
        pop    edi
        mov    al, 1
        pop    esi
        ret    4
L_270c:
        pop    edi
        xor    al, al
        pop    esi
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
        nop    
        nop    
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        mov    eax, dword ptr [esi + 4]
        fld    dword ptr [eax + 0x524]
        pop    esi
        fadd    dword ptr [esp + 4]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_2746
        mov    al, 1
        ret    4
L_2746:
        xor    al, al
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        call    dword ptr [eax + 0xe8]
        test    al, al
        je    L_2767
        mov    ecx, dword ptr [esi + 4]
        call    FUN_005c1bc0
L_2767:
        pop    esi
        ret    
    }
}
