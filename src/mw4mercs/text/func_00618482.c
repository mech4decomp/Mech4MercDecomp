/*
 * FUN_00618482 (extent 0x618482-0x6187a2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_004129c0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d2110(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004da2f0(void);
extern void __cdecl FUN_004da550(void);
extern void __cdecl FUN_00523e60(void);
extern void __cdecl FUN_005f9560(void);
extern void __cdecl FUN_005fcb80(void);
extern void __cdecl FUN_00617d10(void);
extern void __cdecl FUN_00618080(void);
extern void __cdecl FUN_00618100(void);

__declspec(naked) void FUN_00618482(void)
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
        sub    esp, 0x1bc
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x1c8]
        push    edi
        mov    ebp, ecx
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    1
        mov    byte ptr [esi + 0x3f1], 1
        mov    dword ptr [esi + 0x3f4], 0xffffffff
        call    dword ptr [eax + 4]
        mov    ecx, esi
        mov    dword ptr [esi + 0x140], 1
        call    FUN_005fcb80
        push    1
        lea    ecx, [esi + 0x3ac]
        push    ecx
        lea    ecx, [esp + 0x8c]
        call    FUN_004d1f80
        lea    edx, [esp + 0x84]
        push    edx
        mov    ecx, esi
        call    FUN_005f9560
        mov    eax, dword ptr [esi + 0x5c]
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        lea    ecx, [esp + 0xc]
        call    FUN_00412950
        lea    ecx, [esp + 0xc]
        call    FUN_004129c0
        mov    eax, dword ptr [ebp + 0x34]
        test    eax, eax
        je    L_853b
        mov    ecx, dword ptr [eax + 0x3c]
        lea    edx, [ecx + 1]
        push    ecx
        mov    dword ptr [eax + 0x3c], edx
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        push    0x77a504
        lea    ecx, [esp + 0xd4]
        push    ecx
        jmp    L_8557
L_853b:
        mov    edx, dword ptr [ebp + 0x54]
        mov    edi, dword ptr [esp + 0xc]
        lea    ecx, [ebp + 0x54]
        call    dword ptr [edx + 0x10]
        push    eax
        push    edi
        push    0x77a504
        lea    eax, [esp + 0xd4]
        push    eax
L_8557:
        call    dword ptr [g_0076b420]
        add    esp, 0x10
        lea    edi, [ebp + 0x74]
        push    0
        mov    ecx, edi
        call    FUN_0041fd80
        push    eax
        lea    ecx, [esp + 0xd0]
        push    ecx
        lea    ecx, [esp + 0x4c]
        call    FUN_004d2110
        push    0
        push    0
        lea    ecx, [esp + 0x48]
        call    FUN_004d2680
        push    0
        lea    ecx, [esp + 0x1c]
        call    FUN_0041ee70
        mov    ecx, esi
        call    FUN_004da550
        mov    edx, dword ptr [esi]
        mov    ecx, edi
        mov    dword ptr [esp + 0x10], edx
        call    FUN_0041fd80
        push    eax
        mov    eax, dword ptr [esp + 0x14]
        lea    edx, [esp + 0x1c]
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0xc]
        push    3
        mov    ecx, esi
        call    FUN_004da2f0
        mov    edx, dword ptr [esp + 0x18]
        push    0
        lea    ecx, [esp + 0x1c]
        call    dword ptr [edx + 0xc]
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [esp + 0x2c]
        mov    dword ptr [esp + 0x20], 0xffffffec
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        lea    ecx, [edx + 0x44]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ecx]
        xor    edx, 0x85739531
        mov    edx, dword ptr [edx + 0x24]
        mov    edx, dword ptr [edx + 0x2c]
        xor    ecx, 0x85739531
        mov    dword ptr [eax + 0x124], edx
        mov    edx, dword ptr [ecx + 0x24]
        mov    ecx, dword ptr [edx + 0x2c]
        mov    dword ptr [eax + 0x128], ecx
        mov    ecx, dword ptr [esi + 0x418]
        test    ecx, ecx
        mov    dword ptr [eax + 0x50], 0
        je    L_862c
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 0x48]
L_862c:
        push    0
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x48]
        call    FUN_004d2680
        lea    ecx, [esp + 0xc8]
        push    ecx
        lea    ecx, [esp + 0x18]
        call    FUN_00412570
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        push    0x34
        mov    edi, eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_8693
        mov    eax, dword ptr [edi + 0x634]
        push    0
        push    1
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x50]
        call    FUN_00618100
        push    ecx
        mov    ecx, esp
        push    eax
        call    FUN_00523e60
        mov    ecx, esi
        call    FUN_00618080
        jmp    L_8695
L_8693:
        xor    eax, eax
L_8695:
        mov    ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        mov    dword ptr [esp + 0x10], ecx
        je    L_86a3
        inc    byte ptr [ecx - 1]
L_86a3:
        lea    edx, [esp + 0x10]
        push    edx
        push    eax
        lea    ecx, [ebp + 0x54]
        call    FUN_00416a90
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_86cc
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_86cc
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_86cc:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_86e7
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_86e7
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_86e7:
        lea    ecx, [esp + 0x18]
        call    FUN_0041ef60
        lea    ecx, [esp + 0x40]
        call    FUN_004d21c0
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_8714
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_8714
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8714:
        lea    ecx, [esp + 0x84]
        call    FUN_004d21c0
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x1bc
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    bl, byte ptr [esp + 8]
        push    ebp
        mov    ebp, ecx
        mov    eax, dword ptr [ebp + 0x24]
        push    esi
        add    eax, 0x48
        push    edi
        mov    edi, dword ptr [eax]
L_8742:
        test    edi, edi
        je    L_879b
        mov    eax, dword ptr [edi]
        test    eax, eax
        mov    edi, dword ptr [edi + 4]
        je    L_879b
        test    bl, bl
        mov    esi, dword ptr [eax + 0x10]
        je    L_8789
        test    esi, esi
        je    L_875d
        inc    byte ptr [esi - 1]
L_875d:
        push    0
        push    0
        lea    eax, [esp + 0x1c]
        push    eax
L_8766:
        push    esi
        mov    ecx, ebp
        call    FUN_00617d10
        test    esi, esi
        je    L_8742
        mov    cl, byte ptr [esi - 1]
        lea    eax, [esi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_8742
        push    eax
        call    FUN_004084e0
        add    esp, 4
        jmp    L_8742
L_8789:
        test    esi, esi
        je    L_8790
        inc    byte ptr [esi - 1]
L_8790:
        push    0
        push    1
        lea    ecx, [esp + 0x1c]
        push    ecx
        jmp    L_8766
L_879b:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
    }
}
