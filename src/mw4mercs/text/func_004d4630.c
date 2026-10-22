/*
 * FUN_004d4630 (extent 0x4d4630-0x4d4eab) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007b4318;
extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007b8ef4;
extern int    g_007b8ef8;
extern int    g_007dc124;
extern int    g_007dc128;
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_00412b30(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_00412bf0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416320(void);
extern void __cdecl FUN_00416470(void);
extern void __cdecl FUN_004164b0(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_00421e60(void);
extern void __cdecl FUN_00429860(void);
extern void __cdecl FUN_00487900(void);
extern void __cdecl FUN_004933d0(void);
extern void __cdecl FUN_0049d3f0(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2310(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004d2680(void);

__declspec(naked) void FUN_004d4630(void)
{
    __asm {
        mov    al, byte ptr [ecx + 0x3c]
        sub    esp, 0xf4
        test    al, al
        push    ebx
        push    ebp
        push    esi
        jne    L_464e
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0xf4
        ret    4
L_464e:
        mov    ebp, dword ptr [esp + 0x104]
        lea    ebx, [ecx + 0x5c]
        push    ebp
        mov    ecx, ebx
        call    FUN_004164b0
        mov    esi, eax
        test    esi, esi
        je    L_4676
        inc    word ptr [esi + 0x10]
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xf4
        ret    4
L_4676:
        push    0x7729c8
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        mov    eax, dword ptr [ebp]
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_46bb
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_46bb
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_46bb:
        mov    edx, dword ptr [esp + 0xc]
        push    0
        push    edx
        lea    ecx, [esp + 0x1c]
        call    FUN_004d2000
        mov    al, byte ptr [g_007b4318]
        test    al, al
        je    L_4749
        mov    eax, dword ptr [esp + 0x50]
        test    eax, eax
        je    L_46f1
        mov    eax, dword ptr [esp + 0x30]
        test    eax, eax
        jbe    L_46f1
        lea    ecx, [esp + 0x14]
        call    FUN_004d24f0
        test    al, al
        jne    L_4749
L_46f1:
        mov    eax, dword ptr [esp + 0xc]
        push    0
        push    eax
        lea    ecx, [esp + 0x60]
        call    FUN_0041de80
        lea    ecx, [esp + 0x88]
        call    FUN_00412b30
        lea    ecx, [esp + 0x58]
        push    ecx
        lea    ecx, [esp + 0x8c]
        call    FUN_00412bf0
        lea    edx, [esp + 0x88]
        push    edx
        lea    eax, [esp + 0x5c]
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_004d2680
        lea    ecx, [esp + 0x88]
        call    FUN_00412b60
        lea    ecx, [esp + 0x58]
        call    FUN_0041dec0
L_4749:
        push    edi
        lea    ecx, [esp + 0x18]
        call    FUN_004d2310
        lea    ecx, [esp + 0x18]
        push    ecx
        call    FUN_00421e60
        add    esp, 4
        push    0x40
        lea    edx, [esp + 0xc8]
        mov    edi, eax
        mov    eax, dword ptr [esp + 0x1c]
        push    edx
        lea    ecx, [esp + 0x20]
        call    dword ptr [eax + 0x20]
        cmp    edi, 0xe
        jge    L_4784
        push    edi
        lea    ecx, [esp + 0x1c]
        push    ecx
        jmp    L_47b7
L_4784:
        mov    eax, dword ptr [esp + 0x18]
        push    4
        lea    edx, [esp + 0x18]
        push    edx
        lea    ecx, [esp + 0x20]
        call    dword ptr [eax + 0x20]
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, 0x4b
        je    L_47b1
        cmp    eax, 0x74
        jne    L_47c1
        lea    ecx, [esp + 0x18]
        push    edi
        push    ecx
        call    FUN_00429860
        jmp    L_47bc
L_47b1:
        push    edi
        lea    edx, [esp + 0x1c]
        push    edx
L_47b7:
        call    FUN_00487900
L_47bc:
        add    esp, 8
        mov    esi, eax
L_47c1:
        push    ebp
        push    esi
        mov    ecx, ebx
        call    FUN_00416470
        lea    ecx, [esp + 0x18]
        call    FUN_004d21c0
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        pop    edi
        je    L_47ef
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_47ef
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_47ef:
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xf4
        ret    4
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x3c]
        sub    esp, 0xc8
        test    al, al
        je    L_4d26
        push    0x7729c8
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        mov    eax, dword ptr [esp + 0xd0]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        push    edx
        lea    ecx, [esp + 8]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412740
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040d9b0
        mov    eax, dword ptr [esp + 0xc]
        push    0
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_004d2000
        mov    al, byte ptr [g_007b4318]
        test    al, al
        je    L_48d8
        mov    eax, dword ptr [esp + 0x58]
        test    eax, eax
        je    L_4880
        mov    eax, dword ptr [esp + 0x38]
        test    eax, eax
        jbe    L_4880
        lea    ecx, [esp + 0x1c]
        call    FUN_004d24f0
        test    al, al
        jne    L_48d8
L_4880:
        mov    ecx, dword ptr [esp + 0xc]
        push    0
        push    ecx
        lea    ecx, [esp + 0x68]
        call    FUN_0041de80
        lea    ecx, [esp + 0x90]
        call    FUN_00412b30
        lea    edx, [esp + 0x60]
        push    edx
        lea    ecx, [esp + 0x94]
        call    FUN_00412bf0
        lea    eax, [esp + 0x90]
        push    eax
        lea    ecx, [esp + 0x64]
        push    ecx
        lea    ecx, [esp + 0x24]
        call    FUN_004d2680
        lea    ecx, [esp + 0x90]
        call    FUN_00412b60
        lea    ecx, [esp + 0x60]
        call    FUN_0041dec0
L_48d8:
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea    ecx, [esp + 0x2c]
        call    FUN_004d2310
        lea    edx, [esp + 0x2c]
        push    edx
        call    FUN_004933d0
        lea    eax, [esp + 0x30]
        push    eax
        call    FUN_00421e60
        mov    edx, dword ptr [esp + 0x34]
        add    esp, 8
        push    4
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x2c], eax
        call    dword ptr [edx + 0x20]
        mov    ebx, dword ptr [esp + 0xdc]
        mov    eax, dword ptr [esp + 0x18]
        mov    esi, dword ptr [ebx + 0x174]
        cmp    eax, esi
        mov    dword ptr [esp + 0x10], eax
        je    L_49a5
        test    eax, eax
        jbe    L_497e
        shl    eax, 2
        push    eax
        call    FUN_004084d0
        mov    ebp, dword ptr [ebx + 0x170]
        add    esp, 4
        test    ebp, ebp
        mov    edi, eax
        je    L_4976
        mov    ecx, dword ptr [esp + 0x10]
        cmp    ecx, esi
        jb    L_4951
        mov    ecx, esi
L_4951:
        mov    edx, ecx
        dec    ecx
        test    edx, edx
        je    L_496d
        mov    edx, ebp
        lea    eax, [edi + ecx*4]
        sub    edx, edi
        inc    ecx
L_4960:
        mov    esi, dword ptr [edx + eax]
        mov    dword ptr [eax], esi
        dec    ecx
        sub    eax, 4
        test    ecx, ecx
        ja    L_4960
L_496d:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_4976:
        mov    dword ptr [ebx + 0x170], edi
        jmp    L_4997
L_497e:
        mov    eax, dword ptr [ebx + 0x170]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebx + 0x170], 0
L_4997:
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [ebx + 0x174], ecx
L_49a5:
        mov    ebp, dword ptr [ebx + 0x17c]
        cmp    eax, ebp
        mov    dword ptr [esp + 0x10], eax
        je    L_4a75
        test    eax, eax
        jbe    L_4a4e
        lea    edx, [eax + eax*2]
        shl    edx, 2
        push    edx
        mov    edi, eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_49ec
        push    0x454eb0
        push    edi
        push    0xc
        push    esi
        call    FUN_00406c90
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ecx
        jmp    L_49f8
L_49ec:
        mov    dword ptr [esp + 0x14], 0
        mov    ecx, dword ptr [esp + 0x14]
L_49f8:
        mov    edx, dword ptr [ebx + 0x178]
        test    edx, edx
        je    L_4a46
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, ebp
        jb    L_4a0c
        mov    eax, ebp
L_4a0c:
        mov    esi, eax
        dec    eax
        test    esi, esi
        je    L_4a33
        lea    esi, [eax + eax*2]
        mov    ebp, edx
        lea    esi, [ecx + esi*4]
        sub    ebp, ecx
        lea    edi, [eax + 1]
L_4a20:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0040c410
        dec    edi
        sub    esi, 0xc
        test    edi, edi
        ja    L_4a20
L_4a33:
        mov    eax, dword ptr [ebx + 0x178]
        push    eax
        call    FUN_004084e0
        mov    ecx, dword ptr [esp + 0x18]
        add    esp, 4
L_4a46:
        mov    dword ptr [ebx + 0x178], ecx
        jmp    L_4a67
L_4a4e:
        mov    ecx, dword ptr [ebx + 0x178]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebx + 0x178], 0
L_4a67:
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [ebx + 0x17c], edx
L_4a75:
        mov    ebp, dword ptr [ebx + 0x184]
        cmp    eax, ebp
        mov    dword ptr [esp + 0x10], eax
        je    L_4b43
        test    eax, eax
        jbe    L_4b1c
        mov    edi, eax
        shl    eax, 4
        push    eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_4ab9
        push    0x49d3e0
        push    edi
        push    0x10
        push    esi
        call    FUN_00406c90
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ecx
        jmp    L_4ac5
L_4ab9:
        mov    dword ptr [esp + 0x14], 0
        mov    ecx, dword ptr [esp + 0x14]
L_4ac5:
        mov    edx, dword ptr [ebx + 0x180]
        test    edx, edx
        je    L_4b14
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, ebp
        jb    L_4ad9
        mov    eax, ebp
L_4ad9:
        mov    esi, eax
        dec    eax
        test    esi, esi
        je    L_4b01
        mov    esi, eax
        shl    esi, 4
        mov    ebp, edx
        add    esi, ecx
        sub    ebp, ecx
        lea    edi, [eax + 1]
L_4aee:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0049d3f0
        dec    edi
        sub    esi, 0x10
        test    edi, edi
        ja    L_4aee
L_4b01:
        mov    eax, dword ptr [ebx + 0x180]
        push    eax
        call    FUN_004084e0
        mov    ecx, dword ptr [esp + 0x18]
        add    esp, 4
L_4b14:
        mov    dword ptr [ebx + 0x180], ecx
        jmp    L_4b35
L_4b1c:
        mov    ecx, dword ptr [ebx + 0x180]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebx + 0x180], 0
L_4b35:
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [ebx + 0x184], edx
L_4b43:
        mov    ebp, dword ptr [ebx + 0x18c]
        cmp    eax, ebp
        mov    dword ptr [esp + 0x10], eax
        je    L_4bcb
        test    eax, eax
        jbe    L_4ba4
        shl    eax, 2
        push    eax
        call    FUN_004084d0
        mov    edi, dword ptr [ebx + 0x188]
        add    esp, 4
        test    edi, edi
        mov    esi, eax
        je    L_4b9c
        mov    ecx, dword ptr [esp + 0x10]
        cmp    ecx, ebp
        jb    L_4b77
        mov    ecx, ebp
L_4b77:
        mov    edx, ecx
        dec    ecx
        test    edx, edx
        je    L_4b93
        mov    edx, edi
        lea    eax, [esi + ecx*4]
        sub    edx, esi
        inc    ecx
L_4b86:
        mov    ebp, dword ptr [edx + eax]
        mov    dword ptr [eax], ebp
        dec    ecx
        sub    eax, 4
        test    ecx, ecx
        ja    L_4b86
L_4b93:
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_4b9c:
        mov    dword ptr [ebx + 0x188], esi
        jmp    L_4bbd
L_4ba4:
        mov    eax, dword ptr [ebx + 0x188]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebx + 0x188], 0
L_4bbd:
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [ebx + 0x18c], ecx
L_4bcb:
        xor    esi, esi
        test    eax, eax
        mov    dword ptr [esp + 0x14], 0x51ba43b7
        mov    dword ptr [esp + 0x10], 0
        jbe    L_4cc7
        mov    ebp, dword ptr [ebx + 0x180]
        mov    edx, dword ptr [ebx + 0x178]
        mov    dword ptr [esp + 0x20], edx
        lea    edi, [ebp + 0xc]
L_4bf8:
        mov    eax, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x2c]
        push    0xc
        push    eax
        lea    ecx, [esp + 0x34]
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esp + 0x2c]
        push    0xc
        push    ebp
        lea    ecx, [esp + 0x34]
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [esp + 0x2c]
        push    4
        push    edi
        lea    ecx, [esp + 0x34]
        call    dword ptr [edx + 0x20]
        fld    dword ptr [edi]
        fcomp    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 1
        je    L_4c39
        mov    eax, dword ptr [edi]
        mov    dword ptr [esp + 0x14], eax
L_4c39:
        fld    dword ptr [edi]
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4c4c
        mov    ecx, dword ptr [edi]
        mov    dword ptr [esp + 0x10], ecx
L_4c4c:
        mov    eax, dword ptr [esp + 0x24]
        cmp    eax, 0xe
        jge    L_4c5d
        push    eax
        lea    edx, [esp + 0x30]
        push    edx
        jmp    L_4c98
L_4c5d:
        mov    eax, dword ptr [esp + 0x2c]
        push    4
        lea    edx, [esp + 0x2c]
        push    edx
        lea    ecx, [esp + 0x34]
        call    dword ptr [eax + 0x20]
        mov    eax, dword ptr [esp + 0x28]
        cmp    eax, 0x4b
        je    L_4c8e
        cmp    eax, 0x74
        jne    L_4ca9
        mov    ecx, dword ptr [esp + 0x24]
        push    ecx
        lea    edx, [esp + 0x30]
        push    edx
        call    FUN_00429860
        jmp    L_4c9d
L_4c8e:
        mov    edx, dword ptr [esp + 0x24]
        push    edx
        lea    eax, [esp + 0x30]
        push    eax
L_4c98:
        call    FUN_00487900
L_4c9d:
        mov    ecx, dword ptr [ebx + 0x170]
        add    esp, 8
        mov    dword ptr [ecx + esi*4], eax
L_4ca9:
        mov    ecx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x18]
        inc    esi
        add    ecx, 0xc
        add    ebp, 0x10
        add    edi, 0x10
        cmp    esi, eax
        mov    dword ptr [esp + 0x20], ecx
        jb    L_4bf8
L_4cc7:
        xor    edx, edx
        test    eax, eax
        jbe    L_4cfe
        fld    dword ptr [esp + 0x10]
        mov    eax, dword ptr [ebx + 0x180]
        fsub    dword ptr [esp + 0x14]
        mov    ecx, dword ptr [ebx + 0x188]
        add    eax, 0xc
L_4ce4:
        fld    dword ptr [eax]
        inc    edx
        fsub    dword ptr [esp + 0x14]
        add    eax, 0x10
        add    ecx, 4
        fdiv st(0), st(1)
        fstp    dword ptr [ecx - 4]
        cmp    edx, dword ptr [esp + 0x18]
        jb    L_4ce4
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_4cfe:
        lea    ecx, [esp + 0x2c]
        call    FUN_004d21c0
        mov    eax, dword ptr [esp + 0x1c]
        test    eax, eax
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        je    L_4d26
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_4d26
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_4d26:
        add    esp, 0xc8
        ret    8
        nop    
        mov    eax, dword ptr [g_007dc128]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007dc128], eax
        jne    L_4d86
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_4d7c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ce98
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc124], esi
        jmp    L_4d86
L_4d7c:
        mov    dword ptr [g_007dc124], 0
L_4d86:
        mov    ecx, dword ptr [g_007dc124]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_4db1
        xor    ecx, ecx
        mov    cl, byte ptr [edi + 8]
        push    ecx
        push    0
        mov    ecx, esi
        call    FUN_00416990
        pop    edi
        mov    dword ptr [esi], 0x7729dc
        mov    eax, esi
        pop    esi
        ret    
L_4db1:
        pop    edi
        xor    eax, eax
        pop    esi
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        push    ecx
        call    FUN_00412ab0
        xor    edx, edx
        div    dword ptr [esi + 0x10]
        add    esp, 4
        pop    esi
        mov    eax, edx
        ret    4
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x7729a0
        call    FUN_00416320
        test    byte ptr [esp + 8], 1
        je    L_4dfe
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_4dfe:
        mov    eax, esi
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
        nop    
        nop    
        mov    eax, dword ptr [g_007b8ef8]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b8ef8], eax
        jne    L_4e66
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_4e5c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b8ef4], esi
        jmp    L_4e66
L_4e5c:
        mov    dword ptr [g_007b8ef4], 0
L_4e66:
        mov    ecx, dword ptr [g_007b8ef4]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_4ea4
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    edx, dword ptr [esp + 0x10]
        lea    ecx, [esi + 0x18]
        mov    dword ptr [ecx], 0
        push    edx
        mov    dword ptr [esi], 0x76d754
        call    FUN_00412740
        pop    edi
        mov    eax, esi
        pop    esi
        ret    8
L_4ea4:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
    }
}
