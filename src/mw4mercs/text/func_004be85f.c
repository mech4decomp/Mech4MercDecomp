/*
 * FUN_004be85f (extent 0x4be85f-0x4bed9b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da9e8;
extern int    g_007daad8;
extern int    g_007daadc;
extern int    g_007dab18;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_004c8460(void);
extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004be85f(void)
{
    __asm {
        nop    
        push    0x771408
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_e872
        int 3    
L_e872:
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
        je    L_e892
        int 3    
L_e892:
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
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    ecx, dword ptr [ebp + 0x148]
        xor    eax, eax
        mov    ax, word ptr [ebp + 0x150]
        push    esi
        push    edi
        mov    esi, eax
        and    esi, 0xffff
        cmp    esi, ecx
        jae    L_e911
        mov    eax, dword ptr [ebp + 0x144]
        mov    esi, dword ptr [eax + esi*4]
        test    esi, esi
        je    L_e994
        mov    edi, dword ptr [esp + 0x14]
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x134]
        test    al, al
        je    L_e994
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x18]
        test    al, al
        je    L_e994
        mov    eax, dword ptr [edi + 8]
        test    eax, eax
        jne    L_e98b
        mov    eax, dword ptr [ebp + 0x14]
        mov    dword ptr [edi + 8], eax
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        ret    4
L_e911:
        test    al, 0xf0
        je    L_e994
        mov    ebx, dword ptr [esp + 0x14]
        mov    eax, esi
        and    eax, 0xf
        cmp    eax, ecx
        jae    L_e948
        mov    ecx, dword ptr [ebp + 0x144]
        mov    edi, dword ptr [ecx + eax*4]
        test    edi, edi
        je    L_e948
        push    ebx
        mov    ecx, edi
        call    dword ptr [edi + 0x134]
        test    al, al
        je    L_e948
        mov    edx, dword ptr [edi]
        push    ebx
        mov    ecx, edi
        call    dword ptr [edx + 0x18]
        test    al, al
        jne    L_e97e
L_e948:
        mov    eax, dword ptr [ebp + 0x148]
        shr    esi, 4
        and    esi, 0xf
        cmp    esi, eax
        jae    L_e994
        mov    ecx, dword ptr [ebp + 0x144]
        mov    esi, dword ptr [ecx + esi*4]
        test    esi, esi
        je    L_e994
        push    ebx
        mov    ecx, esi
        call    dword ptr [esi + 0x134]
        test    al, al
        je    L_e994
        mov    edx, dword ptr [esi]
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0x18]
        test    al, al
        je    L_e994
L_e97e:
        mov    eax, dword ptr [ebx + 8]
        test    eax, eax
        jne    L_e98b
        mov    eax, dword ptr [ebp + 0x14]
        mov    dword ptr [ebx + 8], eax
L_e98b:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        ret    4
L_e994:
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        mov    ebx, ecx
        xor    eax, eax
        mov    ax, word ptr [ebx + 0x150]
        push    ebp
        mov    ebp, dword ptr [ebx + 0x148]
        push    esi
        push    edi
        mov    dword ptr [esp + 0x10], ebx
        mov    esi, eax
        and    esi, 0xffff
        cmp    esi, ebp
        jae    L_ea08
        mov    eax, dword ptr [ebx + 0x144]
        mov    esi, dword ptr [eax + esi*4]
        test    esi, esi
        je    L_ea7f
        mov    edi, dword ptr [esp + 0x18]
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x138]
        test    al, 2
        je    L_ea7f
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x1c]
        test    eax, eax
        je    L_ea7f
        pop    edi
        pop    esi
        pop    ebp
        mov    dword ptr [esp + 4], eax
        pop    ebx
        pop    ecx
        ret    4
L_ea08:
        test    al, 0xf0
        je    L_ea7f
        mov    eax, esi
        and    eax, 0xf
        cmp    eax, ebp
        jae    L_ea47
        mov    ecx, dword ptr [ebx + 0x144]
        mov    edi, dword ptr [ecx + eax*4]
        test    edi, edi
        je    L_ea47
        mov    edx, dword ptr [esp + 0x18]
        push    edx
        mov    ecx, edi
        call    dword ptr [edi + 0x138]
        test    al, 2
        je    L_ea47
        mov    ecx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [edi]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x1c]
        test    eax, eax
        je    L_ea47
        mov    dword ptr [esp + 0x10], eax
L_ea47:
        shr    esi, 4
        and    esi, 0xf
        cmp    esi, ebp
        jae    L_ea7f
        mov    edx, dword ptr [ebx + 0x144]
        mov    esi, dword ptr [edx + esi*4]
        test    esi, esi
        je    L_ea7f
        mov    edi, dword ptr [esp + 0x18]
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x138]
        test    al, 2
        je    L_ea7f
        mov    eax, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0x1c]
        test    eax, eax
        je    L_ea7f
        mov    dword ptr [esp + 0x10], eax
L_ea7f:
        mov    eax, dword ptr [esp + 0x10]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    ebx, dword ptr [ebp + 0x148]
        xor    eax, eax
        mov    ax, word ptr [ebp + 0x150]
        push    esi
        push    edi
        mov    esi, eax
        and    esi, 0xffff
        cmp    esi, ebx
        jae    L_ead6
        mov    eax, dword ptr [ebp + 0x144]
        mov    esi, dword ptr [eax + esi*4]
        test    esi, esi
        je    L_eb4d
        mov    edi, dword ptr [esp + 0x14]
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x130]
        cmp    eax, -1
        je    L_eb4d
        jmp    L_eb3e
L_ead6:
        test    al, 0xf0
        je    L_eb4d
        mov    eax, esi
        and    eax, 0xf
        cmp    eax, ebx
        jae    L_eb15
        mov    edx, dword ptr [ebp + 0x144]
        mov    edi, dword ptr [edx + eax*4]
        test    edi, edi
        je    L_eb15
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        mov    ecx, edi
        call    dword ptr [edi + 0x130]
        cmp    eax, -1
        je    L_eb15
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov    ecx, edi
        call    dword ptr [edi + 0x13c]
L_eb15:
        shr    esi, 4
        and    esi, 0xf
        cmp    esi, ebx
        jae    L_eb4d
        mov    eax, dword ptr [ebp + 0x144]
        mov    esi, dword ptr [eax + esi*4]
        test    esi, esi
        je    L_eb4d
        mov    edi, dword ptr [esp + 0x14]
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x130]
        cmp    eax, -1
        je    L_eb4d
L_eb3e:
        mov    ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x13c]
L_eb4d:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
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
        sub    esp, 0x38
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        lea    ecx, [esp + 0x10]
        call    FUN_00491280
        mov    esi, dword ptr [edi + 0x140]
        mov    ebx, dword ptr [esp + 0x50]
        push    esi
        push    ebx
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x30], 0
        call    FUN_00491670
        add    esi, 0x18
        push    esi
        add    ebx, 0x18
        lea    eax, [esp + 0x2c]
        push    ebx
        push    eax
        call    FUN_004c8460
        mov    ebp, dword ptr [edi + 0x148]
        xor    eax, eax
        mov    ax, word ptr [edi + 0x150]
        add    esp, 0xc
        mov    esi, eax
        and    esi, 0xffff
        cmp    esi, ebp
        jae    L_ebff
        mov    ecx, dword ptr [edi + 0x144]
        mov    esi, dword ptr [ecx + esi*4]
        test    esi, esi
        je    L_ec76
        mov    edi, dword ptr [esp + 0x4c]
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x130]
        cmp    eax, -1
        je    L_ec76
        push    eax
        lea    edx, [esp + 0x14]
        push    edx
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x13c]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x38
        ret    0xc
L_ebff:
        test    al, 0xf0
        je    L_ec76
        mov    eax, esi
        and    eax, 0xf
        cmp    eax, ebp
        jae    L_ec3e
        mov    ecx, dword ptr [edi + 0x144]
        mov    ebx, dword ptr [ecx + eax*4]
        test    ebx, ebx
        je    L_ec3e
        mov    edx, dword ptr [esp + 0x4c]
        push    edx
        mov    ecx, ebx
        call    dword ptr [ebx + 0x130]
        cmp    eax, -1
        je    L_ec3e
        mov    ecx, dword ptr [esp + 0x4c]
        push    eax
        lea    eax, [esp + 0x14]
        push    eax
        push    ecx
        mov    ecx, ebx
        call    dword ptr [ebx + 0x13c]
L_ec3e:
        shr    esi, 4
        and    esi, 0xf
        cmp    esi, ebp
        jae    L_ec76
        mov    edx, dword ptr [edi + 0x144]
        mov    esi, dword ptr [edx + esi*4]
        test    esi, esi
        je    L_ec76
        mov    edi, dword ptr [esp + 0x4c]
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x130]
        cmp    eax, -1
        je    L_ec76
        push    eax
        lea    eax, [esp + 0x14]
        push    eax
        push    edi
        mov    ecx, esi
        call    dword ptr [esi + 0x13c]
L_ec76:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x38
        ret    0xc
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
        mov    eax, dword ptr [ecx + 0x18]
        shr    eax, 0xe
        not    al
        test    al, 1
        je    L_ecf4
        mov    ax, word ptr [ecx + 0x150]
        cmp    ax, word ptr [ecx + 0x14c]
        jae    L_ecf4
        mov    ecx, dword ptr [ecx + 0x144]
        and    eax, 0xffff
        mov    eax, dword ptr [ecx + eax*4]
        test    eax, eax
        je    L_ecf4
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [eax]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x30]
L_ecf4:
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
        mov    ax, word ptr [ecx + 0x150]
        cmp    ax, word ptr [ecx + 0x14c]
        jae    L_ed3d
        mov    ecx, dword ptr [ecx + 0x144]
        and    eax, 0xffff
        mov    eax, dword ptr [ecx + eax*4]
        test    eax, eax
        je    L_ed3d
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [eax]
        push    ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x34]
L_ed3d:
        ret    0x10
        mov    eax, dword ptr [g_007da9e8]
        push    esi
        push    eax
        push    0
        push    0x77144c
        call    FUN_006f4710
        push    0x18
        mov    dword ptr [g_007daad8], eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ed8f
        mov    ecx, dword ptr [g_007dab18]
        push    ecx
        push    0x77142c
        push    0x84
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x4bf2b0
        mov    dword ptr [g_007daadc], esi
        pop    esi
        ret    
L_ed8f:
        mov    dword ptr [g_007daadc], 0
        pop    esi
        ret    
    }
}
