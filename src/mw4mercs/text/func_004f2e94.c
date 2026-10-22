/*
 * FUN_004f2e94 (extent 0x4f2e94-0x4f3068) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007dc158;
extern int    g_007dc15c;
extern int    g_007dc870;
extern int    g_007dc874;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_004169c0(void);

__declspec(naked) void FUN_004f2e94(void)
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
        mov    eax, dword ptr [g_007dc15c]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007dc15c], eax
        jne    L_2ef6
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_2eec
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc158], esi
        jmp    L_2ef6
L_2eec:
        mov    dword ptr [g_007dc158], 0
L_2ef6:
        mov    ecx, dword ptr [g_007dc158]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_2f40
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    eax, dword ptr [esp + 0x10]
        mov    dx, word ptr [eax]
        mov    ax, word ptr [eax + 2]
        mov    word ptr [esi + 0x18], 0xffff
        mov    word ptr [esi + 0x1a], 0
        mov    dword ptr [esi], 0x772e98
        mov    word ptr [esi + 0x1a], ax
        pop    edi
        mov    word ptr [esi + 0x18], dx
        mov    eax, esi
        pop    esi
        ret    8
L_2f40:
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
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_2f9f
        mov    ecx, dword ptr [g_007dc870]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_007dc874]
        jne    L_2f9f
        push    edi
        mov    edi, dword ptr [g_007dc870]
        test    edi, edi
        je    L_2f8e
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_2f8e:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_007dc870], 0
        pop    esi
        ret    4
L_2f9f:
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
        mov    eax, dword ptr [esp + 4]
        mov    cx, word ptr [eax + 0x18]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    dx, word ptr [esi + 0x18]
        cmp    cx, dx
        jne    L_2ff5
        push    edi
        mov    di, word ptr [eax + 0x1a]
        cmp    di, word ptr [esi + 0x1a]
        pop    edi
        jne    L_2fd8
        xor    eax, eax
        pop    esi
        ret    8
L_2fd8:
        cmp    cx, dx
        jne    L_2ff5
        mov    ax, word ptr [eax + 0x1a]
        cmp    word ptr [esi + 0x1a], ax
        pop    esi
        sbb    eax, eax
        neg    eax
        neg    al
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
L_2ff5:
        xor    eax, eax
        cmp    cx, dx
        setg    al
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
        mov    eax, dword ptr [esp + 8]
        mov    dx, word ptr [eax + 0x18]
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    cx, word ptr [esi]
        cmp    cx, dx
        jne    L_3054
        push    edi
        mov    di, word ptr [esi + 2]
        cmp    di, word ptr [eax + 0x1a]
        pop    edi
        jne    L_3037
        xor    eax, eax
        pop    esi
        ret    8
L_3037:
        cmp    cx, dx
        jne    L_3054
        mov    cx, word ptr [esi + 2]
        cmp    word ptr [eax + 0x1a], cx
        pop    esi
        sbb    eax, eax
        neg    eax
        neg    al
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
L_3054:
        xor    eax, eax
        cmp    cx, dx
        setg    al
        neg    al
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
    }
}
