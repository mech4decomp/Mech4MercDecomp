/*
 * FUN_004e558a (extent 0x4e558a-0x4e5bb0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b9584;
extern int    g_007b96b4;
extern int    g_007b96cc;
extern int    g_007b97fc;
extern int    g_007da69c;
extern int    g_007da6a0;
extern int    g_007da6a8;
extern int    g_007da6ac;
extern int    g_007da848;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00422ea0(void);
extern void __cdecl FUN_00429ad0(void);
extern void __cdecl FUN_00429fd0(void);
extern void __cdecl FUN_0042aae0(void);
extern void __cdecl FUN_0042bab0(void);
extern void __cdecl FUN_00430900(void);
extern void __cdecl FUN_00481340(void);
extern void __cdecl FUN_00481900(void);
extern void __cdecl FUN_004819d0(void);
extern void __cdecl FUN_00481f20(void);
extern void __cdecl FUN_004824f0(void);
extern void __cdecl FUN_00482770(void);
extern void __cdecl FUN_0048f380(void);
extern void __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_004e4c70(void);
extern void __cdecl FUN_004e4cb0(void);
extern void __cdecl FUN_004e4cf0(void);
extern void __cdecl FUN_004e50e0(void);
extern void __cdecl FUN_004e5160(void);
extern void __cdecl FUN_004e5220(void);
extern void __cdecl FUN_004e52e0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004e558a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b9584]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x80
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_55b8
        mov    ecx, eax
        call    FUN_00482770
        mov    esi, eax
        jmp    L_55ba
L_55b8:
        xor    esi, esi
L_55ba:
        call    FUN_006f49a0
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_55d7
        push    esi
        mov    ecx, eax
        call    FUN_004e4c70
        pop    esi
        ret    
L_55d7:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b9584]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x80
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_560f
        mov    ecx, dword ptr [g_007da6a8]
        push    ecx
        mov    ecx, eax
        call    FUN_004824f0
        mov    esi, eax
        jmp    L_5611
L_560f:
        xor    esi, esi
L_5611:
        call    FUN_006f49a0
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_562e
        push    esi
        mov    ecx, eax
        call    FUN_004e4cb0
        pop    esi
        ret    
L_562e:
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
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b9584]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0xe0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5668
        mov    ecx, eax
        call    FUN_00430900
        mov    esi, eax
        jmp    L_566a
L_5668:
        xor    esi, esi
L_566a:
        call    FUN_006f49a0
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5687
        push    esi
        mov    ecx, eax
        call    FUN_004e4cb0
        pop    esi
        ret    
L_5687:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b9584]
        push    edi
        push    eax
        call    FUN_006f4950
        push    0x90
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_56b8
        mov    ecx, eax
        call    FUN_004819d0
        mov    edi, eax
        jmp    L_56ba
L_56b8:
        xor    edi, edi
L_56ba:
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_5746
        push    esi
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        mov    ecx, dword ptr [esp + 0xc]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007da848]
        call    FUN_0048fac0
        mov    esi, eax
        test    esi, esi
        jne    L_56fc
        mov    edx, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007da848]
        push    eax
        push    edx
        call    FUN_0048f380
        mov    esi, eax
L_56fc:
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5714
        push    esi
        mov    ecx, eax
        call    FUN_00422ea0
        jmp    L_5716
L_5714:
        xor    eax, eax
L_5716:
        push    eax
        mov    ecx, edi
        call    FUN_00481f20
        mov    al, byte ptr [esp + 0x10]
        test    al, al
        pop    esi
        jne    L_572b
        and    dword ptr [edi + 0x78], 0xffffffdf
L_572b:
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_5746
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_5746
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_5746:
        call    FUN_006f49a0
        push    0x18
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5765
        push    edi
        mov    ecx, eax
        call    FUN_004e50e0
        pop    edi
        ret    8
L_5765:
        xor    eax, eax
        pop    edi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b9584]
        push    edi
        push    eax
        call    FUN_006f4950
        push    0x9c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5798
        mov    ecx, eax
        call    FUN_00481340
        mov    edi, eax
        jmp    L_579a
L_5798:
        xor    edi, edi
L_579a:
        call    FUN_006f49a0
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_582b
        push    esi
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        mov    ecx, dword ptr [esp + 0xc]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007da848]
        call    FUN_0048fac0
        mov    esi, eax
        test    esi, esi
        jne    L_57e1
        mov    edx, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007da848]
        push    eax
        push    edx
        call    FUN_0048f380
        mov    esi, eax
L_57e1:
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_57f9
        push    esi
        mov    ecx, eax
        call    FUN_00422ea0
        jmp    L_57fb
L_57f9:
        xor    eax, eax
L_57fb:
        push    eax
        mov    ecx, edi
        call    FUN_00481900
        mov    al, byte ptr [esp + 0x10]
        test    al, al
        pop    esi
        jne    L_5810
        and    dword ptr [edi + 0x78], 0xffffffdf
L_5810:
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_582b
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_582b
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_582b:
        push    0x18
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5845
        push    edi
        mov    ecx, eax
        call    FUN_004e5160
        pop    edi
        ret    8
L_5845:
        xor    eax, eax
        pop    edi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b9584]
        push    edi
        push    eax
        call    FUN_006f4950
        push    0x128
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5878
        mov    ecx, eax
        call    FUN_0042aae0
        mov    edi, eax
        jmp    L_587a
L_5878:
        xor    edi, edi
L_587a:
        call    FUN_006f49a0
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_590b
        push    esi
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        mov    ecx, dword ptr [esp + 0xc]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007da848]
        call    FUN_0048fac0
        mov    esi, eax
        test    esi, esi
        jne    L_58c1
        mov    edx, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007da848]
        push    eax
        push    edx
        call    FUN_0048f380
        mov    esi, eax
L_58c1:
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_58d9
        push    esi
        mov    ecx, eax
        call    FUN_00422ea0
        jmp    L_58db
L_58d9:
        xor    eax, eax
L_58db:
        push    eax
        mov    ecx, edi
        call    FUN_0042bab0
        mov    al, byte ptr [esp + 0x10]
        test    al, al
        pop    esi
        jne    L_58f0
        and    dword ptr [edi + 0x78], 0xffffffdf
L_58f0:
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_590b
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_590b
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_590b:
        push    0x18
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5925
        push    edi
        mov    ecx, eax
        call    FUN_004e5220
        pop    edi
        ret    8
L_5925:
        xor    eax, eax
        pop    edi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b9584]
        push    edi
        push    eax
        call    FUN_006f4950
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5958
        mov    ecx, eax
        call    FUN_00429ad0
        mov    edi, eax
        jmp    L_595a
L_5958:
        xor    edi, edi
L_595a:
        call    FUN_006f49a0
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_59eb
        push    esi
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        mov    ecx, dword ptr [esp + 0xc]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007da848]
        call    FUN_0048fac0
        mov    esi, eax
        test    esi, esi
        jne    L_59a1
        mov    edx, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007da848]
        push    eax
        push    edx
        call    FUN_0048f380
        mov    esi, eax
L_59a1:
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_59b9
        push    esi
        mov    ecx, eax
        call    FUN_00422ea0
        jmp    L_59bb
L_59b9:
        xor    eax, eax
L_59bb:
        push    eax
        mov    ecx, edi
        call    FUN_00429fd0
        mov    al, byte ptr [esp + 0x10]
        test    al, al
        pop    esi
        jne    L_59d0
        and    dword ptr [edi + 0x78], 0xffffffdf
L_59d0:
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_59eb
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_59eb
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_59eb:
        push    0x1c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5a05
        push    edi
        mov    ecx, eax
        call    FUN_004e52e0
        pop    edi
        ret    8
L_5a05:
        xor    eax, eax
        pop    edi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [g_007da6ac]
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    esi, dword ptr [edi + 4]
        mov    ebx, ecx
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_5a50
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5ba7
        push    edi
        mov    ecx, eax
        call    FUN_004e4c70
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    4
L_5a50:
        mov    eax, dword ptr [g_007b97fc]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_5a82
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5ba7
        push    edi
        mov    ecx, eax
        call    FUN_004e4cf0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    4
L_5a82:
        mov    eax, dword ptr [g_007da6a8]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_5ab4
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5ba7
        push    edi
        mov    ecx, eax
        call    FUN_004e4cb0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    4
L_5ab4:
        mov    eax, dword ptr [g_007da69c]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_5ae6
        push    0x18
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5ba7
        push    edi
        mov    ecx, eax
        call    FUN_004e5160
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    4
L_5ae6:
        mov    eax, dword ptr [g_007da6a0]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_5b18
        push    0x18
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5ba7
        push    edi
        mov    ecx, eax
        call    FUN_004e50e0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    4
L_5b18:
        mov    eax, dword ptr [g_007b96cc]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_5b46
        push    0x18
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5ba7
        push    edi
        mov    ecx, eax
        call    FUN_004e5220
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    4
L_5b46:
        mov    eax, dword ptr [g_007b96b4]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_5b95
        push    0x1c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5b81
        push    edi
        mov    ecx, eax
        call    FUN_004e52e0
        mov    esi, eax
        push    esi
        lea    ecx, [ebx + 4]
        call    FUN_004179b0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    4
L_5b81:
        xor    esi, esi
        push    esi
        lea    ecx, [ebx + 4]
        call    FUN_004179b0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    4
L_5b95:
        push    0x774080
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5ba7
        int 3    
L_5ba7:
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        pop    ebp
        ret    4
    }
}
