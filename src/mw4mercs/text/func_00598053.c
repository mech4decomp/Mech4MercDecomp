/*
 * FUN_00598053 (extent 0x598053-0x5982bc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87d0;
extern int    g_007b87d4;
extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f1f8c;
extern int    g_007f1f90;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00416bf0(void);

__declspec(naked) void FUN_00598053(void)
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
        push    ecx
        mov    eax, dword ptr [ecx + 0x48]
        test    eax, eax
        push    esi
        mov    dword ptr [esp + 4], 0
        je    L_8091
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0x38]
        xor    edx, esi
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        jmp    L_80bb
L_8091:
        lea    edx, [ecx + 0x58]
        push    edx
        add    ecx, 0x18
        call    FUN_00416b60
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0x1c]
        xor    edx, esi
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
L_80bb:
        push    eax
        call    dword ptr [edx + 0x34]
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_00412780
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        mov    esi, dword ptr [esp + 0xc]
        mov    dword ptr [esi], eax
        je    L_80f5
        inc    byte ptr [eax - 1]
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_80f5
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_80f5
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_80f5:
        mov    eax, esi
        pop    esi
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
        mov    dword ptr [eax + 4], 0
        mov    dword ptr [eax], 0
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
        mov    eax, dword ptr [g_007f1f90]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007f1f90], eax
        jne    L_8176
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_816c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x20
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007f1f8c], esi
        jmp    L_8176
L_816c:
        mov    dword ptr [g_007f1f8c], 0
L_8176:
        mov    ecx, dword ptr [g_007f1f8c]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_81b0
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [esi + 0x18], edx
        mov    dword ptr [esi + 0x1c], eax
        pop    edi
        mov    dword ptr [esi], 0x7823b4
        mov    eax, esi
        pop    esi
        ret    8
L_81b0:
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
        mov    eax, dword ptr [g_007b87d4]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b87d4], eax
        jne    L_8216
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_820c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b87d0], esi
        jmp    L_8216
L_820c:
        mov    dword ptr [g_007b87d0], 0
L_8216:
        mov    ecx, dword ptr [g_007b87d0]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_824a
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
L_824a:
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
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_828b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x7830d8
        pop    esi
        ret    
L_828b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    esi
        push    edi
        push    0x14
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_82b7
        push    edi
        mov    ecx, esi
        call    FUN_00416bf0
        pop    edi
        mov    dword ptr [esi], 0x782e08
        mov    eax, esi
        pop    esi
        ret    
L_82b7:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
    }
}
