/*
 * FUN_005b3240 (961 B) — __thiscall, RET 8 (2 stack params).
 *
 * Large update/refresh routine. Reads a bunch of state from `this` (ESI),
 * does FPU math, and dispatches through several vtables. Calls:
 *   FUN_005b2bb0, FUN_005b2b50, FUN_00707e70, FUN_006100d0,
 *   FUN_00416110, FUN_005b3610, FUN_005dcd00, FUN_0040c5d0, FUN_005b3630.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b2bb0(void);
extern void __stdcall FUN_005b2b50(void);
extern double __stdcall FUN_00707e70(int);
extern void __stdcall FUN_006100d0(void);
extern void __stdcall FUN_00416110(void);
extern void __stdcall FUN_005b3610(void);
extern void __stdcall FUN_005dcd00(void);
extern void __stdcall FUN_0040c5d0(void);
extern void __stdcall FUN_005b3630(void);
extern double DAT_00786350;
extern double DAT_007860c8;
extern int *DAT_007f24cc;

__declspec(naked) void __stdcall FUN_005b3240(void *param1, void *param2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x3c
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi + 0x364]
        test    ebx, ebx
        push    edi
        jnz     L3270
        mov     al, byte ptr [esi + 0x6d1]
        test    al, al
        jnz     L3270
        mov     al, byte ptr [esi + 0x6d0]
        test    al, al
        jz      L35F8
L3270:
        mov     edi, dword ptr [esi + 0x35c]
        mov     dword ptr [esp + 0x24], 0
        mov     dword ptr [esp + 0x28], 0
        mov     dword ptr [esp + 0x2c], 0
        mov     eax, dword ptr [edi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x30], ecx
        lea     ecx, [edi + 0x78]
        mov     dword ptr [esp + 0x34], edx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esp + 0x38], eax
        call    dword ptr [edx + 0x4]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [edi + 0x42c]
        mov     dword ptr [esp + 0x10], eax
        mov     al, byte ptr [esi + 0x6d0]
        test    al, al
        jz      L32FB
        lea     edi, [esi + 0x6d4]
        push    edi
        mov     ecx, esi
        call    FUN_005b2bb0
        test    al, al
        jnz     L32F0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x1e0]
L32F0:
        mov     eax, dword ptr [edi + 0x8]
        fld     dword ptr [edi]
        mov     dword ptr [esp + 0x44], eax
        jmp     L3317
L32FB:
        mov     eax, dword ptr [esi + 0x6a8]
        mov     edx, dword ptr [ebx]
        push    eax
        lea     ecx, [esp + 0x40]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x2c]
        fld     dword ptr [eax]
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x44], edx
L3317:
        fsub    dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x44]
        fsub    dword ptr [esp + 0x38]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    st(2)
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [eax + 0x2bc]
        fld     st(1)
        fcomp   qword ptr [DAT_00786350]
        __emit  0xDF                 /* __emit: FNSTSW AX (no WAIT prefix) */
        __emit  0xE0
        test    ah, 0x1
        jnz     L3363
        fld     st(0)
        fmul    st(0), st(1)
        fxch    st(1)
        fxch    st(2)
        fcompp
        __emit  0xDF                 /* __emit: FNSTSW AX (no WAIT prefix) */
        __emit  0xE0
        fstp    st(0)
        test    ah, 0x1
        jz      L33D1
        jmp     L3367
L3363:
        fstp    st(0)
        fstp    st(0)
L3367:
        mov     al, byte ptr [esi + 0x6d0]
        test    al, al
        jz      L337A
        mov     ecx, esi
        call    FUN_005b2b50
        jmp     L33D1
L337A:
        mov     edi, dword ptr [esi + 0x6ac]
        test    edi, edi
        jle     L33A6
        mov     ecx, dword ptr [esi + 0x364]
        mov     edx, dword ptr [esi + 0x6a8]
        mov     eax, dword ptr [ecx]
        lea     ebx, [edx + edi*0x1]
        call    dword ptr [eax + 0x30]
        cmp     eax, ebx
        jle     L33A4
        mov     dword ptr [esi + 0x6a8], ebx
        jmp     L33D1
L33A4:
        test    edi, edi
L33A6:
        jge     L33BD
        mov     ecx, dword ptr [esi + 0x6a8]
        lea     eax, [ecx + edi*0x1]
        test    eax, eax
        jle     L33BD
        mov     dword ptr [esi + 0x6a8], eax
        jmp     L33D1
L33BD:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [esi]
        push    0
        push    eax
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x15c]
L33D1:
        mov     al, byte ptr [esi + 0x6d0]
        test    al, al
        jz      L33FB
        mov     edx, dword ptr [esi + 0x6d4]
        mov     eax, dword ptr [esi + 0x6d8]
        mov     ecx, dword ptr [esi + 0x6dc]
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x2c], ecx
        jmp     L3426
L33FB:
        mov     eax, dword ptr [esi + 0x6a8]
        mov     ecx, dword ptr [esi + 0x364]
        mov     edx, dword ptr [ecx]
        push    eax
        lea     eax, [esp + 0x40]
        push    eax
        call    dword ptr [edx + 0x2c]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x24], ecx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x28], edx
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x2c], eax
L3426:
        mov     al, byte ptr [esi + 0x6d1]
        test    al, al
        jz      L352A
        fld     qword ptr [DAT_007860c8]
        push    0
        fadd    qword ptr [esi + 0x6c8]
        fstp    qword ptr [esp + 0x1c]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 0x18]
        __emit  0xDF                 /* __emit: FNSTSW AX (no WAIT prefix) */
        __emit  0xE0
        test    ah, 0x1
        jnz     L3463
        mov     ecx, dword ptr [esi + 0x6a4]
        mov     byte ptr [ecx + 0x548], 0
L3463:
        mov     edx, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esi + 0x35c]
        push    0
        push    edx
        mov     edx, dword ptr [esp + 0x40]
        lea     eax, [esp + 0x17]
        push    eax
        mov     eax, dword ptr [esp + 0x3c]
        push    ecx
        push    edx
        push    eax
        call    FUN_006100d0
        mov     ecx, dword ptr [esi + 0x6a4]
        fadd    dword ptr [ecx + 0x540]
        add     esp, 0x18
        fcomp   dword ptr [esp + 0x34]
        __emit  0xDF                 /* __emit: FNSTSW AX (no WAIT prefix) */
        __emit  0xE0
        test    ah, 0x41
        jz      L34AE
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x1dc]
        jmp     L359C
L34AE:
        mov     eax, 0xbf800000
        push    0
        mov     dword ptr [esi + 0x390], eax
        mov     dword ptr [esi + 0x394], eax
        mov     dword ptr [esi + 0x398], eax
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x18]
        mov     ecx, dword ptr [DAT_007f24cc]
        call    FUN_00416110
        test    eax, eax
        jz      L3509
        push    0
        push    3
        mov     ecx, eax
        call    FUN_005b3610
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax + 0x8], ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0xc], edx
        call    FUN_005dcd00
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
L3509:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        xor     eax, eax
        mov     dword ptr [eax + 0x8], ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0xc], edx
        call    FUN_005dcd00
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
L352A:
        mov     eax, 0xbf800000
        push    0
        mov     dword ptr [esi + 0x390], eax
        mov     dword ptr [esi + 0x394], eax
        mov     dword ptr [esi + 0x398], eax
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x18]
        mov     ecx, dword ptr [DAT_007f24cc]
        call    FUN_00416110
        test    eax, eax
        jz      L356A
        push    0
        push    2
        mov     ecx, eax
        call    FUN_005b3610
        mov     edi, eax
        jmp     L356C
L356A:
        xor     edi, edi
L356C:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        sub     esp, 0xc
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [edi + 0xc], ecx
        lea     edx, [esp + 0x30]
        mov     ecx, esp
        push    edx
        call    FUN_0040c5d0
        mov     ecx, edi
        call    FUN_005b3630
        push    edi
        mov     ecx, esi
        mov     byte ptr [edi + 0x24], 0
        call    FUN_005dcd00
L359C:
        mov     eax, dword ptr [esi + 0x3b8]
        push    0
        mov     dword ptr [esi + 0x3ac], eax
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi + 0x3b8]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [DAT_007f24cc]
        call    FUN_00416110
        test    eax, eax
        jz      L35D9
        push    0
        push    8
        mov     ecx, eax
        call    FUN_005b3610
        jmp     L35DB
L35D9:
        xor     eax, eax
L35DB:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0xc], ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0x14], edx
        call    FUN_005dcd00
L35F8:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
