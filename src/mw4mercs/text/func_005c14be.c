/*
 * FUN_005c14be (extent 0x5c14be-0x5c1711) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f2460;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00547bc0(void);
extern void __cdecl FUN_005805a0(void);
extern void __cdecl FUN_005b8a00(void);
extern void __cdecl FUN_005cb250(void);
extern void __cdecl FUN_005cb2f0(void);
extern void __cdecl FUN_005cb320(void);
extern void __cdecl FUN_005cb3e0(void);
extern void __cdecl FUN_005cb400(void);
extern void __cdecl FUN_005cb6c0(void);
extern void __cdecl FUN_005cb940(void);
extern void __cdecl FUN_005cbc50(void);
extern void __cdecl FUN_005cde00(void);
extern void __cdecl FUN_0065e5f0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005c14be(void)
{
    __asm {
        nop    
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x787b84
        je    L_14d9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_14d9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x787b84
        je    L_14f9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_14f9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x787b84
        je    L_1519
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_1519:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        push    ecx
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        mov    dword ptr [esi], 0x787980
        call    FUN_006f4950
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x14]
        xor    eax, 0x85739531
        mov    cl, byte ptr [eax + 0x17fc]
        test    cl, cl
        je    L_155b
        call    FUN_0065e5f0
L_155b:
        call    FUN_006f49a0
        mov    edx, dword ptr [esi + 0x688]
        lea    ecx, [esi + 0x688]
        mov    dword ptr [esp + 8], edx
        call    FUN_005cb320
        mov    eax, dword ptr [esi + 0x648]
        lea    ecx, [esi + 0x648]
        mov    dword ptr [esp + 8], eax
        call    FUN_005cb2f0
        mov    edx, dword ptr [esi + 0x62c]
        mov    eax, 0x787b84
        lea    ecx, [esi + 0x62c]
        mov    dword ptr [esi + 0x644], eax
        mov    dword ptr [esi + 0x640], eax
        mov    eax, dword ptr [esi + 0x624]
        sub    edx, eax
        sar    edx, 2
        push    edx
        push    eax
        mov    dword ptr [esp + 0x10], eax
        call    FUN_005805a0
        mov    eax, dword ptr [esi + 0x604]
        mov    edx, dword ptr [esi + 0x60c]
        lea    ecx, [esi + 0x60c]
        sub    edx, eax
        sar    edx, 2
        push    edx
        push    eax
        call    FUN_00547bc0
        lea    edi, [esi + 0x600]
        mov    ecx, edi
        call    FUN_005cb940
        mov    eax, dword ptr [edi]
        push    1
        push    eax
        mov    ecx, edi
        call    FUN_005cb400
        lea    ecx, [esi + 0x5f4]
        call    FUN_005cbc50
        mov    eax, dword ptr [esi + 0x5e8]
        mov    edx, dword ptr [esi + 0x5f0]
        lea    ecx, [esi + 0x5f0]
        sub    edx, eax
        sar    edx, 4
        push    edx
        push    eax
        mov    dword ptr [esp + 0x10], eax
        call    FUN_005cb3e0
        mov    edi, dword ptr [esi + 0x5c4]
        mov    edx, dword ptr [esi + 0x5cc]
        lea    ecx, [esi + 0x5cc]
        sub    edx, edi
        mov    eax, 0x2aaaaaab
        imul    edx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        push    edx
        push    edi
        mov    dword ptr [esp + 0x10], edi
        call    FUN_005b8a00
        mov    edx, dword ptr [esi + 0x5a4]
        lea    ecx, [esi + 0x5a4]
        mov    dword ptr [esp + 8], edx
        call    FUN_005cb250
        lea    ecx, [esi + 0x59c]
        call    FUN_005cb6c0
        lea    ecx, [esi + 0x598]
        call    FUN_005cb6c0
        mov    eax, dword ptr [esi + 0x4e0]
        mov    ecx, eax
        and    ecx, 1
        cmp    cl, 1
        mov    dword ptr [esi + 0x508], 0x787b98
        jne    L_16c4
        mov    edx, eax
        and    edx, 2
        cmp    dl, 2
        jne    L_16b0
        and    eax, 0xfffffffc
        mov    dword ptr [esi + 0x4e0], eax
        je    L_16c4
        mov    edx, dword ptr [eax]
        push    3
        jmp    L_16bf
L_16b0:
        and    eax, 0xfffffffc
        mov    dword ptr [esi + 0x4e0], eax
        je    L_16c4
        mov    edx, dword ptr [eax]
        push    1
L_16bf:
        mov    ecx, eax
        call    dword ptr [edx + 0xc]
L_16c4:
        mov    ecx, esi
        mov    dword ptr [esi + 0x4e0], 0
        call    FUN_005cde00
        pop    edi
        pop    esi
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x787b98
        je    L_16f9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_16f9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
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
        ret    
    }
}
