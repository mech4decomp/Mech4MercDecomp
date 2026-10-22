/*
 * FUN_004d6802 (extent 0x4d6802-0x4d6ad4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87f8;
extern int    g_007b87fc;
extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007dc148;
extern int    g_007dc14c;
extern int    g_007dc150;
extern int    g_007dc154;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415510(void);
extern void __cdecl FUN_00415560(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416320(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004d6802(void)
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        add    ecx, 0x1c
        call    FUN_004179b0
        ret    4
        add    ecx, 0x14
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        call    FUN_00415510
        ret    4
        push    0x772d88
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_6842
        int 3    
L_6842:
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
        push    0x772de4
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_6862
        int 3    
L_6862:
        ret    0xc
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
        mov    eax, dword ptr [g_007dc14c]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007dc14c], eax
        jne    L_68d6
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_68cc
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ce98
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc148], esi
        jmp    L_68d6
L_68cc:
        mov    dword ptr [g_007dc148], 0
L_68d6:
        mov    ecx, dword ptr [g_007dc148]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_6901
        xor    ecx, ecx
        mov    cl, byte ptr [edi + 8]
        push    ecx
        push    0
        mov    ecx, esi
        call    FUN_00416990
        pop    edi
        mov    dword ptr [esi], 0x772e40
        mov    eax, esi
        pop    esi
        ret    
L_6901:
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
        mov    edx, dword ptr [esp + 4]
        movsx    eax, word ptr [edx]
        push    esi
        xor    esi, esi
        mov    si, word ptr [edx + 2]
        shl    eax, 0x10
        xor    edx, edx
        or    eax, esi
        div    dword ptr [ecx + 0x10]
        pop    esi
        mov    eax, edx
        ret    4
        nop    
        nop    
        mov    eax, dword ptr [g_007b87fc]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b87fc], eax
        jne    L_6986
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_697c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76cde8
        push    0x64
        push    0x64
        push    0x20
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b87f8], esi
        jmp    L_6986
L_697c:
        mov    dword ptr [g_007b87f8], 0
L_6986:
        mov    ecx, dword ptr [g_007b87f8]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_69c4
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00415560
        mov    edx, dword ptr [esp + 0x10]
        lea    ecx, [esi + 0x1c]
        mov    dword ptr [ecx], 0
        push    edx
        mov    dword ptr [esi], 0x76d224
        call    FUN_00412740
        pop    edi
        mov    eax, esi
        pop    esi
        ret    8
L_69c4:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dc154]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007dc154], eax
        jne    L_6a26
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_6a1c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ce98
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc150], esi
        jmp    L_6a26
L_6a1c:
        mov    dword ptr [g_007dc150], 0
L_6a26:
        mov    ecx, dword ptr [g_007dc150]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_6a51
        xor    ecx, ecx
        mov    cl, byte ptr [edi + 8]
        push    ecx
        push    0
        mov    ecx, esi
        call    FUN_00416990
        pop    edi
        mov    dword ptr [esi], 0x772e6c
        mov    eax, esi
        pop    esi
        ret    
L_6a51:
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
        mov    edx, dword ptr [esp + 4]
        movsx    eax, word ptr [edx]
        push    esi
        xor    esi, esi
        mov    si, word ptr [edx + 2]
        shl    eax, 0x10
        xor    edx, edx
        or    eax, esi
        div    dword ptr [ecx + 0x10]
        pop    esi
        mov    eax, edx
        ret    4
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
        je    L_6aab
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x772d80
        pop    esi
        ret    
L_6aab:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x772d38
        call    FUN_00416320
        test    byte ptr [esp + 8], 1
        je    L_6ace
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6ace:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
