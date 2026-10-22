/*
 * FUN_007224d0 (extent 0x7224d0-0x722655) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0079f62c;
extern float  g_007a53e4;
extern int    g_00858138;
extern int    g_0085b4a0;
extern char   g_0087bc34;
extern char   g_0087bc35;
extern int    g_00896cc0;
extern void __cdecl FUN_0070e1b0(void);
extern void __cdecl FUN_0070e220(void);
extern void __cdecl FUN_007227f0(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_00755420(void);

__declspec(naked) void FUN_007224d0(void)
{
    __asm {
        cmp    dword ptr [g_0085b4a0], 1
        jne    L_24fc
        mov    al, byte ptr [g_0087bc34]
        test    al, al
        je    L_24f0
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        je    L_24f0
        xor    eax, eax
        ret    4
L_24f0:
        push    1
        push    8
        call    FUN_0070e220
        ret    4
L_24fc:
        mov    al, byte ptr [esp + 4]
        test    al, al
        je    L_2580
        push    esi
        push    edi
        mov    edi, dword ptr [g_00896cc0]
        test    edi, edi
        je    L_253b
L_2510:
        mov    esi, dword ptr [edi]
        test    esi, esi
        je    L_2534
L_2516:
        mov    eax, dword ptr [esi + 0x48]
        test    eax, eax
        je    L_2523
        push    eax
        call    FUN_00740db0
L_2523:
        mov    dword ptr [esi + 0x48], 0
        mov    esi, dword ptr [esi + 0x100]
        test    esi, esi
        jne    L_2516
L_2534:
        mov    edi, dword ptr [edi + 8]
        test    edi, edi
        jne    L_2510
L_253b:
        mov    al, byte ptr [g_00858138]
        xor    edi, edi
        test    al, al
        jbe    L_2579
        mov    esi, 0x857f48
L_254b:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_2565
        push    eax
        call    FUN_00755420
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_00740db0
        mov    dword ptr [esi], 0
L_2565:
        mov    ecx, dword ptr [g_00858138]
        inc    edi
        and    ecx, 0xff
        add    esi, 4
        cmp    edi, ecx
        jl    L_254b
L_2579:
        call    FUN_007227f0
        pop    edi
        pop    esi
L_2580:
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        jne    L_259f
        mov    edx, dword ptr [g_00858138]
        push    1
        push    8
        and    edx, 0xff
        push    edx
        call    FUN_0070e1b0
L_259f:
        mov    eax, dword ptr [g_00858138]
        and    eax, 0xff
        ret    4
        nop    
        nop    
        nop    
        nop    
        cmp    dword ptr [g_0085b4a0], 1
        jne    L_25e8
        mov    al, byte ptr [g_0087bc34]
        test    al, al
        je    L_25d4
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        je    L_25d4
        fld    dword ptr [g_0076c5b0]
        ret    8
L_25d4:
        push    2
        push    0x20
        call    FUN_0070e220
        mov    dword ptr [esp + 4], eax
        fld    dword ptr [esp + 4]
        ret    8
L_25e8:
        mov    ecx, dword ptr [esp + 8]
        cmp    ecx, 7
        mov    eax, dword ptr [esp + 4]
        jle    L_2620
        lea    eax, [eax + eax*2]
        lea    ecx, [ecx + eax*4]
        mov    eax, dword ptr [ecx*4 + 0x858184]
        test    eax, eax
        mov    dword ptr [esp + 4], eax
        jl    L_2616
        fild    dword ptr [esp + 4]
        fmul    dword ptr [g_007a53e4]
        jmp    L_2633
L_2616:
        mov    dword ptr [esp + 4], 0xbf800000
        jmp    L_2637
L_2620:
        lea    edx, [eax + eax*2]
        lea    eax, [ecx + edx*4]
        fild    dword ptr [eax*4 + 0x858184]
        fmul    dword ptr [g_0079f62c]
L_2633:
        fstp    dword ptr [esp + 4]
L_2637:
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        jne    L_264e
        mov    ecx, dword ptr [esp + 4]
        push    2
        push    0x20
        push    ecx
        call    FUN_0070e1b0
L_264e:
        fld    dword ptr [esp + 4]
        ret    8
    }
}
