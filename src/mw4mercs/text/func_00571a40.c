/*
 * FUN_00571a40 (extent 0x571a40-0x572145) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007b551c;
extern float  g_007b8d78;
extern float  g_007b8d7c;
extern float  g_007b8d80;
extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f1f70;
extern int    g_007f20f4;
extern int    g_007f23b0;
extern int    g_007f23d8;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_0080592c;
extern int    g_0080d964;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_00571730(void);
extern void __cdecl FUN_005b3790(void);
extern void __cdecl FUN_005c1990(void);
extern void __cdecl FUN_005dbad0(void);
extern void __cdecl FUN_0060ffe0(void);
extern void __cdecl FUN_00610010(void);
extern void __cdecl FUN_00610030(void);
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_0064d3d0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00571a40(void)
{
    __asm {
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        sub    esp, 0xc
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
        add    esp, 4
        test    esi, esi
        je    L_1b27
        fld    dword ptr [g_007b8d78]
        call    FUN_0075db4a
        fld    dword ptr [g_007b8d7c]
        mov    dword ptr [esp + 4], eax
        call    FUN_0075db4a
        fld    dword ptr [g_007b8d80]
        mov    dword ptr [esp + 8], eax
        call    FUN_0075db4a
        push    1
        lea    edx, [esp + 8]
        push    edx
        push    esi
        mov    dword ptr [esp + 0x18], eax
        call    FUN_00571730
        mov    esi, dword ptr [esi + 0x2fc]
        add    esp, 0xc
        test    esi, esi
        je    L_1b27
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x118]
        push    0
        mov    ecx, esi
        call    FUN_005dbad0
        mov    eax, dword ptr [g_007f23d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_1af5
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x1c4]
L_1af5:
        mov    eax, dword ptr [g_007f23b0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_1b0e
        mov    ecx, esi
        call    FUN_005c1990
L_1b0e:
        mov    eax, dword ptr [g_007f20f4]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_1b27
        mov    ecx, esi
        call    FUN_005b3790
L_1b27:
        xor    eax, eax
        pop    esi
        add    esp, 0xc
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
        mov    ecx, dword ptr [eax + 1]
        inc    eax
        add    eax, 4
        push    2
        push    ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064d3d0
        push    eax
        call    FUN_0064c950
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        add    esp, 0x10
        test    eax, eax
        jne    L_1bb9
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
L_1bb9:
        push    0
        push    edi
        push    eax
        call    FUN_00571730
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 0xc
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    byte ptr [g_007b551c], 0
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
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
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_00805918]
        mov    edx, dword ptr [g_0080592c]
        movsx    ecx, byte ptr [eax]
        sub    edx, 4
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_0080592c], edx
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
        mov    edi, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    esi, dword ptr [eax + 0x20]
        mov    al, byte ptr [g_007dde2c]
        xor    esi, 0x85739531
        test    al, al
        je    L_1d6e
        test    edi, edi
        jge    L_1d48
        push    0x780800
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_1d48
        int 3    
L_1d48:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_1d6e
        cmp    edi, 0x20
        jl    L_1d6e
        push    0x7807d8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_1d6e
        int 3    
L_1d6e:
        lea    ecx, [edi + edi*2]
        shl    ecx, 4
        lea    ecx, [ecx + esi + 0x1bb8]
        call    FUN_0060ffe0
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
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
        mov    edi, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    esi, dword ptr [eax + 0x20]
        mov    al, byte ptr [g_007dde2c]
        xor    esi, 0x85739531
        test    al, al
        je    L_1e2e
        test    edi, edi
        jge    L_1e08
        push    0x780854
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_1e08
        int 3    
L_1e08:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_1e2e
        cmp    edi, 0x20
        jl    L_1e2e
        push    0x78082c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_1e2e
        int 3    
L_1e2e:
        lea    ecx, [edi + edi*2]
        shl    ecx, 4
        lea    ecx, [ecx + esi + 0x1bb8]
        call    FUN_00610010
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
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
        mov    edi, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    esi, dword ptr [eax + 0x20]
        mov    al, byte ptr [g_007dde2c]
        xor    esi, 0x85739531
        test    al, al
        je    L_1eee
        test    edi, edi
        jge    L_1ec8
        push    0x7808a4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_1ec8
        int 3    
L_1ec8:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_1eee
        cmp    edi, 0x20
        jl    L_1eee
        push    0x78087c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_1eee
        int 3    
L_1eee:
        lea    ecx, [edi + edi*2]
        shl    ecx, 4
        lea    esi, [ecx + esi + 0x1bb8]
        mov    ecx, esi
        call    FUN_00610010
        mov    ecx, esi
        call    FUN_0060ffe0
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
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
        push    ebp
        mov    ebp, esp
        push    ecx
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
        mov    ecx, dword ptr [eax]
        mov    esi, dword ptr [g_007dab40]
        sub    eax, 4
        cmp    ecx, 1
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [g_0080592c], eax
        sete    al
        xor    edx, esi
        mov    esi, dword ptr [edx + 0x20]
        mov    byte ptr [ebp - 4], al
        mov    al, byte ptr [g_007dde2c]
        xor    esi, 0x85739531
        test    al, al
        je    L_1ff5
        test    edi, edi
        jge    L_1fcf
        push    0x7808f8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_1fcf
        int 3    
L_1fcf:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_1ff5
        cmp    edi, 0x20
        jl    L_1ff5
        push    0x7808d0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_1ff5
        int 3    
L_1ff5:
        mov    eax, dword ptr [ebp - 4]
        lea    ecx, [edi + edi*2]
        shl    ecx, 4
        push    eax
        lea    ecx, [ecx + esi + 0x1bb8]
        call    FUN_00610030
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        mov    esp, ebp
        pop    ebp
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
        mov    eax, dword ptr [g_0080d964]
        mov    byte ptr [eax + 0x2fa], 0
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
        mov    eax, dword ptr [g_007f20f4]
        mov    ecx, dword ptr [g_007f1f70]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_20ef
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_20e1
        mov    eax, dword ptr [g_007f23d8]
        mov    ecx, dword ptr [g_007f1f70]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_20b1
        push    0x780948
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_20b1
        int 3    
L_20b1:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_20e1
        mov    eax, dword ptr [g_007f1f70]
        mov    cl, byte ptr [eax + 0x2f9]
        test    cl, cl
        je    L_20e1
        push    0x780924
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_20e1
        int 3    
L_20e1:
        mov    ecx, dword ptr [g_007f1f70]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x194]
L_20ef:
        mov    eax, dword ptr [g_007f23b0]
        mov    ecx, dword ptr [g_007f1f70]
        mov    ecx, dword ptr [ecx + 4]
        push    esi
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_212d
        mov    esi, dword ptr [g_007f1f70]
        mov    al, byte ptr [esi + 0x51c]
        test    al, al
        je    L_212d
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x104]
        test    al, al
        je    L_212d
        mov    ecx, esi
        call    FUN_005c1990
L_212d:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
    }
}
