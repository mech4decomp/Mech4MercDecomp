/*
 * FUN_006d30b0 (extent 0x6d30b0-0x6d3684) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004171b0(void);
extern void __cdecl FUN_004db540(void);
extern void __cdecl FUN_004db550(void);
extern void __cdecl FUN_006d2c60(void);
extern void __cdecl FUN_006d2df0(void);
extern void __cdecl FUN_006fb800(void);
extern void __cdecl FUN_006fb880(void);
extern void __cdecl FUN_006fc4d0(void);

__declspec(naked) void FUN_006d30b0(void)
{
    __asm {
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_30c3
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_30c3:
        mov    edx, dword ptr [ebp]
        mov    eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_30fa
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_30fa
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_30fa:
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    esi
        call    FUN_004db550
        mov    eax, dword ptr [esp + 0x24]
        add    esp, 0xc
        test    eax, eax
        je    L_3139
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3139
        push    eax
        call    FUN_004084e0
        add    esp, 4
        jmp    L_3139
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        push    ebx
        push    esi
        call    FUN_004db540
        add    esp, 0xc
L_3139:
        mov    eax, dword ptr [esi + 0x30]
        test    eax, eax
        pop    ebp
        je    L_3153
        mov    eax, dword ptr [esi + 0x24]
        or    eax, 8
        pop    edi
        mov    dword ptr [esi + 0x24], eax
        pop    esi
        mov    al, 1
        pop    ebx
        pop    ecx
        ret    8
L_3153:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        pop    ecx
        ret    8
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        test    esi, esi
        mov    ebx, ecx
        je    L_3250
        mov    eax, dword ptr [esi + 0x24]
        shr    eax, 3
        test    al, 1
        je    L_3183
        pop    esi
        mov    al, 1
        pop    ebx
        pop    ecx
        ret    4
L_3183:
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    edi, eax
        test    edi, edi
        je    L_323c
        mov    eax, dword ptr [ebx]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412570
        mov    ecx, dword ptr [esp + 0x14]
        push    0x76c5a8
        push    ecx
        lea    ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_31d9
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_31d9
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_31d9:
        mov    edx, dword ptr [edi]
        mov    eax, dword ptr [esp + 0x14]
        push    edx
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_320f
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_320f
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_320f:
        mov    ecx, dword ptr [esi + 0x24]
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    esi
        call    FUN_004db550
        mov    eax, dword ptr [esp + 0x20]
        add    esp, 0xc
        test    eax, eax
        je    L_323c
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_323c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_323c:
        mov    eax, dword ptr [esi + 0x30]
        test    eax, eax
        pop    edi
        je    L_3250
        or    dword ptr [esi + 0x24], 8
        pop    esi
        mov    al, 1
        pop    ebx
        pop    ecx
        ret    4
L_3250:
        pop    esi
        xor    al, al
        pop    ebx
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x88
        push    ebx
        push    esi
        mov    ebx, ecx
        push    edi
        lea    eax, [ebx + 4]
        push    eax
        lea    ecx, [esp + 0x34]
        call    FUN_00417170
        mov    ecx, dword ptr [esp + 0x34]
        mov    dword ptr [esp + 0x30], 0x79e9d8
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 8]
        mov    eax, dword ptr [ebx]
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412570
        mov    ecx, dword ptr [esp + 0x10]
        push    0x79ea30
        push    ecx
        lea    ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412740
        lea    ecx, [esp + 0x14]
        call    FUN_0040d9b0
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_006fb800
        mov    esi, eax
        test    esi, esi
        je    L_34a1
L_32cf:
        mov    eax, dword ptr [ebx]
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        mov    ecx, dword ptr [esp + 0xc]
        push    0x76c5a8
        push    ecx
        lea    ecx, [esp + 0x28]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412740
        lea    ecx, [esp + 0x20]
        call    FUN_0040d9b0
        mov    edx, dword ptr [esp + 0xc]
        push    esi
        push    edx
        lea    ecx, [esp + 0x30]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412740
        lea    ecx, [esp + 0x28]
        call    FUN_0040d9b0
        mov    eax, dword ptr [esp + 0xc]
        push    eax
        call    FUN_006fc4d0
        test    al, al
        je    L_34cf
        mov    ecx, dword ptr [esp + 0xc]
        push    0
        push    0
        push    ecx
        lea    ecx, [esp + 0x50]
        call    FUN_0040dca0
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0xc
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_337a
        lea    ecx, [esp + 0x88]
        mov    dword ptr [eax + 4], ecx
        mov    edx, dword ptr [esp + 0x88]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x76cd64
        mov    edi, eax
        jmp    L_337c
L_337a:
        xor    edi, edi
L_337c:
        mov    eax, dword ptr [edi + 8]
        test    eax, eax
        je    L_3465
        mov    esi, dword ptr [eax]
        test    esi, esi
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [edi + 8], eax
        je    L_3465
        push    0
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    0x773784
        mov    ecx, esi
        call    FUN_00411cb0
        test    al, al
        je    L_337c
        push    0
        lea    edx, [esp + 0x18]
        push    edx
        push    0x774b3c
        mov    ecx, esi
        call    FUN_00411cb0
        test    al, al
        je    L_337c
        push    0
        lea    eax, [esp + 0x20]
        push    eax
        push    0x774af4
        mov    ecx, esi
        call    FUN_00411cb0
        test    al, al
        je    L_337c
        push    0
        lea    ecx, [esp + 0x28]
        push    ecx
        push    0x788754
        mov    ecx, esi
        call    FUN_00411bf0
        test    al, al
        jne    L_3432
        push    1
        lea    edx, [esp + 0x30]
        push    edx
        push    0x79ea28
        mov    ecx, esi
        call    FUN_00411cb0
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        mov    eax, dword ptr [esp + 0x30]
        and    ecx, 0xffff
        push    ecx
        and    edx, 0xffff
        push    edx
        push    eax
        mov    ecx, ebx
        call    FUN_006d2df0
        jmp    L_337c
L_3432:
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x14]
        push    ecx
        and    edx, 0xffff
        push    edx
        mov    edx, dword ptr [esp + 0x2c]
        and    eax, 0xffff
        push    eax
        push    ecx
        mov    ecx, esp
        push    edx
        call    FUN_00412570
        mov    ecx, ebx
        call    FUN_006d2c60
        jmp    L_337c
L_3465:
        push    edi
        call    FUN_004084e0
        add    esp, 4
        call    FUN_006fb880
        lea    ecx, [esp + 0x44]
        mov    esi, eax
        call    FUN_0040de20
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_3499
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3499
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3499:
        test    esi, esi
        jne    L_32cf
L_34a1:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_34bc
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_34bc
L_34b3:
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_34bc:
        lea    ecx, [esp + 0x30]
        call    FUN_004171b0
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x88
        ret    
L_34cf:
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_34ea
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_34ea
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_34ea:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_34bc
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_34bc
        jmp    L_34b3
        nop    
        nop    
        sub    esp, 0x78
        push    ebx
        push    esi
        mov    ebx, ecx
        push    edi
        lea    eax, [ebx + 4]
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_00417170
        mov    ecx, dword ptr [esp + 0x24]
        mov    dword ptr [esp + 0x20], 0x79e9d8
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 8]
        mov    esi, dword ptr [esp + 0x88]
        push    esi
        call    FUN_006fc4d0
        test    al, al
        je    L_3672
        push    0
        push    0
        push    esi
        lea    ecx, [esp + 0x40]
        call    FUN_0040dca0
        mov    eax, dword ptr [g_007b8810]
        push    eax
        push    0xc
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_3575
        lea    ecx, [esp + 0x78]
        mov    dword ptr [eax + 4], ecx
        mov    edx, dword ptr [esp + 0x78]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x76cd64
        mov    edi, eax
        jmp    L_3577
L_3575:
        xor    edi, edi
L_3577:
        mov    eax, dword ptr [edi + 8]
        test    eax, eax
        je    L_3660
        mov    esi, dword ptr [eax]
        test    esi, esi
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [edi + 8], eax
        je    L_3660
        push    0
        lea    ecx, [esp + 0x10]
        push    ecx
        push    0x773784
        mov    ecx, esi
        call    FUN_00411cb0
        test    al, al
        je    L_3577
        push    0
        lea    edx, [esp + 0x18]
        push    edx
        push    0x774b3c
        mov    ecx, esi
        call    FUN_00411cb0
        test    al, al
        je    L_3577
        push    0
        lea    eax, [esp + 0x14]
        push    eax
        push    0x774af4
        mov    ecx, esi
        call    FUN_00411cb0
        test    al, al
        je    L_3577
        push    0
        lea    ecx, [esp + 0x20]
        push    ecx
        push    0x788754
        mov    ecx, esi
        call    FUN_00411bf0
        test    al, al
        jne    L_362d
        push    1
        lea    edx, [esp + 0x1c]
        push    edx
        push    0x79ea28
        mov    ecx, esi
        call    FUN_00411cb0
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        mov    eax, dword ptr [esp + 0x1c]
        and    ecx, 0xffff
        push    ecx
        and    edx, 0xffff
        push    edx
        push    eax
        mov    ecx, ebx
        call    FUN_006d2df0
        jmp    L_3577
L_362d:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
        push    ecx
        and    edx, 0xffff
        push    edx
        mov    edx, dword ptr [esp + 0x24]
        and    eax, 0xffff
        push    eax
        push    ecx
        mov    ecx, esp
        push    edx
        call    FUN_00412570
        mov    ecx, ebx
        call    FUN_006d2c60
        jmp    L_3577
L_3660:
        push    edi
        call    FUN_004084e0
        add    esp, 4
        lea    ecx, [esp + 0x34]
        call    FUN_0040de20
L_3672:
        lea    ecx, [esp + 0x20]
        call    FUN_004171b0
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x78
        ret    4
    }
}
