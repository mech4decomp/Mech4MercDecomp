/*
 * FUN_0057d57f (extent 0x57d57f-0x57e07d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc690;
extern int    g_007ddd74;
extern char   g_007dde2c;
extern int    g_007f1f84;
extern char   g_007f20cc;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d964;
extern int    g_0080d9bc;
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00423b30(void);
extern void __cdecl FUN_004e2b40(void);
extern void __cdecl FUN_004f8540(void);
extern void __cdecl FUN_004f8600(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_0050e1a0(void);
extern void __cdecl FUN_00557230(void);
extern void __cdecl FUN_00557350(void);
extern void __cdecl FUN_0055b610(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_0057d500(void);
extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad30(void);
extern void __cdecl FUN_00628ed0(void);
extern void __cdecl FUN_006290a0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_0057d57f(void)
{
    __asm {
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
        cmp    esi, -2
        mov    dword ptr [g_0080592c], eax
        jne    L_d5f9
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x20]
        xor    edx, 0x85739531
        mov    dword ptr [edx + 0x290], edi
        jmp    L_d642
L_d5f9:
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        jne    L_d61b
        push    edi
        push    esi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_0057d500
        add    esp, 8
        jmp    L_d642
L_d61b:
        push    esi
        call    FUN_005668b0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_d642
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_d642
        mov    dword ptr [esi + 0x9c4], edi
L_d642:
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
        mov    eax, dword ptr [g_00805918]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        push    esi
        mov    esi, dword ptr [ecx]
        inc    eax
        xor    esi, edx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [esi + 0x20]
        xor    eax, 0x85739531
        mov    dword ptr [eax + 0x294], ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        mov    eax, dword ptr [g_00805918]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        push    esi
        mov    esi, dword ptr [ecx]
        inc    eax
        xor    esi, edx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [esi + 0x20]
        xor    eax, 0x85739531
        mov    dword ptr [eax + 0x298], ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        mov    eax, dword ptr [g_00805918]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        push    esi
        mov    esi, dword ptr [ecx]
        inc    eax
        xor    esi, edx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [esi + 0x20]
        xor    eax, 0x85739531
        mov    dword ptr [eax + 0x29c], ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        mov    eax, dword ptr [g_00805918]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        push    esi
        mov    esi, dword ptr [ecx]
        inc    eax
        xor    esi, edx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        cmp    ecx, 1
        mov    ecx, dword ptr [esi + 0x20]
        mov    dword ptr [g_0080592c], eax
        sete    al
        xor    ecx, 0x85739531
        mov    byte ptr [ecx + 0x2a0], al
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
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
        mov    eax, dword ptr [g_00805918]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        push    esi
        mov    esi, dword ptr [ecx]
        inc    eax
        xor    esi, edx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        cmp    ecx, 1
        mov    ecx, dword ptr [esi + 0x20]
        mov    dword ptr [g_0080592c], eax
        sete    al
        xor    ecx, 0x85739531
        mov    byte ptr [ecx + 0x2a1], al
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
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
        mov    ecx, dword ptr [eax + 0x2c]
        xor    ecx, 0x85739531
        call    FUN_00557230
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
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
        add    esp, 4
        test    eax, eax
        je    L_d955
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_d955
        mov    esi, dword ptr [eax + 0x3b0]
        test    esi, esi
        je    L_d955
        mov    eax, dword ptr [g_007ddd74]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_d955
        push    edi
        mov    ecx, esi
        call    FUN_00557350
        mov    esi, dword ptr [g_0080592c]
        mov    edi, eax
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_d950
        push    0
        call    FUN_00563060
        add    esp, 4
L_d950:
        mov    dword ptr [esi], edi
        pop    edi
        jmp    L_d984
L_d955:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_d97e
        push    0
        call    FUN_00563060
        add    esp, 4
L_d97e:
        mov    dword ptr [esi], 0
L_d984:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
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
        cmp    ecx, 1
        mov    dword ptr [g_0080592c], eax
        sete    al
        push    eax
        push    esi
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad30
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
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
        cmp    ecx, 1
        mov    dword ptr [g_0080592c], eax
        push    esi
        jne    L_da96
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x40]
        xor    ecx, 0x85739531
        call    FUN_00628ed0
        jmp    L_dab4
L_da96:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        call    FUN_006290a0
L_dab4:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x2c]
        xor    ecx, 0x85739531
        lea    eax, [edx + 0x2c]
        pop    esi
        je    L_dae0
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    byte ptr [edx + 0x934], 1
L_dae0:
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
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        jne    L_db4e
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        ret    
L_db4e:
        push    esi
        mov    esi, dword ptr [eax + 0x3f8]
        push    edi
L_db56:
        test    esi, esi
        je    L_db7a
        mov    edi, dword ptr [esi]
        test    edi, edi
        mov    esi, dword ptr [esi + 4]
        je    L_db7a
        mov    eax, dword ptr [edi + 0x1b0]
        push    eax
        call    FUN_0050e1a0
        add    esp, 4
        mov    dword ptr [edi + 0x1ac], eax
        jmp    L_db56
L_db7a:
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        cmp    ecx, 1
        movsx    ecx, byte ptr [eax]
        sete    dl
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    byte ptr [g_007f20cc], dl
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x4c
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
        mov    ebx, dword ptr [eax]
        sub    eax, 4
        cmp    esi, -1
        mov    dword ptr [g_0080592c], eax
        jne    L_dc5d
        mov    eax, dword ptr [g_0080d964]
        mov    dword ptr [ebp - 4], eax
        jmp    L_dd3b
L_dc5d:
        mov    al, byte ptr [g_007dde2c]
        mov    edi, esi
        sar    edi, 0x18
        test    al, al
        je    L_dcad
        test    edi, edi
        jge    L_dc87
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_dc87
        int 3    
L_dc87:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_dcad
        cmp    edi, 0x12
        jl    L_dcad
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_dcad
        int 3    
L_dcad:
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_dd24
        test    esi, esi
        jne    L_dcf1
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_dcf1
        int 3    
L_dcf1:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_dd24
        mov    eax, dword ptr [g_007dc690]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_dd24
        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_dd24
        int 3    
L_dd24:
        test    esi, esi
        jne    L_dd2d
        mov    dword ptr [ebp - 4], esi
        jmp    L_dd3b
L_dd2d:
        xor    edx, edx
        cmp    esi, -1
        sete    dl
        dec    edx
        and    edx, esi
        mov    dword ptr [ebp - 4], edx
L_dd3b:
        cmp    ebx, -1
        jne    L_dd4b
        mov    edi, dword ptr [g_0080d964]
        jmp    L_de26
L_dd4b:
        mov    al, byte ptr [g_007dde2c]
        mov    esi, ebx
        sar    esi, 0x18
        test    al, al
        je    L_dd9b
        test    esi, esi
        jge    L_dd75
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_dd75
        int 3    
L_dd75:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_dd9b
        cmp    esi, 0x12
        jl    L_dd9b
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_dd9b
        int 3    
L_dd9b:
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        push    ebx
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_de11
        test    esi, esi
        jne    L_ddde
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_ddde
        int 3    
L_ddde:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_de11
        mov    eax, dword ptr [g_007dc690]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_de11
        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_de11
        int 3    
L_de11:
        test    esi, esi
        jne    L_de19
        xor    edi, edi
        jmp    L_de26
L_de19:
        xor    ecx, ecx
        cmp    esi, -1
        sete    cl
        dec    ecx
        and    ecx, esi
        mov    edi, ecx
L_de26:
        mov    eax, dword ptr [ebp - 4]
        xor    ebx, ebx
        cmp    eax, ebx
        je    L_e060
        cmp    edi, ebx
        je    L_e060
        mov    eax, dword ptr [eax + 0xd8]
        lea    esi, [eax + 0x80]
        push    esi
        lea    ecx, [ebp - 0x4c]
        call    FUN_00419480
        mov    edx, dword ptr [ebp - 0x4c]
        push    esi
        lea    ecx, [ebp - 0x34]
        mov    dword ptr [ebp - 0x14], edx
        call    FUN_00419480
        mov    eax, dword ptr [ebp - 0x2c]
        mov    dword ptr [ebp - 0x10], eax
        mov    eax, dword ptr [edi + 0xd8]
        lea    esi, [eax + 0x80]
        push    esi
        lea    ecx, [ebp - 0x20]
        call    FUN_00419480
        mov    ecx, dword ptr [ebp - 0x20]
        mov    dword ptr [ebp - 0x28], ecx
        push    esi
        lea    ecx, [ebp - 0x40]
        call    FUN_00419480
        mov    eax, dword ptr [ebp - 0x2c]
        mov    edx, dword ptr [ebp - 0x38]
        mov    ecx, dword ptr [ebp - 0x20]
        mov    dword ptr [ebp - 0x2c], eax
        mov    eax, dword ptr [ebp - 0x4c]
        push    0x20
        mov    dword ptr [ebp - 0x24], edx
        mov    dword ptr [ebp - 0x30], ecx
        mov    dword ptr [ebp - 0x18], edx
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0xc], ebx
        mov    dword ptr [ebp - 8], ebx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, ebx
        je    L_decb
        push    0x423b70
        push    4
        push    8
        push    esi
        call    FUN_00406c90
        jmp    L_decd
L_decb:
        xor    esi, esi
L_decd:
        cmp    dword ptr [ebp - 0xc], ebx
        je    L_df0b
        mov    eax, dword ptr [ebp - 8]
        cmp    eax, 4
        jbe    L_dedf
        mov    eax, 4
L_dedf:
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        je    L_deff
L_dee6:
        mov    edx, dword ptr [ebp - 0xc]
        lea    ecx, [edx + eax*8]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [esi + eax*8], edx
        mov    ecx, dword ptr [ecx + 4]
        mov    edx, eax
        mov    dword ptr [esi + eax*8 + 4], ecx
        dec    eax
        test    edx, edx
        jne    L_dee6
L_deff:
        mov    eax, dword ptr [ebp - 0xc]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_df0b:
        mov    ecx, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    dword ptr [ebp - 0xc], esi
        mov    dword ptr [ebp - 8], 4
        mov    dword ptr [esi], ecx
        mov    dword ptr [esi + 4], edx
        mov    ecx, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x18]
        mov    dword ptr [ecx + 8], eax
        mov    eax, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x28]
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0x24]
        mov    dword ptr [edx + 0x10], ecx
        mov    ecx, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x30]
        mov    dword ptr [ecx + 0x14], eax
        mov    eax, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    dword ptr [eax + 0x18], edx
        mov    edx, dword ptr [ebp - 0xc]
        mov    dword ptr [edx + 0x1c], ecx
        mov    eax, dword ptr [ebp - 8]
        xor    esi, esi
        cmp    eax, ebx
        jbe    L_df90
L_df5f:
        mov    eax, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [g_007dab44]
        lea    eax, [eax + esi*8]
        lea    ecx, [eax + 4]
        push    ecx
        mov    ecx, dword ptr [g_007dab40]
        push    eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x1c]
        xor    ecx, 0x85739531
        call    FUN_004e2b40
        mov    eax, dword ptr [ebp - 8]
        inc    esi
        cmp    esi, eax
        jb    L_df5f
L_df90:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    esi, dword ptr [edx + 0x20]
        lea    eax, [ebp - 0xc]
        xor    esi, 0x85739531
        push    eax
        mov    ecx, esi
        call    FUN_004f8600
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [ecx], ebx
        mov    edx, dword ptr [ebp - 0xc]
        mov    dword ptr [edx + 4], ebx
        mov    eax, dword ptr [ebp - 0xc]
        mov    dword ptr [eax + 8], ebx
        mov    ecx, dword ptr [ebp - 0xc]
        mov    eax, 0x38d1b717
        mov    dword ptr [ecx + 0xc], eax
        mov    edx, dword ptr [ebp - 0xc]
        mov    dword ptr [edx + 0x10], eax
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [ecx + 0x14], eax
        mov    edx, dword ptr [ebp - 0xc]
        mov    dword ptr [edx + 0x18], eax
        mov    eax, dword ptr [ebp - 0xc]
        lea    ecx, [ebp - 0xc]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [eax + 0x1c], ebx
        call    FUN_004f8540
        mov    edx, dword ptr [ebp - 4]
        mov    eax, dword ptr [edx + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [ebp - 0x4c]
        call    FUN_00419480
        lea    ecx, [ebp - 0x4c]
        push    ecx
        lea    ecx, [esi + 0x227c]
        call    FUN_0040c410
        mov    edx, dword ptr [edi + 0xd8]
        add    edx, 0x80
        push    edx
        lea    ecx, [ebp - 0x4c]
        call    FUN_00419480
        lea    eax, [ebp - 0x4c]
        push    eax
        lea    ecx, [esi + 0x2288]
        call    FUN_0040c410
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x2c]
        push    ebx
        xor    ecx, 0x85739531
        call    FUN_0055b610
        lea    ecx, [ebp - 0xc]
        call    FUN_00423b30
L_e060:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
