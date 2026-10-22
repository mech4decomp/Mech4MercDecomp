/*
 * FUN_0074c117 (extent 0x74c117-0x74c35f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d070;
extern float  g_00775980;
extern float  g_007a71c8;
extern float  g_00858940;
extern float  g_00858944;
extern int    g_00858950;
extern int    g_0085a248;
extern int    g_0087c1d4;
extern int    g_0087c21c;
extern char   g_0087c254;
extern int    g_0087c2cc;
extern char   g_008b2520;
extern void __cdecl FUN_00713ae0(void);
extern void __cdecl FUN_00713de0(void);
extern void __cdecl FUN_0074a590(void);

__declspec(naked) void FUN_0074c117(void)
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
        push    ecx
        test    byte ptr [g_008b2520], 0x40
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        je    L_c1b3
        mov    eax, dword ptr [g_0087c1d4]
        test    eax, eax
        je    L_c211
        xor    ecx, ecx
        mov    cx, word ptr [eax]
        xor    edx, edx
        mov    dx, word ptr [eax + 2]
        mov    dword ptr [esp + 0xc], ecx
        fild    dword ptr [esp + 0xc]
        mov    dword ptr [esp + 0xc], edx
        fdivr    dword ptr [g_00775980]
        fild    dword ptr [esp + 0xc]
        fdivr    dword ptr [g_00775980]
        fstp    dword ptr [esp + 0xc]
        fld    st(0)
        fadd    dword ptr [esi + 0x18]
        fstp    dword ptr [esi + 0x18]
        fld    dword ptr [esp + 0xc]
        fadd    dword ptr [esi + 0x1c]
        fstp    dword ptr [esi + 0x1c]
        fld    st(0)
        fadd    dword ptr [esi + 0x38]
        fstp    dword ptr [esi + 0x38]
        fld    dword ptr [esp + 0xc]
        fadd    dword ptr [esi + 0x3c]
        fstp    dword ptr [esi + 0x3c]
        fld    st(0)
        fadd    dword ptr [esi + 0x58]
        fstp    dword ptr [esi + 0x58]
        fld    dword ptr [esp + 0xc]
        fadd    dword ptr [esi + 0x5c]
        fstp    dword ptr [esi + 0x5c]
        fadd    dword ptr [esi + 0x78]
        fstp    dword ptr [esi + 0x78]
        fld    dword ptr [esp + 0xc]
        fadd    dword ptr [esi + 0x7c]
        fstp    dword ptr [esi + 0x7c]
        jmp    L_c211
L_c1b3:
        fld    dword ptr [esi]
        fsub    dword ptr [g_007a71c8]
        fstp    dword ptr [esi]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [g_007a71c8]
        fstp    dword ptr [esi + 4]
        fld    dword ptr [esi + 0x20]
        fsub    dword ptr [g_007a71c8]
        fstp    dword ptr [esi + 0x20]
        fld    dword ptr [esi + 0x24]
        fsub    dword ptr [g_007a71c8]
        fstp    dword ptr [esi + 0x24]
        fld    dword ptr [esi + 0x40]
        fsub    dword ptr [g_007a71c8]
        fstp    dword ptr [esi + 0x40]
        fld    dword ptr [esi + 0x44]
        fsub    dword ptr [g_007a71c8]
        fstp    dword ptr [esi + 0x44]
        fld    dword ptr [esi + 0x60]
        fsub    dword ptr [g_007a71c8]
        fstp    dword ptr [esi + 0x60]
        fld    dword ptr [esi + 0x64]
        fsub    dword ptr [g_007a71c8]
        fstp    dword ptr [esi + 0x64]
L_c211:
        fild    dword ptr [g_00858940]
        mov    eax, dword ptr [g_00858950]
        cmp    eax, 3
        fstp    dword ptr [esp + 0xc]
        fild    dword ptr [g_00858944]
        fstp    dword ptr [esp + 4]
        jne    L_c255
        mov    eax, dword ptr [g_0087c21c]
        test    ah, 1
        je    L_c255
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [esp + 4]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 4]
L_c255:
        fld    dword ptr [esi + 0x20]
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 1
        je    L_c35a
        fld    dword ptr [esi + 0x60]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c35a
        fld    dword ptr [esi + 0x64]
        fcomp    dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 1
        je    L_c35a
        fld    dword ptr [esi + 0x24]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c35a
        mov    al, byte ptr [g_0087c254]
        test    al, al
        je    L_c2af
        call    FUN_00713de0
L_c2af:
        fld    dword ptr [esi + 0x20]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_c2f8
        fld    dword ptr [esi + 0x60]
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        je    L_c2f8
        fld    dword ptr [esi + 0x64]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_c2f8
        fld    dword ptr [esi + 0x24]
        fcomp    dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x41
        je    L_c2f8
        push    4
        push    esi
        call    FUN_00713ae0
        pop    esi
        pop    ecx
        ret    4
L_c2f8:
        mov    eax, dword ptr [g_0087c2cc]
        test    eax, eax
        je    L_c31d
        mov    eax, dword ptr [g_0085a248]
        mov    ecx, dword ptr [eax]
        push    0
        push    4
        push    esi
        push    0x1c4
        push    6
        push    eax
        call    dword ptr [ecx + 0x64]
        pop    esi
        pop    ecx
        ret    4
L_c31d:
        mov    edx, dword ptr [g_0085a248]
        push    1
        push    0x88
        push    edx
        call    FUN_0074a590
        mov    eax, dword ptr [g_0085a248]
        mov    ecx, dword ptr [eax]
        push    0
        push    4
        push    esi
        push    0x1c4
        push    6
        push    eax
        call    dword ptr [ecx + 0x64]
        mov    edx, dword ptr [g_0085a248]
        push    0
        push    0x88
        push    edx
        call    FUN_0074a590
L_c35a:
        pop    esi
        pop    ecx
        ret    4
    }
}
