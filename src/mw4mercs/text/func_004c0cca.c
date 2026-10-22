/*
 * FUN_004c0cca (extent 0x4c0cca-0x4c1400) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b37f8;
extern int    g_007b8810;
extern int    g_007da9e8;
extern char   g_007daae8;
extern char   g_007daae9;
extern char   g_007daaea;
extern int    g_007daaec;
extern int    g_007daaf0;
extern int    g_007dab18;
extern int    g_007dab1c;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_004c8460(void);
extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0070f090(void);

__declspec(naked) void FUN_004c0cca(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x771408
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_0ce2
        int 3    
L_0ce2:
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
        push    0x771408
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_0d02
        int 3    
L_0d02:
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
        sub    esp, 8
        mov    eax, dword ptr [ecx + 0x14]
        mov    dword ptr [esp + 4], eax
        xor    eax, eax
        mov    ax, word ptr [ecx + 0x14c]
        push    ebx
        xor    bl, bl
        test    ax, ax
        push    edi
        jbe    L_0d8c
        mov    edi, dword ptr [esp + 0x14]
        push    ebp
        mov    ebp, dword ptr [ecx + 0x144]
        and    eax, 0xffff
        push    esi
        mov    dword ptr [esp + 0x10], eax
L_0d41:
        mov    esi, dword ptr [ebp]
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x134]
        test    al, al
        je    L_0d71
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x18]
        test    al, al
        je    L_0d71
        mov    eax, dword ptr [edi + 8]
        test    eax, eax
        mov    bl, 1
        je    L_0d71
        mov    dword ptr [esp + 0x14], eax
        mov    dword ptr [edi + 8], 0
L_0d71:
        mov    eax, dword ptr [esp + 0x10]
        add    ebp, 4
        dec    eax
        mov    dword ptr [esp + 0x10], eax
        jne    L_0d41
        test    bl, bl
        pop    esi
        pop    ebp
        je    L_0d8c
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [edi + 8], eax
L_0d8c:
        pop    edi
        mov    al, bl
        pop    ebx
        add    esp, 8
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
        push    ecx
        push    ebp
        mov    ebp, ecx
        xor    eax, eax
        mov    ax, word ptr [ebp + 0x14c]
        test    ax, ax
        jbe    L_0dfd
        push    ebx
        mov    ebx, dword ptr [ebp + 0x144]
        push    esi
        and    eax, 0xffff
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x10], eax
L_0dc8:
        mov    esi, dword ptr [ebx]
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x138]
        test    al, 2
        je    L_0de5
        mov    eax, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0x1c]
        test    eax, eax
        je    L_0de5
        mov    ebp, eax
L_0de5:
        mov    eax, dword ptr [esp + 0x10]
        add    ebx, 4
        dec    eax
        mov    dword ptr [esp + 0x10], eax
        jne    L_0dc8
        pop    edi
        pop    esi
        pop    ebx
        mov    eax, ebp
        pop    ebp
        pop    ecx
        ret    4
L_0dfd:
        mov    eax, ebp
        pop    ebp
        pop    ecx
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
        push    ecx
        xor    eax, eax
        mov    ax, word ptr [ecx + 0x14c]
        test    ax, ax
        jbe    L_0e67
        push    ebx
        mov    ebx, dword ptr [ecx + 0x144]
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        push    esi
        and    eax, 0xffff
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x10], eax
L_0e3a:
        mov    esi, dword ptr [ebx]
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x130]
        cmp    eax, -1
        je    L_0e55
        push    eax
        push    ebp
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x13c]
L_0e55:
        mov    eax, dword ptr [esp + 0x10]
        add    ebx, 4
        dec    eax
        mov    dword ptr [esp + 0x10], eax
        jne    L_0e3a
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
L_0e67:
        pop    ecx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x38
        push    ebx
        push    esi
        mov    esi, ecx
        push    edi
        lea    ecx, [esp + 0xc]
        call    FUN_00491280
        mov    edi, dword ptr [esi + 0x140]
        mov    ebx, dword ptr [esp + 0x4c]
        push    edi
        push    ebx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x2c], 0
        call    FUN_00491670
        add    edi, 0x18
        push    edi
        add    ebx, 0x18
        lea    eax, [esp + 0x28]
        push    ebx
        push    eax
        call    FUN_004c8460
        xor    eax, eax
        mov    ax, word ptr [esi + 0x14c]
        add    esp, 0xc
        test    ax, ax
        jbe    L_0ef9
        mov    edi, dword ptr [esi + 0x144]
        mov    ebx, dword ptr [esp + 0x48]
        and    eax, 0xffff
        push    ebp
        mov    ebp, eax
L_0ed3:
        mov    esi, dword ptr [edi]
        push    ebx
        mov    ecx, esi
        call    dword ptr [esi + 0x130]
        cmp    eax, -1
        je    L_0ef2
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        push    ebx
        mov    ecx, esi
        call    dword ptr [esi + 0x13c]
L_0ef2:
        add    edi, 4
        dec    ebp
        jne    L_0ed3
        pop    ebp
L_0ef9:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x38
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
        nop    
        nop    
        nop    
        xor    eax, eax
        mov    ax, word ptr [ecx + 0x14c]
        test    ax, ax
        jbe    L_0f3c
        push    esi
        mov    esi, dword ptr [ecx + 0x144]
        and    eax, 0xffff
        push    edi
        mov    edi, eax
L_0f2d:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x24]
        add    esi, 4
        dec    edi
        jne    L_0f2d
        pop    edi
        pop    esi
L_0f3c:
        ret    
        nop    
        nop    
        nop    
        xor    eax, eax
        mov    ax, word ptr [ecx + 0x14c]
        test    ax, ax
        jbe    L_0f7a
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    ebp
        mov    ebp, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [ecx + 0x144]
        and    eax, 0xffff
        push    edi
        mov    edi, eax
L_0f67:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    ebx
        push    ebp
        call    dword ptr [eax + 0x28]
        add    esi, 4
        dec    edi
        jne    L_0f67
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
L_0f7a:
        ret    8
        nop    
        nop    
        nop    
        push    edi
        xor    edi, edi
        mov    di, word ptr [ecx + 0x14c]
        test    di, di
        jbe    L_0fbd
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        push    esi
        mov    esi, dword ptr [ecx + 0x144]
        and    edi, 0xffff
L_0fa6:
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [ecx]
        push    ebx
        push    ebp
        push    edx
        call    dword ptr [eax + 0x2c]
        add    esi, 4
        dec    edi
        jne    L_0fa6
        pop    esi
        pop    ebp
        pop    ebx
L_0fbd:
        pop    edi
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
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x18]
        shr    eax, 0xe
        not    al
        test    al, 1
        push    edi
        je    L_1019
        xor    edi, edi
        mov    di, word ptr [ecx + 0x14c]
        test    di, di
        jbe    L_1019
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        push    esi
        mov    esi, dword ptr [ecx + 0x144]
        and    edi, 0xffff
L_1002:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, dword ptr [ecx]
        push    ebx
        push    ebp
        push    eax
        call    dword ptr [edx + 0x30]
        add    esi, 4
        dec    edi
        jne    L_1002
        pop    esi
        pop    ebp
        pop    ebx
L_1019:
        pop    edi
        ret    0xc
        nop    
        nop    
        nop    
        push    edi
        xor    edi, edi
        mov    di, word ptr [ecx + 0x14c]
        test    di, di
        jbe    L_1062
        push    ebx
        mov    ebx, dword ptr [esp + 0x18]
        push    ebp
        mov    ebp, dword ptr [esp + 0x18]
        push    esi
        mov    esi, dword ptr [ecx + 0x144]
        and    edi, 0xffff
L_1046:
        mov    edx, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    ebx
        push    ebp
        push    edx
        mov    edx, dword ptr [esp + 0x20]
        push    edx
        call    dword ptr [eax + 0x34]
        add    esi, 4
        dec    edi
        jne    L_1046
        pop    esi
        pop    ebp
        pop    ebx
L_1062:
        pop    edi
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
        mov    ax, word ptr [ecx + 0x14c]
        push    edi
        xor    edi, edi
        test    ax, ax
        jbe    L_10a3
        push    ebx
        and    eax, 0xffff
        push    esi
        mov    esi, dword ptr [ecx + 0x144]
        mov    ebx, eax
L_108e:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x20]
        add    edi, eax
        add    esi, 4
        dec    ebx
        jne    L_108e
        pop    esi
        pop    ebx
        mov    eax, edi
        pop    edi
        ret    
L_10a3:
        mov    eax, edi
        pop    edi
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
        mov    ax, word ptr [ecx + 0x14c]
        sub    esp, 0x18
        test    ax, ax
        jbe    L_1204
        mov    ecx, dword ptr [ecx + 0x144]
        push    ebx
        push    ebp
        push    esi
        and    eax, 0xffff
        push    edi
        mov    dword ptr [esp + 0x14], ecx
        mov    dword ptr [esp + 0x18], eax
L_10da:
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [edx]
        xor    esi, esi
        lea    edx, [esp + 0x20]
        mov    dword ptr [esp + 0x20], esi
        mov    dword ptr [esp + 0x24], esi
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x3c]
        mov    ebx, dword ptr [esp + 0x2c]
        mov    edi, dword ptr [ebx + 4]
        mov    eax, dword ptr [esp + 0x24]
        lea    ebp, [eax + edi]
        cmp    ebp, edi
        mov    dword ptr [esp + 0x1c], edi
        je    L_119d
        cmp    ebp, esi
        jbe    L_118d
        lea    ecx, [ebp + ebp*2]
        shl    ecx, 2
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, esi
        je    L_1135
        lea    edx, [ebp - 1]
        mov    ecx, eax
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0x10], ecx
        jmp    L_113b
L_1135:
        mov    dword ptr [esp + 0x10], esi
        mov    ecx, esi
L_113b:
        mov    edx, dword ptr [ebx]
        cmp    edx, esi
        je    L_1189
        cmp    ebp, edi
        mov    eax, ebp
        jb    L_1149
        mov    eax, edi
L_1149:
        mov    esi, eax
        dec    eax
        test    esi, esi
        je    L_1178
        lea    esi, [eax + eax*2]
        mov    ebx, edx
        lea    esi, [ecx + esi*4]
        sub    ebx, ecx
        lea    edi, [eax + 1]
L_115d:
        lea    eax, [ebx + esi]
        push    eax
        mov    ecx, esi
        call    FUN_0040c410
        dec    edi
        sub    esi, 0xc
        test    edi, edi
        ja    L_115d
        mov    ebx, dword ptr [esp + 0x2c]
        mov    edi, dword ptr [esp + 0x1c]
L_1178:
        mov    eax, dword ptr [ebx]
        push    eax
        call    FUN_004084e0
        mov    ecx, dword ptr [esp + 0x14]
        add    esp, 4
        xor    esi, esi
L_1189:
        mov    dword ptr [ebx], ecx
        jmp    L_119a
L_118d:
        mov    ecx, dword ptr [ebx]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebx], esi
L_119a:
        mov    dword ptr [ebx + 4], ebp
L_119d:
        mov    eax, dword ptr [esp + 0x24]
        test    eax, eax
        jbe    L_11d5
        mov    ecx, dword ptr [ebx]
        lea    eax, [edi + edi*2]
        xor    edx, edx
        lea    eax, [ecx + eax*4]
L_11af:
        mov    ecx, dword ptr [esp + 0x20]
        mov    edi, dword ptr [ecx + edx]
        add    ecx, edx
        mov    dword ptr [eax], edi
        mov    edi, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edi
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [esp + 0x24]
        inc    esi
        add    edx, 0xc
        add    eax, 0xc
        cmp    esi, ecx
        jb    L_11af
L_11d5:
        mov    eax, dword ptr [esp + 0x20]
        test    eax, eax
        je    L_11e6
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_11e6:
        mov    ecx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x18]
        add    ecx, 4
        dec    eax
        mov    dword ptr [esp + 0x14], ecx
        mov    dword ptr [esp + 0x18], eax
        jne    L_10da
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
L_1204:
        add    esp, 0x18
        ret    4
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
        je    L_123b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x7714a4
        pop    esi
        ret    
L_123b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        mov    eax, dword ptr [g_007da9e8]
        push    ebx
        push    esi
        push    eax
        xor    ebx, ebx
        push    ebx
        push    0x7715b4
        call    FUN_006f4710
        push    0x18
        mov    dword ptr [g_007daaec], eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, ebx
        je    L_1291
        mov    ecx, dword ptr [g_007dab18]
        push    ecx
        push    0x771594
        push    0x83
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x4c1840
        mov    dword ptr [g_007daaf0], esi
        jmp    L_1297
L_1291:
        mov    dword ptr [g_007daaf0], ebx
L_1297:
        push    ebx
        push    ebx
        push    0x4c1370
        push    0x4c1350
        push    0x771568
        mov    dword ptr [g_007b37f8], 8
        mov    byte ptr [g_007daae8], bl
        mov    byte ptr [g_007daae9], bl
        mov    byte ptr [g_007daaea], bl
        call    FUN_0070f090
        push    ebx
        push    ebx
        push    0x4c1390
        push    0x4c1360
        push    0x77153c
        call    FUN_0070f090
        push    ebx
        push    0x4c13b0
        push    0x4c13d0
        push    0x4c13c0
        push    0x771508
        call    FUN_0070f090
        push    ebx
        push    ebx
        push    0x4c13f0
        push    0x4c13e0
        push    0x7714e0
        call    FUN_0070f090
        mov    ecx, dword ptr [esp + 0xc]
        cmp    ecx, ebx
        je    L_134b
        push    0x76d9ec
        call    FUN_0040ecc0
        cmp    eax, ebx
        je    L_134b
        push    ebx
        push    0x7b37f8
        push    0x7714d4
        mov    ecx, eax
        call    FUN_00411cb0
        mov    ecx, dword ptr [g_007b37f8]
        mov    eax, 2
        cmp    ecx, eax
        jge    L_134b
        mov    dword ptr [g_007b37f8], eax
L_134b:
        pop    esi
        pop    ebx
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b37f8]
        xor    eax, eax
        cmp    ecx, 2
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007b37f8]
        xor    eax, eax
        cmp    ecx, 4
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007b37f8]
        xor    eax, eax
        cmp    ecx, 2
        setne    al
        dec    eax
        and    eax, 6
        add    eax, 2
        mov    dword ptr [g_007b37f8], eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b37f8]
        xor    eax, eax
        cmp    ecx, 4
        setne    al
        dec    eax
        and    eax, 4
        add    eax, 4
        mov    dword ptr [g_007b37f8], eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007dab1c]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    al, byte ptr [g_007daae8]
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
        mov    al, byte ptr [g_007daae8]
        test    al, al
        sete    al
        mov    byte ptr [g_007daae8], al
        ret    
        mov    al, byte ptr [g_007daae9]
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
        mov    al, byte ptr [g_007daae9]
        test    al, al
        sete    al
        mov    byte ptr [g_007daae9], al
        ret    
    }
}
