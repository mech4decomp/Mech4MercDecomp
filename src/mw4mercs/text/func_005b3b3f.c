/*
 * FUN_005b3b3f (extent 0x5b3b3f-0x5b40e6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f20f8;
extern int    g_007f20fc;
extern int    g_007f2104;
extern int    g_007f25c0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_005016b0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005b6830(void);

__declspec(naked) void FUN_005b3b3f(void)
{
    __asm {
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
        sub    esp, 0xc
        push    esi
        push    edi
        xor    edi, edi
        push    0xa8
        mov    dword ptr [esp + 0x14], edi
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3bc3
        mov    eax, dword ptr [g_007f20fc]
        mov    ecx, dword ptr [g_007f25c0]
        push    0x502c60
        push    0x5028b0
        push    0x678670
        push    0x62ec80
        push    0x678650
        push    eax
        push    0x678600
        push    0x5b4150
        push    edi
        push    edi
        push    ecx
        push    0x786540
        push    0x492
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x603510
        mov    dword ptr [g_007f2104], esi
        jmp    L_3bc9
L_3bc3:
        mov    dword ptr [g_007f2104], edi
L_3bc9:
        push    0xc
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3bfc
        lea    edx, [esp + 0xc]
        push    edx
        lea    eax, [esp + 0xf]
        push    eax
        lea    ecx, [esi + 8]
        mov    dword ptr [esi], edi
        mov    dword ptr [esi + 4], edi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_005b6830
        mov    dword ptr [g_007f20f8], esi
        jmp    L_3c02
L_3bfc:
        mov    dword ptr [g_007f20f8], edi
L_3c02:
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3c2f
        push    0x2f8
        push    2
        push    0x786530
        push    0x33
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3c31
L_3c2f:
        xor    esi, esi
L_3c31:
        mov    ecx, dword ptr [g_007f2104]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3c6d
        push    0x2fc
        push    3
        push    0x781f3c
        push    0x34
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77cabc
        jmp    L_3c6f
L_3c6d:
        xor    esi, esi
L_3c6f:
        mov    edx, dword ptr [g_007f2104]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3cab
        push    0x300
        push    3
        push    0x781f30
        push    0x35
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77cabc
        jmp    L_3cad
L_3cab:
        xor    esi, esi
L_3cad:
        mov    eax, dword ptr [g_007f2104]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3ce8
        push    0x304
        push    2
        push    0x781e80
        push    0x36
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3cea
L_3ce8:
        xor    esi, esi
L_3cea:
        mov    ecx, dword ptr [g_007f2104]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3d26
        push    0x308
        push    2
        push    0x781e60
        push    0x37
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3d28
L_3d26:
        xor    esi, esi
L_3d28:
        mov    edx, dword ptr [g_007f2104]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3d64
        push    0x320
        push    2
        push    0x786520
        push    0x38
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3d66
L_3d64:
        xor    esi, esi
L_3d66:
        mov    eax, dword ptr [g_007f2104]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3da1
        push    0x324
        push    2
        push    0x786508
        push    0x39
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3da3
L_3da1:
        xor    esi, esi
L_3da3:
        mov    ecx, dword ptr [g_007f2104]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3ddf
        push    0x30c
        push    3
        push    0x7864fc
        push    0x3a
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77cabc
        jmp    L_3de1
L_3ddf:
        xor    esi, esi
L_3de1:
        mov    edx, dword ptr [g_007f2104]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3e1d
        push    0x310
        push    3
        push    0x7864f0
        push    0x3b
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77cabc
        jmp    L_3e1f
L_3e1d:
        xor    esi, esi
L_3e1f:
        mov    eax, dword ptr [g_007f2104]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3e5a
        push    0x314
        push    2
        push    0x7864d0
        push    0x3c
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3e5c
L_3e5a:
        xor    esi, esi
L_3e5c:
        mov    ecx, dword ptr [g_007f2104]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3e98
        push    0x328
        push    2
        push    0x7864c0
        push    0x3d
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3e9a
L_3e98:
        xor    esi, esi
L_3e9a:
        mov    edx, dword ptr [g_007f2104]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3ed6
        push    0x554
        push    1
        push    0x7864b0
        push    0x16
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x773234
        jmp    L_3ed8
L_3ed6:
        xor    esi, esi
L_3ed8:
        mov    eax, dword ptr [g_007f2104]
        push    esi
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3f13
        push    0x558
        push    1
        push    0x7864a4
        push    0x17
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x773234
        jmp    L_3f15
L_3f13:
        xor    esi, esi
L_3f15:
        mov    ecx, dword ptr [g_007f2104]
        push    esi
        add    ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3f51
        push    0x55c
        push    1
        push    0x78649c
        push    0x18
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x773234
        jmp    L_3f53
L_3f51:
        xor    esi, esi
L_3f53:
        mov    edx, dword ptr [g_007f2104]
        push    esi
        lea    ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3f8f
        push    0x318
        push    2
        push    0x786490
        push    0x3e
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3f91
L_3f8f:
        xor    esi, esi
L_3f91:
        mov    eax, dword ptr [g_007f2104]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_3fcc
        push    0x31c
        push    2
        push    0x786484
        push    0x3f
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3fce
L_3fcc:
        xor    esi, esi
L_3fce:
        mov    ecx, dword ptr [g_007f2104]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_400d
        push    0x32c
        push    0x231
        push    0x786474
        push    0x40
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_400f
L_400d:
        xor    esi, esi
L_400f:
        mov    edx, dword ptr [g_007f2104]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_404e
        push    0x330
        push    0x231
        push    0x78645c
        push    0x41
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_4050
L_404e:
        xor    esi, esi
L_4050:
        mov    eax, dword ptr [g_007f2104]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_408e
        push    0x334
        push    0x231
        push    0x78644c
        push    0x42
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_4090
L_408e:
        xor    esi, esi
L_4090:
        mov    ecx, dword ptr [g_007f2104]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_40cf
        push    0x338
        push    0x231
        push    0x786434
        push    0x43
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_40d1
L_40cf:
        xor    esi, esi
L_40d1:
        mov    edx, dword ptr [g_007f2104]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop    edi
        pop    esi
        add    esp, 0xc
        ret    
    }
}
