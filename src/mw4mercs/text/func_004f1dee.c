/*
 * FUN_004f1dee (extent 0x4f1dee-0x4f1f75) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87d0;
extern int    g_007b87d4;
extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007dc858;
extern int    g_007dc85c;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416bf0(void);
extern void __cdecl FUN_004f1980(void);
extern void __cdecl FUN_004f19d0(void);
extern void __cdecl FUN_004f33c0(void);
extern void __cdecl FUN_004f33d0(void);

__declspec(naked) void FUN_004f1dee(void)
{
    __asm {
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
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_1f6f
        mov    ecx, dword ptr [g_007dc85c]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_007dc858]
        jne    L_1f6f
        push    edi
        mov    edi, dword ptr [g_007dc85c]
        test    edi, edi
        je    L_1f5e
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_1f5e:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_007dc85c], 0
        pop    esi
        ret    4
L_1f6f:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
