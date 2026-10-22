/*
 * FUN_00688042 (extent 0x688042-0x688426) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f2438;
extern int    g_007f24cc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005d9ac0(void);
extern void __cdecl FUN_005dcd00(void);
extern void __cdecl FUN_006b0460(void);
extern void __cdecl FUN_006b0520(void);
extern void __cdecl FUN_006b0610(void);
extern void __cdecl FUN_006b0680(void);
extern void __cdecl FUN_006b06d0(void);
extern void __cdecl FUN_006b0750(void);
extern void __cdecl FUN_006b0780(void);
extern void __cdecl FUN_006b07a0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00688042(void)
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
        nop    
        push    ecx
        push    ebx
        push    esi
        mov    ebx, ecx
        push    edi
        mov    edi, dword ptr [ebx + 0x20]
        test    edi, edi
        je    L_8090
        mov    esi, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [esp + 0x13]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x17], 1
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        add    edi, 0x30
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        mov    ecx, ebx
        call    FUN_006b0460
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    4
L_8090:
        mov    esi, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [esp + 0x13]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x17], 0
        call    dword ptr [eax + 0x24]
        push    esi
        mov    ecx, ebx
        call    FUN_006b0460
        pop    edi
        pop    esi
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
        nop    
        nop    
        push    ecx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    1
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    al, byte ptr [esp + 0x10]
        test    al, al
        mov    dword ptr [edi + 0x20], 0
        je    L_8118
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [esp + 8]
        mov    ecx, dword ptr [eax + 0x10]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    dword ptr [edi + 0x20], eax
L_8118:
        push    esi
        mov    ecx, edi
        call    FUN_006b0520
        pop    edi
        pop    esi
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
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_006b0750
        mov    dword ptr [esi + 0x20], edi
        pop    edi
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
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_006b0780
        mov    eax, dword ptr [esi + 0x14]
        mov    cl, byte ptr [eax + 0xc]
        test    cl, cl
        jne    L_817d
        pop    edi
        mov    byte ptr [esi + 0x19], 0
        pop    esi
        ret    0xc
L_817d:
        mov    ecx, dword ptr [eax + 0x10]
        mov    edx, dword ptr [edi]
        push    0
        push    ecx
        mov    ecx, edi
        mov    dword ptr [eax + 0x10], 0
        call    dword ptr [edx + 0x1c8]
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        fstp    dword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_81c5
        mov    dword ptr [eax + 4], 8
        mov    byte ptr [eax], 0
        jmp    L_81c7
L_81c5:
        xor    eax, eax
L_81c7:
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x14], ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax + 0xc], edx
        call    FUN_005dcd00
        pop    edi
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        push    ebx
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_006b07a0
        test    bl, bl
        jne    L_8261
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x14]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_8239
        mov    dword ptr [eax + 4], 8
        mov    byte ptr [eax], bl
        jmp    L_823b
L_8239:
        xor    eax, eax
L_823b:
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [eax + 0x14], 0
        call    FUN_005dcd00
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x38]
L_8261:
        pop    edi
        pop    esi
        pop    ebx
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
        sub    esp, 0x18
        push    ebx
        mov    ebx, dword ptr [esp + 0x24]
        push    ebp
        mov    ebp, dword ptr [esp + 0x24]
        push    esi
        push    edi
        push    ebx
        mov    esi, ecx
        push    ebp
        call    FUN_006b0680
        mov    eax, dword ptr [esi + 0x20]
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [eax + 0x9c]
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0xac]
        fstp    dword ptr [esp + 0x1c]
        mov    edi, dword ptr [esi + 4]
        add    eax, 0x80
        mov    eax, ecx
        mov    dword ptr [esp + 0x14], ecx
        mov    ecx, edx
        mov    dword ptr [esp + 0x24], ecx
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [esp + 0x20], eax
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0x168]
        push    eax
        push    edi
        push    ebx
        sub    esp, 0xc
        lea    eax, [esp + 0x34]
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        sub    esp, 0xc
        mov    ecx, esp
        push    ebp
        call    FUN_00551870
        mov    ecx, dword ptr [esi + 0x10]
        push    ecx
        push    0
        call    FUN_00707e70
        mov    ecx, dword ptr [g_007f2438]
        sub    esp, 8
        fstp    qword ptr [esp]
        call    FUN_005d9ac0
        pop    edi
        mov    dword ptr [esi + 0x14], eax
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x18
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
        nop    
        sub    esp, 0x20
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 0xc]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x14], ecx
        mov    ecx, dword ptr [esi + 0x14]
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [esi + 0x10]
        mov    dword ptr [esp + 0x20], ecx
        mov    cl, byte ptr [esi + 0x1a]
        mov    dword ptr [esp + 0x18], edx
        mov    dl, byte ptr [esi + 0x18]
        mov    dword ptr [esp + 0x1c], eax
        mov    al, byte ptr [esi + 0x19]
        mov    byte ptr [esp + 0x26], cl
        lea    ecx, [esp + 0xc]
        mov    byte ptr [esp + 0x24], dl
        mov    dl, byte ptr [esi + 0x1b]
        mov    byte ptr [esp + 0x25], al
        mov    eax, dword ptr [esi + 0x1c]
        push    ecx
        mov    ecx, edi
        mov    byte ptr [esp + 0x2b], dl
        mov    dword ptr [esp + 0x2c], eax
        mov    dword ptr [esp + 0x10], 0x798c44
        call    FUN_006b0610
        mov    bl, al
        neg    bl
        sbb    bl, bl
        lea    ecx, [esp + 0xc]
        inc    bl
        call    FUN_006b06d0
        test    bl, bl
        je    L_83a6
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0x20
        ret    4
L_83a6:
        mov    eax, dword ptr [edi + 0x20]
        mov    edx, dword ptr [esi + 0x20]
        mov    ecx, dword ptr [eax + 0x30]
        mov    eax, dword ptr [edx + 0x30]
        pop    edi
        cmp    ecx, eax
        pop    esi
        setne    al
        pop    ebx
        add    esp, 0x20
        ret    4
        push    esi
        mov    esi, ecx
        call    FUN_006b06d0
        test    byte ptr [esp + 8], 1
        je    L_83d8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_83d8:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        sub    esp, 0xc
        mov    eax, dword ptr [ecx + 0x20]
        mov    eax, dword ptr [eax + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    ecx, dword ptr [eax + 0xac]
        fld    dword ptr [eax + 0x9c]
        add    eax, 0x80
        mov    eax, dword ptr [esp + 0x10]
        fxch    st(1)
        fstp    dword ptr [eax]
        mov    edx, ecx
        mov    dword ptr [esp + 8], ecx
        fstp    dword ptr [eax + 4]
        mov    dword ptr [eax + 8], edx
        add    esp, 0xc
        ret    8
        nop    
        nop    
        nop    
        mov    eax, 1
        ret    
    }
}
