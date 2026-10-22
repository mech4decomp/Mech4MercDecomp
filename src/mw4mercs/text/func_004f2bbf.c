/*
 * FUN_004f2bbf (extent 0x4f2bbf-0x4f2f47) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_007dc158;
extern int    g_007dc15c;
extern int    g_007dc7c0;
extern int    g_007dc86c;
extern int    g_007dc870;
extern int    g_007dc874;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416320(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004dab80(void);
extern void __cdecl FUN_004dad40(void);
extern void __cdecl FUN_004eaf40(void);
extern void __cdecl FUN_004eb250(void);
extern void __cdecl FUN_004eb320(void);
extern void __cdecl FUN_004f1a10(void);
extern void __cdecl FUN_004f1d50(void);
extern void __cdecl FUN_004f3360(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004f2bbf(void)
{
    __asm {
        nop    
        mov    edx, dword ptr [esp + 4]
        mov    eax, edx
        sub    eax, 0x22e
        je    L_2bfd
        dec    eax
        je    L_2be8
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        push    edx
        call    FUN_004f3360
        ret    0x10
L_2be8:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        call    FUN_004eaf40
        add    esp, 8
        ret    0x10
L_2bfd:
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        call    FUN_004eb250
        add    esp, 8
        ret    0x10
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
        sub    esp, 0x44
        push    ebx
        mov    ebx, dword ptr [esp + 0x4c]
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x14]
        mov    ecx, dword ptr [ebx + esi*4 + 0xcc]
        test    ecx, ecx
        je    L_2c61
        mov    edx, dword ptr [esp + 0x5c]
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x14]
        mov    al, byte ptr [esp + 0x5c]
        test    al, al
        je    L_2cf9
L_2c61:
        push    esi
        mov    ecx, ebx
        call    FUN_004dad40
        mov    ebp, eax
        mov    ax, word ptr [ebp]
        cmp    ax, word ptr [g_007db0ac]
        jne    L_2c85
        mov    cx, word ptr [ebp + 2]
        cmp    cx, word ptr [g_007db0ae]
        je    L_2cf9
L_2c85:
        mov    al, byte ptr [esp + 0x5c]
        test    al, al
        je    L_2cf9
        mov    edx, dword ptr [g_007dc86c]
        push    edx
        call    FUN_006f4950
        push    0x54
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_2cbe
        mov    ecx, dword ptr [g_007dc7c0]
        push    0
        push    ebp
        push    edi
        push    ebx
        push    ecx
        mov    ecx, eax
        call    FUN_004eb320
        mov    esi, eax
        jmp    L_2cc0
L_2cbe:
        xor    esi, esi
L_2cc0:
        mov    edx, dword ptr [edi + 0x14]
        push    esi
        push    edx
        mov    ecx, ebx
        call    FUN_004dab80
        push    1
        push    ebp
        lea    ecx, [esp + 0x18]
        call    FUN_004d1f80
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        call    FUN_004f1d50
        mov    ecx, esi
        call    FUN_004f1a10
        call    FUN_006f49a0
        lea    ecx, [esp + 0x10]
        call    FUN_004d21c0
L_2cf9:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x44
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
        mov    eax, dword ptr [g_007dc874]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007dc874], eax
        jne    L_2d76
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_2d6c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ce98
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc870], esi
        jmp    L_2d76
L_2d6c:
        mov    dword ptr [g_007dc870], 0
L_2d76:
        mov    ecx, dword ptr [g_007dc870]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_2da1
        xor    ecx, ecx
        mov    cl, byte ptr [edi + 8]
        push    ecx
        push    0
        mov    ecx, esi
        call    FUN_00416990
        pop    edi
        mov    dword ptr [esi], 0x775068
        mov    eax, esi
        pop    esi
        ret    
L_2da1:
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
        test    byte ptr [esp + 4], 2
        push    esi
        mov    esi, ecx
        je    L_2e35
        mov    eax, dword ptr [esi - 4]
        push    ebx
        lea    ebx, [esi - 4]
        lea    ecx, [eax + eax*4]
        lea    edx, [eax + ecx*2]
        dec    eax
        push    edi
        lea    edi, [esi + edx*4]
        js    L_2e1d
        push    ebp
        lea    esi, [edi + 0x10]
        lea    ebp, [eax + 1]
L_2df5:
        sub    esi, 0x2c
        lea    ecx, [esi + 8]
        sub    edi, 0x2c
        call    FUN_00417980
        mov    ecx, esi
        call    FUN_00417980
        lea    ecx, [esi - 8]
        call    FUN_00417980
        mov    ecx, edi
        call    FUN_00417980
        dec    ebp
        jne    L_2df5
        pop    ebp
L_2e1d:
        test    byte ptr [esp + 0x10], 1
        je    L_2e2d
        push    ebx
        call    FUN_004084e0
        add    esp, 4
L_2e2d:
        pop    edi
        mov    eax, ebx
        pop    ebx
        pop    esi
        ret    4
L_2e35:
        lea    ecx, [esi + 0x18]
        call    FUN_00417980
        lea    ecx, [esi + 0x10]
        call    FUN_00417980
        lea    ecx, [esi + 8]
        call    FUN_00417980
        mov    ecx, esi
        call    FUN_00417980
        test    byte ptr [esp + 8], 1
        je    L_2e64
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2e64:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x775040
        call    FUN_00416320
        test    byte ptr [esp + 8], 1
        je    L_2e8e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2e8e:
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
    }
}
