/*
 * FUN_005b7109 (extent 0x5b7109-0x5b75b1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db094;
extern int    g_007f1f84;
extern int    g_007f293c;
extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00417aa0(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_004e7270(void);
extern void __cdecl FUN_00545760(void);
extern void __cdecl FUN_005b70e0(void);
extern void __cdecl FUN_005b7550(void);
extern void __cdecl FUN_00621fd0(void);

__declspec(naked) void FUN_005b7109(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f293c]
        mov    edx, dword ptr [eax]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx]
        ret    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    ebx
        push    edi
        mov    edi, ecx
        call    FUN_005b70e0
        test    eax, eax
        mov    ecx, dword ptr [edi + 0x94]
        lea    ebx, [edi + 0x94]
        mov    dword ptr [esp + 0xc], ebx
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 8], 0x782234
        jle    L_71a2
        push    ebp
        push    esi
        mov    ebp, eax
L_7150:
        mov    ecx, dword ptr [esp + 0x14]
        call    FUN_00417a40
        test    eax, eax
        jle    L_719d
        mov    ecx, dword ptr [esp + 0x14]
        call    FUN_00417a40
        push    eax
        call    FUN_00415040
        add    esp, 4
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00417aa0
        mov    esi, eax
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xac]
        test    al, al
        je    L_719d
        push    esi
        lea    ecx, [edi + 0x9c]
        call    FUN_004179b0
        push    ebx
        mov    ecx, esi
        call    FUN_004154d0
L_719d:
        dec    ebp
        jne    L_7150
        pop    esi
        pop    ebp
L_71a2:
        pop    edi
        pop    ebx
        add    esp, 0xc
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f293c]
        mov    edx, dword ptr [eax]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    esi
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 4]
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        lea    ebx, [esi + 0x94]
        push    edi
        mov    ecx, ebx
        call    FUN_00417a40
        mov    edi, dword ptr [esp + 0x24]
        mov    ebp, eax
        mov    eax, dword ptr [esp + 0x20]
        push    edi
        push    eax
        mov    ecx, esi
        call    FUN_004e7270
        fstp    dword ptr [esp + 0x20]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x14]
        xor    eax, 0x85739531
        mov    cl, byte ptr [eax + 0x17fc]
        test    cl, cl
        je    L_7234
        fld    dword ptr [esi + 0x14]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_7234
        mov    ecx, esi
        call    FUN_005b7550
L_7234:
        mov    ecx, ebx
        call    FUN_00417a40
        cmp    eax, ebp
        jge    L_7537
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    bl, byte ptr [edx + 0x17]
        test    bl, bl
        mov    dword ptr [esp + 0x18], edx
        je    L_7537
        mov    ecx, dword ptr [ecx + 0x20]
        xor    ecx, 0x85739531
        mov    dword ptr [esp + 0x14], ecx
        je    L_7537
        mov    edx, dword ptr [ecx + 0x225c]
        test    edx, edx
        je    L_7537
        mov    ebx, dword ptr [esi + 0x2c]
        mov    dl, byte ptr [ebx + 0x14]
        mov    byte ptr [esp + 0x24], dl
        mov    dx, word ptr [ebx + 0x16]
        add    edi, 0x18
        sub    ebp, eax
        test    ebp, ebp
        mov    word ptr [esp + 0x26], dx
        mov    dword ptr [esp + 0x10], edi
        jle    L_7537
        mov    esi, dword ptr [ebx + 0x280]
        test    esi, esi
        je    L_72f0
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_72ec
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        and    al, 1
        cmp    al, 1
        je    L_7537
        mov    cl, byte ptr [esi + 0x14]
        mov    byte ptr [esp + 0x24], cl
        mov    dx, word ptr [esi + 0x16]
        mov    word ptr [esp + 0x26], dx
L_72ec:
        mov    ecx, dword ptr [esp + 0x14]
L_72f0:
        mov    eax, dword ptr [ebx + 0x280]
        test    eax, eax
        je    L_7369
        mov    eax, dword ptr [eax + 4]
        cmp    dword ptr [eax], 0x429
        jne    L_7369
        mov    edi, dword ptr [esp + 0x10]
        mov    esi, dword ptr [ecx + 0x225c]
        push    ebp
        push    edi
        push    0x10
        mov    ecx, esi
        call    FUN_00621fd0
        push    ebp
        lea    ecx, [esp + 0x28]
        push    ecx
        push    0x11
        mov    ecx, esi
        call    FUN_00621fd0
        mov    ecx, dword ptr [esp + 0x18]
        push    edi
        lea    edx, [esp + 0x28]
        push    edx
        call    FUN_00545760
        cmp    al, 1
        push    ebp
        push    edi
        jne    L_7351
        push    0x12
        mov    ecx, esi
        call    FUN_00621fd0
        push    ebp
        lea    eax, [esp + 0x28]
        push    eax
        push    0x13
        jmp    L_7362
L_7351:
        push    0x14
        mov    ecx, esi
        call    FUN_00621fd0
        push    ebp
        lea    ecx, [esp + 0x28]
        push    ecx
        push    0x15
L_7362:
        mov    ecx, esi
        call    FUN_00621fd0
L_7369:
        mov    ecx, dword ptr [esp + 0x10]
        xor    edx, edx
        mov    dl, byte ptr [ebx + 0x14]
        xor    eax, eax
        mov    al, byte ptr [ecx]
        mov    edi, edx
        test    edi, edi
        mov    esi, eax
        jl    L_7537
        test    esi, esi
        jl    L_7537
        test    ebx, ebx
        je    L_73bf
        mov    ebx, dword ptr [ebx + 0x280]
        test    ebx, ebx
        je    L_73bf
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [ebx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_73bf
        test    ebx, ebx
        je    L_73bf
        mov    ebx, dword ptr [ebx + 0x5d0]
        cmp    ebx, -1
        je    L_73bf
        lea    edi, [ebx + 0xff]
L_73bf:
        mov    eax, dword ptr [g_007db094]
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x28]
        cmp    esi, edx
        jne    L_741a
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x14]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        je    L_741a
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        mov    ecx, eax
        call    FUN_004ceeb0
        test    eax, eax
        je    L_741a
        mov    ecx, dword ptr [eax + 4]
        cmp    dword ptr [ecx], 0x429
        jne    L_741a
        mov    eax, dword ptr [eax + 0x5d0]
        cmp    eax, -1
        je    L_741a
        lea    esi, [eax + 0xff]
L_741a:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0xc]
        xor    eax, 0x85739531
        cmp    edi, 0xff
        jl    L_7473
        lea    ecx, [edi + edi*8]
        lea    ecx, [edi + ecx*4]
        lea    ecx, [ecx + ecx*2]
        lea    edx, [ecx + ecx*4]
        shl    edx, 2
        sub    edx, edi
        add    edx, esi
        lea    ecx, [eax + edx*4 - 0x20dec]
        add    dword ptr [ecx], ebp
        lea    ecx, [edi + edi*8]
        lea    ecx, [edi + ecx*4]
        lea    ecx, [ecx + ecx*2]
        lea    ecx, [ecx + ecx*4]
        shl    ecx, 2
        sub    ecx, edi
        mov    edx, 1
        mov    dword ptr [eax + ecx*4 - 0x228e8], edx
        jmp    L_74b0
L_7473:
        mov    edx, edi
        shl    edx, 7
        add    edx, edi
        shl    edx, 3
        sub    edx, edi
        lea    ecx, [esi + edx*2]
        mov    edx, dword ptr [eax + ecx*4 + 0x50fc]
        add    edx, ebp
        lea    ecx, [eax + ecx*4 + 0x50fc]
        mov    dword ptr [ecx], edx
        mov    edx, edi
        shl    edx, 7
        add    edx, edi
        shl    edx, 3
        sub    edx, edi
        mov    dword ptr [eax + edx*8 + 0x35f0], 1
        mov    edx, 1
L_74b0:
        cmp    esi, 0xff
        jl    L_7503
        lea    ecx, [esi + esi*8]
        fld    dword ptr [esp + 0x20]
        lea    ecx, [esi + ecx*4]
        lea    ecx, [ecx + ecx*2]
        lea    ecx, [ecx + ecx*4]
        shl    ecx, 2
        sub    ecx, esi
        add    ecx, edi
        mov    edi, dword ptr [eax + ecx*4 - 0x21248]
        lea    ecx, [eax + ecx*4 - 0x21248]
        add    edi, ebp
        mov    dword ptr [ecx], edi
        lea    ecx, [esi + esi*8]
        lea    ecx, [esi + ecx*4]
        lea    ecx, [ecx + ecx*2]
        lea    ecx, [ecx + ecx*4]
        pop    edi
        shl    ecx, 2
        sub    ecx, esi
        pop    esi
        pop    ebp
        mov    dword ptr [eax + ecx*4 - 0x228e8], edx
        pop    ebx
        add    esp, 0xc
        ret    8
L_7503:
        mov    ecx, esi
        shl    ecx, 7
        add    ecx, esi
        shl    ecx, 3
        sub    ecx, esi
        lea    ecx, [edi + ecx*2]
        mov    ebx, dword ptr [eax + ecx*4 + 0x4ca0]
        lea    ecx, [eax + ecx*4 + 0x4ca0]
        add    ebx, ebp
        mov    dword ptr [ecx], ebx
        mov    ecx, esi
        shl    ecx, 7
        add    ecx, esi
        shl    ecx, 3
        sub    ecx, esi
        mov    dword ptr [eax + ecx*8 + 0x35f0], edx
L_7537:
        fld    dword ptr [esp + 0x20]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xc
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
        mov    eax, dword ptr [g_007f293c]
        mov    edx, dword ptr [eax]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 8]
        ret    
        nop    
        nop    
        push    ebx
        push    ebp
        mov    ebx, ecx
        push    esi
        lea    ebp, [ebx + 0x94]
        push    edi
        mov    edi, dword ptr [ebp]
L_756f:
        test    edi, edi
        je    L_75a0
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_75a0
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xac]
        test    al, al
        je    L_756f
        push    esi
        lea    ecx, [ebx + 0x9c]
        call    FUN_004179b0
        push    ebp
        mov    ecx, esi
        call    FUN_004154d0
        jmp    L_756f
L_75a0:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
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
        ret    
    }
}
