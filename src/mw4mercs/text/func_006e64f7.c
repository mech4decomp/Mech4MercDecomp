/*
 * FUN_006e64f7 (extent 0x6e64f7-0x6e6cb0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b560;
extern int    g_0076b570;
extern int    g_0076b5a4;
extern int    g_00841768;
extern int    g_00841a90;
extern int    g_00841a94;
extern int    g_00841a98;
extern int    g_00841a9c;
extern int    g_00841aa0;
extern int    g_00841aa4;
extern int    g_00841aa8;
extern int    g_00841aac;
extern int    g_00841ab0;
extern int    g_00841ab4;
extern int    g_00841ab8;
extern int    g_00841abc;
extern int    g_00841ac0;
extern int    g_00841ac4;
extern int    g_00841ac8;
extern int    g_00841acc;
extern int    g_00841ad0;
extern int    g_00841ad4;
extern int    g_00841ad8;
extern int    g_00841b5c;
extern int    g_00841b60;
extern int    g_00841b64;
extern int    g_00841b68;
extern int    g_00841b6c;
extern int    g_00841b70;
extern int    g_00841b74;
extern int    g_00841b78;
extern int    g_00841b7c;
extern int    g_00841b80;
extern int    g_00841b84;
extern int    g_00841b88;
extern int    g_00841b8c;
extern int    g_00841b90;
extern int    g_00841b94;
extern int    g_00841b98;
extern int    g_00841b9c;
extern int    g_00841ba0;
extern int    g_00841ba4;
extern int    g_00841ba8;
extern int    g_00841bac;
extern int    g_00841bb0;
extern int    g_00841bb4;
extern int    g_00841bb8;
extern int    g_00841bbc;
extern int    g_00841bc0;
extern int    g_00841bc4;
extern int    g_00841bc8;
extern int    g_00841c20;
extern int    g_00841c24;
extern int    g_00841c28;
extern int    g_00841c2c;
extern int    g_00841c30;
extern int    g_00841c34;
extern int    g_00841c38;
extern int    g_00841c3c;
extern int    g_00841c40;
extern int    g_00841c44;
extern int    g_00841c48;
extern int    g_00841c4c;
extern int    g_00841c50;
extern int    g_00841c54;
extern int    g_00841c58;
extern int    g_00841c5c;
extern int    g_00841c60;
extern int    g_00841c64;
extern int    g_00841c68;
extern int    g_00841c6c;
extern int    g_00841c70;
extern int    g_00841c74;
extern int    g_00841c78;
extern int    g_00841c7c;
extern int    g_00841c9c;
extern int    g_00841ca0;
extern int    g_00841ca4;
extern int    g_00841ca8;
extern int    g_00841cac;
extern int    g_00841cb0;
extern int    g_00841cb4;
extern int    g_00841cb8;
extern void __cdecl FUN_00512510(void);
extern void __cdecl FUN_00512ff0(void);
extern void __cdecl FUN_006e6cd0(void);
extern void __cdecl FUN_006e6d80(void);
extern void __cdecl FUN_006e7010(void);
extern void __cdecl FUN_006e7110(void);
extern void __cdecl FUN_006e7190(void);
extern void __cdecl FUN_006e72f0(void);
extern void __cdecl FUN_0072d830(void);

__declspec(naked) void FUN_006e64f7(void)
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
        mov    eax, dword ptr [esp + 8]
        sub    esp, 0x14
        sub    eax, 0x110
        push    esi
        je    L_6794
        dec    eax
        jne    L_678b
        mov    ecx, dword ptr [esp + 0x24]
        mov    eax, ecx
        and    eax, 0xffff
        cmp    eax, 0x4bb
        jg    L_66fb
        je    L_66e5
        cmp    eax, 0x4b8
        jg    L_66c1
        je    L_66cf
        dec    eax
        je    L_6567
        dec    eax
        jne    L_678b
        mov    eax, dword ptr [esp + 0x1c]
        push    1
        push    eax
        call    dword ptr [g_0076b570]
        xor    eax, eax
        pop    esi
        add    esp, 0x14
        ret    0x10
L_6567:
        lea    eax, [esp + 4]
        mov    dword ptr [esp + 0x14], eax
        lea    ecx, [esp + 0x24]
        lea    edx, [esp + 0x20]
        xor    eax, eax
        mov    dword ptr [esp + 0x24], 0x18
        mov    dword ptr [esp + 0xc], ecx
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0x20], eax
L_658d:
        mov    ecx, dword ptr [eax*4 + 0x841770]
        lea    edx, [esp + 0xc]
        push    edx
        push    3
        push    0
        mov    dword ptr [esp + 0x10], ecx
        call    FUN_00512510
        mov    eax, dword ptr [esp + 0x20]
        inc    eax
        cmp    eax, 0x2b
        mov    dword ptr [esp + 0x20], eax
        jle    L_658d
        xor    eax, eax
        mov    dword ptr [esp + 0x24], 0x19
        mov    dword ptr [esp + 0x20], eax
L_65c2:
        mov    eax, dword ptr [eax*4 + 0x841838]
        lea    ecx, [esp + 0xc]
        push    ecx
        push    3
        push    0
        mov    dword ptr [esp + 0x10], eax
        call    FUN_00512510
        mov    eax, dword ptr [esp + 0x20]
        inc    eax
        cmp    eax, 0x12
        mov    dword ptr [esp + 0x20], eax
        jle    L_65c2
        mov    eax, 0x33
        mov    dword ptr [esp + 0x24], 0x1a
        mov    dword ptr [esp + 0x20], eax
L_65fa:
        mov    edx, dword ptr [eax*4 + 0x841838]
        lea    eax, [esp + 0xc]
        push    eax
        push    3
        push    0
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00512510
        mov    eax, dword ptr [esp + 0x20]
        inc    eax
        cmp    eax, 0x4e
        mov    dword ptr [esp + 0x20], eax
        jle    L_65fa
        mov    eax, 0x64
        mov    dword ptr [esp + 0x24], 0x1b
        mov    dword ptr [esp + 0x20], eax
L_6632:
        mov    ecx, dword ptr [eax*4 + 0x841838]
        lea    edx, [esp + 0xc]
        push    edx
        push    3
        push    0
        mov    dword ptr [esp + 0x10], ecx
        call    FUN_00512510
        mov    eax, dword ptr [esp + 0x20]
        inc    eax
        cmp    eax, 0x7b
        mov    dword ptr [esp + 0x20], eax
        jle    L_6632
        mov    eax, 0x83
        mov    dword ptr [esp + 0x24], 0x1c
        xor    esi, esi
        mov    dword ptr [esp + 0x20], eax
L_666c:
        cmp    eax, 0x84
        jne    L_6676
        inc    esi
        jmp    L_669f
L_6676:
        cmp    eax, 0x89
        jne    L_6680
        inc    esi
        jmp    L_669f
L_6680:
        lea    ecx, [esp + 0xc]
        push    ecx
        sub    eax, esi
        mov    eax, dword ptr [eax*4 + 0x841838]
        push    3
        push    0
        mov    dword ptr [esp + 0x10], eax
        call    FUN_00512510
        mov    eax, dword ptr [esp + 0x20]
L_669f:
        inc    eax
        cmp    eax, 0x8c
        mov    dword ptr [esp + 0x20], eax
        jle    L_666c
        mov    edx, dword ptr [esp + 0x1c]
        push    1
        push    edx
        call    dword ptr [g_0076b570]
        xor    eax, eax
        pop    esi
        add    esp, 0x14
        ret    0x10
L_66c1:
        sub    eax, 0x4b9
        je    L_66e5
        dec    eax
        jne    L_678b
L_66cf:
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        call    FUN_006e7110
        add    esp, 4
        xor    eax, eax
        pop    esi
        add    esp, 0x14
        ret    0x10
L_66e5:
        mov    ecx, dword ptr [esp + 0x1c]
        push    ecx
        call    FUN_006e72f0
        add    esp, 4
        xor    eax, eax
        pop    esi
        add    esp, 0x14
        ret    0x10
L_66fb:
        add    eax, 0xfffffb44
        cmp    eax, 4
        ja    L_678b
        jmp    dword ptr [eax*4 + 0x6e6cb0]
        shr    ecx, 0x10
        cmp    ecx, 1
        jne    L_678b
        mov    edx, dword ptr [esp + 0x1c]
        push    edx
        call    FUN_006e7190
        add    esp, 4
        xor    eax, eax
        pop    esi
        add    esp, 0x14
        ret    0x10
        push    1
        push    0x4ba
        jmp    L_673e
        push    0
        push    0x4b8
L_673e:
        mov    esi, dword ptr [esp + 0x24]
        push    esi
        call    dword ptr [g_0076b5a4]
        push    eax
        call    FUN_006e6cd0
        push    esi
        call    FUN_006e7010
        add    esp, 0xc
        xor    eax, eax
        pop    esi
        add    esp, 0x14
        ret    0x10
        push    1
        push    0x4bb
        jmp    L_6771
        push    0
        push    0x4b9
L_6771:
        mov    esi, dword ptr [esp + 0x24]
        push    esi
        call    dword ptr [g_0076b5a4]
        push    eax
        call    FUN_006e6d80
        push    esi
        call    FUN_006e7190
        add    esp, 0xc
L_678b:
        xor    eax, eax
        pop    esi
        add    esp, 0x14
        ret    0x10
L_6794:
        mov    dword ptr [g_00841a90], 0xefc
        mov    dword ptr [g_00841a94], 0xefd
        mov    dword ptr [g_00841a98], 0xefe
        mov    dword ptr [g_00841a9c], 0xf2c
        mov    dword ptr [g_00841aa0], 0xf2d
        mov    dword ptr [g_00841aa4], 0xf2e
        mov    dword ptr [g_00841aa8], 0xf04
        mov    dword ptr [g_00841aac], 0xf05
        mov    dword ptr [g_00841ab0], 0xf06
        mov    dword ptr [g_00841ab4], 0xf56
        mov    dword ptr [g_00841ab8], 0xf57
        mov    dword ptr [g_00841abc], 0xf58
        mov    dword ptr [g_00841ac0], 0xf31
        mov    dword ptr [g_00841ac4], 0xf32
        mov    dword ptr [g_00841ac8], 0xf33
        mov    dword ptr [g_00841acc], 0xf30
        mov    dword ptr [g_00841ad0], 0xf2f
        mov    dword ptr [g_00841ad4], 0xef7
        mov    dword ptr [g_00841ad8], 0xf53
        mov    dword ptr [g_00841b5c], 0xf34
        mov    dword ptr [g_00841b60], 0xf35
        mov    dword ptr [g_00841b64], 0xf36
        mov    dword ptr [g_00841b68], 0xf37
        mov    dword ptr [g_00841b6c], 0xf38
        mov    dword ptr [g_00841b70], 0xf39
        mov    dword ptr [g_00841b74], 0xf3a
        mov    dword ptr [g_00841b78], 0xf3b
        mov    dword ptr [g_00841b7c], 0xf3c
        mov    dword ptr [g_00841b80], 0xf3d
        mov    dword ptr [g_00841b84], 0xf3e
        mov    dword ptr [g_00841b88], 0xf3f
        mov    dword ptr [g_00841b8c], 0xf67
        mov    dword ptr [g_00841b90], 0xf68
        mov    dword ptr [g_00841b94], 0xf69
        mov    dword ptr [g_00841b98], 0xf6a
        mov    dword ptr [g_00841b9c], 0xf40
        mov    dword ptr [g_00841ba0], 0xf41
        mov    dword ptr [g_00841ba4], 0xf42
        mov    dword ptr [g_00841ba8], 0xf43
        mov    dword ptr [g_00841bac], 0xf44
        mov    dword ptr [g_00841bb0], 0xf45
        mov    dword ptr [g_00841bb4], 0xf8a
        mov    dword ptr [g_00841bb8], 0xf8b
        mov    dword ptr [g_00841bbc], 0xf2a
        mov    dword ptr [g_00841bc0], 0xf2b
        mov    dword ptr [g_00841bc4], 0xf50
        mov    dword ptr [g_00841bc8], 0xf54
        mov    dword ptr [g_00841c20], 0xf46
        mov    dword ptr [g_00841c24], 0xf47
        mov    dword ptr [g_00841c28], 0xf62
        mov    dword ptr [g_00841c2c], 0xf48
        mov    dword ptr [g_00841c30], 0xf49
        mov    dword ptr [g_00841c34], 0xf4e
        mov    dword ptr [g_00841c38], 0xf4f
        mov    dword ptr [g_00841c3c], 0xf8c
        mov    dword ptr [g_00841c40], 0xf8d
        mov    dword ptr [g_00841c44], 0xf4a
        mov    dword ptr [g_00841c48], 0xf4b
        mov    dword ptr [g_00841c4c], 0xf5e
        mov    dword ptr [g_00841c50], 0xf5f
        mov    dword ptr [g_00841c54], 0xf4c
        mov    dword ptr [g_00841c58], 0xf4d
        mov    dword ptr [g_00841c5c], 0xf60
        mov    dword ptr [g_00841c60], 0xf61
        mov    dword ptr [g_00841c64], 0xf26
        mov    dword ptr [g_00841c68], 0xf25
        mov    dword ptr [g_00841c6c], 0xf6b
        mov    dword ptr [g_00841c70], 0xf24
        mov    dword ptr [g_00841c74], 0xf28
        mov    dword ptr [g_00841c78], 0xf29
        mov    dword ptr [g_00841c7c], 0xf27
        mov    dword ptr [g_00841c9c], 0xf6f
        mov    dword ptr [g_00841ca0], 0xf79
        mov    dword ptr [g_00841ca4], 0xf77
        mov    dword ptr [g_00841ca8], 0xf7a
        mov    dword ptr [g_00841cac], 0xf71
        mov    dword ptr [g_00841cb0], 0xf7b
        mov    dword ptr [g_00841cb4], 0xf7c
        mov    dword ptr [g_00841cb8], 0xf7d
        mov    dword ptr [esp + 0x24], 0x18
        lea    eax, [esp + 0x24]
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 4], eax
        mov    dword ptr [esp + 8], ecx
        mov    dword ptr [esp + 0x20], 0
L_6aca:
        lea    edx, [esp + 4]
        push    edx
        push    2
        push    0
        call    FUN_00512ff0
        mov    ecx, dword ptr [esp + 0x20]
        mov    dword ptr [ecx*4 + 0x841770], eax
        inc    ecx
        cmp    ecx, 0x2b
        mov    dword ptr [esp + 0x20], ecx
        jle    L_6aca
        push    ebx
        mov    ebx, dword ptr [esp + 0x20]
        push    edi
        push    ebx
        call    FUN_006e7010
        mov    eax, dword ptr [g_00841768]
        add    esp, 4
        push    0x101
        push    eax
        call    FUN_0072d830
        mov    esi, dword ptr [g_0076b5a4]
        push    eax
        push    0
        push    0x14a
        push    0x4bc
        push    ebx
        call    esi
        mov    edi, dword ptr [g_0076b560]
        push    eax
        call    edi
        mov    ecx, dword ptr [g_00841768]
        push    0x103
        push    ecx
        call    FUN_0072d830
        push    eax
        push    1
        push    0x14a
        push    0x4bc
        push    ebx
        call    esi
        push    eax
        call    edi
        mov    edx, dword ptr [g_00841768]
        push    0x102
        push    edx
        call    FUN_0072d830
        push    eax
        push    2
        push    0x14a
        push    0x4bc
        push    ebx
        call    esi
        push    eax
        call    edi
        mov    eax, dword ptr [g_00841768]
        push    0x57b
        push    eax
        call    FUN_0072d830
        push    eax
        push    3
        push    0x14a
        push    0x4bc
        push    ebx
        call    esi
        push    eax
        call    edi
        push    0
        push    0
        push    0x14e
        push    0x4bc
        push    ebx
        call    esi
        push    eax
        call    edi
        mov    dword ptr [esp + 0x2c], 0x19
        mov    dword ptr [esp + 0x28], 0
L_6bba:
        lea    ecx, [esp + 0xc]
        push    ecx
        push    2
        push    0
        call    FUN_00512ff0
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [ecx*4 + 0x841838], eax
        inc    ecx
        cmp    ecx, 0x12
        mov    dword ptr [esp + 0x28], ecx
        jle    L_6bba
        mov    dword ptr [esp + 0x2c], 0x1a
        mov    dword ptr [esp + 0x28], 0x33
L_6bed:
        lea    edx, [esp + 0xc]
        push    edx
        push    2
        push    0
        call    FUN_00512ff0
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [ecx*4 + 0x841838], eax
        inc    ecx
        cmp    ecx, 0x4e
        mov    dword ptr [esp + 0x28], ecx
        jle    L_6bed
        mov    dword ptr [esp + 0x2c], 0x1b
        mov    dword ptr [esp + 0x28], 0x64
L_6c20:
        lea    eax, [esp + 0xc]
        push    eax
        push    2
        push    0
        call    FUN_00512ff0
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [ecx*4 + 0x841838], eax
        inc    ecx
        cmp    ecx, 0x7b
        mov    dword ptr [esp + 0x28], ecx
        jle    L_6c20
        mov    ecx, 0x83
        mov    dword ptr [esp + 0x2c], 0x1c
        xor    esi, esi
        mov    dword ptr [esp + 0x28], ecx
L_6c56:
        cmp    ecx, 0x84
        jne    L_6c61
        inc    esi
        jmp    L_6c89
L_6c61:
        cmp    ecx, 0x89
        jne    L_6c6c
        inc    esi
        jmp    L_6c89
L_6c6c:
        lea    ecx, [esp + 0xc]
        push    ecx
        push    2
        push    0
        call    FUN_00512ff0
        mov    ecx, dword ptr [esp + 0x28]
        mov    edx, ecx
        sub    edx, esi
        mov    dword ptr [edx*4 + 0x841838], eax
L_6c89:
        inc    ecx
        cmp    ecx, 0x8c
        mov    dword ptr [esp + 0x28], ecx
        jle    L_6c56
        push    ebx
        call    FUN_006e7190
        add    esp, 4
        pop    edi
        pop    ebx
        mov    eax, 1
        pop    esi
        add    esp, 0x14
        ret    0x10
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x006E6CB0 (8 relocated pointers)
        __emit 0x10
        __emit 0x67
        __emit 0x6E
        __emit 0x00
        __emit 0x2E
        __emit 0x67
        __emit 0x6E
        __emit 0x00
        __emit 0x37
        __emit 0x67
        __emit 0x6E
        __emit 0x00
        __emit 0x61
        __emit 0x67
        __emit 0x6E
        __emit 0x00
        __emit 0x6A
        __emit 0x67
        __emit 0x6E
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
