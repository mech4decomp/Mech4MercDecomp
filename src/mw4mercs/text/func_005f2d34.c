/*
 * FUN_005f2d34 (extent 0x5f2d34-0x5f3549) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f25bc;
extern int    g_007f25c0;
extern int    g_007f268c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_00501500(void);
extern void __cdecl FUN_005016b0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005f2d34(void)
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
        je    L_2dbb
        mov    eax, dword ptr [g_007f25bc]
        mov    ecx, dword ptr [g_007f268c]
        push    0x502c60
        push    0x5028b0
        push    0x66a3c0
        push    0x62ec80
        push    0x66a150
        push    eax
        push    0x62df30
        push    0x5f3580
        push    0
        push    0
        push    ecx
        push    0x78a600
        push    0x423
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x6039e0
        mov    dword ptr [g_007f25c0], esi
        jmp    L_2dc5
L_2dbb:
        mov    dword ptr [g_007f25c0], 0
L_2dc5:
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_2ded
        push    0xe0
        push    0x424
        push    0x773250
        push    1
        mov    ecx, eax
        call    FUN_00501500
        jmp    L_2def
L_2ded:
        xor    eax, eax
L_2def:
        mov    edx, dword ptr [g_007f25c0]
        push    eax
        lea    ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2e2b
        push    0x43c
        push    2
        push    0x78a5f0
        push    0xd
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_2e2d
L_2e2b:
        xor    esi, esi
L_2e2d:
        mov    eax, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2e68
        push    0x440
        push    2
        push    0x78a5e0
        push    0xe
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_2e6a
L_2e68:
        xor    esi, esi
L_2e6a:
        mov    ecx, dword ptr [g_007f25c0]
        push    esi
        add    ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2ea6
        push    0x474
        push    2
        push    0x78a5cc
        push    0xf
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_2ea8
L_2ea6:
        xor    esi, esi
L_2ea8:
        mov    edx, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2ee4
        push    0x478
        push    2
        push    0x78a5bc
        push    0x10
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_2ee6
L_2ee4:
        xor    esi, esi
L_2ee6:
        mov    eax, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2f21
        push    0x47c
        push    2
        push    0x78a5a8
        push    0x11
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_2f23
L_2f21:
        xor    esi, esi
L_2f23:
        mov    ecx, dword ptr [g_007f25c0]
        push    esi
        add    ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2f5f
        push    0x480
        push    2
        push    0x78a594
        push    0x12
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_2f61
L_2f5f:
        xor    esi, esi
L_2f61:
        mov    edx, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2f9d
        push    0x41c
        push    1
        push    0x78a580
        push    0x13
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x773234
        jmp    L_2f9f
L_2f9d:
        xor    esi, esi
L_2f9f:
        mov    eax, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2fda
        push    0x420
        push    1
        push    0x78a570
        push    0x14
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x773234
        jmp    L_2fdc
L_2fda:
        xor    esi, esi
L_2fdc:
        mov    ecx, dword ptr [g_007f25c0]
        push    esi
        add    ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3018
        push    0x424
        push    1
        push    0x78a560
        push    0x15
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x773234
        jmp    L_301a
L_3018:
        xor    esi, esi
L_301a:
        mov    edx, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3056
        push    0x2b4
        push    3
        push    0x78a54c
        push    0x1f
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77cabc
        jmp    L_3058
L_3056:
        xor    esi, esi
L_3058:
        mov    eax, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3093
        push    0x2b0
        push    3
        push    0x78a538
        push    0x1e
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77cabc
        jmp    L_3095
L_3093:
        xor    esi, esi
L_3095:
        mov    ecx, dword ptr [g_007f25c0]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_30d1
        push    0x2c4
        push    2
        push    0x78a528
        push    0x20
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_30d3
L_30d1:
        xor    esi, esi
L_30d3:
        mov    edx, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_310f
        push    0x2c0
        push    2
        push    0x78a518
        push    0x21
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3111
L_310f:
        xor    esi, esi
L_3111:
        mov    eax, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_314c
        push    0x2bc
        push    2
        push    0x78a50c
        push    0x22
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_314e
L_314c:
        xor    esi, esi
L_314e:
        mov    ecx, dword ptr [g_007f25c0]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_318a
        push    0x2c8
        push    2
        push    0x78a500
        push    0x23
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_318c
L_318a:
        xor    esi, esi
L_318c:
        mov    edx, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_31c8
        push    0x2b8
        push    2
        push    0x78a4f4
        push    0x24
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_31ca
L_31c8:
        xor    esi, esi
L_31ca:
        mov    eax, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3205
        push    0x2d4
        push    2
        push    0x78a4e4
        push    0x25
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3207
L_3205:
        xor    esi, esi
L_3207:
        mov    ecx, dword ptr [g_007f25c0]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3243
        push    0x2d8
        push    2
        push    0x78a4d4
        push    0x26
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3245
L_3243:
        xor    esi, esi
L_3245:
        mov    edx, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3281
        push    0x2dc
        push    2
        push    0x78a4b4
        push    0x27
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3283
L_3281:
        xor    esi, esi
L_3283:
        mov    eax, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_32be
        push    0x2e0
        push    2
        push    0x78a494
        push    0x28
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_32c0
L_32be:
        xor    esi, esi
L_32c0:
        mov    ecx, dword ptr [g_007f25c0]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_32fc
        push    0x2e4
        push    2
        push    0x789234
        push    0x29
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_32fe
L_32fc:
        xor    esi, esi
L_32fe:
        mov    edx, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_333a
        push    0x2cc
        push    2
        push    0x78a484
        push    0x2a
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_333c
L_333a:
        xor    esi, esi
L_333c:
        mov    eax, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3377
        push    0x2d0
        push    2
        push    0x78a46c
        push    0x2b
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3379
L_3377:
        xor    esi, esi
L_3379:
        mov    ecx, dword ptr [g_007f25c0]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_33b5
        push    0x29c
        push    2
        push    0x78a460
        push    0x2c
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_33b7
L_33b5:
        xor    esi, esi
L_33b7:
        mov    edx, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_33f3
        push    0x2a0
        push    2
        push    0x78a448
        push    0x2d
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_33f5
L_33f3:
        xor    esi, esi
L_33f5:
        mov    eax, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3430
        push    0x2a4
        push    2
        push    0x78a43c
        push    0x2e
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3432
L_3430:
        xor    esi, esi
L_3432:
        mov    ecx, dword ptr [g_007f25c0]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_346e
        push    0x2a8
        push    2
        push    0x78a430
        push    0x2f
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_3470
L_346e:
        xor    esi, esi
L_3470:
        mov    edx, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_34ac
        push    0x2ac
        push    2
        push    0x78a424
        push    0x30
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_34ae
L_34ac:
        xor    esi, esi
L_34ae:
        mov    eax, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_34e9
        push    0x2f0
        push    1
        push    0x78a418
        push    0x31
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775588
        jmp    L_34eb
L_34e9:
        xor    esi, esi
L_34eb:
        mov    ecx, dword ptr [g_007f25c0]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3536
        push    0x2f4
        push    2
        push    0x78a40c
        push    0x32
        mov    ecx, esi
        call    FUN_005008e0
        mov    edx, dword ptr [g_007f25c0]
        push    esi
        lea    ecx, [edx + 0x74]
        mov    dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop    esi
        ret    
L_3536:
        mov    edx, dword ptr [g_007f25c0]
        xor    esi, esi
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop    esi
        ret    
    }
}
