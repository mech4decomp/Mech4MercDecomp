/*
 * FUN_006e8d50 (extent 0x6e8d50-0x6e9e68) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0d4;
extern int    g_0076b0f4;
extern int    g_0076b414;
extern int    g_0076b420;
extern int    g_0076b514;
extern int    g_0076b518;
extern int    g_0076b51c;
extern int    g_0076b520;
extern int    g_0076b524;
extern int    g_0076b528;
extern int    g_0076b540;
extern int    g_0076b544;
extern int    g_0076b560;
extern int    g_0076b564;
extern int    g_0076b568;
extern int    g_0076b570;
extern int    g_0076b574;
extern int    g_0076b59c;
extern int    g_0076b5a0;
extern int    g_0076b5a4;
extern int    g_0076b5ac;
extern float  g_00779d40;
extern float  g_00779d44;
extern int    g_007b6984;
extern int    g_007b6a48;
extern int    g_007b6a4c;
extern int    g_007b82b4;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd268;
extern int    g_00841758;
extern int    g_00841760;
extern int    g_00841764;
extern int    g_00841768;
extern int    g_00848c6c;
extern int    g_00848c7c;
extern int    g_00848c80;
extern int    g_00848c84;
extern int    g_00848c88;
extern int    g_00848c8c;
extern int    g_00848ca4;
extern char   g_00848cb0;
extern int    g_00848cb4;
extern int    g_00848d6c;
extern int    g_00848d70;
extern int    g_00848d74;
extern void __cdecl FUN_00513b60(void);
extern void __cdecl FUN_0051f850(void);
extern void __cdecl FUN_0051f930(void);
extern void __cdecl FUN_00523ba0(void);
extern void __cdecl FUN_00523cb0(void);
extern void __cdecl FUN_005240b0(void);
extern void __cdecl FUN_00563550(void);
extern void __cdecl FUN_005647e0(void);
extern void __cdecl FUN_005648d0(void);
extern void __cdecl FUN_00565e00(void);
extern void __cdecl FUN_00566380(void);
extern void __cdecl FUN_006100a0(void);
extern void __cdecl FUN_006e4210(void);
extern void __cdecl FUN_006e5910(void);
extern void __cdecl FUN_006e5bf0(void);
extern void __cdecl FUN_006e9fc0(void);
extern void __cdecl FUN_006ed690(void);
extern void __cdecl FUN_006ed920(void);
extern void __cdecl FUN_006edc80(void);
extern void __cdecl FUN_006ee100(void);
extern void __cdecl FUN_006ee160(void);
extern void __cdecl FUN_006ee1c0(void);
extern void __cdecl FUN_006ee230(void);
extern void __cdecl FUN_006ee2b0(void);
extern void __cdecl FUN_006ee350(void);
extern void __cdecl FUN_006ee3c0(void);
extern void __cdecl FUN_006ee430(void);
extern void __cdecl FUN_006ee490(void);
extern void __cdecl FUN_006ee4f0(void);
extern void __cdecl FUN_006ee560(void);
extern void __cdecl FUN_006ee5e0(void);
extern void __cdecl FUN_006ee660(void);
extern void __cdecl FUN_006ee6e0(void);
extern void __cdecl FUN_006ee820(void);
extern void __cdecl FUN_006eeaa0(void);
extern void __cdecl FUN_006efe60(void);
extern void __cdecl FUN_006f0150(void);
extern void __cdecl FUN_006f0270(void);
extern void __cdecl FUN_006f03a0(void);
extern void __cdecl FUN_006f04e0(void);
extern void __cdecl FUN_006f0600(void);
extern void __cdecl FUN_006f0710(void);
extern void __cdecl FUN_006f0770(void);
extern void __cdecl FUN_006f07e0(void);
extern void __cdecl FUN_006f0930(void);
extern void __cdecl FUN_006f0e60(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_006e8d50(void)
{
    __asm {
        mov    eax, dword ptr [esp + 0x10]
        sub    eax, 0
        je    L_8d73
        dec    eax
        je    L_8d6b
        dec    eax
        je    L_8d66
        mov    eax, dword ptr [esp + 8]
        ret    0x10
L_8d66:
        xor    eax, eax
        ret    0x10
L_8d6b:
        mov    eax, dword ptr [esp + 8]
        inc    eax
        ret    0x10
L_8d73:
        mov    ecx, dword ptr [esp + 8]
        lea    eax, [ecx - 1]
        ret    0x10
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        sub    esp, 0x11c
        cmp    eax, 0x110
        push    ebx
        push    ebp
        push    esi
        push    edi
        ja    L_8f23
        je    L_8ec2
        sub    eax, 2
        je    L_8dad
        sub    eax, 0xe
        jne    L_9e59
L_8dad:
        mov    eax, dword ptr [g_007b6984]
        mov    ebx, dword ptr [esp + 0x130]
        push    eax
        push    ebx
        call    dword ptr [g_0076b514]
        mov    ecx, dword ptr [g_007dd268]
        mov    eax, dword ptr [ecx + 0x409a0]
        mov    ecx, dword ptr [g_00848c7c]
        xor    edi, edi
        xor    esi, esi
        cmp    eax, edi
        jle    L_8e02
L_8ddb:
        mov    eax, dword ptr [ecx + esi*4]
        cmp    eax, edi
        je    L_8df1
        push    eax
        call    FUN_006f4230
        mov    ecx, dword ptr [g_00848c7c]
        mov    dword ptr [ecx + esi*4], edi
L_8df1:
        mov    edx, dword ptr [g_007dd268]
        mov    eax, dword ptr [edx + 0x409a0]
        inc    esi
        cmp    esi, eax
        jl    L_8ddb
L_8e02:
        cmp    ecx, edi
        je    L_8e12
        push    ecx
        call    FUN_006f4230
        mov    dword ptr [g_00848c7c], edi
L_8e12:
        mov    eax, dword ptr [g_00848c80]
        cmp    eax, edi
        je    L_8e27
        push    eax
        call    FUN_006f4230
        mov    dword ptr [g_00848c80], edi
L_8e27:
        mov    eax, dword ptr [g_00848c84]
        cmp    eax, edi
        je    L_8e3c
        push    eax
        call    FUN_006f4230
        mov    dword ptr [g_00848c84], edi
L_8e3c:
        mov    eax, dword ptr [g_00848c88]
        cmp    eax, edi
        je    L_8e51
        push    eax
        call    FUN_006f4230
        mov    dword ptr [g_00848c88], edi
L_8e51:
        xor    esi, esi
L_8e53:
        mov    eax, dword ptr [esi + 0x8449a0]
        cmp    eax, edi
        je    L_8e69
        push    eax
        call    FUN_006f4230
        mov    dword ptr [esi + 0x8449a0], edi
L_8e69:
        mov    eax, dword ptr [esi + 0x84493c]
        cmp    eax, edi
        je    L_8e7f
        push    eax
        call    FUN_006f4230
        mov    dword ptr [esi + 0x84493c], edi
L_8e7f:
        add    esi, 4
        cmp    esi, 0x64
        jl    L_8e53
        cmp    dword ptr [g_00848cb4], edi
        mov    eax, dword ptr [g_00848d70]
        jne    L_8e98
        cmp    eax, edi
        je    L_8ea5
L_8e98:
        push    eax
        call    dword ptr [g_0076b518]
        mov    dword ptr [g_00848d70], edi
L_8ea5:
        call    FUN_006e5910
        push    1
        push    ebx
        call    dword ptr [g_0076b570]
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_8ec2:
        mov    esi, dword ptr [esp + 0x130]
        push    esi
        call    FUN_006e9fc0
        mov    edx, dword ptr [g_00848d74]
        xor    ecx, ecx
        test    edx, edx
        sete    cl
        mov    dword ptr [g_00841760], esi
        push    ecx
        call    FUN_006e5bf0
        mov    edi, dword ptr [g_0076b5a4]
        add    esp, 8
        push    0
        push    0x41e
        push    esi
        call    edi
        mov    ebx, dword ptr [g_0076b568]
        push    eax
        call    ebx
        push    0
        push    0x4db
        push    esi
        call    edi
        push    eax
        call    ebx
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_8f23:
        sub    eax, 0x111
        je    L_9200
        sub    eax, 2
        jne    L_9e59
        mov    edx, dword ptr [esp + 0x138]
        cmp    edx, dword ptr [g_007b6984]
        jne    L_9e59
        cmp    dword ptr [g_00848ca4], 2
        jne    L_8f5e
        push    0
        push    0
        push    0
        call    FUN_00513b60
L_8f5e:
        mov    edi, dword ptr [esp + 0x130]
        push    edi
        call    FUN_006ee820
        push    edi
        call    FUN_006eeaa0
        mov    eax, dword ptr [g_00848d74]
        add    esp, 8
        test    eax, eax
        je    L_8fba
        push    0
        push    eax
        call    dword ptr [g_0076b0f4]
        cmp    eax, 0x102
        je    L_8fba
        mov    eax, dword ptr [g_00848ca4]
        test    eax, eax
        mov    dword ptr [g_00848d74], 0
        jne    L_8fba
        push    1
        call    FUN_006e5bf0
        push    edi
        mov    dword ptr [g_007b6a4c], 0xffffffff
        call    FUN_006edc80
        add    esp, 8
L_8fba:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007dab40]
        mov    esi, dword ptr [g_0076b5a4]
        xor    eax, edx
        mov    ebx, dword ptr [eax + 0xc]
        mov    edx, dword ptr [g_00848ca4]
        xor    ebx, 0x85739531
        cmp    edx, 2
        mov    ecx, dword ptr [ebx + 0x50]
        mov    dword ptr [esp + 0x10], 0
        jne    L_9078
        mov    ebp, dword ptr [eax + 0x20]
        xor    ebp, 0x85739531
        mov    al, byte ptr [ebp + 0x21e4]
        test    al, al
        jne    L_900f
        mov    dword ptr [esp + 0x10], 0
        jmp    L_9024
L_900f:
        lea    ecx, [ebp + 0x21b8]
        call    FUN_006100a0
        fsubr    dword ptr [ebp + 0x2218]
        fstp    dword ptr [esp + 0x10]
L_9024:
        fld    dword ptr [esp + 0x10]
        call    FUN_0075db4a
        test    eax, eax
        jg    L_9054
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [g_007dab40]
        xor    eax, dword ptr [edx]
        mov    eax, dword ptr [eax + 0xc]
        xor    eax, 0x85739531
        mov    dword ptr [g_00848ca4], 0
        mov    byte ptr [eax + 0x7c], 0
L_9054:
        push    5
        push    0x4d6
        push    edi
        call    esi
        mov    ebp, dword ptr [g_0076b568]
        push    eax
        call    ebp
        push    0
        push    0x4d7
        push    edi
        call    esi
        push    eax
        call    ebp
        push    5
        jmp    L_90e4
L_9078:
        test    edx, edx
        jne    L_90ef
        mov    al, byte ptr [ebx + 0x7c]
        test    al, al
        je    L_90c2
        fild    dword ptr [ecx + 0x9c]
        push    edx
        fstp    qword ptr [esp + 0x1c]
        call    FUN_00707e70
        fsub    qword ptr [ebx + 0x74]
        push    0
        push    0x4d6
        push    edi
        fsubr    qword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x1c]
        call    esi
        mov    ebp, dword ptr [g_0076b568]
        push    eax
        call    ebp
        push    5
        push    0x4d7
        push    edi
        call    esi
        push    eax
        call    ebp
        push    5
        jmp    L_90e4
L_90c2:
        push    0
        push    0x4d6
        push    edi
        call    esi
        mov    ebp, dword ptr [g_0076b568]
        push    eax
        call    ebp
        push    0
        push    0x4d7
        push    edi
        call    esi
        push    eax
        call    ebp
        push    0
L_90e4:
        push    0x4d5
        push    edi
        call    esi
        push    eax
        call    ebp
L_90ef:
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [g_00779d44]
        call    FUN_0075db4a
        mov    ebp, eax
        lea    eax, [ebp + ebp*4]
        lea    eax, [eax + eax*4]
        lea    ecx, [eax + eax*8]
        shl    ecx, 4
        mov    dword ptr [esp + 0x14], ecx
        fild    dword ptr [esp + 0x14]
        fsubr    dword ptr [esp + 0x10]
        fld    st(0)
        fmul    dword ptr [g_00779d40]
        call    FUN_0075db4a
        mov    edx, eax
        shl    edx, 4
        sub    edx, eax
        shl    edx, 2
        mov    dword ptr [esp + 0x14], edx
        fild    dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x10], eax
        fsubr st(0), st(1)
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        push    ebp
        lea    ecx, [esp + 0x38]
        push    0x779d30
        push    ecx
        call    dword ptr [g_0076b420]
        add    esp, 0x14
        lea    edx, [esp + 0x2c]
        push    edx
        push    0x4d5
        push    edi
        call    esi
        push    eax
        call    dword ptr [g_0076b51c]
        mov    eax, dword ptr [g_00848ca4]
        test    eax, eax
        jne    L_9e59
        mov    al, byte ptr [ebx + 0x7c]
        test    al, al
        jne    L_91a8
        mov    ecx, dword ptr [ebx + 0x50]
        mov    edx, dword ptr [ecx + 0x98]
        test    edx, edx
        je    L_91a4
        push    0
        mov    byte ptr [ebx + 0x7c], 1
        call    FUN_00707e70
        fstp    qword ptr [ebx + 0x74]
        jmp    L_91b9
L_91a4:
        test    al, al
        je    L_91b9
L_91a8:
        mov    eax, dword ptr [ebx + 0x50]
        mov    ecx, dword ptr [eax + 0x98]
        test    ecx, ecx
        jne    L_91b9
        mov    byte ptr [ebx + 0x7c], 0
L_91b9:
        mov    al, byte ptr [ebx + 0x7c]
        test    al, al
        je    L_9e59
        push    0
        call    FUN_00707e70
        fsub    qword ptr [ebx + 0x74]
        mov    eax, dword ptr [ebx + 0x50]
        fild    dword ptr [eax + 0x9c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_9e59
        push    edi
        call    FUN_006ed690
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        mov    byte ptr [ebx + 0x7c], 0
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_9200:
        mov    eax, dword ptr [esp + 0x138]
        cmp    ax, 0x49b
        jb    L_926b
        cmp    ax, 0x4b3
        jae    L_926b
        mov    edi, dword ptr [esp + 0x130]
        mov    esi, eax
        and    esi, 0xffff
        push    esi
        push    edi
        call    dword ptr [g_0076b5a4]
        push    eax
        call    dword ptr [g_0076b540]
        test    eax, eax
        je    L_9e59
        add    esi, 0xfffffb65
        mov    dword ptr [g_00848c8c], esi
        call    dword ptr [g_0076b5ac]
        push    0
        mov    ecx, eax
        push    edi
        shr    ecx, 0x10
        push    0
        movsx    edx, cx
        mov    ecx, dword ptr [g_00848d6c]
        push    edx
        movsx    eax, ax
        push    eax
        push    0
        push    ecx
        jmp    L_9e53
L_926b:
        cmp    ax, 0x429
        jb    L_92cd
        cmp    ax, 0x441
        jae    L_92cd
        mov    edi, dword ptr [esp + 0x130]
        mov    esi, eax
        and    esi, 0xffff
        push    esi
        push    edi
        call    dword ptr [g_0076b5a4]
        push    eax
        call    dword ptr [g_0076b540]
        test    eax, eax
        je    L_9e59
        add    esi, 0xfffffbd7
        mov    dword ptr [g_00848c8c], esi
        call    dword ptr [g_0076b5ac]
        push    0
        mov    edx, eax
        push    edi
        shr    edx, 0x10
        movsx    ecx, dx
        push    0
        movsx    edx, ax
        mov    eax, dword ptr [g_00848cb4]
        push    ecx
        push    edx
        push    0
        jmp    L_9e52
L_92cd:
        cmp    ax, 0xc350
        jb    L_939d
        mov    edx, dword ptr [g_00848c6c]
        mov    ecx, eax
        and    ecx, 0xffff
        add    edx, 0xc350
        cmp    ecx, edx
        jge    L_939d
        lea    eax, [esp + 0x14]
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [ecx*4 + 0x813d8c]
        xor    edi, edi
        cmp    eax, edi
        je    L_9351
        lea    edx, [esp + 0x10]
        push    edx
        lea    esi, [ecx*4 + 0x813cc4]
        mov    ecx, dword ptr [esi]
        push    1
        push    edi
        mov    dword ptr [esp + 0x20], ecx
        call    FUN_00523ba0
        mov    eax, dword ptr [esi]
        shl    eax, 2
        mov    dword ptr [eax + 0x842710], edi
        mov    dword ptr [eax + 0x841ec8], edi
        pop    edi
        or    ecx, 0xffffffff
        pop    esi
        pop    ebp
        mov    dword ptr [eax + 0x842b10], ecx
        mov    dword ptr [eax + 0x842310], ecx
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_9351:
        mov    eax, dword ptr [ecx*4 + 0x813d28]
        mov    dword ptr [esp + 0x14], eax
        mov    al, byte ptr [g_00848cb0]
        test    al, al
        je    L_9381
        lea    ecx, [esp + 0x10]
        push    ecx
        push    1
        push    edi
        call    FUN_0051f930
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_9381:
        lea    edx, [esp + 0x10]
        push    edx
        push    1
        push    edi
        call    FUN_0051f850
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_939d:
        cmp    ax, 0x9c40
        jb    L_93e2
        mov    edx, dword ptr [g_007dd268]
        mov    edx, dword ptr [edx + 0x409a0]
        mov    ecx, eax
        and    ecx, 0xffff
        add    edx, 0x9c40
        cmp    ecx, edx
        jge    L_93e2
        mov    eax, dword ptr [g_00848c8c]
        pop    edi
        pop    esi
        add    ecx, 0xffff63c0
        pop    ebp
        mov    dword ptr [eax*4 + 0x844cc0], ecx
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_93e2:
        cmp    ax, 0x8006
        jb    L_94b1
        cmp    ax, 0x800e
        jae    L_94b1
        and    eax, 0xffff
        mov    ecx, dword ptr [eax*4 + 0x8222b0]
        sub    eax, 0x8006
        test    ecx, ecx
        je    L_9468
        mov    ecx, dword ptr [g_00848c8c]
        mov    edx, dword ptr [ecx*4 + 0x844a04]
        mov    dword ptr [esp + 0x14], edx
        lea    edx, [esp + 0x18]
        push    edx
        mov    dword ptr [esp + 0x14], eax
        push    2
        lea    eax, [esp + 0x1c]
        lea    ecx, [esp + 0x18]
        push    0
        mov    dword ptr [esp + 0x24], eax
        mov    dword ptr [esp + 0x28], ecx
        call    FUN_00523cb0
        lea    eax, [esp + 0x18]
        push    eax
        push    1
        push    0
        call    FUN_005240b0
        test    eax, eax
        jne    L_9e59
        call    FUN_006f0770
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_9468:
        mov    edx, dword ptr [g_007b82b4]
        push    0x100
        lea    ecx, [esp + 0x30]
        push    ecx
        push    4
        push    edx
        call    dword ptr [g_0076b574]
        mov    ecx, dword ptr [g_00841768]
        push    0
        lea    eax, [esp + 0x30]
        push    eax
        push    0xc9a
        push    ecx
        call    FUN_0072d830
        push    eax
        call    FUN_006e4210
        add    esp, 0xc
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_94b1:
        mov    ecx, eax
        and    ecx, 0xffff
        cmp    ecx, 0x416
        jg    L_9a34
        je    L_9a15
        lea    edx, [ecx - 0x40a]
        cmp    edx, 7
        ja    L_9b39
        jmp    dword ptr [edx*4 + 0x6e9e68]
        mov    edx, dword ptr [esp + 0x130]
        push    edx
        call    FUN_006ed690
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    eax, dword ptr [g_007b6984]
        mov    esi, dword ptr [esp + 0x130]
        push    eax
        push    esi
        call    dword ptr [g_0076b514]
        push    1
        push    esi
        call    dword ptr [g_0076b570]
        mov    ecx, dword ptr [g_007dd268]
        mov    eax, dword ptr [g_007dab40]
        or    esi, 0xffffffff
        mov    dword ptr [ecx + 0x1c], esi
        mov    ecx, dword ptr [g_007dab44]
        mov    ebx, dword ptr [ecx]
        mov    edx, eax
        xor    edx, ebx
        mov    edx, dword ptr [edx + 0xc]
        xor    edx, 0x85739531
        mov    cl, byte ptr [edx + 0x17]
        test    cl, cl
        je    L_957b
        call    FUN_00565e00
        call    FUN_00566380
        call    FUN_005647e0
        push    0x77b534
        push    0x77b29c
        push    0x77b294
        call    FUN_00563550
        push    eax
        call    FUN_005648d0
        mov    eax, dword ptr [g_007dab40]
        add    esp, 0x10
L_957b:
        mov    ecx, dword ptr [g_007dab44]
        xor    eax, dword ptr [ecx]
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0
        call    dword ptr [edx + 0x2c]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007dab40]
        xor    eax, edx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [g_007dab44]
        mov    ebx, dword ptr [ecx]
        mov    eax, dword ptr [g_007dab40]
        xor    eax, ebx
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x50]
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [g_007dab44]
        mov    ebp, dword ptr [edx]
        mov    ecx, dword ptr [g_007dab40]
        xor    ecx, ebp
        mov    eax, dword ptr [ecx + 0xc]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x54]
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 4]
        mov    eax, dword ptr [g_00841764]
        test    eax, eax
        mov    dword ptr [g_007b6a48], esi
        mov    dword ptr [g_007b6a4c], esi
        push    0
        je    L_9637
        push    0
        push    0x110
        push    eax
        call    dword ptr [g_0076b560]
        mov    edx, dword ptr [g_00841764]
        push    5
        push    edx
        call    dword ptr [g_0076b568]
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_9637:
        mov    eax, dword ptr [g_00841758]
        mov    ecx, dword ptr [g_007b82b4]
        push    0x6e4bc0
        push    eax
        push    0x66
        push    ecx
        call    dword ptr [g_0076b564]
        push    5
        mov    edx, eax
        push    edx
        mov    dword ptr [g_00841764], eax
        call    dword ptr [g_0076b568]
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [g_007dab40]
        mov    ebp, dword ptr [ecx]
        mov    esi, dword ptr [g_0076b5a4]
        xor    eax, ebp
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [g_00841760]
        push    0
        push    0x40d
        xor    edx, 0x85739531
        push    eax
        mov    dword ptr [g_00848ca4], 0
        mov    byte ptr [edx + 0x7c], 0
        call    esi
        mov    edi, dword ptr [g_0076b544]
        push    eax
        call    edi
        mov    ecx, dword ptr [g_00841760]
        push    0
        push    0x40c
        push    ecx
        call    esi
        push    eax
        call    edi
        mov    edx, dword ptr [g_00841760]
        push    0
        push    0x4b6
        push    edx
        call    esi
        push    eax
        call    edi
        mov    eax, dword ptr [g_00841760]
        push    0
        push    0x4b7
        push    eax
        call    esi
        push    eax
        call    edi
        mov    edx, dword ptr [g_007dab44]
        mov    esi, dword ptr [edx]
        mov    ecx, dword ptr [g_007dab40]
        xor    ecx, esi
        lea    eax, [ecx + 0xc]
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x4c]
        cmp    dword ptr [edx + 0x14], 5
        jne    L_9e59
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    0
        call    dword ptr [eax + 0x2c]
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    esi, dword ptr [esp + 0x130]
        push    0x100
        lea    ecx, [esp + 0x30]
        push    ecx
        push    0x411
        push    esi
        call    dword ptr [g_0076b59c]
        or    ecx, 0xffffffff
        xor    eax, eax
        lea    edi, [esp + 0x2c]
        repne scasb
        not    ecx
        dec    ecx
        cmp    ecx, 0x64
        mov    bl, 0xa
        jbe    L_97cf
        or    ecx, 0xffffffff
        lea    edi, [esp + 0x2c]
        repne scasb
        not    ecx
        mov    al, byte ptr [esp + ecx + 0x2a]
        dec    ecx
        cmp    al, bl
        je    L_97cf
        or    ecx, 0xffffffff
        xor    eax, eax
        lea    edi, [esp + 0x2c]
        repne scasb
        lea    edx, [esp + 0x2c]
        push    edx
        not    ecx
        push    0x411
        dec    ecx
        push    esi
        mov    byte ptr [esp + ecx + 0x37], al
        call    dword ptr [g_0076b528]
        or    ecx, 0xffffffff
        xor    eax, eax
        lea    edi, [esp + 0x2c]
        repne scasb
        not    ecx
        dec    ecx
        push    ecx
        or    ecx, 0xffffffff
        lea    edi, [esp + 0x30]
        repne scasb
        not    ecx
        dec    ecx
        push    ecx
        push    0xb1
        push    0x411
        push    esi
        call    dword ptr [g_0076b5a4]
        push    eax
        call    dword ptr [g_0076b560]
L_97cf:
        or    ecx, 0xffffffff
        xor    eax, eax
        lea    edi, [esp + 0x2c]
        repne scasb
        not    ecx
        mov    al, byte ptr [esp + ecx + 0x2a]
        dec    ecx
        cmp    al, bl
        jne    L_9e59
        push    esi
        call    FUN_006ee6e0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    esi, dword ptr [esp + 0x130]
        mov    ebp, dword ptr [g_0076b5a4]
        push    0
        push    0x40a
        push    esi
        call    ebp
        push    eax
        call    dword ptr [g_0076b544]
        push    0
        push    0x100
        call    FUN_006f3c80
        push    0x100
        mov    edi, eax
        push    edi
        push    0x426
        push    esi
        mov    dword ptr [esp + 0x28], edi
        call    dword ptr [g_0076b59c]
        cmp    byte ptr [edi], 0x20
        mov    dword ptr [esp + 0x14], edi
        jne    L_9858
L_984c:
        mov    al, byte ptr [edi + 1]
        inc    edi
        cmp    al, 0x20
        je    L_984c
        mov    dword ptr [esp + 0x14], edi
L_9858:
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        jne    L_98be
        mov    ecx, dword ptr [g_007b82b4]
        push    0x100
        lea    eax, [esp + 0x30]
        push    eax
        push    7
        push    ecx
        call    dword ptr [g_0076b574]
        mov    eax, dword ptr [g_007dab44]
        mov    ebp, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        xor    edx, ebp
        mov    ecx, dword ptr [edx + 0xc]
        push    0
        lea    edx, [esp + 0x30]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    edx
        push    0x7546
        call    dword ptr [eax + 0x34]
        push    eax
        call    FUN_006e4210
        add    esp, 0xc
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_98be:
        push    0
        push    0
        push    0x424
        push    esi
        call    dword ptr [g_0076b5a0]
        push    0
        mov    edi, eax
        push    edi
        push    0x424
        push    esi
        call    dword ptr [g_0076b520]
        push    0
        push    0x100
        call    FUN_006f3c80
        mov    ecx, dword ptr [g_00841768]
        push    edi
        push    0x67c
        mov    ebx, eax
        push    ecx
        mov    dword ptr [esp + 0x34], ebx
        call    FUN_0072d830
        push    eax
        push    0x77a504
        push    ebx
        call    dword ptr [g_0076b420]
        add    esp, 0x10
        push    0
        push    0
        push    0x147
        push    0x427
        push    esi
        call    ebp
        mov    ebx, dword ptr [g_0076b560]
        push    eax
        call    ebx
        push    0
        push    0
        push    0x147
        push    0x428
        push    esi
        mov    dword ptr [esp + 0x24], eax
        call    ebp
        push    eax
        call    ebx
        mov    edx, dword ptr [g_00848c88]
        mov    ebx, dword ptr [edx + eax*4]
        mov    eax, dword ptr [g_00848c84]
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [eax + ecx*4]
        push    0
        push    0
        push    0x147
        push    0x499
        push    esi
        add    ebx, edx
        call    ebp
        push    eax
        call    dword ptr [g_0076b560]
        push    0x499
        push    esi
        mov    dword ptr [esp + 0x18], eax
        call    ebp
        push    eax
        call    dword ptr [g_0076b540]
        test    eax, eax
        jne    L_9990
        or    eax, 0xffffffff
        jmp    L_9994
L_9990:
        mov    eax, dword ptr [esp + 0x10]
L_9994:
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        push    ebx
        mov    ebx, dword ptr [esp + 0x30]
        push    ebx
        push    edi
        push    edx
        call    FUN_006f07e0
        mov    dword ptr [eax*4 + 0x841ec8], 0
        mov    eax, dword ptr [esp + 0x2c]
        add    esp, 0x14
        test    eax, eax
        je    L_99c2
        push    eax
        call    FUN_006f4230
L_99c2:
        test    ebx, ebx
        je    L_99cc
        push    ebx
        call    FUN_006f4230
L_99cc:
        call    dword ptr [g_0076b414]
        cdq    
        mov    ecx, 0x3c
        idiv    ecx
        mov    edi, edx
        mov    edx, dword ptr [edi*4 + 0x7b4450]
        push    edx
        push    0x426
        push    esi
        call    dword ptr [g_0076b528]
        mov    eax, dword ptr [edi*4 + 0x7b4540]
        push    0
        push    eax
        push    0x424
        push    esi
        call    dword ptr [g_0076b520]
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_9a15:
        mov    ecx, dword ptr [esp + 0x130]
        push    ecx
        call    FUN_006ee350
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_9a34:
        cmp    ecx, 0x4ca
        jg    L_9b2d
        je    L_9ab0
        cmp    ecx, 0x4b6
        jl    L_9b39
        cmp    ecx, 0x4b7
        jg    L_9b39
        cmp    ax, 0x4b6
        jne    L_9a88
        mov    edx, dword ptr [esp + 0x130]
        push    1
        push    edx
        mov    byte ptr [g_00848cb0], 1
        call    FUN_006f0e60
        add    esp, 8
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_9a88:
        mov    eax, dword ptr [esp + 0x130]
        push    0
        push    eax
        mov    byte ptr [g_00848cb0], 0
        call    FUN_006f0e60
        add    esp, 8
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_9ab0:
        mov    eax, dword ptr [g_00848d74]
        test    eax, eax
        jne    L_9e59
        xor    eax, eax
        mov    ecx, 0x11
        lea    edi, [esp + 0x2c]
        rep stosd
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    edx, [esp + 0x30]
        push    edx
        push    eax
        push    eax
        push    eax
        push    eax
        push    eax
        push    eax
        push    0x79ed44
        push    eax
        mov    dword ptr [esp + 0x54], 0x44
        mov    dword ptr [esp + 0x80], 1
        mov    word ptr [esp + 0x84], 5
        call    dword ptr [g_0076b0d4]
        test    eax, eax
        je    L_9e59
        push    0
        call    FUN_006e5bf0
        mov    eax, dword ptr [esp + 0x20]
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        mov    dword ptr [g_00848d74], eax
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_9b2d:
        cmp    ecx, 0x8005
        je    L_9e2c
L_9b39:
        shr    eax, 0x10
        sub    eax, 0
        je    L_9db9
        dec    eax
        jne    L_9e59
        lea    eax, [ecx - 0x3f6]
        cmp    eax, 0xe6
        ja    L_9e59
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x6e9ed8]
        jmp    dword ptr [ecx*4 + 0x6e9e88]
        mov    edx, dword ptr [esp + 0x130]
        push    edx
        call    FUN_006f0930
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    eax, dword ptr [esp + 0x130]
        push    eax
        call    FUN_006efe60
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    ecx, dword ptr [esp + 0x130]
        push    ecx
        call    FUN_006f0270
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    edx, dword ptr [esp + 0x130]
        push    edx
        call    FUN_006f03a0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    eax, dword ptr [esp + 0x130]
        push    eax
        call    FUN_006f0150
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    ecx, dword ptr [esp + 0x130]
        push    ecx
        call    FUN_006f04e0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    edx, dword ptr [esp + 0x130]
        push    edx
        call    FUN_006f0600
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    eax, dword ptr [esp + 0x130]
        push    eax
        call    FUN_006ed920
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    ecx, dword ptr [esp + 0x130]
        push    ecx
        call    FUN_006edc80
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    edx, dword ptr [esp + 0x130]
        push    edx
        call    FUN_006ee100
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    eax, dword ptr [esp + 0x130]
        push    eax
        call    FUN_006ee160
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    ecx, dword ptr [esp + 0x130]
        push    ecx
        call    FUN_006ee1c0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    edx, dword ptr [esp + 0x130]
        push    edx
        call    FUN_006ee230
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    eax, dword ptr [esp + 0x130]
        push    eax
        call    FUN_006ee2b0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    ecx, dword ptr [esp + 0x130]
        push    ecx
        call    FUN_006ee430
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    edx, dword ptr [esp + 0x130]
        push    edx
        call    FUN_006ee3c0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    eax, dword ptr [esp + 0x130]
        push    eax
        call    FUN_006ee490
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    ecx, dword ptr [esp + 0x130]
        push    ecx
        call    FUN_006ee4f0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        mov    edx, dword ptr [esp + 0x130]
        push    edx
        call    FUN_006ee560
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_9db9:
        sub    ecx, 0x415
        je    L_9e0d
        sub    ecx, 2
        je    L_9dee
        sub    ecx, 8
        jne    L_9e59
        mov    eax, dword ptr [esp + 0x130]
        push    eax
        call    FUN_006f0710
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_9dee:
        mov    ecx, dword ptr [esp + 0x130]
        push    ecx
        call    FUN_006ee5e0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_9e0d:
        mov    edx, dword ptr [esp + 0x130]
        push    edx
        call    FUN_006ee660
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
L_9e2c:
        call    dword ptr [g_0076b5ac]
        mov    ecx, dword ptr [esp + 0x130]
        push    0
        push    ecx
        mov    edx, eax
        shr    edx, 0x10
        movsx    ecx, dx
        push    0
        movsx    edx, ax
        mov    eax, dword ptr [g_00848d6c]
        push    ecx
        push    edx
        push    0
L_9e52:
        push    eax
L_9e53:
        call    dword ptr [g_0076b524]
L_9e59:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x11c
        ret    0x10
        // jump-table data @ 0x006E9E68 (8 relocated pointers)
        __emit 0x01
        __emit 0x98
        __emit 0x6E
        __emit 0x00
        __emit 0x39
        __emit 0x9B
        __emit 0x6E
        __emit 0x00
        __emit 0x70
        __emit 0x96
        __emit 0x6E
        __emit 0x00
        __emit 0x00
        __emit 0x95
        __emit 0x6E
        __emit 0x00
        __emit 0xE1
        __emit 0x94
        __emit 0x6E
        __emit 0x00
        __emit 0x39
        __emit 0x9B
        __emit 0x6E
        __emit 0x00
        __emit 0x39
        __emit 0x9B
        __emit 0x6E
        __emit 0x00
        __emit 0x32
        __emit 0x97
        __emit 0x6E
        __emit 0x00
        // jump-table data @ 0x006E9E88 (16 relocated pointers)
        __emit 0xE0
        __emit 0x9C
        __emit 0x6E
        __emit 0x00
        __emit 0x45
        __emit 0x9C
        __emit 0x6E
        __emit 0x00
        __emit 0x64
        __emit 0x9C
        __emit 0x6E
        __emit 0x00
        __emit 0xA2
        __emit 0x9C
        __emit 0x6E
        __emit 0x00
        __emit 0x83
        __emit 0x9C
        __emit 0x6E
        __emit 0x00
        __emit 0xC1
        __emit 0x9C
        __emit 0x6E
        __emit 0x00
        __emit 0x3D
        __emit 0x9D
        __emit 0x6E
        __emit 0x00
        __emit 0x7B
        __emit 0x9D
        __emit 0x6E
        __emit 0x00
        __emit 0x5C
        __emit 0x9D
        __emit 0x6E
        __emit 0x00
        __emit 0x1E
        __emit 0x9D
        __emit 0x6E
        __emit 0x00
        __emit 0xC9
        __emit 0x9B
        __emit 0x6E
        __emit 0x00
        __emit 0x9A
        __emit 0x9D
        __emit 0x6E
        __emit 0x00
        __emit 0x26
        __emit 0x9C
        __emit 0x6E
        __emit 0x00
        __emit 0x6C
        __emit 0x9B
        __emit 0x6E
        __emit 0x00
        __emit 0x8B
        __emit 0x9B
        __emit 0x6E
        __emit 0x00
        __emit 0xE8
        __emit 0x9B
        __emit 0x6E
        __emit 0x00
    }
}
