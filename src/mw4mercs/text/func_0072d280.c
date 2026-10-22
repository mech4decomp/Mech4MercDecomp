/*
 * FUN_0072d280 (extent 0x72d280-0x72d3fe) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0c0;
extern int    g_0076b0c8;
extern int    g_0076b104;
extern int    g_0076b318;
extern int    g_0076b320;
extern int    g_0076b360;
extern int    g_0076b364;
extern int    g_0076b420;
extern int    g_0076b644;
extern int    g_007b71d8;
extern int    g_008825f4;
extern int    g_008825f8;
extern int    g_00896b84;
extern int    g_00896c88;
extern int    g_008bc00c;
extern void __cdecl FUN_0072d480(void);
extern void __cdecl FUN_0072d830(void);

__declspec(naked) void FUN_0072d280(void)
{
    __asm {
        push    0
        call    dword ptr [g_0076b644]
        test    eax, eax
        jl    L_d2dd
        mov    ecx, dword ptr [g_008825f4]
        test    ecx, ecx
        push    esi
        mov    esi, 0x80004005
        jne    L_d2b3
        push    0x7a5a2c
        call    dword ptr [g_0076b0c0]
        mov    ecx, eax
        test    ecx, ecx
        mov    dword ptr [g_008825f4], ecx
        je    L_d2da
L_d2b3:
        mov    eax, dword ptr [g_008825f8]
        test    eax, eax
        jne    L_d2d1
        push    0x7a5a18
        push    ecx
        call    dword ptr [g_0076b0c8]
        test    eax, eax
        mov    dword ptr [g_008825f8], eax
        je    L_d2da
L_d2d1:
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        call    eax
        mov    esi, eax
L_d2da:
        mov    eax, esi
        pop    esi
L_d2dd:
        ret    4
        sub    esp, 0x10
        push    ebp
        push    esi
        push    edi
        push    0x7a5a3c
        mov    dword ptr [g_00896b84], 0
        mov    dword ptr [g_008bc00c], 0
        call    FUN_0072d480
        push    0x103
        push    0
        push    eax
        mov    dword ptr [g_00896c88], eax
        call    FUN_0072d830
        mov    edi, dword ptr [g_0076b320]
        push    eax
        push    0x896a80
        call    edi
        mov    ebp, dword ptr [g_0076b360]
        push    0x896a80
        push    0
        call    ebp
        add    esp, 0x14
        mov    esi, 0x779d48
        mov    eax, 0x896a80
L_d340:
        mov    dl, byte ptr [eax]
        mov    cl, dl
        cmp    dl, byte ptr [esi]
        jne    L_d364
        test    cl, cl
        je    L_d360
        mov    dl, byte ptr [eax + 1]
        mov    cl, dl
        cmp    dl, byte ptr [esi + 1]
        jne    L_d364
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_d340
L_d360:
        xor    eax, eax
        jmp    L_d369
L_d364:
        sbb    eax, eax
        sbb    eax, -1
L_d369:
        test    eax, eax
        jne    L_d39b
        mov    esi, dword ptr [g_0076b104]
        call    esi
        cmp    eax, 0x4e4
        je    L_d39b
        call    esi
        push    eax
        lea    eax, [esp + 0x10]
        push    0x7a5a38
        push    eax
        call    dword ptr [g_0076b420]
        lea    ecx, [esp + 0x18]
        push    ecx
        push    2
        call    ebp
        add    esp, 0x14
L_d39b:
        mov    edx, dword ptr [g_00896c88]
        push    0x103
        push    1
        push    edx
        call    FUN_0072d830
        push    eax
        push    0x89697c
        call    edi
        mov    eax, dword ptr [g_00896c88]
        add    esp, 0xc
        push    2
        push    eax
        call    FUN_0072d830
        push    eax
        call    dword ptr [g_0076b318]
        mov    edi, dword ptr [g_0076b364]
        add    esp, 4
        mov    dword ptr [g_007b71d8], eax
        xor    esi, esi
L_d3dd:
        push    esi
        call    edi
        add    esp, 4
        test    eax, eax
        setne    cl
        mov    byte ptr [esi + 0x896b88], cl
        inc    esi
        cmp    esi, 0x100
        jl    L_d3dd
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x10
        ret    
    }
}
