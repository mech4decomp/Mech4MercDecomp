/*
 * FUN_00577187 (extent 0x577187-0x577526) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f20d0;
extern int    g_007f20d8;
extern char   g_007f23dc;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9bc;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_0055b630(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_005acf50(void);
extern void __cdecl FUN_005acfa0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_00577187(void)
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    edx, dword ptr [g_00805928]
        mov    esi, dword ptr [g_0080592c]
        mov    edi, dword ptr [esi]
        add    edx, 0xa000
        cmp    esi, edx
        jb    L_71cf
        push    0
        call    FUN_00563060
        add    esp, 4
L_71cf:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    edi, 0x9f00000
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
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax + 0x18]
        xor    ecx, 0x85739531
        mov    esi, dword ptr [ecx + 0x178]
        mov    al, byte ptr [esi + 0x589]
        test    al, al
        jne    L_7250
        mov    ecx, dword ptr [g_007f20d0]
        call    FUN_005acf50
        push    1
        mov    ecx, esi
        call    FUN_0055b630
L_7250:
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [g_007f20d0]
        inc    eax
        mov    dword ptr [g_00805918], eax
        call    FUN_005acfa0
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x18]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x178]
        push    0
        call    FUN_0055b630
        mov    byte ptr [g_007f23dc], 0
        xor    eax, eax
        ret    
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
        mov    byte ptr [g_007f23dc], dl
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
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
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566b60
        add    esp, 4
        test    eax, eax
        je    L_736d
        cmp    edi, 1
        sete    cl
        mov    byte ptr [eax + 0x6a1], cl
L_736d:
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    edx, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805918]
        mov    esi, 4
        sub    edx, esi
        mov    dword ptr [g_0080592c], edx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_00805918]
        mov    edx, dword ptr [g_0080592c]
        movsx    ecx, byte ptr [eax]
        sub    edx, esi
        inc    eax
        mov    dword ptr [g_0080592c], edx
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    edx, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805918]
        sub    edx, esi
        mov    dword ptr [g_0080592c], edx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_00805918]
        mov    edx, dword ptr [g_0080592c]
        movsx    ecx, byte ptr [eax]
        sub    edx, esi
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_0080592c], edx
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    al, byte ptr [g_007dde2c]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    esi, edi
        sar    esi, 0x18
        test    al, al
        je    L_74a8
        test    esi, esi
        jge    L_7482
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_7482
        int 3    
L_7482:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_74a8
        cmp    esi, 0x12
        jl    L_74a8
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_74a8
        int 3    
L_74a8:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x10]
        push    edi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_7520
        test    esi, esi
        jne    L_74ed
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_74ed
        int 3    
L_74ed:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_7520
        mov    eax, dword ptr [g_007f20d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_7520
        push    0x781220
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_7520
        int 3    
L_7520:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    
    }
}
