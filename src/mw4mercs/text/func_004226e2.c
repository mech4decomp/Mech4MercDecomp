/*
 * FUN_004226e2 (extent 0x4226e2-0x422c29) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c08;
extern int    g_007b9554;
extern int    g_007b95a4;
extern int    g_007b95c8;
extern int    g_007b95cc;
extern int    g_007b95d0;
extern int    g_007b95d4;
extern int    g_007b95d8;
extern int    g_007b95dc;
extern int    g_007b95e0;
extern int    g_007b95e4;
extern int    g_007b95ec;
extern int    g_007b95f0;
extern int    g_007b95f4;
extern int    g_007b95f8;
extern int    g_007b960c;
extern int    g_007b9610;
extern int    g_007b98cc;
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_00406cc0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004224c0(void);
extern void __cdecl FUN_00423b80(void);
extern void __cdecl FUN_00423bd0(void);
extern void __cdecl FUN_00423c40(void);
extern void __cdecl FUN_00423ca0(void);
extern void __cdecl FUN_00423d10(void);
extern void __cdecl FUN_00423d90(void);
extern void __cdecl FUN_00450b10(void);
extern void __cdecl FUN_004802a0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004226e2(void)
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
        mov    eax, dword ptr [g_007b95a4]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x38
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_2728
        mov    ecx, dword ptr [g_007b95c8]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004224c0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_2728:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
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
        nop    
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
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [ecx + 0x30]
        mov    ecx, dword ptr [edx + 0x10]
        dec    eax
        sar    eax, cl
        ret    
        nop    
        nop    
        nop    
        mov    edx, ecx
        mov    ecx, dword ptr [edx + 0x30]
        mov    ecx, dword ptr [ecx + 0x10]
        mov    edx, dword ptr [edx + 0x1c]
        mov    eax, 1
        shl    eax, cl
        dec    eax
        not    eax
        dec    edx
        and    eax, edx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x2c]
        test    eax, eax
        je    L_279e
        test    byte ptr [eax + 0x18], 1
        jne    L_279e
        mov    ecx, dword ptr [ecx + 0x20]
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [edx]
        push    ecx
        push    eax
        mov    ecx, edx
        call    dword ptr [esi]
        pop    esi
L_279e:
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_27bd
        mov    edx, dword ptr [ecx + 0x20]
        mov    dword ptr [eax], edx
L_27bd:
        mov    eax, dword ptr [ecx + 0x2c]
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
        push    ecx
        push    ebx
        push    esi
        push    edi
        push    0x14
        call    FUN_004084d0
        xor    edi, edi
        add    esp, 4
        cmp    eax, edi
        je    L_2800
        mov    ecx, dword ptr [g_007b8c08]
        push    ecx
        push    0x76ddcc
        push    0x54
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007b9610], eax
        jmp    L_2806
L_2800:
        mov    dword ptr [g_007b9610], edi
L_2806:
        mov    edx, dword ptr [g_007b9554]
        push    edx
        call    FUN_004084d0
        push    0x20
        mov    esi, eax
        call    FUN_004084d0
        add    esp, 8
        cmp    eax, edi
        je    L_2839
        mov    ecx, dword ptr [g_007b9554]
        push    edi
        push    ecx
        push    esi
        mov    ecx, eax
        call    FUN_0041e690
        mov    dword ptr [g_007b960c], eax
        jmp    L_283f
L_2839:
        mov    dword ptr [g_007b960c], edi
L_283f:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_2868
        push    0x100
        mov    ecx, esi
        mov    dword ptr [esi], edi
        mov    dword ptr [esi + 4], edi
        call    FUN_0040c2e0
        mov    dword ptr [g_007b95f8], esi
        jmp    L_286e
L_2868:
        mov    dword ptr [g_007b95f8], edi
L_286e:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_2897
        push    0x100
        mov    ecx, esi
        mov    dword ptr [esi], edi
        mov    dword ptr [esi + 4], edi
        call    FUN_00423bd0
        mov    dword ptr [g_007b95f4], esi
        jmp    L_289d
L_2897:
        mov    dword ptr [g_007b95f4], edi
L_289d:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_28c6
        push    0x800
        mov    ecx, esi
        mov    dword ptr [esi], edi
        mov    dword ptr [esi + 4], edi
        call    FUN_00423b80
        mov    dword ptr [g_007b95f0], esi
        jmp    L_28cc
L_28c6:
        mov    dword ptr [g_007b95f0], edi
L_28cc:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_28f5
        push    0x100
        mov    ecx, esi
        mov    dword ptr [esi], edi
        mov    dword ptr [esi + 4], edi
        call    FUN_00423c40
        mov    dword ptr [g_007b95ec], esi
        jmp    L_28fb
L_28f5:
        mov    dword ptr [g_007b95ec], edi
L_28fb:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_2921
        push    0x20
        mov    ecx, esi
        mov    dword ptr [esi], edi
        mov    dword ptr [esi + 4], edi
        call    FUN_00423d90
        mov    dword ptr [g_007b95e4], esi
        jmp    L_2927
L_2921:
        mov    dword ptr [g_007b95e4], edi
L_2927:
        xor    esi, esi
L_2929:
        push    0x70
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_2947
        mov    edx, dword ptr [g_007b98cc]
        push    edx
        mov    ecx, eax
        call    FUN_00450b10
        jmp    L_2949
L_2947:
        xor    eax, eax
L_2949:
        mov    ecx, dword ptr [g_007b95e4]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [esi + edx], eax
        add    esi, 4
        cmp    esi, 0x80
        jl    L_2929
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_2985
        push    0x20
        mov    ecx, esi
        mov    dword ptr [esi], edi
        mov    dword ptr [esi + 4], edi
        call    FUN_00423ca0
        mov    dword ptr [g_007b95e0], esi
        jmp    L_298b
L_2985:
        mov    dword ptr [g_007b95e0], edi
L_298b:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_29b1
        push    0x40
        mov    ecx, esi
        mov    dword ptr [esi], edi
        mov    dword ptr [esi + 4], edi
        call    FUN_00423ca0
        mov    dword ptr [g_007b95dc], esi
        jmp    L_29b7
L_29b1:
        mov    dword ptr [g_007b95dc], edi
L_29b7:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_29dd
        push    0x40
        mov    ecx, esi
        mov    dword ptr [esi], edi
        mov    dword ptr [esi + 4], edi
        call    FUN_00423d10
        mov    dword ptr [g_007b95d8], esi
        jmp    L_29e3
L_29dd:
        mov    dword ptr [g_007b95d8], edi
L_29e3:
        push    8
        call    FUN_004084d0
        mov    ebx, eax
        add    esp, 4
        cmp    ebx, edi
        je    L_2a34
        push    0x200
        mov    dword ptr [ebx], edi
        mov    dword ptr [ebx + 4], 0x40
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_2a28
        push    0x423b70
        push    0x40
        push    8
        push    esi
        call    FUN_00406c90
        mov    dword ptr [ebx], esi
        mov    dword ptr [g_007b95d4], ebx
        jmp    L_2a3a
L_2a28:
        xor    esi, esi
        mov    dword ptr [ebx], esi
        mov    dword ptr [g_007b95d4], ebx
        jmp    L_2a3a
L_2a34:
        mov    dword ptr [g_007b95d4], edi
L_2a3a:
        push    8
        call    FUN_004084d0
        mov    ebx, eax
        add    esp, 4
        cmp    ebx, edi
        je    L_2a8b
        push    0x80
        mov    dword ptr [ebx], edi
        mov    dword ptr [ebx + 4], 0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_2a7f
        push    0x423df0
        push    0x20
        push    4
        push    esi
        call    FUN_00406c90
        mov    dword ptr [ebx], esi
        mov    dword ptr [g_007b95d0], ebx
        jmp    L_2a91
L_2a7f:
        xor    esi, esi
        mov    dword ptr [ebx], esi
        mov    dword ptr [g_007b95d0], ebx
        jmp    L_2a91
L_2a8b:
        mov    dword ptr [g_007b95d0], edi
L_2a91:
        push    0x64
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_2af3
        lea    ebx, [eax + 4]
        push    ebp
        mov    dword ptr [eax], 2
        mov    dword ptr [esp + 0x10], ebx
        lea    esi, [ebx + 0x14]
        mov    ebp, 2
L_2ab5:
        push    0x423b00
        push    2
        mov    dword ptr [ebx], edi
        mov    dword ptr [esi - 0x10], edi
        mov    dword ptr [esi - 0xc], edi
        mov    dword ptr [esi - 8], edi
        push    8
        lea    eax, [esi + 0xc]
        mov    dword ptr [esi - 4], edi
        mov    dword ptr [esi], edi
        push    eax
        mov    dword ptr [esi + 4], edi
        mov    dword ptr [esi + 8], edi
        call    FUN_00406c90
        add    ebx, 0x30
        add    esi, 0x30
        dec    ebp
        jne    L_2ab5
        mov    edi, dword ptr [esp + 0x10]
        mov    dword ptr [g_007b95cc], edi
        pop    ebp
        jmp    L_2af9
L_2af3:
        mov    dword ptr [g_007b95cc], edi
L_2af9:
        push    8
        mov    ecx, edi
        call    FUN_004802a0
        mov    ecx, dword ptr [g_007b95cc]
        push    8
        add    ecx, 0x30
        call    FUN_004802a0
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
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
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        je    L_2bb5
        mov    eax, dword ptr [edi - 4]
        lea    ebp, [edi - 4]
        lea    esi, [eax + eax*2]
        shl    esi, 4
        add    esi, edi
        dec    eax
        js    L_2b9e
        lea    edi, [eax + 1]
L_2b47:
        push    0x423b10
        push    2
        sub    esi, 0x30
        push    8
        lea    eax, [esi + 0x20]
        push    eax
        call    FUN_00406cc0
        mov    eax, dword ptr [esi + 0x18]
        test    eax, eax
        je    L_2b6c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2b6c:
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        je    L_2b7c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2b7c:
        mov    eax, dword ptr [esi + 8]
        test    eax, eax
        je    L_2b8c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2b8c:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_2b9b
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2b9b:
        dec    edi
        jne    L_2b47
L_2b9e:
        test    bl, 1
        je    L_2bac
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_2bac:
        pop    edi
        pop    esi
        mov    eax, ebp
        pop    ebp
        pop    ebx
        ret    4
L_2bb5:
        lea    esi, [edi + 0x30]
        mov    ebp, 2
L_2bbd:
        mov    eax, dword ptr [esi - 8]
        sub    esi, 8
        test    eax, eax
        je    L_2bd0
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2bd0:
        dec    ebp
        jne    L_2bbd
        mov    eax, dword ptr [edi + 0x18]
        test    eax, eax
        je    L_2be3
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2be3:
        mov    eax, dword ptr [edi + 0x10]
        test    eax, eax
        je    L_2bf3
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2bf3:
        mov    eax, dword ptr [edi + 8]
        test    eax, eax
        je    L_2c03
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2c03:
        mov    eax, dword ptr [edi]
        test    eax, eax
        je    L_2c12
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2c12:
        test    bl, 1
        je    L_2c20
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_2c20:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
    }
}
