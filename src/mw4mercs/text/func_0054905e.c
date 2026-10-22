/*
 * FUN_0054905e (extent 0x54905e-0x5498cb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b2abc;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc728;
extern int    g_007dc8c0;
extern int    g_007ddd70;
extern int    g_007ddd74;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_004fbd40(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_005016b0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005c0060(void);
extern void __cdecl FUN_005c0070(void);
extern void __cdecl FUN_005c0080(void);

__declspec(naked) void FUN_0054905e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x10]
        mov    edi, dword ptr [esi + 0x18]
        mov    ebx, dword ptr [esi + 0x14]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004fbd40
        sub    eax, 5
        je    L_90b9
        dec    eax
        je    L_90a0
        dec    eax
        jne    L_90b9
        cmp    ebx, 7
        je    L_90ce
        mov    ecx, dword ptr [edi + 0x2d0]
        call    FUN_005c0070
        mov    eax, dword ptr [esi + 0x14]
        pop    edi
        pop    esi
        pop    ebx
        ret    8
L_90a0:
        cmp    ebx, 6
        je    L_90ce
        mov    ecx, dword ptr [edi + 0x2d0]
        call    FUN_005c0060
        mov    eax, dword ptr [esi + 0x14]
        pop    edi
        pop    esi
        pop    ebx
        ret    8
L_90b9:
        cmp    ebx, 6
        je    L_90c3
        cmp    ebx, 7
        jne    L_90ce
L_90c3:
        mov    ecx, dword ptr [edi + 0x2d0]
        call    FUN_005c0080
L_90ce:
        mov    eax, dword ptr [esi + 0x14]
        pop    edi
        pop    esi
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
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9151
        mov    ecx, dword ptr [g_007ddd70]
        mov    edx, dword ptr [g_007dc8c0]
        push    0x502c60
        push    0x5028b0
        push    0x630030
        push    0
        push    0x630010
        push    ecx
        push    0x62fde0
        push    0x549900
        push    0x77b9d8
        push    0x90
        push    edx
        push    0x77cc9c
        push    0x425
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007ddd74], eax
        jmp    L_915b
L_9151:
        mov    dword ptr [g_007ddd74], 0
L_915b:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9189
        push    0x38c
        push    2
        push    0x77cc8c
        push    6
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_918b
L_9189:
        xor    esi, esi
L_918b:
        mov    eax, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_91c6
        push    0x390
        push    2
        push    0x77cc7c
        push    7
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_91c8
L_91c6:
        xor    esi, esi
L_91c8:
        mov    ecx, dword ptr [g_007ddd74]
        push    esi
        add    ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9204
        push    0x394
        push    2
        push    0x77cc6c
        push    8
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_9206
L_9204:
        xor    esi, esi
L_9206:
        mov    edx, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9242
        push    0x398
        push    2
        push    0x77cc58
        push    9
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_9244
L_9242:
        xor    esi, esi
L_9244:
        mov    eax, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_927f
        push    0x39c
        push    2
        push    0x77cc4c
        push    0xa
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_9281
L_927f:
        xor    esi, esi
L_9281:
        mov    ecx, dword ptr [g_007ddd74]
        push    esi
        add    ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_92bd
        push    0x494
        push    1
        push    0x77cc40
        push    0xb
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x773234
        jmp    L_92bf
L_92bd:
        xor    esi, esi
L_92bf:
        mov    edx, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_92fb
        push    0x498
        push    2
        push    0x7722d0
        push    0xc
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_92fd
L_92fb:
        xor    esi, esi
L_92fd:
        mov    eax, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9338
        push    0x49c
        push    2
        push    0x7722c4
        push    0xd
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_933a
L_9338:
        xor    esi, esi
L_933a:
        mov    ecx, dword ptr [g_007ddd74]
        push    esi
        add    ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9376
        push    0x4a0
        push    2
        push    0x7722b8
        push    0xe
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_9378
L_9376:
        xor    esi, esi
L_9378:
        mov    edx, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_93b4
        push    0x4a4
        push    2
        push    0x7722ac
        push    0xf
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7731fc
        jmp    L_93b6
L_93b4:
        xor    esi, esi
L_93b6:
        mov    eax, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_93ee
        push    0x24
        push    5
        push    0x77cc2c
        push    7
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77543c
        jmp    L_93f0
L_93ee:
        xor    esi, esi
L_93f0:
        mov    ecx, dword ptr [g_007ddd74]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9429
        push    0x54
        push    7
        push    0x77cc18
        push    0xb
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775420
        jmp    L_942b
L_9429:
        xor    esi, esi
L_942b:
        mov    edx, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9464
        push    0x30
        push    5
        push    0x77cbf4
        push    8
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77543c
        jmp    L_9466
L_9464:
        xor    esi, esi
L_9466:
        mov    eax, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_949e
        push    0x3c
        push    5
        push    0x77cbd0
        push    9
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77543c
        jmp    L_94a0
L_949e:
        xor    esi, esi
L_94a0:
        mov    ecx, dword ptr [g_007ddd74]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_94d9
        push    0x48
        push    5
        push    0x77cbac
        push    0xa
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77543c
        jmp    L_94db
L_94d9:
        xor    esi, esi
L_94db:
        mov    edx, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9514
        push    0x64
        push    2
        push    0x77cb98
        push    0xc
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_9516
L_9514:
        xor    esi, esi
L_9516:
        mov    eax, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_954e
        push    0x68
        push    2
        push    0x77cb7c
        push    0xd
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_9550
L_954e:
        xor    esi, esi
L_9550:
        mov    ecx, dword ptr [g_007ddd74]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9589
        push    0x6c
        push    2
        push    0x77cb60
        push    0xe
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_958b
L_9589:
        xor    esi, esi
L_958b:
        mov    edx, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_95c4
        push    0x70
        push    2
        push    0x77cb44
        push    0xf
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_95c6
L_95c4:
        xor    esi, esi
L_95c6:
        mov    eax, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9601
        push    0x94
        push    2
        push    0x77cb24
        push    0x16
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_9603
L_9601:
        xor    esi, esi
L_9603:
        mov    ecx, dword ptr [g_007ddd74]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_963f
        push    0x98
        push    2
        push    0x77cb08
        push    0x17
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_9641
L_963f:
        xor    esi, esi
L_9641:
        mov    edx, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_967d
        push    0x9c
        push    2
        push    0x77cae8
        push    0x18
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_967f
L_967d:
        xor    esi, esi
L_967f:
        mov    eax, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_96b7
        push    0x20
        push    1
        push    0x77cae0
        push    6
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775588
        jmp    L_96b9
L_96b7:
        xor    esi, esi
L_96b9:
        mov    ecx, dword ptr [g_007ddd74]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_96f2
        push    0x74
        push    3
        push    0x77cacc
        push    0x10
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77cabc
        jmp    L_96f4
L_96f2:
        xor    esi, esi
L_96f4:
        mov    edx, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_972d
        push    0x78
        push    5
        push    0x77caa4
        push    0x11
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77543c
        jmp    L_972f
L_972d:
        xor    esi, esi
L_972f:
        mov    eax, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_976a
        push    0x84
        push    2
        push    0x77ca98
        push    0x12
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_976c
L_976a:
        xor    esi, esi
L_976c:
        mov    ecx, dword ptr [g_007ddd74]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_97ab
        push    0x88
        push    0x231
        push    0x77ca84
        push    0x13
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_97ad
L_97ab:
        xor    esi, esi
L_97ad:
        mov    edx, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_97e9
        push    0x8c
        push    2
        push    0x77ca70
        push    0x14
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_97eb
L_97e9:
        xor    esi, esi
L_97eb:
        mov    eax, dword ptr [g_007ddd74]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9826
        push    0x90
        push    2
        push    0x77ca48
        push    0x15
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_9828
L_9826:
        xor    esi, esi
L_9828:
        mov    ecx, dword ptr [g_007ddd74]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        mov    dword ptr [g_007b2abc], 0x549850
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
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x18]
        lea    eax, [ecx + 0x18]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x178]
        mov    edx, dword ptr [ecx + 0x564]
        sub    esp, 0x24
        test    edx, edx
        jne    L_988c
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x170]
        jmp    L_988e
L_988c:
        xor    eax, eax
L_988e:
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [esp + 0x1c], eax
        lea    eax, [esp + 0xc]
        mov    dword ptr [esp + 0xc], ecx
        mov    ecx, dword ptr [g_007dc728]
        __emit 0x8D  // 141 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        push    eax
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x24], 0x2000
        call    FUN_004e2f40
        test    eax, eax
        setne    al
        add    esp, 0x24
        ret    
    }
}
