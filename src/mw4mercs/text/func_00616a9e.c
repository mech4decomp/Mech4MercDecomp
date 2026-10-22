/*
 * FUN_00616a9e (extent 0x616a9e-0x617523) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f2120;
extern int    g_007f25a8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00415ca0(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004d27a0(void);
extern void __cdecl FUN_004d2ad0(void);
extern void __cdecl FUN_004e7760(void);
extern void __cdecl FUN_00580540(void);
extern void __cdecl FUN_005805a0(void);
extern void __cdecl FUN_00592a70(void);
extern void __cdecl FUN_00593c60(void);
extern void __cdecl FUN_00593ca0(void);
extern void __cdecl FUN_00595b60(void);
extern void __cdecl FUN_00595c80(void);
extern void __cdecl FUN_00596ab0(void);
extern void __cdecl FUN_00597380(void);
extern void __cdecl FUN_00597c30(void);
extern void __cdecl FUN_0059b9f0(void);
extern void __cdecl FUN_0059c5c0(void);
extern void __cdecl FUN_0059c870(void);
extern void __cdecl FUN_0059cf10(void);
extern void __cdecl FUN_0059cf30(void);
extern void __cdecl FUN_0059d400(void);
extern void __cdecl FUN_0059d7e0(void);
extern void __cdecl FUN_0059d8e0(void);
extern void __cdecl FUN_0059eb70(void);
extern void __cdecl FUN_00615ff0(void);
extern void __cdecl FUN_00618e20(void);
extern void __cdecl FUN_006199f0(void);
extern void __cdecl FUN_00619b00(void);
extern void __cdecl FUN_00619b60(void);
extern void __cdecl FUN_00619b70(void);
extern void __cdecl FUN_00619c80(void);
extern void __cdecl FUN_00619ce0(void);
extern void __cdecl FUN_0063b370(void);
extern void __cdecl FUN_006fb7c0(void);

__declspec(naked) void FUN_00616a9e(void)
{
    __asm {
        nop    
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
        sub    esp, 0x19c
        push    ebx
        mov    ebx, ecx
        mov    al, byte ptr [ebx + 0x71]
        test    al, al
        mov    dword ptr [esp + 0x20], ebx
        je    L_7519
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [g_007dab40]
        push    ebp
        mov    ebp, dword ptr [ebx + 0x34]
        push    esi
        xor    eax, ecx
        mov    esi, dword ptr [eax + 0x20]
        mov    eax, dword ptr [eax + 0xc]
        push    edi
        mov    edi, dword ptr [ebp + 0x48]
        mov    ecx, dword ptr [edi + 0x38]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax]
        push    ecx
        mov    ecx, eax
        xor    esi, 0x85739531
        mov    byte ptr [ebx + 0x71], 0
        call    dword ptr [edx + 0x34]
        push    eax
        lea    ecx, [esp + 0x28]
        call    FUN_00412570
        push    1
        add    edi, 0x34
        push    edi
        lea    ecx, [esp + 0x170]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_6b42
        lea    edx, [esp + 0x168]
        push    edx
        mov    ecx, eax
        call    FUN_00592a70
        mov    dword ptr [esp + 0x18], eax
        jmp    L_6b4a
L_6b42:
        mov    dword ptr [esp + 0x18], 0
L_6b4a:
        mov    ecx, dword ptr [esp + 0x18]
        call    FUN_00593ca0
        mov    dword ptr [esp + 0x38], eax
        mov    al, byte ptr [esi + 0x224c]
        test    al, al
        je    L_7051
        mov    ecx, ebp
        call    FUN_00597380
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    ecx, dword ptr [ecx + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    2
        call    dword ptr [edx + 0x34]
        push    eax
        mov    eax, dword ptr [esp + 0x28]
        push    eax
        lea    ecx, [esp + 0x3c]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x28]
        call    FUN_00412740
        lea    ecx, [esp + 0x34]
        call    FUN_0040d9b0
        mov    esi, dword ptr [ebx + 0x10]
        test    esi, esi
        je    L_6c13
        mov    edi, dword ptr [ebp + 0x30]
        test    edi, edi
        je    L_6bd2
        mov    ecx, edi
        call    FUN_00619b00
        mov    ecx, edi
        call    FUN_00619b60
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_6bd2:
        push    0xc
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_6bec
        push    esi
        mov    ecx, edi
        call    FUN_006199f0
        jmp    L_6bee
L_6bec:
        xor    edi, edi
L_6bee:
        test    esi, esi
        mov    dword ptr [ebp + 0x30], edi
        je    L_6c0c
        mov    ecx, esi
        call    FUN_00619b00
        mov    ecx, esi
        call    FUN_00619b60
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6c0c:
        mov    dword ptr [ebx + 0x10], 0
L_6c13:
        mov    edi, dword ptr [ebx + 0x18]
        test    edi, edi
        je    L_6c79
        mov    esi, dword ptr [ebp + 0x40]
        test    esi, esi
        je    L_6c38
        mov    ecx, esi
        call    FUN_00619c80
        mov    ecx, esi
        call    FUN_00619ce0
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6c38:
        push    0xc
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_6c52
        push    edi
        mov    ecx, esi
        call    FUN_00619b70
        jmp    L_6c54
L_6c52:
        xor    esi, esi
L_6c54:
        test    edi, edi
        mov    dword ptr [ebp + 0x40], esi
        je    L_6c72
        mov    ecx, edi
        call    FUN_00619c80
        mov    ecx, edi
        call    FUN_00619ce0
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_6c72:
        mov    dword ptr [ebx + 0x18], 0
L_6c79:
        lea    ecx, [esp + 0x3f]
        push    ecx
        lea    ecx, [esp + 0x44]
        call    FUN_00580540
        lea    edx, [esp + 0x40]
        push    1
        push    edx
        call    FUN_0063b370
        mov    eax, dword ptr [esp + 0x48]
        mov    ecx, dword ptr [esp + 0x4c]
        add    esp, 8
        cmp    eax, ecx
        mov    dword ptr [esp + 0x28], eax
        je    L_6f21
L_6caa:
        mov    eax, dword ptr [esp + 0x28]
        mov    esi, dword ptr [eax]
        mov    ecx, dword ptr [esi + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        je    L_6cd6
        mov    esi, dword ptr [esi + 0x574]
        push    esi
        lea    ecx, [ebx + 0x54]
        mov    dword ptr [esi + 0x20], 2
        call    FUN_00415ca0
        jmp    L_6f0a
L_6cd6:
        lea    edx, [esp + 0x34]
        lea    ecx, [esi + 0x384]
        push    edx
        mov    dword ptr [esp + 0x38], 6
        call    FUN_00416b60
        test    eax, eax
        je    L_6d0b
        mov    ecx, eax
        call    FUN_004e7760
        cmp    eax, 1
        jne    L_6d0b
        mov    eax, dword ptr [esi + 0x574]
        mov    dword ptr [eax + 0x20], 1
L_6d0b:
        mov    dword ptr [esp + 0x14], 0
L_6d13:
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esi + 0x384]
        call    FUN_00416b60
        mov    ebx, eax
        test    ebx, ebx
        je    L_6ef4
        mov    ecx, ebx
        call    FUN_004e7760
        cmp    eax, 2
        jne    L_6e03
        cmp    dword ptr [esp + 0x14], 8
        jge    L_6d51
        mov    edx, dword ptr [esi + 0x574]
        mov    dword ptr [edx + 0x20], 3
L_6d51:
        mov    ebp, dword ptr [ebx + 0x94]
L_6d57:
        test    ebp, ebp
        je    L_6e03
        mov    edi, dword ptr [ebp]
        test    edi, edi
        mov    ebp, dword ptr [ebp + 4]
        je    L_6e03
        mov    eax, dword ptr [g_007f25a8]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_6d57
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0xa4]
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x104]
        mov    eax, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0x2c]
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0xb0]
        mov    eax, dword ptr [esi + 0x2c]
        test    eax, eax
        lea    edi, [esi + 0x2c]
        mov    dword ptr [esp + 0x20], eax
        je    L_6db7
        inc    byte ptr [eax - 1]
L_6db7:
        mov    eax, dword ptr [esi + 0x574]
        add    eax, 0x14
        push    eax
        lea    ecx, [esp + 0x34]
        call    FUN_0040f060
        lea    ecx, [esp + 0x30]
        push    ecx
        mov    ecx, edi
        call    FUN_00412740
        lea    ecx, [esp + 0x30]
        call    FUN_0040d9b0
        mov    ecx, dword ptr [esp + 0x2c]
        push    esi
        call    FUN_00618e20
        lea    edx, [esp + 0x20]
        push    edx
        mov    ecx, edi
        call    FUN_00412740
        lea    ecx, [esp + 0x20]
        call    FUN_0040d9b0
        jmp    L_6d57
L_6e03:
        mov    ebx, dword ptr [ebx + 0x9c]
L_6e09:
        test    ebx, ebx
        je    L_6ef4
        mov    edi, dword ptr [ebx]
        test    edi, edi
        mov    ebx, dword ptr [ebx + 4]
        je    L_6ef4
        mov    eax, dword ptr [g_007f25a8]
        mov    ebp, dword ptr [edi + 4]
        push    eax
        mov    ecx, ebp
        call    FUN_00415230
        test    al, al
        jne    L_6e43
        mov    eax, dword ptr [g_007f2120]
        push    eax
        mov    ecx, ebp
        call    FUN_00415230
        test    al, al
        je    L_6e09
L_6e43:
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0xa4]
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x104]
        mov    eax, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0x2c]
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0xb0]
        mov    eax, dword ptr [esi + 0x2c]
        test    eax, eax
        lea    edi, [esi + 0x2c]
        mov    dword ptr [esp + 0x20], eax
        je    L_6e7b
        inc    byte ptr [eax - 1]
L_6e7b:
        mov    eax, dword ptr [esi + 0x574]
        mov    eax, dword ptr [eax + 0x14]
        test    eax, eax
        mov    dword ptr [esp + 0x1c], eax
        je    L_6e8f
        inc    byte ptr [eax - 1]
L_6e8f:
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, edi
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je    L_6eb6
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_6eb6
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6eb6:
        mov    ecx, dword ptr [esp + 0x2c]
        push    esi
        call    FUN_00618e20
        lea    edx, [esp + 0x20]
        push    edx
        mov    ecx, edi
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x20]
        test    eax, eax
        je    L_6e09
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_6e09
        push    eax
        call    FUN_004084e0
        add    esp, 4
        jmp    L_6e09
L_6ef4:
        mov    eax, dword ptr [esp + 0x14]
        inc    eax
        cmp    eax, 0xa
        mov    dword ptr [esp + 0x14], eax
        jl    L_6d13
        mov    ebx, dword ptr [esp + 0x2c]
L_6f0a:
        mov    eax, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [esp + 0x44]
        add    eax, 4
        cmp    eax, ecx
        mov    dword ptr [esp + 0x28], eax
        jne    L_6caa
L_6f21:
        mov    eax, dword ptr [esp + 0x38]
        test    eax, eax
        jge    L_6f61
        mov    edi, dword ptr [ebx + 0x34]
        mov    eax, dword ptr [edi + 0x48]
        mov    ecx, dword ptr [eax + 0x50]
        cmp    ecx, 0xa
        jge    L_6f40
        mov    ecx, dword ptr [eax + ecx*4 + 0xb4]
        jmp    L_6f46
L_6f40:
        mov    ecx, dword ptr [eax + 0xb4]
L_6f46:
        mov    eax, dword ptr [ebx + 0x24]
        mov    esi, dword ptr [eax + 0x20]
        mov    edx, dword ptr [eax + 0x1c]
        add    esi, ecx
        mov    dword ptr [eax + 0x20], esi
        mov    esi, dword ptr [ebx + 0x1c]
        add    edx, ecx
        mov    dword ptr [eax + 0x1c], edx
        inc    dword ptr [esi + 0x2c]
        jmp    L_6fb6
L_6f61:
        mov    esi, dword ptr [ebx + 0x1c]
        mov    edx, dword ptr [esi + eax*4 + 0x34]
        mov    edi, dword ptr [ebx + 0x34]
        inc    edx
        mov    dword ptr [esi + eax*4 + 0x34], edx
        mov    eax, dword ptr [edi + 0x48]
        mov    eax, dword ptr [eax + 0x64]
        dec    eax
        je    L_6f9a
        dec    eax
        jne    L_6fb6
        mov    ecx, esi
        call    FUN_0059cf30
        mov    ecx, dword ptr [esp + 0x18]
        mov    ebp, eax
        call    FUN_00593c60
        add    ebp, eax
        push    ebp
        mov    ecx, esi
        call    FUN_0059d8e0
        jmp    L_6fb6
L_6f9a:
        mov    ecx, esi
        call    FUN_0059cf10
        mov    ecx, dword ptr [esp + 0x18]
        mov    ebp, eax
        call    FUN_00593c60
        add    ebp, eax
        push    ebp
        mov    ecx, esi
        call    FUN_0059d7e0
L_6fb6:
        mov    ecx, esi
        call    FUN_0059d400
        mov    ecx, edi
        call    FUN_00597c30
        mov    ecx, dword ptr [ebx + 0x20]
        call    FUN_0059b9f0
        mov    ecx, dword ptr [ebx + 0x2c]
        call    FUN_0059eb70
        mov    ecx, dword ptr [esp + 0x18]
        test    ecx, ecx
        je    L_6fe2
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_6fe2:
        mov    eax, dword ptr [edi + 0x48]
        mov    ecx, dword ptr [eax + 0x48]
        test    ecx, ecx
        jne    L_7015
        mov    al, byte ptr [ebx + 0x70]
        test    al, al
        push    0
        je    L_7005
        mov    ecx, dword ptr [esp + 0x28]
        push    1
        push    ecx
        mov    ecx, ebx
        call    FUN_00615ff0
        jmp    L_7034
L_7005:
        mov    edx, dword ptr [esp + 0x28]
        push    0
        push    edx
        mov    ecx, ebx
        call    FUN_00615ff0
        jmp    L_7034
L_7015:
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    byte ptr [edx + 0xc0], 1
L_7034:
        mov    eax, dword ptr [esp + 0x40]
        mov    ecx, dword ptr [esp + 0x48]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        lea    ecx, [esp + 0x50]
        call    FUN_005805a0
        jmp    L_74ef
L_7051:
        push    0x77a0c8
        lea    ecx, [esp + 0x18]
        call    FUN_00412570
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [esp + 0x14]
        xor    eax, ecx
        mov    eax, dword ptr [eax + 0xc]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0xb0]
        push    ecx
        push    edx
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_70b1
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_70b1
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_70b1:
        mov    eax, dword ptr [esp + 0x14]
        push    0x78c370
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_70e9
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_70e9
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_70e9:
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_7121
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7121
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7121:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        mov    dword ptr [esp + 0x18], eax
        je    L_7130
        inc    byte ptr [eax - 1]
L_7130:
        mov    eax, dword ptr [esp + 0x18]
        push    0x779f4c
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_7168
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7168
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7168:
        lea    ebp, [ebx + 0x74]
        mov    ecx, ebp
        call    FUN_0041fd80
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        mov    ecx, eax
        call    FUN_004d2ad0
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x34]
        mov    eax, dword ptr [edx + 0x48]
        mov    ecx, dword ptr [eax + 0x38]
        mov    dword ptr [esp + 0x10], ecx
        mov    ecx, dword ptr [ebx + 0x1c]
        test    ecx, ecx
        je    L_71af
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_71af:
        push    1
        lea    eax, [esp + 0x24]
        mov    ebx, 5
        push    eax
        lea    ecx, [esp + 0xe8]
        mov    word ptr [esp + 0x28], bx
        mov    word ptr [esp + 0x2a], 6
        call    FUN_004d1f80
        lea    ecx, [esp + 0x20]
        push    ecx
        call    FUN_0059c5c0
        mov    esi, eax
        mov    eax, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [eax + 0x34]
        add    esp, 4
        test    ecx, ecx
        mov    dword ptr [eax + 0x1c], esi
        je    L_71f6
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_71f6:
        push    1
        lea    eax, [esp + 0x34]
        push    eax
        lea    ecx, [esp + 0xa4]
        mov    word ptr [esp + 0x38], bx
        mov    word ptr [esp + 0x3a], 3
        call    FUN_004d1f80
        lea    ecx, [esp + 0x30]
        push    ecx
        call    FUN_00595c80
        mov    edx, dword ptr [esp + 0x30]
        mov    edi, eax
        mov    eax, dword ptr [esp + 0x3c]
        add    esp, 4
        test    eax, eax
        mov    dword ptr [edx + 0x34], edi
        jge    L_7238
        inc    dword ptr [esi + 0x30]
        jmp    L_727f
L_7238:
        mov    eax, dword ptr [esp + 0x38]
        mov    ecx, dword ptr [esi + eax*4 + 0x40]
        mov    edx, dword ptr [g_007dab40]
        inc    ecx
        mov    dword ptr [esi + eax*4 + 0x40], ecx
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x44]
        je    L_727f
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x34]
        test    ecx, ecx
        je    L_727f
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        mov    ecx, edi
        call    FUN_00595b60
        inc    dword ptr [eax + 0x54]
L_727f:
        push    1
        lea    edx, [esp + 0x38]
        push    edx
        lea    ecx, [esp + 0x12c]
        mov    word ptr [esp + 0x3c], bx
        mov    word ptr [esp + 0x3e], 0
        call    FUN_004d1f80
        mov    eax, dword ptr [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x128]
        call    FUN_004d27a0
        push    0
        lea    ecx, [esp + 0x50]
        call    FUN_0041ee70
        lea    ecx, [esp + 0x4c]
        push    ecx
        mov    ecx, esi
        call    FUN_0059c870
        push    0
        lea    edx, [esp + 0x50]
        push    edx
        lea    ecx, [esp + 0xe8]
        call    FUN_004d2680
        push    0
        lea    ecx, [esp + 0x78]
        call    FUN_0041ee70
        lea    eax, [esp + 0x74]
        push    eax
        mov    ecx, edi
        call    FUN_00596ab0
        push    0
        lea    ecx, [esp + 0x78]
        push    ecx
        lea    ecx, [esp + 0xa4]
        call    FUN_004d2680
        mov    ecx, ebp
        call    FUN_0041fd80
        mov    edx, dword ptr [esp + 0x18]
        push    edx
        mov    ecx, eax
        call    FUN_004d2ad0
        push    0x77a0c8
        lea    ecx, [esp + 0x20]
        call    FUN_00412570
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0xb0]
        push    eax
        mov    eax, dword ptr [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_7374
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7374
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7374:
        mov    ecx, dword ptr [esp + 0x1c]
        push    0x78c370
        push    ecx
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_73ac
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_73ac
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_73ac:
        mov    edx, dword ptr [esp + 0x24]
        mov    eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_73e4
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_73e4
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_73e4:
        mov    eax, dword ptr [esp + 0x1c]
        test    eax, eax
        mov    dword ptr [esp + 0x28], eax
        je    L_73f3
        inc    byte ptr [eax - 1]
L_73f3:
        mov    ecx, dword ptr [esp + 0x28]
        push    0x779f4c
        push    ecx
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x2c]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_742b
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_742b
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_742b:
        mov    edx, dword ptr [esp + 0x28]
        push    edx
        call    FUN_006fb7c0
        mov    eax, dword ptr [esp + 0x2c]
        mov    edx, dword ptr [eax + 0x6c]
        lea    ecx, [eax + 0x6c]
        mov    eax, dword ptr [esp + 0x24]
        cmp    edx, eax
        je    L_744d
        push    eax
        call    FUN_00412780
L_744d:
        mov    eax, dword ptr [esp + 0x28]
        test    eax, eax
        je    L_7468
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7468
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7468:
        mov    eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je    L_7483
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7483
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7483:
        lea    ecx, [esp + 0x74]
        call    FUN_0041ef60
        lea    ecx, [esp + 0x4c]
        call    FUN_0041ef60
        lea    ecx, [esp + 0x124]
        call    FUN_004d21c0
        lea    ecx, [esp + 0x9c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0xe0]
        call    FUN_004d21c0
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_74d4
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_74d4
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_74d4:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_74ef
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_74ef
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_74ef:
        lea    ecx, [esp + 0x168]
        call    FUN_004d21c0
        mov    eax, dword ptr [esp + 0x24]
        test    eax, eax
        pop    edi
        pop    esi
        pop    ebp
        je    L_7519
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7519
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7519:
        pop    ebx
        add    esp, 0x19c
        ret    4
    }
}
