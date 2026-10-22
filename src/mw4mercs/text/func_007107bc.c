/*
 * FUN_007107bc (extent 0x7107bc-0x711052) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern int    g_007b7084;
extern int    g_007b7088;
extern int    g_00858940;
extern int    g_0085a0c8;
extern int    g_0085a0cc;
extern int    g_0085a1b4;
extern int    g_0085a1b8;
extern int    g_0085a1bc;
extern int    g_0085a1c0;
extern int    g_0087b61c;
extern char   g_0087b620;
extern int    g_0087b624;
extern int    g_0087b628;
extern int    g_0087b638;
extern int    g_0087b63c;
extern int    g_0087bc04;
extern int    g_0087bc18;
extern int    g_0087bc1c;
extern int    g_0087bc20;
extern int    g_0087bc24;
extern int    g_0087bc28;
extern int    g_0087bc30;
extern char   g_0087bc34;
extern int    g_0087bc38;
extern int    g_0087bc3c;
extern int    g_0087bc40;
extern int    g_0087bc44;
extern int    g_0087bc48;
extern int    g_0087bc4c;
extern int    g_0087c0c8;
extern int    g_0087c0cc;
extern int    g_0087c594;
extern int    g_0087c598;
extern int    g_0087c5b4;
extern int    g_0087c5b8;
extern int    g_0087c5bc;
extern int    g_0087c5c0;
extern int    g_0087c5c4;
extern int    g_0087c5c8;
extern int    g_0087c690;
extern int    g_008aaf18;
extern int    g_008aaf1c;
extern int    g_008aaf24;
extern int    g_008aaf28;
extern int    g_008aaf2c;
extern int    g_008aaf30;
extern int    g_008aaf34;
extern int    g_008aaf38;
extern void __cdecl FUN_007103b0(void);
extern void __cdecl FUN_00710b40(void);
extern void __cdecl FUN_00710b90(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_00723b40(void);
extern void __cdecl FUN_00723bd0(void);
extern void __cdecl FUN_0073d3b0(void);
extern void __cdecl FUN_0073d430(void);
extern void __cdecl FUN_00751100(void);

__declspec(naked) void FUN_007107bc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_0087bc34]
        sub    esp, 0x40
        test    al, al
        je    L_0942
        test    byte ptr [g_0087b620], 1
        je    L_0870
        mov    eax, dword ptr [g_0087bc04]
        test    eax, eax
        je    L_083c
        mov    ecx, dword ptr [g_0087b628]
        mov    eax, dword ptr [g_0087b63c]
        cmp    eax, ecx
        mov    dword ptr [g_0087bc18], ecx
        jg    L_0800
        mov    dword ptr [g_0087bc18], eax
L_0800:
        cmp    eax, ecx
        mov    dword ptr [g_0087bc1c], eax
        jg    L_080f
        mov    dword ptr [g_0087bc1c], ecx
L_080f:
        mov    ecx, dword ptr [g_0087b624]
        mov    eax, dword ptr [g_0087b638]
        cmp    eax, ecx
        mov    dword ptr [g_0087bc20], ecx
        jg    L_0829
        mov    dword ptr [g_0087bc20], eax
L_0829:
        cmp    eax, ecx
        jle    L_0834
        mov    dword ptr [g_0087bc24], eax
        jmp    L_087a
L_0834:
        mov    dword ptr [g_0087bc24], ecx
        jmp    L_087a
L_083c:
        mov    eax, dword ptr [g_0087b63c]
        mov    dword ptr [g_0087b628], eax
        mov    dword ptr [g_0087bc1c], eax
        mov    dword ptr [g_0087bc18], eax
        mov    eax, dword ptr [g_0087b638]
        mov    dword ptr [g_0087bc04], 1
        mov    dword ptr [g_0087b624], eax
        mov    dword ptr [g_0087bc24], eax
        mov    dword ptr [g_0087bc20], eax
        jmp    L_087a
L_0870:
        mov    dword ptr [g_0087bc04], 0
L_087a:
        push    0
        push    1
        call    FUN_00713cc0
        push    3
        push    0xd
        call    FUN_00713cc0
        push    2
        push    0x10
        call    FUN_00713cc0
        mov    eax, dword ptr [g_0087bc20]
        mov    ecx, dword ptr [g_0087bc24]
        mov    edx, dword ptr [g_0087bc1c]
        push    0xc0404080
        sub    ecx, eax
        push    ecx
        mov    ecx, dword ptr [g_0087bc18]
        sub    edx, ecx
        push    edx
        push    eax
        push    ecx
        call    FUN_007103b0
        push    0
        push    1
        call    FUN_00713cc0
        push    1
        push    0xd
        call    FUN_00713cc0
        push    2
        push    0x10
        call    FUN_00713cc0
        push    0xff606060
        push    0x20
        push    0x84
        push    4
        push    4
        call    FUN_007103b0
        call    FUN_0073d430
        push    1
        push    0xd
        call    FUN_00713cc0
        mov    eax, dword ptr [g_0087bc28]
        push    eax
        lea    ecx, [esp + 4]
        push    0x7a1df0
        push    ecx
        mov    dword ptr [g_008aaf30], 0x10
        mov    dword ptr [g_008aaf2c], 0x10
        call    dword ptr [g_0076b420]
        add    esp, 0xc
        __emit 0x8D  // 141 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        push    edx
        push    0xffffff
        mov    dword ptr [g_0087bc28], 0
        call    FUN_0073d3b0
L_0942:
        add    esp, 0x40
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
        mov    al, byte ptr [g_0087bc34]
        sub    esp, 0x40
        push    ebx
        xor    ebx, ebx
        cmp    al, bl
        je    L_0b36
        cmp    dword ptr [g_0087c5c4], 0xf423f
        jne    L_0988
        mov    eax, dword ptr [g_0087c5bc]
        mov    dword ptr [g_0087c5c8], eax
        mov    dword ptr [g_0087c5c4], eax
        mov    eax, dword ptr [g_0087c690]
        mov    dword ptr [g_0087c5c0], eax
L_0988:
        call    FUN_00723bd0
        shr    eax, 8
        and    eax, 0xff00ff
        cmp    eax, 0x25
        je    L_099f
        cmp    eax, 0x28
        jne    L_09b2
L_099f:
        mov    ecx, dword ptr [g_0087c5c4]
        cmp    ecx, ebx
        je    L_09b8
        dec    ecx
        mov    dword ptr [g_0087c5c4], ecx
        jmp    L_09b8
L_09b2:
        mov    ecx, dword ptr [g_0087c5c4]
L_09b8:
        cmp    eax, 0x22
        jne    L_09cd
        cmp    ecx, 0x32
        jbe    L_0a04
        sub    ecx, 0x32
        mov    dword ptr [g_0087c5c4], ecx
        jmp    L_0a17
L_09cd:
        cmp    eax, 0x27
        mov    edx, dword ptr [g_0087c5c8]
        je    L_09dd
        cmp    eax, 0x26
        jne    L_09e8
L_09dd:
        cmp    ecx, edx
        jae    L_09e8
        inc    ecx
        mov    dword ptr [g_0087c5c4], ecx
L_09e8:
        cmp    eax, 0x21
        jne    L_09ff
        lea    eax, [edx - 0x32]
        cmp    ecx, eax
        jae    L_0a11
        add    ecx, 0x32
        mov    dword ptr [g_0087c5c4], ecx
        jmp    L_0a17
L_09ff:
        cmp    eax, 0x24
        jne    L_0a0c
L_0a04:
        mov    dword ptr [g_0087c5c4], ebx
        jmp    L_0a17
L_0a0c:
        cmp    eax, 0x23
        jne    L_0a17
L_0a11:
        mov    dword ptr [g_0087c5c4], edx
L_0a17:
        push    esi
        push    ebx
        push    1
        call    FUN_00713cc0
        push    1
        push    0xd
        call    FUN_00713cc0
        push    2
        push    0x10
        call    FUN_00713cc0
        push    0xff606060
        push    0x26
        push    0xd6
        push    4
        push    4
        call    FUN_007103b0
        call    FUN_0073d430
        push    1
        push    0xd
        call    FUN_00713cc0
        mov    ecx, dword ptr [g_0087c5c8]
        mov    edx, dword ptr [g_0087c5c4]
        mov    esi, dword ptr [g_0076b420]
        push    ecx
        push    edx
        lea    eax, [esp + 0x10]
        push    0x7a1e3c
        push    eax
        mov    dword ptr [g_008aaf30], 0x23
        mov    dword ptr [g_008aaf2c], 6
        mov    dword ptr [g_008aaf38], ebx
        mov    dword ptr [g_008aaf34], ebx
        mov    dword ptr [g_008aaf1c], 0x40
        mov    dword ptr [g_008aaf18], 0x18
        call    esi
        add    esp, 0x10
        lea    ecx, [esp + 8]
        push    ecx
        push    0xffffff
        mov    dword ptr [g_0087bc28], ebx
        call    FUN_0073d3b0
        mov    edx, dword ptr [g_0087c5c0]
        push    edx
        lea    eax, [esp + 0xc]
        push    0x7a1e24
        push    eax
        call    esi
        add    esp, 0xc
        lea    ecx, [esp + 8]
        push    ecx
        push    0xffffff
        mov    dword ptr [g_008aaf38], ebx
        mov    dword ptr [g_008aaf30], 0x2a
        mov    dword ptr [g_008aaf2c], 0x10
        call    FUN_0073d3b0
        push    0x7a1e00
        push    0xffffff
        mov    dword ptr [g_008aaf38], ebx
        mov    dword ptr [g_008aaf30], 8
        mov    dword ptr [g_008aaf2c], 0x1e
        call    FUN_0073d3b0
        mov    dword ptr [g_0087c5bc], ebx
        mov    dword ptr [g_0087c690], ebx
        pop    esi
L_0b36:
        pop    ebx
        add    esp, 0x40
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 8]
        push    esi
        mov    eax, 1
        mov    ecx, edx
        push    edi
        and    ecx, eax
        xor    esi, esi
        xor    edi, edi
        test    cl, cl
        jne    L_0b5e
L_0b57:
        shl    eax, 1
        inc    esi
        test    eax, edx
        je    L_0b57
L_0b5e:
        xor    ecx, ecx
L_0b60:
        mov    eax, 1
        shl    eax, cl
        test    eax, edx
        je    L_0b6c
        inc    edi
L_0b6c:
        inc    ecx
        cmp    ecx, 0x20
        jl    L_0b60
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, esi
        and    eax, edx
        shr    eax, cl
        mov    ecx, 8
        sub    ecx, edi
        pop    edi
        shl    eax, cl
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        xor    ecx, ecx
        xor    edx, edx
        mov    dl, byte ptr [esp + 0xa]
        mov    cl, bh
        mov    eax, ebx
        and    eax, 0xff
        push    eax
        push    ecx
        push    edx
        push    0x7a1e54
        push    0x85b5c8
        call    dword ptr [g_0076b420]
        add    esp, 0x14
        mov    eax, 0x85b5d5
        mov    ecx, 0x17
L_0bc6:
        cmp    ecx, 0xf
        je    L_0bd0
        cmp    ecx, 7
        jne    L_0bd4
L_0bd0:
        mov    byte ptr [eax], 0x20
        inc    eax
L_0bd4:
        mov    edx, 1
        shl    edx, cl
        test    edx, ebx
        setne    dl
        add    edx, 0x30
        mov    byte ptr [eax], dl
        inc    eax
        dec    ecx
        jns    L_0bc6
        mov    byte ptr [eax], 0
        mov    eax, 0x85b5c8
        pop    ebx
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
        sub    esp, 0x100
        push    ebx
        push    esi
        call    FUN_00723bd0
        mov    esi, eax
        and    esi, 0xff00ff00
        xor    ebx, ebx
        cmp    esi, 0x2600
        jne    L_0c39
        push    0x10
        call    FUN_00723b40
        test    eax, eax
        je    L_0c39
        mov    eax, dword ptr [g_0087bc4c]
        cmp    eax, ebx
        jbe    L_0c39
        dec    eax
        mov    dword ptr [g_0087bc4c], eax
L_0c39:
        cmp    esi, 0x2800
        jne    L_0c5c
        push    0x10
        call    FUN_00723b40
        test    eax, eax
        je    L_0c5c
        mov    eax, dword ptr [g_0087bc4c]
        cmp    eax, 5
        jae    L_0c5c
        inc    eax
        mov    dword ptr [g_0087bc4c], eax
L_0c5c:
        cmp    byte ptr [g_0087bc34], bl
        je    L_1049
        mov    eax, dword ptr [g_0085a1b8]
        mov    ecx, dword ptr [g_0085a0cc]
        push    edi
        push    eax
        push    ecx
        call    FUN_00710b40
        mov    edx, dword ptr [g_0085a1bc]
        mov    esi, eax
        mov    eax, dword ptr [g_0085a0cc]
        push    edx
        push    eax
        shl    esi, 8
        call    FUN_00710b40
        mov    ecx, dword ptr [g_0085a1c0]
        mov    edx, dword ptr [g_0085a0cc]
        push    ecx
        add    esi, eax
        push    edx
        shl    esi, 8
        call    FUN_00710b40
        mov    edi, dword ptr [g_0087b63c]
        mov    edx, dword ptr [g_0087b638]
        add    esi, eax
        mov    eax, dword ptr [g_0087bc4c]
        mov    ecx, dword ptr [eax*4 + 0x7b706c]
        mov    eax, dword ptr [g_007b7084]
        cmp    eax, 4
        mov    dword ptr [g_0087bc48], ecx
        mov    ecx, dword ptr [g_00858940]
        jne    L_0cf7
        cmp    edi, 0x134
        jg    L_0d1c
        cmp    edx, 0x5a
        jge    L_0d1c
        lea    eax, [ecx - 0x132]
        cmp    eax, 4
        mov    dword ptr [g_007b7084], eax
        je    L_0d1c
L_0cf7:
        push    ebp
        lea    ebp, [ecx - 0x132]
        cmp    eax, ebp
        pop    ebp
        jne    L_0d12
        add    ecx, 0xfffffeca
        cmp    edi, ecx
        jl    L_0d1c
        cmp    edx, 0x5a
        jge    L_0d1c
L_0d12:
        mov    dword ptr [g_007b7084], 4
L_0d1c:
        push    ebx
        push    1
        call    FUN_00713cc0
        mov    edx, dword ptr [g_0087bc48]
        and    edx, 0xff000000
        cmp    edx, 0xff000000
        pop    edi
        jne    L_0d3d
        push    1
        jmp    L_0d3f
L_0d3d:
        push    3
L_0d3f:
        push    0xd
        call    FUN_00713cc0
        mov    eax, dword ptr [g_007b7088]
        mov    ecx, dword ptr [g_007b7084]
        push    0x60
        push    0x50
        push    0x12e
        push    eax
        push    ecx
        call    FUN_007103b0
        mov    edx, dword ptr [g_007b7088]
        mov    eax, dword ptr [g_007b7084]
        push    esi
        push    0x20
        push    0x20
        add    edx, 0x2a
        push    edx
        add    eax, 0x1e
        push    eax
        call    FUN_007103b0
        call    FUN_0073d430
        push    3
        push    0xd
        call    FUN_00713cc0
        mov    ecx, dword ptr [g_007b7084]
        mov    edx, dword ptr [g_007b7088]
        lea    eax, [ecx + 6]
        mov    dword ptr [g_008aaf30], eax
        mov    dword ptr [g_008aaf28], eax
        lea    eax, [edx + 5]
        push    esi
        mov    dword ptr [g_008aaf2c], eax
        mov    dword ptr [g_008aaf24], eax
        mov    dword ptr [g_008aaf38], ebx
        mov    dword ptr [g_008aaf34], ebx
        mov    dword ptr [g_008aaf1c], 0x32
        mov    dword ptr [g_008aaf18], 0x18
        call    FUN_00710b90
        mov    esi, dword ptr [g_0076b420]
        push    eax
        lea    eax, [esp + 0xc]
        push    0x7a1f10
        push    eax
        call    esi
        add    esp, 0xc
        lea    ecx, [esp + 8]
        push    ecx
        push    0xc0c0c0
        call    FUN_0073d3b0
        cmp    dword ptr [g_0087c594], ebx
        je    L_0e2d
        mov    edx, dword ptr [g_0087c598]
        push    edx
        call    FUN_00710b90
        push    eax
        lea    eax, [esp + 0xc]
        push    0x7a1f00
        push    eax
        call    esi
        add    esp, 0xc
        lea    ecx, [esp + 8]
        push    ecx
        push    0xc0c0c0
        jmp    L_0e4d
L_0e2d:
        push    ebx
        call    FUN_00710b90
        push    eax
        lea    edx, [esp + 0xc]
        push    0x7a1f00
        push    edx
        call    esi
        add    esp, 0xc
        lea    eax, [esp + 8]
        push    eax
        push    0x808080
L_0e4d:
        call    FUN_0073d3b0
        cmp    dword ptr [g_0087c0cc], ebx
        mov    dword ptr [g_0087c594], ebx
        je    L_0e88
        mov    ecx, dword ptr [g_0087c0c8]
        push    ecx
        call    FUN_00710b90
        push    eax
        lea    edx, [esp + 0xc]
        push    0x7a1ef0
        push    edx
        call    esi
        add    esp, 0xc
        lea    eax, [esp + 8]
        push    eax
        push    0xc0c0c0
        jmp    L_0ea8
L_0e88:
        push    ebx
        call    FUN_00710b90
        push    eax
        lea    ecx, [esp + 0xc]
        push    0x7a1ef0
        push    ecx
        call    esi
        add    esp, 0xc
        lea    edx, [esp + 8]
        push    edx
        push    0x808080
L_0ea8:
        call    FUN_0073d3b0
        mov    eax, dword ptr [g_0085a0c8]
        push    eax
        mov    dword ptr [g_0087c0cc], ebx
        call    FUN_00710b90
        push    eax
        lea    ecx, [esp + 0xc]
        push    0x7a1ee0
        push    ecx
        call    esi
        add    esp, 0xc
        lea    edx, [esp + 8]
        push    edx
        push    0xc0c0c0
        call    FUN_0073d3b0
        mov    eax, dword ptr [g_007b7084]
        mov    ecx, dword ptr [g_007b7088]
        add    eax, 0x58
        mov    dword ptr [g_008aaf30], eax
        mov    dword ptr [g_008aaf28], eax
        lea    eax, [ecx + 0x2c]
        mov    dword ptr [g_008aaf2c], eax
        mov    dword ptr [g_008aaf24], eax
        cmp    dword ptr [g_0085a1b4], 0x10
        jne    L_0f24
        mov    edx, dword ptr [g_0085a0cc]
        and    edx, 0xffff
        push    edx
        push    0x7a1ec0
        lea    eax, [esp + 0x10]
        push    eax
        jmp    L_0f3b
L_0f24:
        mov    ecx, dword ptr [g_0085a0cc]
        and    ecx, 0xffffff
        push    ecx
        push    0x7a1ea0
        lea    edx, [esp + 0x10]
        push    edx
L_0f3b:
        call    esi
        add    esp, 0xc
        lea    eax, [esp + 8]
        push    eax
        push    0xc0c0c0
        call    FUN_0073d3b0
        push    0x85a1a8
        call    FUN_00751100
        push    eax
        lea    ecx, [esp + 0xc]
        push    0x7a1e84
        push    ecx
        call    esi
        add    esp, 0xc
        lea    edx, [esp + 8]
        push    edx
        push    0xc0c0c0
        call    FUN_0073d3b0
        mov    eax, dword ptr [g_0087b638]
        mov    ecx, dword ptr [g_0087b63c]
        push    eax
        push    ecx
        lea    edx, [esp + 0x10]
        push    0x7a1e64
        push    edx
        call    esi
        add    esp, 0x10
        lea    eax, [esp + 8]
        push    eax
        push    0xc0c0c0
        call    FUN_0073d3b0
        mov    ecx, dword ptr [g_0087b61c]
        cmp    ecx, ebx
        mov    eax, dword ptr [g_0087bc40]
        mov    edx, 0xc
        je    L_0fd1
        sub    eax, ecx
        cmp    eax, edx
        mov    dword ptr [g_0087bc40], eax
        jle    L_0fc6
        mov    eax, edx
        jmp    L_0fcc
L_0fc6:
        cmp    eax, ebx
        jge    L_0fd1
        xor    eax, eax
L_0fcc:
        mov    dword ptr [g_0087bc40], eax
L_0fd1:
        test    byte ptr [g_0087b620], 1
        je    L_1003
        cmp    dword ptr [g_0087bc44], ebx
        jne    L_0ff3
        mov    eax, dword ptr [g_0087bc30]
        inc    eax
        mov    dword ptr [g_0087bc40], ebx
        mov    dword ptr [g_0087bc30], eax
L_0ff3:
        cmp    dword ptr [g_0087bc30], edx
        jle    L_1025
        mov    dword ptr [g_0087bc30], edx
        jmp    L_1025
L_1003:
        mov    ecx, dword ptr [g_0087bc30]
        cmp    ecx, eax
        mov    dword ptr [g_0087bc44], ebx
        jle    L_101c
        dec    ecx
        mov    dword ptr [g_0087bc30], ecx
        cmp    ecx, eax
L_101c:
        jge    L_1025
        inc    ecx
        mov    dword ptr [g_0087bc30], ecx
L_1025:
        mov    ecx, dword ptr [g_0087b63c]
        mov    edx, dword ptr [g_0087b638]
        mov    dword ptr [g_0087bc38], ecx
        mov    dword ptr [g_0087bc3c], edx
        mov    dword ptr [g_0087c5b4], ebx
        mov    dword ptr [g_0087c5b8], ebx
L_1049:
        pop    esi
        pop    ebx
        add    esp, 0x100
        ret    
    }
}
