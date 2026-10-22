/*
 * FUN_00710b8a (extent 0x710b8a-0x711186) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern float  g_0076d970;
extern float  g_00785970;
extern float  g_007a1f70;
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
extern int    g_0087b638;
extern int    g_0087b63c;
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

__declspec(naked) void FUN_00710b8a(void)
{
    __asm {
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
        push    ebp
        mov    ebp, esp
        and    esp, 0xfffffff8
        sub    esp, 0x8c
        fld    dword ptr [ebp + 8]
        push    esi
        fst    qword ptr [esp + 8]
        fcomp    qword ptr [g_00785970]
        fnstsw  ax
        test    ah, 1
        je    L_10cb
        fld    dword ptr [ebp + 8]
        fst    qword ptr [esp + 8]
        fcomp    qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 0x41
        jne    L_10a6
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        push    0x7a1f78
        jmp    L_10da
L_10a6:
        fld    dword ptr [ebp + 8]
        fst    qword ptr [esp + 8]
        fcomp    qword ptr [g_007a1f70]
        fnstsw  ax
        test    ah, 0x41
        je    L_10cb
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        push    0x7a1f60
        jmp    L_10da
L_10cb:
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        push    0x7a1f50
L_10da:
        mov    esi, dword ptr [g_0076b420]
        lea    edx, [esp + 0x1c]
        push    edx
        call    esi
        add    esp, 0x10
        lea    eax, [esp + 0x10]
        push    eax
        push    0xc0c0c0
        call    FUN_0073d3b0
        fld    dword ptr [ebp + 0xc]
        fst    qword ptr [esp + 8]
        fcomp    qword ptr [g_00785970]
        fnstsw  ax
        test    ah, 1
        je    L_1157
        fld    dword ptr [ebp + 0xc]
        fst    qword ptr [esp + 8]
        fcomp    qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 0x41
        jne    L_1132
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        push    0x7a1f40
        jmp    L_1166
L_1132:
        fld    dword ptr [ebp + 0xc]
        fst    qword ptr [esp + 8]
        fcomp    qword ptr [g_007a1f70]
        fnstsw  ax
        test    ah, 0x41
        je    L_1157
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        push    0x7a1f30
        jmp    L_1166
L_1157:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        push    0x7a1f20
L_1166:
        lea    eax, [esp + 0x1c]
        push    eax
        call    esi
        add    esp, 0x10
        lea    ecx, [esp + 0x10]
        push    ecx
        push    0xc0c0c0
        call    FUN_0073d3b0
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    8
    }
}
