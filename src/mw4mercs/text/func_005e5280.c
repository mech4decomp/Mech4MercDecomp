/*
 * FUN_005e5280 (1000 B) — __thiscall, RET 8 (2 stack params).
 *
 * Large orientation/aiming helper. Computes a look-at basis from the
 * object's forward vector, normalizes, builds an orthonormal frame,
 * and stores the result back into the object. Contains heavy FPU math.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0040c410(void);
extern void __stdcall FUN_0041c830(void);
extern void __stdcall FUN_0040d560(void);
extern void __stdcall FUN_0040cb00(void);
extern void __stdcall FUN_0040ca40(void);
extern void __stdcall FUN_00419460(void);
extern void __stdcall FUN_0041a250(void);
extern void __stdcall FUN_00428730(void);
extern void __stdcall FUN_004fb680(void);
extern void __stdcall FUN_00767430(void);
extern void __stdcall FUN_0041fd80(void);

/* absolute-memory operands (extern symbols -> correct opcode + masked reloc) */
extern float DAT_007b220c;
extern float DAT_0076d064;
extern float DAT_007b8d5c;
extern float DAT_007b8d60;
extern float DAT_007b8d58;
extern float DAT_0076c5b0;
extern float DAT_008bd5e0;
extern float DAT_008bd5dc;
extern float DAT_008bd5d8;
extern float DAT_00789098;
extern int   DAT_007b8d68;
extern int   DAT_007b8d6c;
extern int   DAT_007b8d70;
extern int   DAT_007b4384;

__declspec(naked) void __stdcall FUN_005e5280(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x74
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        fld     dword ptr [esi + 0x290]
        fcomp   dword ptr [esi + 0x294]
        mov     edi, eax
        fnstsw  ax
        test    ah, 0x41
        jz      L_55d0
        lea     ecx, [esi + 0x284]
        push    ecx
        lea     ecx, [ebp - 0x44]
        call    FUN_0040c410
        mov     edx, dword ptr [esi + 0xd8]
        add     edx, 0x80
        push    edx
        lea     eax, [ebp - 0x44]
        push    eax
        lea     ecx, [ebp - 0x14]
        call    FUN_0041c830
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        faddp   st(1), st(0)
        fld     st(0)
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_530e
        push    0x7b8d58
        fstp    st(0)
        lea     ecx, [ebp - 0x20]
        call    FUN_0040d560
        jmp     L_5330
    L_530e:
        fsqrt
        fdivr   dword ptr [DAT_0076d064]
        fld     dword ptr [ebp - 0x14]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x10]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0xc]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x18]
        fstp    st(0)
    L_5330:
        fld     dword ptr [DAT_007b8d5c]
        mov     ecx, dword ptr [DAT_007b220c]
        fmul    dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 4], ecx
        fld     dword ptr [DAT_007b8d60]
        lea     ecx, [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 8], 0
        fsubp   st(1), st(0)
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [DAT_007b8d60]
        fmul    dword ptr [ebp - 0x20]
        fld     dword ptr [DAT_007b8d58]
        fmul    dword ptr [ebp - 0x18]
        fsubp   st(1), st(0)
        fstp    dword ptr [ebp - 0x28]
        fld     dword ptr [DAT_007b8d58]
        fmul    dword ptr [ebp - 0x1c]
        fld     dword ptr [DAT_007b8d5c]
        fmul    dword ptr [ebp - 0x20]
        fsubp   st(1), st(0)
        fstp    dword ptr [ebp - 0x24]
        call    FUN_0040cb00
        fcomp   dword ptr [ebp - 4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_53b7
        fld     dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x28]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp - 0x2c]
        faddp   st(1), st(0)
        fsqrt
        fstp    st(2)
        fstp    st(0)
        jmp     L_53ba
    L_53b7:
        fld     dword ptr [ebp - 8]
    L_53ba:
        fld     st(0)
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_53eb
        mov     edx, dword ptr [DAT_007b8d68]
        fstp    st(0)
        mov     eax, dword ptr [DAT_007b8d6c]
        mov     ecx, dword ptr [DAT_007b8d70]
        mov     dword ptr [ebp - 0x2c], edx
        mov     dword ptr [ebp - 0x28], eax
        mov     dword ptr [ebp - 0x24], ecx
        jmp     L_544c
    L_53eb:
        fld     dword ptr [ebp - 0x28]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_53fd
        fchs
    L_53fd:
        fld     st(0)
        fld     dword ptr [ebp - 0x18]
        fpatan
        fld     qword ptr [ebp + 8]
        fsub    qword ptr [esi + 0xec]
        fmul    dword ptr [edi + 0x78]
        fst     dword ptr [ebp + 0xc]
        fchs
        fstp    dword ptr [ebp - 4]
        fcom    dword ptr [ebp - 4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_5429
        fstp    st(0)
        fld     dword ptr [ebp - 4]
        jmp     L_5438
    L_5429:
        fcom    dword ptr [ebp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_5438
        fstp    st(0)
        fld     dword ptr [ebp + 0xc]
    L_5438:
        fdiv    st(0), st(1)
        push    ecx
        lea     edx, [ebp - 0x2c]
        lea     ecx, [ebp - 0x2c]
        fstp    dword ptr [esp]
        push    edx
        fstp    st(0)
        call    FUN_0040ca40
    L_544c:
        push    0x7b9460
        lea     ecx, [ebp - 0x74]
        call    FUN_00419460
        lea     eax, [ebp - 0x2c]
        push    eax
        lea     ecx, [ebp - 0x74]
        call    FUN_0041a250
        lea     ecx, [ebp - 0x38]
        push    ecx
        lea     ecx, [ebp - 0x74]
        call    FUN_00428730
        fld     dword ptr [ebp - 0x38]
        fchs
        push    0x7b8d48
        fstp    dword ptr [ebp - 0x38]
        lea     edx, [ebp - 0x2c]
        fld     dword ptr [ebp - 0x34]
        push    edx
        fchs
        mov     ecx, esi
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [edi + 0x80]
        fld     st(0)
        fmul    dword ptr [ebp - 0x38]
        fstp    dword ptr [ebp - 0x2c]
        fld     st(0)
        fmul    dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp - 0x28]
        fld     dword ptr [ebp - 0x30]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x24]
        fstp    st(0)
        call    FUN_004fb680
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x44]
        push    ecx
        lea     ecx, [ebp - 0x14]
        call    FUN_0041c830
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        faddp   st(1), st(0)
        fld     st(0)
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_565e
        fsqrt
        fdivr   dword ptr [DAT_0076d064]
        fld     dword ptr [ebp - 0x14]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x10]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0xc]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x18]
        fstp    st(0)
        fld     dword ptr [DAT_008bd5e0]
        fmul    dword ptr [ebp - 0x18]
        fld     dword ptr [DAT_008bd5dc]
        fmul    dword ptr [ebp - 0x1c]
        faddp   st(1), st(0)
        fld     dword ptr [DAT_008bd5d8]
        fmul    dword ptr [ebp - 0x20]
        faddp   st(1), st(0)
        fcomp   dword ptr [DAT_00789098]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_5660
        xor     eax, eax
        mov     dword ptr [esi + 0x17c], eax
        mov     dword ptr [esi + 0x178], eax
        mov     dword ptr [esi + 0x174], eax
        mov     dword ptr [esi + 0x194], eax
        fld     dword ptr [esi + 0x170]
        mov     dword ptr [esi + 0x190], eax
        fld     dword ptr [esi + 0x16c]
        mov     dword ptr [esi + 0x18c], eax
        fld     dword ptr [esi + 0x168]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0xc]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0xc]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 8], eax
        fld     dword ptr [ebp - 8]
        pop     edi
        fld     st(0)
        fmul    dword ptr [ebp - 0x20]
        fstp    dword ptr [esi + 0x168]
        fld     st(0)
        fmul    dword ptr [ebp - 0x1c]
        fstp    dword ptr [esi + 0x16c]
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [esi + 0x170]
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8
    L_55d0:
        push    0x8bd5e8
        lea     ecx, [esi + 0x1c8]
        call    FUN_00767430
        mov     eax, dword ptr [esi + 0xd8]
        fld     dword ptr [eax + 0x90]
        mov     edx, dword ptr [DAT_007b4384]
        add     eax, 0x80
        fchs
        fld     dword ptr [eax + 0x14]
        mov     dword ptr [ebp + 0xc], edx
        fchs
        fstp    dword ptr [ebp - 0x40]
        fld     dword ptr [eax + 0x18]
        add     esi, 0x210
        fchs
        fstp    dword ptr [ebp - 0x3c]
        mov     ecx, esi
        fmul    dword ptr [ebp + 0xc]
        fstp    dword ptr [esi + 0xffffff70]
        fld     dword ptr [ebp - 0x40]
        fmul    dword ptr [ebp + 0xc]
        fstp    dword ptr [esi + 0xffffff74]
        fld     dword ptr [ebp - 0x3c]
        fmul    dword ptr [ebp + 0xc]
        fstp    dword ptr [esi + 0xffffff78]
        call    FUN_0041fd80
        test    eax, eax
        jz      L_5660
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    0
        push    5
        mov     ecx, eax
        call    dword ptr [edx + 4]
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8
    L_565e:
        fstp    st(0)
    L_5660:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
