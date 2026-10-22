/*
 * FUN_005bf3e3 (extent 0x5bf3e3-0x5bf5e0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007dc8ac;
extern int    g_007dc8b0;
extern int    g_007f229c;
extern int    g_007f22a0;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_004d6550(void);

__declspec(naked) void FUN_005bf3e3(void)
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
        jmp    FUN_004d6550
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
        mov    eax, dword ptr [g_007dc8b0]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007dc8b0], eax
        jne    L_f466
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_f45c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc8ac], esi
        jmp    L_f466
L_f45c:
        mov    dword ptr [g_007dc8ac], 0
L_f466:
        mov    ecx, dword ptr [g_007dc8ac]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_f4ac
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    eax, dword ptr [esp + 0x10]
        mov    dl, byte ptr [eax]
        mov    ax, word ptr [eax + 2]
        mov    byte ptr [esi + 0x18], 0
        mov    word ptr [esi + 0x1a], 0
        mov    dword ptr [esi], 0x775b20
        mov    word ptr [esi + 0x1a], ax
        pop    edi
        mov    byte ptr [esi + 0x18], dl
        mov    eax, esi
        pop    esi
        ret    8
L_f4ac:
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
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_f4eb
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x78714c
        pop    esi
        ret    
L_f4eb:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_f53f
        mov    ecx, dword ptr [g_007f22a0]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_007f229c]
        jne    L_f53f
        push    edi
        mov    edi, dword ptr [g_007f22a0]
        test    edi, edi
        je    L_f52e
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_f52e:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_007f22a0], 0
        pop    esi
        ret    4
L_f53f:
        mov    eax, esi
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
        mov    edx, dword ptr [esp + 4]
        mov    al, byte ptr [edx + 0x18]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    cl, byte ptr [esi + 0x18]
        cmp    cl, al
        jne    L_f581
        push    edi
        mov    di, word ptr [edx + 0x1a]
        cmp    di, word ptr [esi + 0x1a]
        pop    edi
        jne    L_f575
        xor    eax, eax
        pop    esi
        ret    8
L_f575:
        cmp    cl, al
        jne    L_f581
        mov    ax, word ptr [edx + 0x1a]
        cmp    word ptr [esi + 0x1a], ax
L_f581:
        sbb    eax, eax
        neg    eax
        neg    al
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
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
        mov    edx, dword ptr [esp + 8]
        mov    cl, byte ptr [edx + 0x18]
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    al, byte ptr [esi]
        cmp    cl, al
        jne    L_f5d0
        push    edi
        mov    di, word ptr [esi + 2]
        cmp    di, word ptr [edx + 0x1a]
        pop    edi
        jne    L_f5c4
        xor    eax, eax
        pop    esi
        ret    8
L_f5c4:
        cmp    cl, al
        jne    L_f5d0
        mov    ax, word ptr [esi + 2]
        cmp    word ptr [edx + 0x1a], ax
L_f5d0:
        sbb    eax, eax
        neg    eax
        neg    al
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
    }
}
