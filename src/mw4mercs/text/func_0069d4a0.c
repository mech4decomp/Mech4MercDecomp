/*
 * FUN_0069d4a0 (2350 B) — Large animation/weapon-fire update routine.
 *
 * __cdecl (9 stack params). Heavy FPU, vtable dispatch, a jump table at
 * 0x0069DDD0, and a switch on FUN_0041eb40 result (cases 0/1/2/3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0067f7b0(void);
extern void __cdecl FUN_0041edd0(void);
extern void __cdecl FUN_0058adf0(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_00584520(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041ea60(void);
extern void __cdecl FUN_005faf20(void);
extern void __cdecl FUN_005b9d60(void);
extern void __cdecl FUN_005eb380(void);
extern void __cdecl FUN_005eb260(void);
extern void __cdecl FUN_005eb070(void);
extern void __cdecl FUN_005eb100(void);

extern int g_7b8ce8;
extern int g_7b8cf0;
extern int g_7b8cec;
extern int g_7b8d88;
extern int g_7b8d8c;
extern int g_7b8d90;
extern int g_7dab44;
extern int g_7dab40;
extern int g_69ddd0;
extern float g_77d060;
extern float g_76d5f0;
extern float g_799a20;
extern float g_77de9c;
extern char g_7f1f7d;

__declspec(naked) void __cdecl FUN_0069d4a0(void)
{
    __asm {
        sub     esp, 0x60
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x78]
        mov     eax, dword ptr [edi + 0x14]
        mov     ebx, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [edi + 0x8]
        sub     eax, ebx
        shl     eax, 3
        cmp     ecx, -0x14
        mov     dword ptr [esp + 0x40], eax
        jz      L_D4CA
        lea     eax, [eax + ecx - 8]
        mov     dword ptr [esp + 0x40], eax
L_D4CA:
        mov     esi, dword ptr [esp + 0x74]
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        mov     edx, dword ptr [esi + 0x40c]
        mov     dword ptr [esp + 0x34], eax
        mov     eax, dword ptr [esi + 0x410]
        sub     eax, edx
        sar     eax, 2
        jz      L_D4F8
        mov     ecx, edx
        mov     ebx, dword ptr [ecx]
        mov     dword ptr [esp + 0x78], ebx
        jmp     L_D504
L_D4F8:
        mov     dword ptr [esp + 0x78], 0
        mov     ebx, dword ptr [esp + 0x78]
L_D504:
        mov     edx, dword ptr [ebx + 0x78]
        lea     ecx, [ebx + 0x78]
        call    dword ptr [edx + 4]
        mov     ecx, dword ptr [g_7b8ce8]
        mov     edx, dword ptr [g_7b8cf0]
        mov     ebp, eax
        mov     eax, dword ptr [g_7b8cec]
        mov     dword ptr [esp + 0x5c], eax
        mov     eax, dword ptr [g_7b8d88]
        mov     dword ptr [esp + 0x58], ecx
        mov     ecx, dword ptr [g_7b8d8c]
        mov     dword ptr [esp + 0x60], edx
        mov     edx, dword ptr [g_7b8d90]
        mov     dword ptr [esp + 0x4c], eax
        mov     dword ptr [esp + 0x50], ecx
        mov     dword ptr [esp + 0x54], edx
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [g_7dab44]
        lea     edx, [esp + 0x2c]
        push    edx
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        lea     eax, [esp + 0x34]
        push    eax
        xor     ecx, 0x85739531
        mov     dword ptr [esp + 0x3c], ebp
        call    FUN_004e27f0
        push    0x1
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], 0
        call    FUN_0041eb40
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        xor     eax, eax
        cmp     edx, 0x1
        setnz   al
        test    ecx, ecx
        mov     dword ptr [esp + 0x38], eax
        jz      L_D5CA
        test    eax, eax
        jnz     L_D5C2
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xc4]
        mov     eax, dword ptr [esp + 0x38]
L_D5C2:
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        jnz     L_D5D8
L_D5CA:
        test    eax, eax
        jz      L_D5D8
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xc8]
L_D5D8:
        push    0x1
        push    0xa
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x3f8147ae
        push    0xbf8147ae
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0xb
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x3f8147ae
        push    0xbf8147ae
        lea     edx, [esp + 0x20]
        push    edx
        mov     ecx, edi
        call    FUN_0041edd0
        fld     dword ptr [esp + 0x18]
        fabs
        fcomp   dword ptr [g_77d060]
        fnstsw  ax
        test    ah, 0x41
        jz      L_D63D
        mov     dword ptr [esp + 0x18], 0
L_D63D:
        fld     dword ptr [esp + 0x14]
        fabs
        fcomp   dword ptr [g_77d060]
        fnstsw  ax
        test    ah, 0x41
        jz      L_D658
        mov     dword ptr [esp + 0x14], 0
L_D658:
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        push    0x2
        lea     edx, [esp + 0x34]
        mov     dword ptr [esi + 0x42c], ecx
        push    edx
        mov     ecx, edi
        mov     dword ptr [esi + 0x430], eax
        mov     dword ptr [esp + 0x38], 0
        call    FUN_0041eb40
        mov     eax, dword ptr [esp + 0x30]
        sub     eax, 0
        jz      L_DA51
        dec     eax
        jz      L_D890
        dec     eax
        jnz     L_DC38
        mov     ecx, dword ptr [g_7b8d8c]
        mov     eax, dword ptr [g_7b8d88]
        mov     edx, dword ptr [g_7b8d90]
        lea     ebp, [esi + 0x5ac]
        push    0x3
        mov     dword ptr [esp + 0x6c], ecx
        push    ebp
        mov     ecx, edi
        mov     dword ptr [esp + 0x6c], eax
        mov     dword ptr [esp + 0x74], edx
        mov     dword ptr [ebp], 0
        call    FUN_0041eb40
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_D756
        mov     eax, dword ptr [esi + 0xe0]
        cmp     dword ptr [eax + 0x14], 8
        jz      L_D756
        fld     dword ptr [esi + 0x608]
        fcomp   dword ptr [g_76d5f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_D756
        mov     eax, dword ptr [ebp]
        dec     eax
        cmp     eax, 3
        ja      L_D74F
        jmp     dword ptr [eax*4 + g_69ddd0]
L_D708:
        mov     ecx, dword ptr [esi + 0x2f4]
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0x0
        push    0x1f
        call    dword ptr [edx + 8]
        jmp     L_D74F
L_D71B:
        mov     ecx, dword ptr [esi + 0x2f4]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x0
        push    0x21
        jmp     L_D74C
L_D72B:
        mov     ecx, dword ptr [esi + 0x2f4]
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0x0
        push    0x20
        call    dword ptr [edx + 8]
        jmp     L_D74F
L_D73E:
        mov     ecx, dword ptr [esi + 0x2f4]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x0
        push    0x1e
L_D74C:
        call    dword ptr [eax + 8]
L_D74F:
        mov     ecx, esi
        call    FUN_0058adf0
L_D756:
        mov     ecx, dword ptr [ebp]
        push    0x1
        push    0x0
        push    0x0
        mov     dword ptr [esi + 0x5b0], ecx
        mov     dword ptr [ebp], 0
        call    FUN_0067f7b0
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        push    edx
        push    eax
        lea     ecx, [esp + 0x58]
        push    ecx
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x1
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea     edx, [esp + 0x5c]
        push    edx
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x2
        push    0x0
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x34]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        push    ecx
        lea     edx, [esp + 0x60]
        push    edx
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x3
        push    0x0
        call    FUN_0067f7b0
        fld     dword ptr [g_799a20]
        add     esp, 0xc
        fchs
        push    eax
        mov     eax, dword ptr [g_799a20]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x64]
        fstp    dword ptr [esp]
        push    ecx
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x6
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x38]
        fld     dword ptr [eax + 0x2bc]
        mov     edx, dword ptr [eax + 0x2c4]
        fmul    dword ptr [g_77de9c]
        push    ecx
        lea     eax, [esp + 0x74]
        mov     ecx, edi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    FUN_0041edd0
        mov     ecx, dword ptr [esp + 0x94]
        mov     edx, dword ptr [esp + 0x84]
        mov     ebp, dword ptr [esi]
        push    ecx
        push    edx
        push    0x0
        sub     esp, 0xc
        lea     eax, [esp + 0x7c]
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        sub     esp, 0xc
        lea     edx, [esp + 0x7c]
        mov     ecx, esp
        push    edx
        call    FUN_00584520
        sub     esp, 0xc
        lea     eax, [esp + 0x7c]
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, esi
        call    dword ptr [ebp + 0x160]
        mov     ecx, dword ptr [esp + 0x6c]
        mov     dword ptr [esi + 0x440], ecx
        jmp     L_DC34
L_D890:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_D8AD
        mov     ecx, dword ptr [esi + 0xe0]
        cmp     dword ptr [ecx + 0x14], 9
        jz      L_D8AD
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0x9
        call    dword ptr [edx + 4]
L_D8AD:
        push    0x1
        push    0x0
        push    0x0
        mov     dword ptr [esi + 0x5ac], 0
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x2c]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        lea     edx, [esp + 0x58]
        push    edx
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x1
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea     eax, [esp + 0x5c]
        push    eax
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x2
        push    0x0
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x34]
        add     esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea     eax, [esp + 0x60]
        push    eax
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x3
        push    0x0
        call    FUN_0067f7b0
        fld     dword ptr [g_799a20]
        mov     ecx, dword ptr [g_799a20]
        fchs
        add     esp, 0xc
        push    eax
        push    ecx
        push    ecx
        lea     edx, [esp + 0x64]
        fstp    dword ptr [esp]
        push    edx
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x7
        push    0x0
        lea     ebp, [esi + 0x168]
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x43960000
        push    0xc3960000
        push    ebp
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x8
        push    0x0
        lea     ebx, [esi + 0x16c]
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x43960000
        push    0xc3960000
        push    ebx
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x9
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x43960000
        push    0xc3960000
        lea     eax, [esi + 0x170]
        push    eax
        mov     ecx, edi
        call    FUN_0041edd0
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        push    eax
        push    ebp
        lea     ecx, [esi + 0x198]
        call    FUN_0041c680
        fld     dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x94]
        mov     edx, dword ptr [esp + 0x84]
        fstp    dword ptr [esp + 0x64]
        fld     dword ptr [ebx]
        mov     ebx, dword ptr [esi]
        push    ecx
        fstp    dword ptr [esp + 0x6c]
        fld     dword ptr [esi + 0x170]
        push    edx
        fst     dword ptr [esp + 0x40]
        mov     eax, dword ptr [esp + 0x40]
        push    eax
        fstp    dword ptr [esp + 0x78]
        sub     esp, 0xc
        lea     edx, [esp + 0x7c]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        sub     esp, 0xc
        lea     eax, [esp + 0x7c]
        mov     ecx, esp
        push    eax
        call    FUN_00584520
        sub     esp, 0xc
        lea     edx, [esp + 0x7c]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        mov     ecx, esi
        call    dword ptr [ebx + 0x160]
        mov     ebx, dword ptr [esp + 0x78]
        jmp     L_DC34
L_DA51:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_DA99
        mov     ecx, dword ptr [esi + 0xe0]
        cmp     dword ptr [ecx + 0x14], 0xb
        jz      L_DA6E
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0xb
        call    dword ptr [eax + 4]
L_DA6E:
        mov     ecx, dword ptr [esi + 0x2f4]
        mov     al, byte ptr [ecx + 0x1d]
        test    al, al
        jnz     L_DA99
        mov     eax, dword ptr [ecx + 0x14]
        cmp     eax, 0x1e
        jl      L_DA99
        cmp     eax, 0x21
        jg      L_DA99
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        mov     al, byte ptr [g_7f1f7d]
        push    0x0
        push    eax
        push    0xa
        call    dword ptr [edx + 8]
L_DA99:
        mov     ecx, dword ptr [g_7b8d88]
        mov     edx, dword ptr [g_7b8d8c]
        mov     eax, dword ptr [g_7b8d90]
        push    0x1
        push    0x0
        push    0x0
        mov     dword ptr [esp + 0x70], ecx
        mov     dword ptr [esp + 0x74], edx
        mov     dword ptr [esp + 0x78], eax
        mov     dword ptr [esi + 0x5ac], 0
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x2c]
        add     esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea     eax, [esp + 0x58]
        push    eax
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x1
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea     ecx, [esp + 0x5c]
        push    ecx
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x2
        push    0x0
        call    FUN_0067f7b0
        mov     edx, dword ptr [esp + 0x30]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x2c]
        push    edx
        push    eax
        lea     ecx, [esp + 0x60]
        push    ecx
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x3
        push    0x0
        call    FUN_0067f7b0
        fld     dword ptr [g_799a20]
        mov     edx, dword ptr [g_799a20]
        fchs
        add     esp, 0xc
        push    eax
        push    edx
        push    ecx
        lea     eax, [esp + 0x64]
        fstp    dword ptr [esp]
        push    eax
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x6
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x38]
        fld     dword ptr [eax + 0x2bc]
        push    ecx
        fmul    dword ptr [g_77de9c]
        mov     ecx, dword ptr [eax + 0x2c4]
        lea     edx, [esp + 0x74]
        fstp    dword ptr [esp]
        push    ecx
        push    edx
        mov     ecx, edi
        call    FUN_0041edd0
        mov     byte ptr [esp + 0x38], 0
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, edi
        mov     byte ptr [esp + 0x7c], 0
        call    FUN_0041ea60
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     ecx, edi
        call    FUN_0041ea60
        mov     eax, dword ptr [esp + 0x38]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xb0]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xc0]
        cmp     al, byte ptr [esp + 0x78]
        jz      L_DBDE
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xb4]
L_DBDE:
        mov     ecx, dword ptr [esp + 0x94]
        mov     edx, dword ptr [esp + 0x84]
        mov     eax, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esi]
        push    ecx
        push    edx
        push    eax
        sub     esp, 0xc
        lea     edx, [esp + 0x7c]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        sub     esp, 0xc
        lea     eax, [esp + 0x7c]
        mov     ecx, esp
        push    eax
        call    FUN_00584520
        sub     esp, 0xc
        lea     edx, [esp + 0x7c]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        mov     ecx, esi
        call    dword ptr [ebp + 0x160]
        mov     eax, dword ptr [esp + 0x6c]
        mov     dword ptr [esi + 0x440], eax
L_DC34:
        mov     ebp, dword ptr [esp + 0x2c]
L_DC38:
        lea     ecx, [esp + 0x74]
        push    ecx
        mov     ecx, edi
        mov     byte ptr [esp + 0x78], 1
        call    FUN_0041ea60
        mov     eax, dword ptr [esi + 0x3d4]
        test    eax, eax
        mov     dword ptr [esp + 0x84], eax
        jz      L_DC82
        mov     al, byte ptr [esp + 0x74]
        test    al, al
        mov     ecx, esi
        jz      L_DC6E
        call    FUN_005faf20
        push    eax
        push    0x0
        jmp     L_DC76
L_DC6E:
        call    FUN_005faf20
        push    eax
        push    0x1
L_DC76:
        mov     ecx, dword ptr [esp + 0x8c]
        call    FUN_005b9d60
L_DC82:
        push    0x1
        push    0x4
        push    0x0
        call    FUN_0067f7b0
        fld     dword ptr [ebp + 0x640]
        mov     edx, dword ptr [ebp + 0x640]
        fchs
        add     esp, 0xc
        push    eax
        push    edx
        push    ecx
        lea     eax, [esp + 0x50]
        fstp    dword ptr [esp]
        push    eax
        mov     ecx, edi
        call    FUN_0041edd0
        push    0x1
        push    0x5
        xor     esi, esi
        push    esi
        call    FUN_0067f7b0
        fld     dword ptr [ebp + 0x63c]
        mov     ecx, dword ptr [ebp + 0x63c]
        fchs
        add     esp, 0xc
        push    eax
        push    ecx
        push    ecx
        lea     edx, [esp + 0x54]
        fstp    dword ptr [esp]
        push    edx
        mov     ecx, edi
        call    FUN_0041edd0
        mov     eax, dword ptr [ebx + 0x198]
        mov     ecx, dword ptr [ebx + 0x19c]
        mov     dword ptr [ebx + 0x1a4], ecx
        mov     ecx, dword ptr [esp + 0x94]
        mov     dword ptr [ebx + 0x1a0], eax
        mov     edx, dword ptr [esp + 0x44]
        mov     dword ptr [ebx + 0x1ac], edx
        mov     eax, dword ptr [esp + 0x48]
        mov     dword ptr [ebx + 0x1b0], ecx
        push    0x2
        lea     edx, [esp + 0x40]
        mov     dword ptr [ebx + 0x1a8], eax
        mov     dword ptr [ebx + 0x1b4], esi
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x44], esi
        call    FUN_0041eb40
        mov     eax, dword ptr [esp + 0x3c]
        cmp     eax, 0x1
        jnz     L_DD42
        mov     ecx, ebx
        call    FUN_005eb380
        jmp     L_DD63
L_DD42:
        cmp     eax, 0x2
        jnz     L_DD50
        mov     ecx, ebx
        call    FUN_005eb260
        jmp     L_DD63
L_DD50:
        cmp     eax, 0x3
        mov     ecx, ebx
        jnz     L_DD5E
        call    FUN_005eb070
        jmp     L_DD63
L_DD5E:
        call    FUN_005eb100
L_DD63:
        mov     eax, dword ptr [edi + 0x14]
        mov     esi, dword ptr [edi + 0x10]
        mov     edi, dword ptr [edi + 0x8]
        sub     eax, esi
        shl     eax, 3
        cmp     edi, -0x14
        jz      L_DD7A
        lea     eax, [eax + edi - 8]
L_DD7A:
        mov     ecx, dword ptr [esp + 0x40]
        mov     ebp, dword ptr [g_7dab40]
        sub     eax, ecx
        mov     ecx, eax
        mov     eax, dword ptr [g_7dab44]
        mov     edx, dword ptr [eax]
        xor     edx, ebp
        mov     eax, dword ptr [edx + 0x14]
        mov     edx, dword ptr [esp + 0x88]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1814]
        mov     esi, dword ptr [eax + edx*4 + 0x6c74]
        add     eax, 0x6c6c
        add     esi, ecx
        mov     dword ptr [eax + edx*4 + 8], esi
        mov     edx, dword ptr [eax + 0xc00]
        pop     edi
        pop     esi
        add     edx, ecx
        pop     ebp
        mov     dword ptr [eax + 0xc00], edx
        pop     ebx
        add     esp, 0x60
        ret
    }
}
