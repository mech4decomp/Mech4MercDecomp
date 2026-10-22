/*
 * FUN_005e693e (extent 0x5e693e-0x5e6c6b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f255c;
extern int    g_007f2560;
extern int    g_007f25a8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
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

__declspec(naked) void FUN_005e693e(void)
{
    __asm {
        nop    
        nop    
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x14]
        mov    ecx, dword ptr [esp + 8]
        cmp    ecx, eax
        je    L_6a20
        cmp    ecx, 6
        jne    L_6960
        cmp    eax, 7
        jne    L_6960
        pop    ebx
        ret    8
L_6960:
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [ebx + 0x18]
        push    eax
        push    ecx
        mov    ecx, ebx
        call    FUN_005f0430
        sub    eax, 6
        je    L_699b
        dec    eax
        jne    L_6a1c
        mov    ecx, dword ptr [esi + 0x10]
        and    ecx, 0xffffffbf
        push    0
        mov    dword ptr [esi + 0x10], ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov    eax, dword ptr [ebx + 0x14]
        pop    esi
        pop    ebx
        ret    8
L_699b:
        push    edi
        lea    edi, [esi + 0x214]
        mov    ecx, edi
        call    FUN_0041fcb0
        mov    eax, dword ptr [esi + 0x1e4]
        test    eax, eax
        je    L_69bb
        push    eax
        mov    ecx, edi
        call    FUN_0041fcd0
L_69bb:
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
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xe4]
        lea    edi, [esi + 0x1a4]
        mov    ecx, edi
        mov    byte ptr [esi + 0x1cc], 1
        call    FUN_0041fd80
        test    eax, eax
        je    L_6a14
        mov    ecx, edi
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_005bf940
L_6a14:
        mov    ecx, esi
        call    FUN_005ef7a0
        pop    edi
L_6a1c:
        mov    eax, dword ptr [ebx + 0x14]
        pop    esi
L_6a20:
        pop    ebx
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
        je    L_6aa8
        mov    eax, dword ptr [g_007f255c]
        mov    ecx, dword ptr [g_007f25a8]
        push    0x502c60
        push    0x5028b0
        push    0x6775b0
        push    0
        push    0x677590
        push    eax
        push    0x674b00
        push    0x5e6ca0
        push    0
        push    0
        push    ecx
        push    0x78927c
        push    0x46e
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x5ef970
        mov    dword ptr [g_007f2560], esi
        jmp    L_6ab2
L_6aa8:
        mov    dword ptr [g_007f2560], 0
L_6ab2:
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_6ada
        push    0xe0
        push    0x46f
        push    0x773250
        push    1
        mov    ecx, eax
        call    FUN_00501500
        jmp    L_6adc
L_6ada:
        xor    eax, eax
L_6adc:
        mov    edx, dword ptr [g_007f2560]
        push    eax
        lea    ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_6b18
        push    0x1c8
        push    1
        push    0x789268
        push    6
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x773234
        jmp    L_6b1a
L_6b18:
        xor    esi, esi
L_6b1a:
        mov    eax, dword ptr [g_007f2560]
        push    esi
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_6b52
        push    0x74
        push    2
        push    0x78925c
        push    0x1b
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_6b54
L_6b52:
        xor    esi, esi
L_6b54:
        mov    ecx, dword ptr [g_007f2560]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_6b8d
        push    0x78
        push    4
        push    0x7852f4
        push    0x1c
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775cfc
        jmp    L_6b8f
L_6b8d:
        xor    esi, esi
L_6b8f:
        mov    edx, dword ptr [g_007f2560]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_6bcb
        push    0x84
        push    4
        push    0x7852d8
        push    0x1d
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775cfc
        jmp    L_6bcd
L_6bcb:
        xor    esi, esi
L_6bcd:
        mov    eax, dword ptr [g_007f2560]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_6c0b
        push    0x90
        push    0x231
        push    0x789244
        push    0x1e
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_6c0d
L_6c0b:
        xor    esi, esi
L_6c0d:
        mov    ecx, dword ptr [g_007f2560]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_6c58
        push    0x94
        push    2
        push    0x789234
        push    0x1f
        mov    ecx, esi
        call    FUN_005008e0
        mov    edx, dword ptr [g_007f2560]
        push    esi
        lea    ecx, [edx + 0x74]
        mov    dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop    esi
        ret    
L_6c58:
        mov    edx, dword ptr [g_007f2560]
        xor    esi, esi
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop    esi
        ret    
    }
}
