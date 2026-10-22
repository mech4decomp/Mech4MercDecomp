/*
 * FUN_007007f0 (extent 0x7007f0-0x700ce5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern int    g_0076b294;
extern int    g_0076b2d0;
extern int    g_0076b318;
extern int    g_0076b374;
extern int    g_0076b3e8;
extern int    g_0076b420;
extern char   g_007b6ecd;
extern int    g_00856838;
extern int    g_00856844;
extern int    g_00856860;
extern int    g_00858924;
extern int    g_008589cc;
extern int    g_008aaabc;
extern char   g_008aaac0;
extern int    g_008aaaf4;
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_006fd230(void);
extern void __cdecl FUN_006fd260(void);
extern void __cdecl FUN_00700560(void);
extern void __cdecl FUN_007006a0(void);
extern void __cdecl FUN_007008e0(void);
extern void __cdecl FUN_00707e90(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_007007f0(void)
{
    __asm {
        call    FUN_00700560
        mov    al, 1
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 0x7a10e8
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 1
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_00856860]
        test    ecx, ecx
        jne    L_082f
        mov    al, 1
        ret    4
L_082f:
        push    esi
        call    FUN_006fd260
        mov    ecx, dword ptr [g_00856860]
        call    FUN_006fd230
        cmp    eax, 2
        jne    L_0855
        mov    dword ptr [g_00856838], 3
        mov    al, 1
        pop    esi
        ret    4
L_0855:
        mov    esi, dword ptr [esp + 8]
        mov    al, byte ptr [esi + 0x228]
        test    al, al
        mov    dword ptr [g_00856838], 2
        jne    L_08d2
        call    FUN_00707e90
        fsub    qword ptr [esi + 0x218]
        fcomp    qword ptr [esi + 0x220]
        fnstsw  ax
        test    ah, 0x41
        jne    L_08d2
        mov    al, byte ptr [g_007b6ecd]
        test    al, al
        je    L_08d2
        mov    byte ptr [esi + 0x228], 1
        call    FUN_00707e90
        fstp    qword ptr [esi + 0x218]
        mov    eax, dword ptr [g_00856860]
        mov    edx, dword ptr [g_008589cc]
        mov    eax, dword ptr [eax + 8]
        mov    ecx, dword ptr [eax]
        push    0x8fc
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        cmp    eax, 0x8000000a
        je    L_08cb
        mov    dword ptr [g_00856838], 2
L_08cb:
        mov    byte ptr [esi + 0x228], 0
L_08d2:
        mov    al, 1
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x350
        push    ebx
        push    esi
        push    edi
        mov    ebx, ecx
        call    FUN_007006a0
        push    0x8aaa20
        call    dword ptr [g_0076b110]
        mov    dword ptr [g_00856838], 1
        call    FUN_00707e90
        fstp    qword ptr [ebx + 0x218]
        mov    edi, dword ptr [ebp + 8]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        lea    esi, [ecx + 1]
        lea    eax, [esi + esi]
        push    eax
        call    dword ptr [g_0076b294]
        mov    ecx, dword ptr [ebp + 8]
        push    esi
        mov    esi, dword ptr [g_0076b3e8]
        mov    edi, eax
        push    ecx
        push    edi
        call    esi
        mov    edx, dword ptr [g_00856860]
        mov    eax, dword ptr [edx + 0x1c]
        mov    ecx, dword ptr [eax]
        add    esp, 0x10
        push    edi
        push    eax
        call    dword ptr [ecx + 0xc]
        push    edi
        call    dword ptr [g_0076b2d0]
        mov    eax, dword ptr [ebp + 0xc]
        push    0xa
        lea    edx, [ebp - 0x50]
        push    edx
        push    eax
        call    dword ptr [g_0076b374]
        mov    ecx, dword ptr [g_00856860]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [eax]
        add    esp, 0x10
        lea    ecx, [ebp - 0x50]
        push    ecx
        push    0x79fa60
        push    0
        push    eax
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [ebp + 0x10]
        test    eax, eax
        je    L_09a2
        cmp    byte ptr [eax], 0
        je    L_09a2
        mov    edx, dword ptr [g_00856860]
        mov    eax, dword ptr [edx + 0x1c]
        mov    ecx, dword ptr [eax]
        push    0x7a115c
        jmp    L_09b2
L_09a2:
        mov    edx, dword ptr [g_00856860]
        mov    eax, dword ptr [edx + 0x1c]
        mov    ecx, dword ptr [eax]
        push    0x7a1154
L_09b2:
        push    0x79fa34
        push    0
        push    eax
        call    dword ptr [ecx + 0x24]
        mov    eax, dword ptr [ebp + 0x14]
        xor    edx, edx
        mov    dl, byte ptr [eax + 0xf]
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0xe]
        push    edx
        xor    edx, edx
        mov    dl, byte ptr [eax + 0xd]
        push    ecx
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0xc]
        push    edx
        xor    edx, edx
        mov    dl, byte ptr [eax + 0xb]
        push    ecx
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0xa]
        push    edx
        xor    edx, edx
        mov    dl, byte ptr [eax + 9]
        push    ecx
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 8]
        push    edx
        xor    edx, edx
        mov    dx, word ptr [eax + 6]
        push    ecx
        xor    ecx, ecx
        mov    cx, word ptr [eax + 4]
        push    edx
        mov    edx, dword ptr [eax]
        lea    eax, [ebp - 0x150]
        push    ecx
        push    edx
        push    0x7a1120
        push    eax
        call    dword ptr [g_0076b420]
        push    0x100
        lea    ecx, [ebp - 0x150]
        push    ecx
        lea    edx, [ebp - 0x350]
        push    edx
        call    esi
        mov    eax, dword ptr [g_00856860]
        mov    eax, dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [eax]
        add    esp, 0x40
        lea    edx, [ebp - 0x350]
        push    edx
        push    0x79fa78
        push    0
        push    eax
        call    dword ptr [ecx + 0x24]
        mov    eax, dword ptr [g_00858924]
        push    0x14
        push    eax
        lea    ecx, [ebp - 0x28]
        push    ecx
        call    esi
        mov    edx, dword ptr [g_00856860]
        mov    eax, dword ptr [edx + 0x1c]
        mov    ecx, dword ptr [eax]
        add    esp, 0xc
        lea    edx, [ebp - 0x28]
        push    edx
        push    0x79fa48
        push    0
        push    eax
        call    dword ptr [ecx + 0x24]
        mov    eax, dword ptr [g_00856860]
        mov    eax, dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [eax]
        push    0x7a111c
        push    0x79fa2c
        push    0
        push    eax
        call    dword ptr [ecx + 0x24]
        or    ecx, 0xffffffff
        xor    eax, eax
        lea    esi, [ebx + 0x229]
        mov    edi, esi
        repne scasb
        not    ecx
        dec    ecx
        lea    eax, [ecx + 1]
        lea    edx, [eax + eax]
        push    edx
        mov    dword ptr [ebp + 8], eax
        call    dword ptr [g_0076b294]
        mov    edi, eax
        mov    eax, dword ptr [ebp + 8]
        push    eax
        push    esi
        push    edi
        call    dword ptr [g_0076b3e8]
        mov    ecx, dword ptr [g_00856860]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [eax]
        add    esp, 0x10
        push    edi
        push    0x79fae0
        push    0
        push    eax
        call    dword ptr [edx + 0x24]
        push    edi
        call    dword ptr [g_0076b2d0]
        mov    eax, dword ptr [g_00856860]
        mov    eax, dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [eax]
        add    esp, 4
        push    0x7a1118
        push    0x79fa6c
        push    0
        push    eax
        call    dword ptr [ecx + 0x24]
        push    esi
        call    dword ptr [g_0076b318]
        add    esp, 4
        test    ah, 1
        jne    L_0b43
        mov    edx, dword ptr [g_00856860]
        mov    eax, dword ptr [edx + 0x1c]
        mov    edx, dword ptr [g_008aaabc]
        mov    ecx, dword ptr [eax]
        add    ebx, 0x18
        push    ebx
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov    esi, eax
        test    esi, esi
        jge    L_0b43
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a10ec
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_0b43
        int 3    
L_0b43:
        mov    eax, dword ptr [g_00856860]
        mov    edx, dword ptr [g_008589cc]
        mov    eax, dword ptr [eax + 8]
        mov    ecx, dword ptr [eax]
        push    0x8fc
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        cmp    eax, 0x8000000a
        pop    edi
        pop    esi
        pop    ebx
        je    L_0b76
        mov    dword ptr [g_00856838], 2
        mov    dword ptr [g_00856844], eax
L_0b76:
        push    0x8aaa20
        call    dword ptr [g_0076b100]
        mov    al, 1
        mov    esp, ebp
        pop    ebp
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        push    esi
        je    L_0bbb
        mov    esi, dword ptr [esp + 8]
        push    0xff
        push    eax
        lea    eax, [esi + 0x18]
        push    eax
        call    dword ptr [g_0076b3e8]
        add    esp, 0xc
        mov    word ptr [esi + 0x216], 0
        jmp    L_0bc5
L_0bbb:
        mov    esi, dword ptr [esp + 8]
        mov    word ptr [esi + 0x18], 0
L_0bc5:
        mov    eax, dword ptr [esp + 0x20]
        push    eax
        lea    ecx, [esi + 0x229]
        push    0x772f4c
        push    ecx
        mov    dword ptr [esi + 0x14], eax
        call    dword ptr [g_0076b420]
        mov    edx, dword ptr [esp + 0x28]
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x20]
        add    esp, 0xc
        push    edx
        mov    edx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_007008e0
        pop    esi
        ret    0x1c
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
        cmp    dword ptr [g_008aaaf4], 5
        jne    L_0c77
        mov    al, byte ptr [g_008aaac0]
        test    al, al
        je    L_0c77
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    esi
        push    edi
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, ebx
        repne scasb
        not    ecx
        dec    ecx
        lea    edi, [ecx + 1]
        lea    eax, [edi + edi]
        push    eax
        call    dword ptr [g_0076b294]
        push    edi
        mov    esi, eax
        push    ebx
        push    esi
        call    dword ptr [g_0076b3e8]
        mov    ecx, dword ptr [g_00856860]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, dword ptr [eax]
        add    esp, 0x10
        push    esi
        push    ecx
        push    eax
        call    dword ptr [edx + 0x14]
        push    esi
        call    dword ptr [g_0076b2d0]
        add    esp, 4
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    0x10
L_0c77:
        mov    al, 1
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        cmp    dword ptr [g_008aaaf4], 5
        jne    L_0ca5
        mov    al, byte ptr [g_008aaac0]
        test    al, al
        je    L_0ca5
        mov    eax, dword ptr [g_00856860]
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x18]
L_0ca5:
        mov    al, 1
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        push    eax
        lea    edi, [esi + 0x229]
        push    0x772f4c
        push    edi
        call    dword ptr [g_0076b420]
        mov    ecx, dword ptr [esi]
        add    esp, 0xc
        push    edi
        push    0x79fae0
        push    0
        push    esi
        call    dword ptr [ecx + 0x20]
        pop    edi
        mov    al, 1
        pop    esi
        ret    8
    }
}
