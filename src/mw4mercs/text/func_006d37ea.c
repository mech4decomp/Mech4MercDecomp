/*
 * FUN_006d37ea (extent 0x6d37ea-0x6d3ace) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern int    g_007b87d8;
extern int    g_007b87dc;
extern int    g_007b8810;
extern int    g_007b8c14;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_0040e500(void);
extern void __cdecl FUN_0040edc0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415d40(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416e50(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004171b0(void);
extern void __cdecl FUN_00417230(void);
extern void __cdecl FUN_00417280(void);
extern void __cdecl FUN_006fbe30(void);

__declspec(naked) void FUN_006d37ea(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x78
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 4]
        lea    esi, [edi + 4]
        mov    ecx, esi
        mov    dword ptr [esp + 0x10], edi
        call    dword ptr [eax + 0x14]
        test    al, al
        je    L_3818
        mov    byte ptr [edi + 0x5c], 0
        pop    edi
        mov    al, 1
        pop    esi
        add    esp, 0x78
        ret    4
L_3818:
        push    esi
        lea    ecx, [esp + 0x20]
        call    FUN_00417170
        mov    ecx, dword ptr [edi]
        push    ecx
        lea    ecx, [esp + 0xc]
        mov    dword ptr [esp + 0x20], 0x79e9d8
        call    FUN_00412570
        mov    edx, dword ptr [esp + 8]
        push    0x79ea38
        push    edx
        lea    ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0xc]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_386e
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_386e
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_386e:
        mov    eax, dword ptr [esp + 8]
        push    eax
        call    FUN_006fbe30
        test    al, al
        je    L_38aa
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_3897
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3897
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3897:
        lea    ecx, [esp + 0x1c]
        call    FUN_004171b0
        pop    edi
        xor    al, al
        pop    esi
        add    esp, 0x78
        ret    4
L_38aa:
        push    ebx
        push    0
        lea    ecx, [esp + 0x38]
        call    FUN_0040dd50
        lea    ecx, [esp + 0x20]
        xor    ebx, ebx
        call    FUN_00417280
        mov    esi, eax
        test    esi, esi
        je    L_3985
        push    ebp
        mov    ebp, dword ptr [g_0076b420]
L_38d2:
        push    ebx
        lea    ecx, [esp + 0x20]
        push    0x76b9a8
        push    ecx
        call    ebp
        add    esp, 0xc
        lea    edx, [esp + 0x1c]
        push    edx
        lea    ecx, [esp + 0x3c]
        call    FUN_0040edc0
        mov    edi, eax
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 4]
        test    eax, eax
        je    L_390e
        mov    ecx, dword ptr [eax]
        push    ecx
        push    0x788754
        mov    ecx, edi
        call    FUN_00411c40
        jmp    L_392c
L_390e:
        mov    edx, dword ptr [esp + 0x28]
        mov    eax, dword ptr [edx + 0xc]
        mov    ecx, dword ptr [esp + 0x34]
        mov    edx, dword ptr [eax + ecx*4]
        mov    eax, dword ptr [edx + 0x10]
        push    eax
        push    0x79ea28
        mov    ecx, edi
        call    FUN_00411d10
L_392c:
        mov    ecx, dword ptr [esi + 0x24]
        and    ecx, 7
        push    ecx
        push    0x773784
        mov    ecx, edi
        call    FUN_00411d10
        mov    edx, dword ptr [esi + 0x10]
        push    edx
        push    0x774b3c
        mov    ecx, edi
        call    FUN_00411d10
        mov    eax, dword ptr [esi + 0x14]
        push    eax
        push    0x774af4
        mov    ecx, edi
        call    FUN_00411d10
        lea    ecx, [esp + 0x24]
        inc    ebx
        call    FUN_00417230
        test    eax, eax
        je    L_3980
        lea    ecx, [esp + 0x24]
        call    FUN_00417280
        mov    esi, eax
        test    esi, esi
        jne    L_38d2
L_3980:
        mov    edi, dword ptr [esp + 0x18]
        pop    ebp
L_3985:
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        lea    ecx, [esp + 0x38]
        call    FUN_0040e500
        lea    ecx, [esp + 0x34]
        mov    byte ptr [edi + 0x5c], 0
        call    FUN_0040de20
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        pop    ebx
        je    L_39bc
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_39bc
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_39bc:
        lea    ecx, [esp + 0x1c]
        call    FUN_004171b0
        pop    edi
        mov    al, 1
        pop    esi
        add    esp, 0x78
        ret    4
        nop    
        mov    eax, dword ptr [g_007b87dc]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b87dc], eax
        jne    L_3a26
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_3a1c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76cf50
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b87d8], esi
        jmp    L_3a26
L_3a1c:
        mov    dword ptr [g_007b87d8], 0
L_3a26:
        mov    ecx, dword ptr [g_007b87d8]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_3a5f
        mov    eax, dword ptr [esp + 0xc]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esi + 4], edi
        mov    dword ptr [esi + 0xc], eax
        call    FUN_00415d40
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [ecx]
        pop    edi
        mov    dword ptr [esi], 0x76cf48
        mov    dword ptr [esi + 0x10], edx
        mov    eax, esi
        pop    esi
        ret    8
L_3a5f:
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
        push    esi
        push    0x14
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3aa1
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esi + 0x10]
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax], 0x79e9d8
        pop    esi
        ret    
L_3aa1:
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
        push    esi
        mov    esi, ecx
        call    FUN_00416e50
        test    byte ptr [esp + 8], 1
        je    L_3ac8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_3ac8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
