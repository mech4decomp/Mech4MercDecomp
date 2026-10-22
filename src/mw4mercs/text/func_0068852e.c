/*
 * FUN_0068852e (extent 0x68852e-0x688706) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b220c;
extern int    g_007f2438;
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005d9ac0(void);
extern void __cdecl FUN_006b0610(void);
extern void __cdecl FUN_006b0680(void);
extern void __cdecl FUN_006b06d0(void);
extern void __cdecl FUN_006b0780(void);
extern void __cdecl FUN_006b07a0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0068852e(void)
{
    __asm {
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
        xor    edx, edx
        cmp    cl, dl
        jne    L_855e
        pop    edi
        mov    byte ptr [esi + 0x19], dl
        pop    esi
        ret    0xc
L_855e:
        mov    ecx, dword ptr [eax + 0x10]
        push    edx
        mov    dword ptr [eax + 0x10], edx
        mov    eax, dword ptr [edi]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x1c8]
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
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 4]
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    esi
        push    ebx
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_006b07a0
        test    bl, bl
        jne    L_85ac
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax + 0x38]
L_85ac:
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    ebp
        mov    ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        push    ebx
        mov    esi, ecx
        push    ebp
        call    FUN_006b0680
        mov    edi, dword ptr [esi + 4]
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x168]
        lea    edx, [esi + 0x20]
        push    eax
        push    edi
        push    ebx
        sub    esp, 0xc
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        sub    esp, 0xc
        mov    ecx, esp
        push    ebp
        call    FUN_00551870
        mov    eax, dword ptr [esi + 0x10]
        push    eax
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
        je    L_86b6
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0x20
        ret    4
L_86b6:
        mov    edx, dword ptr [g_007b220c]
        push    edx
        add    esi, 0x20
        push    esi
        add    edi, 0x20
        push    edi
        call    FUN_0041c540
        add    esp, 0xc
        pop    edi
        test    al, al
        pop    esi
        setne    al
        pop    ebx
        add    esp, 0x20
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [ecx + 0x20]
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 0x24]
        mov    ecx, dword ptr [ecx + 0x28]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 1
        ret    
    }
}
