/*
 * FUN_005b2f1c (extent 0x5b2f1c-0x5b3230) - gen via tools/gen_bigfunc.py.
 * Extent begins with a jump-table (data, tail of preceding fn) + 4 functions.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007b220c;
extern float  g_0080daa0;
extern int    g_007f20f0;
extern int    g_007f24cc;
extern void __cdecl FUN_005b2bb0(void);
extern void __cdecl FUN_006100d0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_005dcd00(void);
extern void __cdecl FUN_0041c540(void);

__declspec(naked) void FUN_005b2f1c(void)
{
    __asm {
        __emit 0x44  // jump-table entry 0x005B2E44 (data)
        __emit 0x2E
        __emit 0x5B
        __emit 0x00
        __emit 0x5A  // jump-table entry 0x005B2E5A (data)
        __emit 0x2E
        __emit 0x5B
        __emit 0x00
        __emit 0x70  // jump-table entry 0x005B2E70 (data)
        __emit 0x2E
        __emit 0x5B
        __emit 0x00
        __emit 0x7B  // jump-table entry 0x005B2E7B (data)
        __emit 0x2E
        __emit 0x5B
        __emit 0x00
        nop
        nop
        nop
        nop
        sub    esp, 0xc
        push   esi
        mov    esi, ecx
        mov    al, byte ptr [esi + 0x6d1]
        test   al, al
        push   edi
        mov    byte ptr [esi + 0x6e0], 0
        jne    L_3018
        mov    al, byte ptr [esi + 0x6d0]
        test   al, al
        jne    L_3018
        mov    edi, dword ptr [esp + 0x18]
        push   edi
        call   FUN_005b2bb0
        test   al, al
        je     L_3018
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call   dword ptr [eax + 0x1c4]
        mov    ecx, dword ptr [esi + 0x35c]
        mov    eax, dword ptr [ecx + 0xd8]
        mov    edx, dword ptr [eax + 0x9c]
        add    eax, 0x80
        push   0
        mov    eax, edx
        push   eax
        mov    eax, dword ptr [edi + 8]
        mov    dword ptr [esp + 0x14], edx
        lea    edx, [esp + 0x20]
        push   edx
        push   ecx
        mov    ecx, dword ptr [edi]
        push   eax
        push   ecx
        call   FUN_006100d0
        fadd   dword ptr [g_0080daa0]
        mov    eax, dword ptr [edi + 4]
        mov    edx, dword ptr [edi]
        fcom   dword ptr [edi + 4]
        mov    ecx, dword ptr [edi + 8]
        mov    dword ptr [esi + 0x6d8], eax
        add    esp, 0x18
        mov    dword ptr [esi + 0x6d4], edx
        fnstsw ax
        mov    dword ptr [esi + 0x6dc], ecx
        test   ah, 0x41
        jne    L_2fdd
        fstp   dword ptr [esi + 0x6d8]
        jmp    L_2fdf
L_2fdd:
__emit 0xDD  // fstp st(0)
__emit 0xD8
L_2fdf:
        mov    edx, dword ptr [g_0080daa0]
        mov    al, 1
        mov    byte ptr [esi + 0x6d0], al
        mov    byte ptr [esi + 0x6d1], 0
        mov    dword ptr [esi + 0x3b8], 0x3f800000
        mov    esi, dword ptr [esi + 0x6a4]
        mov    byte ptr [esi + 0x548], al
        pop    edi
        mov    dword ptr [esi + 0x544], edx
        pop    esi
        add    esp, 0xc
        ret    4
L_3018:
        pop    edi
        xor    al, al
        pop    esi
        add    esp, 0xc
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
        push   ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 8]
        test   edx, edx
        je     L_307e
        mov    eax, dword ptr [ecx + 0x6a4]
        mov    eax, dword ptr [eax + 0xd8]
        fld    dword ptr [eax + 0x9c]
        mov    edx, dword ptr [edx + 0x34]
        add    eax, 0x80
        mov    eax, dword ptr [edx + 0x6a4]
        mov    eax, dword ptr [eax + 0xd8]
        fcomp  dword ptr [eax + 0x9c]
        add    eax, 0x80
        fnstsw ax
        test   ah, 0x41
        jne    L_30ad
        mov    edx, dword ptr [ecx]
        call   dword ptr [edx + 0x1e0]
        pop    ebp
        ret    8
L_307e:
        mov    eax, dword ptr [ebp + 0xc]
        test   eax, eax
        je     L_309b
        push   0x78632c
        call   FUN_006fab90
        add    esp, 4
        test   eax, eax
        je     L_30ad
        int    3
        pop    ebp
        ret    8
L_309b:
        push   0x7862f8
        call   FUN_006fab90
        add    esp, 4
        test   eax, eax
        je     L_30ad
        int    3
L_30ad:
        pop    ebp
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
        sub    esp, 8
        push   esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        call   dword ptr [eax + 0x178]
        mov    ecx, dword ptr [esi + 0x364]
        mov    eax, dword ptr [ecx + 8]
        cmp    eax, 2
        je     L_30ea
        cmp    eax, 9
        je     L_30ea
        mov    edx, dword ptr [ecx]
        push   1
        call   dword ptr [edx + 0x38]
        jmp    L_3131
L_30ea:
        mov    eax, dword ptr [ecx + 0x20]
        dec    eax
        je     L_312a
        dec    eax
        je     L_3114
        dec    eax
        jne    L_3131
        mov    eax, dword ptr [esi + 0x6ac]
        mov    ecx, dword ptr [esi + 0x6a8]
        neg    eax
        add    ecx, eax
        mov    dword ptr [esi + 0x6ac], eax
        mov    dword ptr [esi + 0x6a8], ecx
        jmp    L_3131
L_3114:
        mov    dword ptr [esi + 0x6a8], 0
        mov    dword ptr [esi + 0x6ac], 1
        jmp    L_3131
L_312a:
        mov    eax, dword ptr [ecx]
        push   1
        call   dword ptr [eax + 0x38]
L_3131:
        mov    eax, dword ptr [g_007f20f0]
        mov    ecx, dword ptr [esi + 0x35c]
        mov    ecx, dword ptr [ecx + 4]
        push   eax
        call   FUN_00415230
        test   al, al
        je     L_318e
        push   0
        call   FUN_00707e70
        fstp   qword ptr [esp + 4]
        mov    ecx, dword ptr [g_007f24cc]
        call   FUN_00416110
        test   eax, eax
        je     L_316f
        mov    dword ptr [eax + 4], 8
        mov    byte ptr [eax], 0
        jmp    L_3171
L_316f:
        xor    eax, eax
L_3171:
        mov    edx, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], ecx
        push   eax
        mov    ecx, esi
        mov    dword ptr [eax + 0x14], 0
        call   FUN_005dcd00
L_318e:
        pop    esi
        add    esp, 8
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
        mov    eax, dword ptr [g_007b220c]
        push   ebx
        push   esi
        push   edi
        mov    esi, ecx
        push   eax
        lea    edi, [esi + 0x36c]
        lea    ebx, [esi + 0x390]
        push   edi
        push   ebx
        call   FUN_0041c540
        add    esp, 0xc
        test   al, al
        jne    L_31dc
        mov    ecx, dword ptr [ebx]
        mov    edx, dword ptr [ebx + 4]
        mov    eax, dword ptr [ebx + 8]
        mov    dword ptr [edi], ecx
        mov    dword ptr [edi + 4], edx
        mov    dword ptr [edi + 8], eax
        mov    byte ptr [esi + 0x3cc], 1
L_31dc:
        mov    ecx, dword ptr [g_007b220c]
        push   ecx
        lea    edi, [esi + 0x378]
        lea    ebx, [esi + 0x39c]
        push   edi
        push   ebx
        call   FUN_0041c540
        add    esp, 0xc
        test   al, al
        jne    L_320d
        mov    edx, dword ptr [ebx]
        mov    eax, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx + 8]
        mov    dword ptr [edi], edx
        mov    dword ptr [edi + 4], eax
        mov    dword ptr [edi + 8], ecx
L_320d:
        fld    dword ptr [esi + 0x3ac]
        fcomp  dword ptr [esi + 0x3a8]
        fnstsw ax
        test   ah, 0x40
        jne    L_322c
        mov    edx, dword ptr [esi + 0x3ac]
        mov    dword ptr [esi + 0x3a8], edx
L_322c:
        pop    edi
        pop    esi
        pop    ebx
        ret    8
    }
}
