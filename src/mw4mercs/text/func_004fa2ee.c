/*
 * FUN_004fa2ee (extent 0x4fa2ee-0x4fa641) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc690;
extern int    g_007dc8c4;
extern int    g_007dc8c8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_00501500(void);
extern void __cdecl FUN_005016b0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_004fa2ee(void)
{
    __asm {
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
        je    L_a35b
        mov    ecx, dword ptr [g_007dc8c4]
        mov    edx, dword ptr [g_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x507b30
        push    0
        push    0x507b10
        push    ecx
        push    0x507aa0
        push    0x4fa680
        push    0
        push    0
        push    edx
        push    0x775d90
        push    0x1cb
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007dc8c8], eax
        jmp    L_a365
L_a35b:
        mov    dword ptr [g_007dc8c8], 0
L_a365:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_a393
        push    0x168
        push    8
        push    0x775d7c
        push    6
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x775d6c
        jmp    L_a395
L_a393:
        xor    esi, esi
L_a395:
        mov    eax, dword ptr [g_007dc8c8]
        push    esi
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_a3d0
        push    0x180
        push    8
        push    0x775d54
        push    7
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x775d6c
        jmp    L_a3d2
L_a3d0:
        xor    esi, esi
L_a3d2:
        mov    ecx, dword ptr [g_007dc8c8]
        push    esi
        add    ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_a40e
        push    0x198
        push    8
        push    0x775d40
        push    8
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x775d6c
        jmp    L_a410
L_a40e:
        xor    esi, esi
L_a410:
        mov    edx, dword ptr [g_007dc8c8]
        push    esi
        lea    ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_a44c
        push    0x1b0
        push    8
        push    0x775d28
        push    9
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x775d6c
        jmp    L_a44e
L_a44c:
        xor    esi, esi
L_a44e:
        mov    eax, dword ptr [g_007dc8c8]
        push    esi
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_a484
        push    0xe0
        push    0x1ca
        push    0x773250
        push    1
        mov    ecx, eax
        call    FUN_00501500
        jmp    L_a486
L_a484:
        xor    eax, eax
L_a486:
        mov    ecx, dword ptr [g_007dc8c8]
        push    eax
        add    ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_a4bf
        push    0x1c
        push    2
        push    0x775d1c
        push    6
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_a4c1
L_a4bf:
        xor    esi, esi
L_a4c1:
        mov    edx, dword ptr [g_007dc8c8]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_a4fa
        push    0x20
        push    4
        push    0x775d0c
        push    7
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775cfc
        jmp    L_a4fc
L_a4fa:
        xor    esi, esi
L_a4fc:
        mov    eax, dword ptr [g_007dc8c8]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_a534
        push    0x2c
        push    4
        push    0x775ce4
        push    8
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775cfc
        jmp    L_a536
L_a534:
        xor    esi, esi
L_a536:
        mov    ecx, dword ptr [g_007dc8c8]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_a56f
        push    0x38
        push    4
        push    0x775ccc
        push    9
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775cfc
        jmp    L_a571
L_a56f:
        xor    esi, esi
L_a571:
        mov    edx, dword ptr [g_007dc8c8]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_a5aa
        push    0x44
        push    2
        push    0x775cb8
        push    0xa
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_a5ac
L_a5aa:
        xor    esi, esi
L_a5ac:
        mov    eax, dword ptr [g_007dc8c8]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_a5e4
        push    0x48
        push    2
        push    0x775ca0
        push    0xb
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_a5e6
L_a5e4:
        xor    esi, esi
L_a5e6:
        mov    ecx, dword ptr [g_007dc8c8]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_a62e
        push    0x4c
        push    2
        push    0x775c8c
        push    0xc
        mov    ecx, esi
        call    FUN_005008e0
        mov    edx, dword ptr [g_007dc8c8]
        push    esi
        lea    ecx, [edx + 0x74]
        mov    dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop    esi
        ret    
L_a62e:
        mov    edx, dword ptr [g_007dc8c8]
        xor    esi, esi
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop    esi
        ret    
    }
}
