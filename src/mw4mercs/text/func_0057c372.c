/*
 * FUN_0057c372 (extent 0x57c372-0x57d146) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db090;
extern int    g_007dc690;
extern char   g_007dc694;
extern int    g_007dc696;
extern char   g_007dde2c;
extern int    g_007f1f70;
extern int    g_007f20f4;
extern int    g_007f25c0;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d964;
extern int    g_0080d9b0;
extern int    g_0080d9bc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566b90(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_0057c210(void);
extern void __cdecl FUN_006217c0(void);
extern void __cdecl FUN_00621930(void);
extern void __cdecl FUN_00621ad0(void);
extern void __cdecl FUN_00621b10(void);
extern void __cdecl FUN_00621c10(void);
extern void __cdecl FUN_00621d50(void);
extern void __cdecl FUN_00622880(void);
extern void __cdecl FUN_00622da0(void);
extern void __cdecl FUN_00622f70(void);
extern void __cdecl FUN_00623350(void);
extern void __cdecl FUN_006235f0(void);
extern void __cdecl FUN_00624530(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_0057c372(void)
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        push    esi
        je    L_c3c9
        call    FUN_00566c30
        push    eax
        call    FUN_0057c210
        add    esp, 8
        jmp    L_c424
L_c3c9:
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        jne    L_c3ef
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        ret    
L_c3ef:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_c41a
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        je    L_c41a
        push    0x78138c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_c41a
        int 3    
L_c41a:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x124]
L_c424:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [g_00805918]
        __emit 0x89  // mov dword ptr [esp], edx
__emit 0x54
__emit 0x24
__emit 0x00
        mov    edx, dword ptr [g_007dab40]
__emit 0xDB  // fild dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x20]
        movsx    ecx, byte ptr [eax]
        xor    edx, 0x85739531
        inc    eax
        mov    dword ptr [g_00805918], eax
        fstp    dword ptr [edx + 0x1f4]
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0xc
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    ebx
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        cmp    esi, -1
        mov    dword ptr [g_0080592c], eax
        jne    L_c4f1
        mov    eax, dword ptr [g_0080d964]
        jmp    L_c5cd
L_c4f1:
        mov    al, byte ptr [g_007dde2c]
        push    edi
        mov    edi, esi
        sar    edi, 0x18
        test    al, al
        je    L_c542
        test    edi, edi
        jge    L_c51c
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_c51c
        int 3    
L_c51c:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_c542
        cmp    edi, 0x12
        jl    L_c542
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_c542
        int 3    
L_c542:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        pop    edi
        je    L_c5ba
        test    esi, esi
        jne    L_c587
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_c587
        int 3    
L_c587:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_c5ba
        mov    eax, dword ptr [g_007dc690]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_c5ba
        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_c5ba
        int 3    
L_c5ba:
        test    esi, esi
        jne    L_c5c2
        xor    eax, eax
        jmp    L_c5cd
L_c5c2:
        xor    eax, eax
        cmp    esi, -1
        sete    al
        dec    eax
        and    eax, esi
L_c5cd:
        push    eax
        call    FUN_00566b90
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    dword ptr [ebp - 0xc], ecx
        mov    edx, dword ptr [eax + 0x1c]
        mov    dword ptr [ebp - 8], edx
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [ebp - 4], eax
        mov    al, byte ptr [g_007dde2c]
        add    esp, 4
        test    al, al
        je    L_c629
        mov    eax, dword ptr [g_007f20f4]
        mov    ecx, dword ptr [g_007f1f70]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_c629
        push    0x7813b0
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_c629
        int 3    
L_c629:
        mov    ecx, dword ptr [g_007f1f70]
        mov    edx, dword ptr [ecx]
        lea    eax, [ebp - 0xc]
        push    eax
        call    dword ptr [edx + 0x1e4]
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    bl, al
        mov    dword ptr [g_0080592c], esi
        jb    L_c666
        push    0
        call    FUN_00563060
        add    esp, 4
L_c666:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        xor    edx, edx
        test    bl, bl
        setne    dl
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [esi], edx
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    edx, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805918]
        sub    edx, 4
        mov    dword ptr [g_0080592c], edx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
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
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [g_00805928]
        push    esi
        mov    esi, dword ptr [g_0080592c]
        push    edi
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        add    esi, 4
        xor    edx, 0x85739531
        mov    edi, dword ptr [edx + 0x3508]
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_c725
        push    0
        call    FUN_00563060
        add    esp, 4
L_c725:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        add    esp, 4
        test    al, al
        je    L_c7b1
        mov    eax, dword ptr [g_007f25c0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_c7b1
        push    0x7813e0
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_c7b1
        int 3    
L_c7b1:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14c]
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        push    ebx
        inc    eax
        push    ebp
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ebp, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ebx, dword ptr [eax]
        sub    eax, 4
        cmp    esi, -2
        mov    dword ptr [g_0080592c], eax
        mov    byte ptr [esp + 0x10], 0
        mov    word ptr [esp + 0x12], 0
        jne    L_c88f
        mov    al, byte ptr [g_007dc694]
        mov    cx, word ptr [g_007dc696]
        mov    byte ptr [esp + 0x10], al
        mov    word ptr [esp + 0x12], cx
        jmp    L_c8ab
L_c88f:
        push    esi
        call    FUN_005668b0
        mov    dl, byte ptr [eax + 0x14]
        add    esp, 4
        add    eax, 0x14
        mov    byte ptr [esp + 0x10], dl
        mov    ax, word ptr [eax + 2]
        mov    word ptr [esp + 0x12], ax
L_c8ab:
        mov    ecx, dword ptr [g_007dab44]
        mov    esi, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx]
        xor    edx, esi
        mov    eax, dword ptr [edx + 0x20]
        xor    eax, 0x85739531
        mov    esi, dword ptr [eax + 0x225c]
        push    0x28
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_c8e8
        push    ebx
        push    ebp
        lea    ecx, [esp + 0x18]
        push    ecx
        push    edi
        mov    ecx, eax
        call    FUN_006235f0
        jmp    L_c8ea
L_c8e8:
        xor    eax, eax
L_c8ea:
        push    eax
        mov    ecx, esi
        call    FUN_006217c0
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_c91d
        push    0
        call    FUN_00563060
        add    esp, 4
L_c91d:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        pop    edi
        pop    esi
        inc    eax
        pop    ebp
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        pop    ecx
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        push    ecx
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x225c]
        call    FUN_00621930
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        push    ecx
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x225c]
        call    FUN_00621c10
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        push    ecx
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x225c]
        call    FUN_00621d50
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        mov    edi, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, edi
        mov    eax, dword ptr [eax + 0x20]
        xor    eax, 0x85739531
        push    ecx
        mov    ecx, dword ptr [eax + 0x225c]
        call    FUN_00621ad0
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_cb0b
        push    0
        call    FUN_00563060
        add    esp, 4
L_cb0b:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        push    ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x20]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x225c]
        push    esi
        call    FUN_00621b10
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        cmp    ecx, 1
        sete    dl
        push    1
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        push    edx
        push    edi
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x20]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x225c]
        push    esi
        call    FUN_00622da0
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
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
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    ebx
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ebx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        cmp    ecx, 1
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [g_0080592c], eax
        sete    al
        push    eax
        push    ebx
        push    edi
        push    esi
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x20]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x225c]
        call    FUN_00622f70
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        push    ebx
        inc    eax
        push    ebp
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ebp, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ebx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        cmp    esi, -2
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [g_0080592c], eax
        mov    byte ptr [esp + 0x10], 0
        mov    word ptr [esp + 0x12], 0
        jne    L_ce7d
        mov    al, byte ptr [g_007dc694]
        mov    cx, word ptr [g_007dc696]
        mov    byte ptr [esp + 0x10], al
        mov    word ptr [esp + 0x12], cx
        jmp    L_ce99
L_ce7d:
        push    esi
        call    FUN_005668b0
        mov    dl, byte ptr [eax + 0x14]
        add    esp, 4
        add    eax, 0x14
        mov    byte ptr [esp + 0x10], dl
        mov    ax, word ptr [eax + 2]
        mov    word ptr [esp + 0x12], ax
L_ce99:
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [g_007dab40]
        push    edx
        xor    eax, ecx
        mov    edx, dword ptr [eax + 0x20]
        push    ebx
        push    ebp
        lea    ecx, [esp + 0x1c]
        push    ecx
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x225c]
        push    edi
        call    FUN_00622880
        mov    esi, dword ptr [g_0080592c]
        mov    edi, eax
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_cef3
        push    0
        call    FUN_00563060
        add    esp, 4
L_cef3:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        pop    edi
        pop    esi
        inc    eax
        pop    ebp
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        add    esp, 8
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        push    ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x20]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x225c]
        push    esi
        call    FUN_00623350
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        sub    ecx, 4
        test    eax, eax
        mov    dword ptr [g_0080592c], ecx
        jne    L_cff7
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        ret    
L_cff7:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        push    eax
        xor    eax, eax
        mov    eax, dword ptr [g_007db090]
        mov    al, byte ptr [eax + 0x28]
        xor    edx, ecx
        mov    ecx, dword ptr [edx + 0xc]
        push    0
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0
        push    eax
        call    dword ptr [edx + 0x30]
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        sub    ecx, 4
        test    eax, eax
        mov    dword ptr [g_0080592c], ecx
        jne    L_d087
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        ret    
L_d087:
        mov    edx, dword ptr [g_007dab40]
        push    eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x20]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x225c]
        call    FUN_00624530
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        mov    esi, dword ptr [eax]
        xor    esi, ecx
        mov    ecx, dword ptr [esi + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x34]
        mov    ecx, dword ptr [esi + 0x20]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x225c]
        push    eax
        call    FUN_00624530
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        ret    
    }
}
