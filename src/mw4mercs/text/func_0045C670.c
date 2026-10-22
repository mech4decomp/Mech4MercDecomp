/*
 * FUN_0045C670 (1253 B) — __thiscall. MLR vertex/lighting transform: reads
 * orientation/position via FUN_00419480 / FUN_00428730 / FUN_00428810 /
 * FUN_00428830, computes dot products and per-vertex colors into a set of
 * 0x20-byte output buffers (g_7b98e8..g_7b9904), and finally calls
 * FUN_00713aa0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_00428810(void);
extern void __cdecl FUN_00428830(void);
extern void __cdecl FUN_00713aa0(void);

extern float g_76d598;
extern float g_76ed04;
extern float g_76c5b0;

extern char g_7b9904[];
extern char g_7b9900[];
extern char g_7b98fc[];
extern char g_7b98f8[];
extern char g_7b98f4[];
extern char g_7b98f0[];
extern char g_7b98ec[];
extern char g_7b98e8[];

__declspec(naked) void __cdecl FUN_0045C670(void)
{
    __asm {
        sub     esp, 0x64
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x74]
        mov     ebx, ecx
        push    esi
        lea     ecx, [esp + 0x50]
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_00419480
        lea     eax, [esp + 0x64]
        push    eax
        mov     ecx, esi
        call    FUN_00428730
        lea     ecx, [esp + 0x58]
        push    ecx
        mov     ecx, esi
        call    FUN_00428810
        lea     edx, [esp + 0x40]
        push    edx
        mov     ecx, esi
        call    FUN_00428830
        fld     dword ptr [esp + 0x48]
        fmul    dword ptr [esp + 0x54]
        mov     esi, dword ptr [esp + 0x78]
        fld     dword ptr [esp + 0x44]
        mov     eax, dword ptr [ebx]
        fmul    dword ptr [esp + 0x50]
        mov     ecx, ebx
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x4c]
        fmul    dword ptr [esp + 0x40]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x40]
        fmul    dword ptr [esi]
        fld     dword ptr [esp + 0x48]
        fmul    dword ptr [esi + 8]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x44]
        fmul    dword ptr [esi + 4]
        faddp   st(1), st(0)
        fdivr   dword ptr [g_76d598]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [g_76ed04]
        fdiv    dword ptr [esp + 0x7c]
        fstp    dword ptr [esp + 0x14]
        call    dword ptr [eax + 8]
        xor     ebp, ebp
        cmp     eax, ebp
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x10], ebp
        jle     L_cb4c
        mov     eax, dword ptr [ebx + 0x5c]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [esp + 0x30]
        push    edi
        mov     dword ptr [esp + 0x10], offset g_7b9904
        mov     dword ptr [esp + 0x80], offset g_7b9900
        mov     dword ptr [esp + 0x7c], offset g_7b98fc
        mov     dword ptr [esp + 0x1c], offset g_7b98f8
        mov     dword ptr [esp + 0x78], offset g_7b98f4
        mov     edi, offset g_7b98f0
        mov     edx, offset g_7b98ec
        mov     ecx, offset g_7b98e8
        mov     dword ptr [esp + 0x34], eax
L_c765:
        mov     eax, dword ptr [esp + 0x30]
        fld     dword ptr [eax + 8]
        fmul    dword ptr [esi + 8]
        fld     dword ptr [eax + 4]
        fmul    dword ptr [esi + 4]
        faddp   st(1), st(0)
        fld     dword ptr [eax]
        fmul    dword ptr [esi]
        faddp   st(1), st(0)
        fcomp   dword ptr [g_76c5b0]
        __emit  0xDF                 /* fnstsw ax (no 9B WAIT prefix) */
        __emit  0xE0
        __emit  0xF6                 /* test ah, 1 */
        __emit  0xC4
        __emit  0x01
        je      L_cb26
        fld     dword ptr [esp + 0x44]
        mov     eax, ebp
        inc     ebp
        mov     dword ptr [esp + 0x20], ebp
        mov     ebp, dword ptr [ebx + 0x48]
        xor     ebx, ebx
        mov     bl, byte ptr [eax + ebp]
        add     ecx, 0x20
        add     edx, 0x20
        mov     eax, ebx
        lea     ebx, [eax + eax*2]
        mov     eax, dword ptr [esp + 0x24]
        mov     eax, dword ptr [eax + 0x14]
        fmul    dword ptr [eax + ebx*4]
        lea     eax, [eax + ebx*4]
        fld     dword ptr [esp + 0x48]
        mov     ebx, dword ptr [esp + 0x84]
        fmul    dword ptr [eax + 4]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x4c]
        fmul    dword ptr [eax + 8]
        faddp   st(1), st(0)
        fsub    dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x2c]
        fld     st(0)
        fmul    dword ptr [esi]
        fadd    dword ptr [eax]
        fstp    dword ptr [esp + 0x38]
        fld     st(0)
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x3c]
        fmul    dword ptr [esi + 8]
        fadd    dword ptr [eax + 8]
        mov     eax, dword ptr [esp + 0x78]
        fld     dword ptr [esp + 0x38]
        fsub    dword ptr [esp + 0x50]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x3c]
        fsub    dword ptr [esp + 0x54]
        fstp    dword ptr [esp + 0x3c]
        fsub    dword ptr [esp + 0x58]
        fld     st(0)
        fmul    dword ptr [esp + 0x64]
        fld     dword ptr [esp + 0x3c]
        fmul    dword ptr [esp + 0x60]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x5c]
        fmul    dword ptr [esp + 0x38]
        faddp   st(1), st(0)
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [g_76ed04]
        fstp    dword ptr [ecx - 0x20]
        fmul    dword ptr [esp + 0x70]
        fld     dword ptr [esp + 0x3c]
        fmul    dword ptr [esp + 0x6c]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x68]
        fmul    dword ptr [esp + 0x38]
        faddp   st(1), st(0)
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [g_76ed04]
        fstp    dword ptr [edx - 0x20]
        mov     dword ptr [edi], 0x3f000000
        mov     dword ptr [eax], 0x3f800000
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [esp + 0x7c]
        mov     dword ptr [ebx], 0
        mov     ebx, dword ptr [esp + 0x80]
        mov     dword ptr [ebx], 0
        mov     ebx, dword ptr [esp + 0x10]
        mov     dword ptr [ebx], 0
        inc     dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x78]
        add     edi, 0x20
        add     ebx, 0x20
        fld     dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x78], ebx
        mov     ebx, 0x20
        add     eax, ebx
        mov     dword ptr [esp + 0x1c], eax
        add     dword ptr [esp + 0x7c], ebx
        add     dword ptr [esp + 0x80], ebx
        add     dword ptr [esp + 0x10], ebx
        mov     eax, dword ptr [esp + 0x20]
        mov     ebx, eax
        inc     eax
        mov     dword ptr [esp + 0x20], eax
        xor     eax, eax
        mov     al, byte ptr [ebx + ebp]
        lea     ebx, [eax + eax*2]
        mov     eax, dword ptr [esp + 0x24]
        mov     eax, dword ptr [eax + 0x14]
        fmul    dword ptr [eax + ebx*4]
        lea     eax, [eax + ebx*4]
        fld     dword ptr [esp + 0x4c]
        mov     ebx, dword ptr [esp + 0x84]
        fmul    dword ptr [eax + 8]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x48]
        fmul    dword ptr [eax + 4]
        faddp   st(1), st(0)
        fsub    dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x2c]
        fld     st(0)
        fmul    dword ptr [esi]
        fadd    dword ptr [eax]
        fstp    dword ptr [esp + 0x38]
        fld     st(0)
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x3c]
        fmul    dword ptr [esi + 8]
        fadd    dword ptr [eax + 8]
        mov     eax, dword ptr [esp + 0x78]
        fld     dword ptr [esp + 0x38]
        fsub    dword ptr [esp + 0x50]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x3c]
        fsub    dword ptr [esp + 0x54]
        fstp    dword ptr [esp + 0x3c]
        fsub    dword ptr [esp + 0x58]
        fld     st(0)
        fmul    dword ptr [esp + 0x64]
        fld     dword ptr [esp + 0x3c]
        fmul    dword ptr [esp + 0x60]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x5c]
        fmul    dword ptr [esp + 0x38]
        faddp   st(1), st(0)
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [g_76ed04]
        fstp    dword ptr [ecx]
        fmul    dword ptr [esp + 0x70]
        fld     dword ptr [esp + 0x3c]
        fmul    dword ptr [esp + 0x6c]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x68]
        fmul    dword ptr [esp + 0x38]
        faddp   st(1), st(0)
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [g_76ed04]
        fstp    dword ptr [edx]
        mov     dword ptr [edi], 0x3f000000
        mov     dword ptr [eax], 0x3f800000
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [esp + 0x7c]
        fld     dword ptr [esp + 0x44]
        mov     dword ptr [ebx], 0
        mov     ebx, dword ptr [esp + 0x80]
        mov     dword ptr [ebx], 0
        mov     ebx, dword ptr [esp + 0x10]
        mov     dword ptr [ebx], 0
        inc     dword ptr [esp + 0x14]
        add     dword ptr [esp + 0x78], 0x20
        mov     ebx, 0x20
        add     eax, ebx
        mov     dword ptr [esp + 0x1c], eax
        add     dword ptr [esp + 0x7c], ebx
        add     dword ptr [esp + 0x80], ebx
        add     dword ptr [esp + 0x10], ebx
        mov     eax, dword ptr [esp + 0x20]
        mov     ebx, eax
        add     ecx, 0x20
        add     edx, 0x20
        add     edi, 0x20
        inc     eax
        mov     dword ptr [esp + 0x20], eax
        xor     eax, eax
        mov     al, byte ptr [ebx + ebp]
        mov     ebx, dword ptr [esp + 0x24]
        lea     ebp, [eax + eax*2]
        mov     eax, dword ptr [ebx + 0x14]
        fmul    dword ptr [eax + ebp*4]
        lea     eax, [eax + ebp*4]
        fld     dword ptr [esp + 0x4c]
        fmul    dword ptr [eax + 8]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x48]
        fmul    dword ptr [eax + 4]
        faddp   st(1), st(0)
        fsub    dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x2c]
        fld     st(0)
        fmul    dword ptr [esi]
        fadd    dword ptr [eax]
        fstp    dword ptr [esp + 0x38]
        fld     st(0)
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x3c]
        fmul    dword ptr [esi + 8]
        fadd    dword ptr [eax + 8]
        fld     dword ptr [esp + 0x38]
        fsub    dword ptr [esp + 0x50]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x3c]
        fsub    dword ptr [esp + 0x54]
        fstp    dword ptr [esp + 0x3c]
        fsub    dword ptr [esp + 0x58]
        fld     st(0)
        fmul    dword ptr [esp + 0x64]
        fld     dword ptr [esp + 0x3c]
        fmul    dword ptr [esp + 0x60]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x5c]
        fmul    dword ptr [esp + 0x38]
        faddp   st(1), st(0)
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [g_76ed04]
        fstp    dword ptr [ecx]
        fmul    dword ptr [esp + 0x70]
        fld     dword ptr [esp + 0x3c]
        fmul    dword ptr [esp + 0x6c]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x68]
        mov     eax, dword ptr [esp + 0x78]
        fmul    dword ptr [esp + 0x38]
        mov     ebp, dword ptr [esp + 0x84]
        add     ecx, 0x20
        add     edx, 0x20
        faddp   st(1), st(0)
        add     edi, 0x20
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [g_76ed04]
        fstp    dword ptr [edx - 0x20]
        mov     dword ptr [edi - 0x20], 0x3f000000
        mov     dword ptr [eax], 0x3f800000
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ebp
        mov     ebp, dword ptr [esp + 0x7c]
        mov     dword ptr [ebp], 0
        mov     ebp, dword ptr [esp + 0x80]
        mov     dword ptr [ebp], 0
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [ebp], 0
        inc     dword ptr [esp + 0x14]
        add     dword ptr [esp + 0x78], 0x20
        mov     ebp, 0x20
        add     eax, ebp
        mov     dword ptr [esp + 0x1c], eax
        add     dword ptr [esp + 0x7c], ebp
        add     dword ptr [esp + 0x80], ebp
        mov     eax, dword ptr [esp + 0x10]
        add     eax, ebp
        mov     ebp, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x10], eax
        jmp     L_cb29
L_cb26:
        add     ebp, 3
L_cb29:
        add     dword ptr [esp + 0x30], 0x10
        dec     dword ptr [esp + 0x34]
        jne     L_c765
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        pop     edi
        jle     L_cb4c
        push    eax
        push    offset g_7b98e8
        call    FUN_00713aa0
L_cb4c:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x64
        ret     0x10
    }
}
