/*
 * FUN_004f1cf5 (extent 0x4f1cf5-0x4f1f1c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87d0;
extern int    g_007b87d4;
extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_00416bf0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004f1980(void);
extern void __cdecl FUN_004f19d0(void);
extern void __cdecl FUN_004f1a10(void);
extern void __cdecl FUN_004f1d50(void);
extern void __cdecl FUN_004f33c0(void);
extern void __cdecl FUN_004f33d0(void);
extern void __cdecl FUN_004f3410(void);

__declspec(naked) void FUN_004f1cf5(void)
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
        sub    esp, 0x44
        push    esi
        mov    esi, ecx
        mov    cx, word ptr [esi + 0x14]
        cmp    cx, word ptr [g_007db0ac]
        lea    eax, [esi + 0x14]
        jne    L_1d23
        mov    dx, word ptr [eax + 2]
        cmp    dx, word ptr [g_007db0ae]
        je    L_1d4b
L_1d23:
        push    1
        push    eax
        lea    ecx, [esp + 0xc]
        call    FUN_004d1f80
        lea    eax, [esp + 4]
        push    eax
        mov    ecx, esi
        call    FUN_004f1d50
        mov    ecx, esi
        call    FUN_004f1a10
        lea    ecx, [esp + 4]
        call    FUN_004d21c0
L_1d4b:
        pop    esi
        add    esp, 0x44
        ret    
        sub    esp, 8
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        mov    eax, dword ptr [edi]
        mov    esi, ecx
        push    4
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, eax
        dec    eax
        test    edx, edx
        mov    dword ptr [esp + 0x14], eax
        je    L_1de6
        push    ebx
L_1d79:
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esi + 0x4c]
        mov    ecx, dword ptr [esi + 0x50]
        mov    edx, dword ptr [ecx]
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        push    esi
        push    edi
        push    eax
        call    dword ptr [edx + 0x14]
        mov    edx, dword ptr [esi]
        mov    ebx, eax
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    eax, dword ptr [ebx + 0x1c]
        shr    eax, 2
        test    al, 1
        je    L_1dc5
        mov    ecx, dword ptr [esi + 0x50]
        push    ebx
        call    FUN_004f3410
L_1dc5:
        mov    ecx, dword ptr [ebx + 0x1c]
        shr    ecx, 1
        test    cl, 1
        je    L_1dd6
        mov    eax, dword ptr [esi + 0x4c]
        or    dword ptr [eax + 0x10], 0x40
L_1dd6:
        mov    eax, dword ptr [esp + 0x18]
        mov    edx, eax
        dec    eax
        test    edx, edx
        mov    dword ptr [esp + 0x18], eax
        jne    L_1d79
        pop    ebx
L_1de6:
        pop    edi
        pop    esi
        add    esp, 8
        ret    4
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    byte ptr [eax + 0x1c], 1
        push    eax
        je    L_1e06
        mov    ecx, dword ptr [ecx + 0x50]
        call    FUN_004f33d0
        ret    4
L_1e06:
        call    FUN_004f1980
        ret    4
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x50]
        push    edi
        call    FUN_004f33c0
        test    eax, eax
        jne    L_1e2d
        push    edi
        mov    ecx, esi
        call    FUN_004f19d0
L_1e2d:
        pop    edi
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
        mov    eax, dword ptr [g_007b87d4]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b87d4], eax
        jne    L_1ea6
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_1e9c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b87d0], esi
        jmp    L_1ea6
L_1e9c:
        mov    dword ptr [g_007b87d0], 0
L_1ea6:
        mov    ecx, dword ptr [g_007b87d0]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_1eda
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [edx]
        mov    dword ptr [esi + 0x18], eax
        pop    edi
        mov    dword ptr [esi], 0x76ceb0
        mov    eax, esi
        pop    esi
        ret    8
L_1eda:
        pop    edi
        xor    eax, eax
        pop    esi
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
        nop    
        push    esi
        push    edi
        push    0x14
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1f17
        push    edi
        mov    ecx, esi
        call    FUN_00416bf0
        pop    edi
        mov    dword ptr [esi], 0x774f44
        mov    eax, esi
        pop    esi
        ret    
L_1f17:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
    }
}
