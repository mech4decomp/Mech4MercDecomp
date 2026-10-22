/*
 * FUN_00578270 (extent 0x578270-0x578a76) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern int    g_0080d9b4;
extern int    g_0080d9bc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566ef0(void);
extern void __cdecl FUN_00577610(void);
extern void __cdecl FUN_00578950(void);
extern void __cdecl FUN_005aea20(void);
extern void __cdecl FUN_005aeaa0(void);
extern void __cdecl FUN_005aeae0(void);
extern void __cdecl FUN_005fbe80(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00578270(void)
{
    __asm {
        sub    esp, 0xc
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_00577610
        mov    esi, eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 0xc], ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 8], ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 4], ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        sub    eax, 4
        test    esi, esi
        fld    dword ptr [eax + 4]
        mov    dword ptr [g_0080592c], eax
        je    L_8365
        push    ecx
        fstp    dword ptr [esp]
        fld    dword ptr [esp + 8]
        push    ecx
        fstp    dword ptr [esp]
        fld    dword ptr [esp + 0x10]
        push    ecx
        fstp    dword ptr [esp]
        fld    dword ptr [esp + 0x18]
        push    ecx
        fstp    dword ptr [esp]
        mov    ecx, esi
        call    FUN_005aea20
        jmp    L_8367
L_8365:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_8367:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        add    esp, 0xc
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_00577610
        test    eax, eax
        je    L_83b4
        mov    ecx, eax
        call    FUN_005aeaa0
L_83b4:
        xor    eax, eax
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
        sub    esp, 0x10
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_00577610
        mov    esi, eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 0xc], ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 8], ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 4], ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        test    esi, esi
        mov    dword ptr [g_0080592c], eax
        je    L_84e9
        fld    dword ptr [esp + 4]
        cmp    ecx, 1
        sete    al
        push    eax
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x14]
        fstp    dword ptr [esp]
        fld    dword ptr [esp + 0x18]
        push    ecx
        fstp    dword ptr [esp]
        fld    dword ptr [esp + 0x20]
        push    ecx
        fstp    dword ptr [esp]
        mov    ecx, esi
        call    FUN_005aeae0
L_84e9:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        add    esp, 0x10
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
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [esp + 0xc], edx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005669d0
        add    esp, 4
        test    eax, eax
        jne    L_85b8
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        pop    ecx
        ret    
L_85b8:
        fild    dword ptr [esp + 8]
        fstp    dword ptr [eax + edi*4 + 0x1e4]
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [esp + 0xc], edx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005669d0
        add    esp, 4
        test    eax, eax
        jne    L_8688
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        pop    ecx
        ret    
L_8688:
        fld    dword ptr [esp + 8]
        fstp    dword ptr [eax + edi*4 + 0x1e4]
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_005669d0
        add    esp, 4
        test    eax, eax
        jne    L_872a
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
L_872a:
        fld    dword ptr [eax + edi*4 + 0x1e4]
        call    FUN_0075db4a
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_8761
        push    0
        call    FUN_00563060
        add    esp, 4
L_8761:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
        nop    
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_005669d0
        add    esp, 4
        test    eax, eax
        jne    L_87fc
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        pop    ecx
        ret    
L_87fc:
        mov    esi, dword ptr [g_0080592c]
        fld    dword ptr [eax + edi*4 + 0x1e4]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        fstp    dword ptr [esp + 8]
        mov    dword ptr [g_0080592c], esi
        jb    L_8830
        push    0
        call    FUN_00563060
        add    esp, 4
L_8830:
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [esi], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b4]
        mov    dword ptr [g_00805908], ecx
        pop    esi
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
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        cmp    ecx, 1
        sete    al
        mov    byte ptr [esi + 0x7f2468], al
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    ebx
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        mov    eax, dword ptr [esi]
        mov    bl, byte ptr [eax + 0x7f2468]
        add    edx, 0xa000
        cmp    esi, edx
        jb    L_8925
        push    0
        call    FUN_00563060
        add    esp, 4
L_8925:
        xor    eax, eax
        test    bl, bl
        setne    al
        mov    dword ptr [esi], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        mov    ecx, dword ptr [esp + 0x10]
        push    esi
        push    0
        lea    eax, [esp + 8]
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x14], 0
        mov    dword ptr [esp + 0x18], 0
        call    FUN_00566ef0
        mov    esi, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
        add    esp, 0xc
        cmp    esi, eax
        je    L_89a9
        push    edi
        mov    edi, dword ptr [esp + 0x1c]
L_8991:
        mov    ecx, dword ptr [esi]
        push    edi
        call    FUN_005fbe80
        mov    eax, dword ptr [esp + 0xc]
        add    esi, 4
        cmp    esi, eax
        jne    L_8991
        mov    esi, dword ptr [esp + 8]
        pop    edi
L_89a9:
        test    esi, esi
        je    L_89b6
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_89b6:
        pop    esi
        add    esp, 0xc
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        cmp    ecx, 1
        mov    dword ptr [g_0080592c], eax
        sete    al
        push    esi
        mov    byte ptr [esp + 8], al
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        jne    L_8a44
        mov    ecx, dword ptr [esp + 4]
        push    ecx
        push    esi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_00578950
        add    esp, 8
        jmp    L_8a5d
L_8a44:
        push    esi
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        je    L_8a5d
        mov    ecx, dword ptr [esp + 4]
        push    ecx
        mov    ecx, eax
        call    FUN_005fbe80
L_8a5d:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        pop    ecx
        ret    
    }
}
