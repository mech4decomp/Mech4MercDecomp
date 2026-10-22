/*
 * FUN_005ebe0e (extent 0x5ebe0e-0x5ec08e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f2598;
extern int    g_007f259c;
extern int    g_007f25a8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d67d0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_00501500(void);
extern void __cdecl FUN_005016b0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005bf940(void);
extern void __cdecl FUN_005ef7a0(void);
extern void __cdecl FUN_005f0430(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005ebe0e(void)
{
    __asm {
        nop    
        nop    
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x14]
        mov    ecx, dword ptr [esp + 8]
        cmp    ecx, eax
        je    L_bec4
        cmp    ecx, 6
        jne    L_be30
        cmp    eax, 7
        jne    L_be30
        pop    edi
        ret    8
L_be30:
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [edi + 0x18]
        push    eax
        push    ecx
        mov    ecx, edi
        call    FUN_005f0430
        dec    eax
        je    L_bec0
        sub    eax, 4
        je    L_bec0
        dec    eax
        je    L_be5b
        mov    eax, dword ptr [edi + 0x18]
        and    dword ptr [eax + 0x10], 0xffffffbf
        mov    eax, dword ptr [edi + 0x14]
        pop    esi
        pop    edi
        ret    8
L_be5b:
        mov    edx, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [g_007dab40]
        or    edx, 0x40
        mov    dword ptr [esi + 0x10], edx
        mov    edx, dword ptr [ecx]
        xor    edx, eax
        mov    ecx, dword ptr [edx]
        push    ebx
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004d67d0
        push    0
        mov    dword ptr [esi + 0x1c8], 1
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        lea    ebx, [esi + 0x1a4]
        mov    ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        je    L_beb8
        mov    ecx, ebx
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_005bf940
L_beb8:
        mov    ecx, esi
        call    FUN_005ef7a0
        pop    ebx
L_bec0:
        mov    eax, dword ptr [edi + 0x14]
        pop    esi
L_bec4:
        pop    edi
        ret    8
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
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_bf48
        mov    eax, dword ptr [g_007f2598]
        mov    ecx, dword ptr [g_007f25a8]
        push    0x502c60
        push    0x5028b0
        push    0x692c80
        push    0
        push    0x692c60
        push    eax
        push    0x674b00
        push    0x5ec0c0
        push    0
        push    0
        push    ecx
        push    0x789b90
        push    0x452
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x5ef970
        mov    dword ptr [g_007f259c], esi
        jmp    L_bf52
L_bf48:
        mov    dword ptr [g_007f259c], 0
L_bf52:
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_bf7a
        push    0xe0
        push    0x453
        push    0x773250
        push    1
        mov    ecx, eax
        call    FUN_00501500
        jmp    L_bf7c
L_bf7a:
        xor    eax, eax
L_bf7c:
        mov    edx, dword ptr [g_007f259c]
        push    eax
        lea    ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_bfb8
        push    0x1d4
        push    2
        push    0x78977c
        push    6
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_bfba
L_bfb8:
        xor    esi, esi
L_bfba:
        mov    eax, dword ptr [g_007f259c]
        push    esi
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_bff5
        push    0x1c8
        push    1
        push    0x789b80
        push    7
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x773234
        jmp    L_bff7
L_bff5:
        xor    esi, esi
L_bff7:
        mov    ecx, dword ptr [g_007f259c]
        push    esi
        add    ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_c030
        push    0x74
        push    2
        push    0x789b70
        push    0x1b
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_c032
L_c030:
        xor    esi, esi
L_c032:
        mov    edx, dword ptr [g_007f259c]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_c07c
        push    0x78
        push    0x231
        push    0x789b5c
        push    0x1c
        mov    ecx, esi
        call    FUN_005008e0
        mov    eax, dword ptr [g_007f259c]
        push    esi
        lea    ecx, [eax + 0x74]
        mov    dword ptr [esi], 0x773cd0
        call    FUN_00500ec0
        pop    esi
        ret    
L_c07c:
        mov    eax, dword ptr [g_007f259c]
        xor    esi, esi
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        pop    esi
        ret    
    }
}
