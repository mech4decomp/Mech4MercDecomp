/*
 * FUN_004f491e (extent 0x4f491e-0x4f4b88) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc898;
extern int    g_007dc89c;
extern int    g_007dc8a0;
extern int    g_007dc8c8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd250(void);
extern void __cdecl FUN_004f1ae0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_005016b0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_004f491e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    ebx
        push    esi
        push    edi
        mov    ebx, ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov    ecx, ebx
        call    FUN_004dd250
        sub    eax, 5
        je    L_4968
        dec    eax
        jne    L_4989
        mov    esi, dword ptr [ebx + 0x18]
        add    esi, 0xd0
        mov    edi, 2
L_494c:
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        je    L_4959
        push    4
        call    FUN_004f1ae0
L_4959:
        add    esi, 4
        dec    edi
        jne    L_494c
        mov    eax, dword ptr [ebx + 0x14]
        pop    edi
        pop    esi
        pop    ebx
        ret    8
L_4968:
        mov    esi, dword ptr [ebx + 0x18]
        add    esi, 0xd0
        mov    edi, 2
L_4976:
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        je    L_4983
        push    5
        call    FUN_004f1ae0
L_4983:
        add    esi, 4
        dec    edi
        jne    L_4976
L_4989:
        mov    eax, dword ptr [ebx + 0x14]
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
        je    L_4a0b
        mov    ecx, dword ptr [g_007dc89c]
        mov    edx, dword ptr [g_007dc8c8]
        push    0x502c60
        push    0x5028b0
        push    0x5078e0
        push    0
        push    0x507870
        push    ecx
        push    0x507810
        push    0x4f4bc0
        push    0
        push    0
        push    edx
        push    0x775490
        push    0x1d3
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007dc8a0], eax
        jmp    L_4a15
L_4a0b:
        mov    dword ptr [g_007dc8a0], 0
L_4a15:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_4a43
        push    0x250
        push    0xe
        push    0x775484
        push    0xa
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x775474
        jmp    L_4a45
L_4a43:
        xor    esi, esi
L_4a45:
        mov    eax, dword ptr [g_007dc8a0]
        push    esi
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_4a80
        push    0x254
        push    1
        push    0x775468
        push    0xb
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x773234
        jmp    L_4a82
L_4a80:
        xor    esi, esi
L_4a82:
        mov    ecx, dword ptr [g_007dc8a0]
        push    esi
        add    ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_4abb
        push    0x50
        push    0xe
        push    0x775458
        push    0xd
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x7731e0
        jmp    L_4abd
L_4abb:
        xor    esi, esi
L_4abd:
        mov    edx, dword ptr [g_007dc8a0]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_4af6
        push    0x54
        push    5
        push    0x77544c
        push    0xe
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77543c
        jmp    L_4af8
L_4af6:
        xor    esi, esi
L_4af8:
        mov    eax, dword ptr [g_007dc8a0]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_4b30
        push    0x60
        push    7
        push    0x775430
        push    0xf
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775420
        jmp    L_4b32
L_4b30:
        xor    esi, esi
L_4b32:
        mov    ecx, dword ptr [g_007dc8a0]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_4b6b
        push    0x70
        push    0xe
        push    0x775404
        push    0x10
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x7731e0
        jmp    L_4b6d
L_4b6b:
        xor    esi, esi
L_4b6d:
        mov    edx, dword ptr [g_007dc8a0]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        mov    dword ptr [g_007dc898], 0
        pop    esi
        ret    
    }
}
