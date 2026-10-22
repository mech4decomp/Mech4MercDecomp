/*
 * FUN_004dc463 (extent 0x4dc463-0x4dc781) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern void __cdecl FUN_004cee20(void);
extern void __cdecl FUN_00503000(void);
extern void __cdecl FUN_005033f0(void);
extern void __cdecl FUN_00503530(void);
extern void __cdecl FUN_00503670(void);
extern void __cdecl FUN_005037a0(void);
extern void __cdecl FUN_005039e0(void);
extern void __cdecl FUN_00503af0(void);
extern void __cdecl FUN_00503ec0(void);
extern void __cdecl FUN_00504110(void);
extern void __cdecl FUN_005042b0(void);
extern void __cdecl FUN_005044c0(void);
extern void __cdecl FUN_005046a0(void);
extern void __cdecl FUN_00504960(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004dc463(void)
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
        nop    
        nop    
        nop    
        nop    
        push    0x7735d0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_c482
        int 3    
L_c482:
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ecx + 0x18]
        call    FUN_004cee20
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
        nop    
        test    ecx, ecx
        je    L_c4ba
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_c4ba:
        ret    4
        nop    
        nop    
        nop    
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
        nop    
        nop    
        nop    
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
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [g_0076b2ac]
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        mov    esi, dword ptr [ebp]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    0x7736f4
        push    edi
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_c528
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x21e
        call    dword ptr [eax + 0x24]
        push    ebp
        call    FUN_00504960
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
L_c528:
        push    0x7736e4
        push    edi
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_c55b
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x21b
        call    dword ptr [edx + 0x24]
        push    ebp
        call    FUN_005046a0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
L_c55b:
        push    0x7736d4
        push    edi
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_c58e
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x220
        call    dword ptr [edx + 0x24]
        push    ebp
        call    FUN_005044c0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
L_c58e:
        push    0x7736c4
        push    edi
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_c5c1
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x21d
        call    dword ptr [edx + 0x24]
        push    ebp
        call    FUN_005042b0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
L_c5c1:
        push    0x7736ac
        push    edi
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_c5f4
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x21f
        call    dword ptr [edx + 0x24]
        push    ebp
        call    FUN_00504110
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
L_c5f4:
        push    0x77369c
        push    edi
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_c62c
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], 0x221
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    ebp
        call    FUN_00503ec0
        add    esp, 8
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
L_c62c:
        push    0x77368c
        push    edi
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_c664
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], 0x224
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    ebp
        call    FUN_00503af0
        add    esp, 8
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
L_c664:
        push    0x773674
        push    edi
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_c69c
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], 0x225
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    ebp
        call    FUN_005039e0
        add    esp, 8
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
L_c69c:
        push    0x773660
        push    edi
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_c6cf
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x226
        call    dword ptr [edx + 0x24]
        push    ebp
        call    FUN_005037a0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
L_c6cf:
        push    0x773650
        push    edi
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_c707
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], 0x21c
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    ebp
        call    FUN_00503670
        add    esp, 8
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
L_c707:
        push    0x773640
        push    edi
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_c73a
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x227
        call    dword ptr [edx + 0x24]
        push    ebp
        call    FUN_00503530
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
L_c73a:
        push    0x773630
        push    edi
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_c76d
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x21a
        call    dword ptr [edx + 0x24]
        push    ebp
        call    FUN_005033f0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
L_c76d:
        mov    ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    ebp
        push    edi
        call    FUN_00503000
        add    esp, 0xc
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
    }
}
