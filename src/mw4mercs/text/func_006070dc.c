/*
 * FUN_006070dc (extent 0x6070dc-0x6078d4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_0076b318;
extern int    g_0076b320;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f24d8;
extern int    g_007f27c8;
extern int    g_007f27cc;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004fcc40(void);
extern void __cdecl FUN_00620af0(void);
extern void __cdecl FUN_00620be0(void);
extern void __cdecl FUN_006212d0(void);
extern void __cdecl FUN_006e2150(void);

__declspec(naked) void FUN_006070dc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007f27c8]
        test    ecx, ecx
        je    L_70f4
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006e2150
L_70f4:
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
        sub    esp, 0x100
        push    0xff
        lea    eax, [esp + 4]
        push    0x7b4630
        push    eax
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        push    ecx
        mov    ecx, dword ptr [esp + 0x108]
        mov    byte ptr [esp + 0x103], 0
        call    FUN_006e2150
        mov    al, 1
        add    esp, 0x100
        ret    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [eax + 0x70]
        sub    esp, 0x64
        cmp    edx, ecx
        jg    L_7158
        xor    eax, eax
        add    esp, 0x64
        ret    
L_7158:
        test    ecx, ecx
        push    esi
        mov    byte ptr [esp + 4], 0
        jne    L_7175
        mov    esi, dword ptr [eax + 0xc]
        cmp    esi, 0x63
        jg    L_71a3
        mov    eax, dword ptr [eax]
        push    esi
        push    eax
        lea    ecx, [esp + 0xc]
        push    ecx
        jmp    L_7195
L_7175:
        mov    edx, dword ptr [eax + ecx*4 + 8]
        mov    ecx, dword ptr [eax + ecx*4 + 0xc]
        sub    ecx, edx
        lea    esi, [ecx - 1]
        cmp    esi, 0x63
        jg    L_71a3
        mov    eax, dword ptr [eax]
        dec    ecx
        push    ecx
        lea    ecx, [eax + edx + 1]
        push    ecx
        lea    edx, [esp + 0xc]
        push    edx
L_7195:
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    byte ptr [esp + esi + 4], 0
L_71a3:
        or    ecx, 0xffffffff
        push    edi
        xor    eax, eax
        lea    edi, [esp + 8]
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, -4
        test    ecx, ecx
        pop    edi
        jle    L_71c7
L_71ba:
        mov    dl, byte ptr [esp + eax + 8]
        mov    byte ptr [esp + eax + 4], dl
        inc    eax
        cmp    eax, ecx
        jl    L_71ba
L_71c7:
        mov    esi, dword ptr [g_007dab40]
        mov    byte ptr [esp + eax + 4], 0
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 4]
        xor    eax, esi
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcc40
        pop    esi
        add    esp, 0x64
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
        call    FUN_006212d0
        test    eax, eax
        jne    L_721a
        mov    ecx, dword ptr [esp + 4]
        push    0x78bb8c
        call    FUN_006e2150
        mov    al, 1
        ret    
L_721a:
        push    0
        push    0
        push    0
        push    8
        mov    ecx, eax
        call    FUN_00620be0
        mov    al, 1
        ret    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x13c
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_006212d0
        xor    ebx, ebx
        cmp    eax, ebx
        mov    dword ptr [esp + 0x10], eax
        jne    L_7253
        push    0x78bb8c
        jmp    L_78b8
L_7253:
        mov    esi, dword ptr [esp + 0x154]
        mov    edi, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 0xc]
        mov    ebp, edi
        sub    ebp, eax
        lea    ecx, [ebp - 1]
        cmp    ecx, 0x63
        mov    byte ptr [esp + 0x7c], bl
        jg    L_7290
        mov    ecx, dword ptr [esi]
        lea    edx, [ebp - 1]
        push    edx
        lea    edx, [eax + ecx + 1]
        push    edx
        lea    eax, [esp + 0x84]
        push    eax
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    byte ptr [esp + ebp + 0x7b], bl
L_7290:
        mov    ebp, dword ptr [g_0076b2ac]
        lea    ecx, [esp + 0x7c]
        push    0x78bc98
        push    ecx
        call    ebp
        add    esp, 8
        test    eax, eax
        jne    L_72bf
        mov    ecx, dword ptr [esp + 0x10]
        call    FUN_00620af0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_72bf:
        lea    edx, [esp + 0x7c]
        push    0x78bc90
        push    edx
        call    ebp
        add    esp, 8
        test    eax, eax
        jne    L_7446
        mov    eax, dword ptr [esi + 0x70]
        cmp    eax, 2
        jne    L_72f9
        mov    ecx, dword ptr [esp + 0x10]
        push    ebx
        push    1
        push    ebx
        push    ebx
        call    FUN_00620be0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_72f9:
        cmp    eax, 3
        je    L_7308
        push    0x78bc74
        jmp    L_78b8
L_7308:
        mov    ebp, dword ptr [esi + 0x14]
        sub    ebp, edi
        lea    eax, [ebp - 1]
        cmp    eax, 0x63
        mov    byte ptr [esp + 0x14], bl
        jg    L_7336
        mov    edx, dword ptr [esi]
        lea    ecx, [ebp - 1]
        push    ecx
        lea    eax, [edi + edx + 1]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    byte ptr [esp + ebp + 0x13], bl
L_7336:
        lea    edx, [esp + 0x14]
        push    0x78bc6c
        push    edx
        call    dword ptr [g_0076b2ac]
        mov    ebp, dword ptr [g_007dab40]
        mov    edx, dword ptr [g_007dab44]
        add    esp, 8
        test    eax, eax
        jne    L_7388
        mov    eax, dword ptr [edx]
        xor    eax, ebp
        mov    eax, dword ptr [eax + 0x20]
        xor    eax, 0x85739531
        je    L_7388
        mov    ecx, dword ptr [eax + 0x27c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    1
        push    ebx
        push    ebx
        call    FUN_00620be0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_7388:
        or    ecx, 0xffffffff
        xor    eax, eax
        lea    edi, [esp + 0x14]
        repne scasb
        not    ecx
        dec    ecx
        lea    esi, [ecx - 4]
        cmp    esi, ebx
        jle    L_73aa
L_739d:
        mov    cl, byte ptr [esp + eax + 0x18]
        mov    byte ptr [esp + eax + 0x14], cl
        inc    eax
        cmp    eax, esi
        jl    L_739d
L_73aa:
        mov    byte ptr [esp + eax + 0x14], bl
        mov    eax, dword ptr [edx]
        xor    eax, ebp
        mov    ecx, dword ptr [eax + 0x10]
        lea    edx, [esp + 0x14]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004fcc40
        cmp    eax, ebx
        jne    L_73d3
        push    0x78bc50
        jmp    L_78b8
L_73d3:
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0041fd80
        mov    esi, eax
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_73f9
        push    0x78bc34
        jmp    L_78b8
L_73f9:
        mov    eax, dword ptr [esi + 0x2e4]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    1
        push    ebx
        push    ebx
        call    FUN_00620be0
        mov    eax, dword ptr [g_007f27cc]
        cmp    eax, ebx
        je    L_7422
        mov    byte ptr [eax + 0x2f8], bl
        mov    dword ptr [eax + 0x2f4], ebx
L_7422:
        pop    edi
        mov    byte ptr [esi + 0x2f8], 1
        mov    dword ptr [esi + 0x2f4], 0x6070e0
        mov    dword ptr [g_007f27cc], esi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_7446:
        lea    ecx, [esp + 0x7c]
        push    0x78bc2c
        push    ecx
        call    ebp
        add    esp, 8
        test    eax, eax
        jne    L_74d6
        cmp    dword ptr [esi + 0x70], 3
        je    L_7469
        push    0x78bc74
        jmp    L_78b8
L_7469:
        mov    ebp, dword ptr [esi + 0x14]
        sub    ebp, edi
        lea    edx, [ebp - 1]
        cmp    edx, 0x63
        mov    byte ptr [esp + 0x14], bl
        jg    L_74bb
        mov    ecx, dword ptr [esi]
        lea    eax, [ebp - 1]
        push    eax
        lea    edx, [edi + ecx + 1]
        push    edx
        lea    eax, [esp + 0x1c]
        push    eax
        call    dword ptr [g_0076b320]
        mov    byte ptr [esp + ebp + 0x1f], bl
        mov    al, byte ptr [esp + 0x20]
        add    esp, 0xc
        cmp    al, 0x2b
        jne    L_74bb
        mov    ecx, dword ptr [esp + 0x10]
        push    ebx
        push    1
        push    ebx
        push    1
        call    FUN_00620be0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_74bb:
        mov    ecx, dword ptr [esp + 0x10]
        push    ebx
        push    ebx
        push    ebx
        push    1
        call    FUN_00620be0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_74d6:
        lea    ecx, [esp + 0x7c]
        push    0x78bc24
        push    ecx
        call    ebp
        add    esp, 8
        test    eax, eax
        jne    L_7566
        cmp    dword ptr [esi + 0x70], 3
        je    L_74f9
        push    0x78bc74
        jmp    L_78b8
L_74f9:
        mov    ebp, dword ptr [esi + 0x14]
        sub    ebp, edi
        lea    edx, [ebp - 1]
        cmp    edx, 0x63
        mov    byte ptr [esp + 0x14], bl
        jg    L_754b
        mov    ecx, dword ptr [esi]
        lea    eax, [ebp - 1]
        push    eax
        lea    edx, [edi + ecx + 1]
        push    edx
        lea    eax, [esp + 0x1c]
        push    eax
        call    dword ptr [g_0076b320]
        mov    byte ptr [esp + ebp + 0x1f], bl
        mov    al, byte ptr [esp + 0x20]
        add    esp, 0xc
        cmp    al, 0x2b
        jne    L_754b
        mov    ecx, dword ptr [esp + 0x10]
        push    ebx
        push    1
        push    ebx
        push    2
        call    FUN_00620be0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_754b:
        mov    ecx, dword ptr [esp + 0x10]
        push    ebx
        push    ebx
        push    ebx
        push    2
        call    FUN_00620be0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_7566:
        lea    ecx, [esp + 0x7c]
        push    0x78bc1c
        push    ecx
        call    ebp
        add    esp, 8
        test    eax, eax
        jne    L_7642
        cmp    dword ptr [esi + 0x70], 4
        je    L_758d
        push    0x78bc74
        jmp    L_78b8
L_758d:
        mov    ebp, dword ptr [esi + 0x14]
        sub    ebp, edi
        lea    edx, [ebp - 1]
        cmp    edx, 0x63
        mov    byte ptr [esp + 0x14], bl
        jg    L_75bb
        mov    ecx, dword ptr [esi]
        lea    eax, [ebp - 1]
        push    eax
        lea    edx, [edi + ecx + 1]
        push    edx
        lea    eax, [esp + 0x1c]
        push    eax
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    byte ptr [esp + ebp + 0x13], bl
L_75bb:
        mov    edi, dword ptr [esi + 0x18]
        mov    eax, dword ptr [esi + 0x14]
        sub    edi, eax
        lea    ecx, [edi - 1]
        cmp    ecx, 0x63
        mov    byte ptr [esp + 0xe4], bl
        jg    L_75f5
        mov    ecx, dword ptr [esi]
        lea    edx, [edi - 1]
        push    edx
        lea    edx, [eax + ecx + 1]
        push    edx
        lea    eax, [esp + 0xec]
        push    eax
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    byte ptr [esp + edi + 0xe3], bl
L_75f5:
        lea    ecx, [esp + 0xe4]
        push    ecx
        call    dword ptr [g_0076b318]
        mov    cl, byte ptr [esp + 0x18]
        add    esp, 4
        cmp    cl, 0x2b
        push    ebx
        push    eax
        push    ebx
        jne    L_762a
        mov    ecx, dword ptr [esp + 0x1c]
        push    3
        call    FUN_00620be0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_762a:
        mov    ecx, dword ptr [esp + 0x1c]
        push    4
        call    FUN_00620be0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_7642:
        lea    edx, [esp + 0x7c]
        push    0x78bc14
        push    edx
        call    ebp
        add    esp, 8
        test    eax, eax
        jne    L_7761
        cmp    dword ptr [esi + 0x70], 4
        je    L_7669
        push    0x78bc74
        jmp    L_78b8
L_7669:
        mov    eax, dword ptr [esi + 0x14]
        mov    ebp, dword ptr [esi + 0x18]
        sub    ebp, eax
        lea    ecx, [ebp - 1]
        cmp    ecx, 0x63
        mov    byte ptr [esp + 0x14], bl
        jg    L_769a
        mov    ecx, dword ptr [esi]
        lea    edx, [ebp - 1]
        push    edx
        lea    edx, [eax + ecx + 1]
        push    edx
        lea    eax, [esp + 0x1c]
        push    eax
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    byte ptr [esp + ebp + 0x13], bl
L_769a:
        mov    ebp, dword ptr [esi + 0x14]
        sub    ebp, edi
        lea    ecx, [ebp - 1]
        cmp    ecx, 0x63
        mov    byte ptr [esp + 0xe4], bl
        jg    L_76d1
        mov    eax, dword ptr [esi]
        lea    edx, [ebp - 1]
        push    edx
        lea    ecx, [edi + eax + 1]
        push    ecx
        lea    edx, [esp + 0xec]
        push    edx
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    byte ptr [esp + ebp + 0xe3], bl
L_76d1:
        movsx    eax, byte ptr [esp + 0xe4]
        add    eax, -0x46
        cmp    eax, 0x2d
        ja    L_772c
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x6078e0]
        jmp    dword ptr [ecx*4 + 0x6078d4]
        movsx    eax, byte ptr [esp + 0xe5]
        sub    eax, 0x2b
        je    L_7713
        sub    eax, 2
        je    L_770c
        push    0x78bbf4
        jmp    L_78b8
L_770c:
        mov    eax, 4
        jmp    L_7742
L_7713:
        mov    eax, 8
        jmp    L_7742
        movsx    eax, byte ptr [esp + 0xe5]
        sub    eax, 0x2b
        je    L_773d
        sub    eax, 2
        je    L_7736
L_772c:
        push    0x78bbf4
        jmp    L_78b8
L_7736:
        mov    eax, 1
        jmp    L_7742
L_773d:
        mov    eax, 2
L_7742:
        mov    ecx, dword ptr [esp + 0x10]
        push    ebx
        push    eax
        lea    edx, [esp + 0x1c]
        push    edx
        push    5
        call    FUN_00620be0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_7761:
        lea    eax, [esp + 0x7c]
        push    0x78bbe8
        push    eax
        call    ebp
        add    esp, 8
        test    eax, eax
        jne    L_778f
        mov    ecx, dword ptr [esp + 0x10]
        push    ebx
        push    ebx
        push    ebx
        push    6
        call    FUN_00620be0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_778f:
        lea    ecx, [esp + 0x7c]
        push    0x78bbe0
        push    ecx
        call    ebp
        add    esp, 8
        test    eax, eax
        jne    L_77ff
        cmp    dword ptr [esi + 0x70], 3
        je    L_77b2
        push    0x78bc74
        jmp    L_78b8
L_77b2:
        mov    ebp, dword ptr [esi + 0x14]
        sub    ebp, edi
        lea    edx, [ebp - 1]
        cmp    edx, 0x63
        mov    byte ptr [esp + 0x14], bl
        jg    L_77e0
        mov    ecx, dword ptr [esi]
        lea    eax, [ebp - 1]
        push    eax
        lea    edx, [edi + ecx + 1]
        push    edx
        lea    eax, [esp + 0x1c]
        push    eax
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    byte ptr [esp + ebp + 0x13], bl
L_77e0:
        push    ebx
        push    ebx
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    7
        call    FUN_00620be0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_77ff:
        lea    edx, [esp + 0x7c]
        push    0x78bbd4
        push    edx
        call    ebp
        add    esp, 8
        test    eax, eax
        jne    L_783d
        cmp    dword ptr [esi + 0x70], 2
        je    L_7822
        push    0x78bc74
        jmp    L_78b8
L_7822:
        mov    ecx, dword ptr [esp + 0x10]
        push    ebx
        push    ebx
        push    ebx
        push    8
        call    FUN_00620be0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_783d:
        lea    eax, [esp + 0x7c]
        push    0x78bbcc
        push    eax
        call    ebp
        add    esp, 8
        test    eax, eax
        jne    L_7878
        cmp    dword ptr [esi + 0x70], 2
        je    L_785d
        push    0x78bc74
        jmp    L_78b8
L_785d:
        mov    ecx, dword ptr [esp + 0x10]
        push    ebx
        push    ebx
        push    ebx
        push    9
        call    FUN_00620be0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_7878:
        lea    ecx, [esp + 0x7c]
        push    0x772f0c
        push    ecx
        call    ebp
        add    esp, 8
        test    eax, eax
        jne    L_78b3
        cmp    dword ptr [esi + 0x70], 2
        je    L_7898
        push    0x78bc74
        jmp    L_78b8
L_7898:
        mov    ecx, dword ptr [esp + 0x10]
        push    ebx
        push    ebx
        push    ebx
        push    0xa
        call    FUN_00620be0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
L_78b3:
        push    0x78bbb0
L_78b8:
        mov    ecx, dword ptr [esp + 0x154]
        call    FUN_006e2150
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x13c
        ret    
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x006078D4 (0 relocated pointers)
    }
}
