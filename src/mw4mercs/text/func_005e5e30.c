/*
 * FUN_005e5e30 (1888 B) — __thiscall, RET 0xC (3 stack params).
 *
 * Large orientation/aiming computation. Builds a 4x4 basis from the
 * object's transform, performs two 4x4 matrix multiplies (FPU), and
 * dispatches an aim request. Central helper called by the other
 * FUN_005e5xxx aiming functions.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fd80(void);
extern void __stdcall FUN_00415230(void);
extern void __stdcall FUN_005e4300(void);
extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_0041fcd0(void);
extern void __stdcall FUN_0041c7d0(void);
extern void __stdcall FUN_004206b0(void);
extern void __stdcall FUN_00419480(void);
extern void __stdcall FUN_00428730(void);
extern void __stdcall FUN_0058ea70(void);
extern void __stdcall FUN_0040cc10(void);
extern void __stdcall FUN_005d2900(void);
extern void __stdcall FUN_0040cbe0(void);
extern void __stdcall FUN_0040cb00(void);
extern void __stdcall FUN_0040d560(void);
extern void __stdcall FUN_0040c410(void);
extern void __stdcall FUN_0055c860(void);
extern void __stdcall FUN_004e2f40(void);
extern void __stdcall FUN_004e8dc0(void);

/* absolute-memory operands (extern symbols -> correct opcode + masked reloc) */
extern int   DAT_007dc700;
extern int   DAT_007f25c0;
extern float DAT_007b220c;
extern float DAT_0076c5b0;
extern int   DAT_007b8d08;
extern int   DAT_007b8d0c;
extern int   DAT_007b8d10;
extern float DAT_0077016c;
extern int   DAT_007dc728;
extern float DAT_0076d5f0;

__declspec(naked) void __stdcall FUN_005e5e30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x104
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        lea     ecx, [ebx + 0x258]
        call    FUN_0041fd80
        lea     ecx, [ebx + 0x260]
        mov     esi, eax
        call    FUN_0041fd80
        test    esi, esi
        mov     edi, eax
        mov     dword ptr [ebp - 0xc], edi
        jz      L_655e
        mov     eax, dword ptr [DAT_007dc700]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_655e
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 1
        jz      L_5eb6
        push    esi
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x268], 0
        call    FUN_005e4300
        mov     esi, eax
        test    esi, esi
        lea     ecx, [ebx + 0x258]
        jz      L_6203
        call    FUN_0041fcb0
        push    esi
        lea     ecx, [ebx + 0x258]
        call    FUN_0041fcd0
    L_5eb6:
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 1
        jnz     L_6584
        mov     esi, dword ptr [esi + 0xd8]
        lea     eax, [esi + 0x80]
        mov     esi, dword ptr [ebp + 8]
        lea     ecx, [ebx + 0x278]
        push    eax
        mov     dword ptr [ebp - 0x5c], ecx
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp - 0x1c], eax
        call    FUN_0041c7d0
        test    edi, edi
        jz      L_628f
        mov     eax, dword ptr [DAT_007f25c0]
        mov     ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_628f
        mov     esi, dword ptr [edi + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [ebp + 0xffffff74]
        rep     movsd
        lea     ecx, [ebp + 0xffffff74]
        push    ecx
        lea     ecx, [ebp + 0xffffff44]
        call    FUN_004206b0
        mov     edx, dword ptr [ebp - 0x1c]
        lea     eax, [ebp + 0xffffff44]
        lea     ecx, [ebp + 0xfffffefc]
        mov     dword ptr [ebp - 4], edx
        mov     dword ptr [ebp - 8], eax
        mov     dword ptr [ebp - 0x1c], ecx
        mov     edx, dword ptr [ebp - 4]
        push    esi
        mov     esi, dword ptr [ebp - 8]
        mov     eax, dword ptr [ebp - 0x1c]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch
        fstp    dword ptr [eax + 4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch
        fstp    dword ptr [eax + 8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        fld     dword ptr [ebx + 0x1a0]
        fld     dword ptr [ebx + 0x19c]
        fld     dword ptr [ebx + 0x198]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 4]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp - 4]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 8], eax
        mov     eax, dword ptr [ebx + 0xd8]
        fld     dword ptr [ebp - 8]
        lea     edi, [eax + 0x80]
        fstp    dword ptr [ebp - 8]
        push    edi
        lea     ecx, [ebp - 0x28]
        call    FUN_00419480
        mov     edx, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [edx + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0xac]
        fsub    dword ptr [ebp - 0x28]
        lea     esi, [eax + 0x80]
        mov     eax, dword ptr [esi + 0x1c]
        mov     dword ptr [ebp - 0x14], eax
        fld     dword ptr [ebp - 0x14]
        fsub    dword ptr [ebp - 0x24]
        mov     dword ptr [ebp - 0x10], ecx
        fld     dword ptr [ebp - 0x10]
        fsub    dword ptr [ebp - 0x20]
        fst     dword ptr [ebp - 0x10]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fabs
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_6584
        mov     edx, dword ptr [edi + 0xc]
        mov     dword ptr [ebp - 0x40], edx
        mov     eax, dword ptr [edi + 0x1c]
        mov     dword ptr [ebp - 0x3c], eax
        mov     ecx, dword ptr [edi + 0x2c]
        lea     edx, [ebp - 0x18]
        mov     dword ptr [ebp - 0x38], ecx
        push    edx
        mov     ecx, esi
        call    FUN_00428730
        lea     eax, [ebp - 0x18]
        push    eax
        lea     ecx, [ebp - 0x4c]
        call    FUN_0058ea70
        mov     edi, dword ptr [ebp - 0xc]
        fld     dword ptr [edi + 0x440]
        push    ecx
        lea     ecx, [ebp - 0x4c]
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [ebp - 0x4c]
        call    FUN_0040cc10
        lea     edx, [ebp - 0x40]
        push    edx
        push    esi
        lea     ecx, [ebp + 0xffffff38]
        call    FUN_005d2900
        push    eax
        lea     ecx, [ebp - 0x34]
        call    FUN_0040cbe0
        mov     eax, dword ptr [DAT_007b220c]
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp - 4], eax
        call    FUN_0040cb00
        fabs
        fcomp   dword ptr [ebp - 4]
        fnstsw  ax
        test    ah, 0x41
        jz      L_629a
        fld     dword ptr [DAT_0076c5b0]
        jmp     L_6342
    L_6203:
        call    FUN_0041fcb0
        mov     ecx, dword ptr [DAT_007b8d08]
        mov     edx, dword ptr [DAT_007b8d0c]
        mov     eax, dword ptr [DAT_007b8d10]
        mov     dword ptr [ebp - 0x18], ecx
        lea     ecx, [ebp - 0x18]
        push    ecx
        lea     ecx, [ebp - 0x6c]
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [ebp - 0x10], eax
        mov     dword ptr [ebp - 0x60], 0x447a0000
        call    FUN_0040d560
        mov     esi, dword ptr [ebp + 8]
        push    esi
        lea     ecx, [ebp - 0x78]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x74]
        fadd    dword ptr [DAT_0077016c]
        lea     edx, [ebp - 0x28]
        push    edx
        lea     eax, [ebp - 0x78]
        push    eax
        fstp    dword ptr [ebp - 0x74]
        lea     ecx, [ebp + 0xffffff2c]
        call    FUN_0055c860
        lea     ecx, [ebp + 0xffffff2c]
        push    ecx
        mov     ecx, dword ptr [DAT_007dc728]
        mov     dword ptr [ebp + 0xffffff3c], ebx
        mov     dword ptr [ebp + 0xffffff40], 0x2000
        call    FUN_004e2f40
        mov     edx, dword ptr [ebp - 0x60]
        push    esi
        push    edx
        lea     ecx, [ebp - 0x78]
        call    FUN_004e8dc0
    L_628f:
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    L_629a:
        lea     ecx, [ebp - 0x34]
        push    ecx
        lea     ecx, [ebp - 0x34]
        call    FUN_0040d560
        mov     edx, dword ptr [ebp - 8]
        push    edx
        lea     eax, [ebp - 0x34]
        push    eax
        lea     ecx, [ebp - 0x34]
        call    FUN_0040cc10
        lea     ecx, [ebp - 0x34]
        push    ecx
        lea     edx, [ebp - 0x4c]
        push    edx
        lea     ecx, [ebp - 0x58]
        call    FUN_0040cbe0
        lea     ecx, [ebp - 0x58]
        mov     dword ptr [ebp - 0x54], 0
        call    FUN_0040cb00
        fstp    dword ptr [ebp - 4]
        mov     eax, dword ptr [ebp - 4]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 8], eax
        fld     dword ptr [ebp - 8]
        fst     dword ptr [ebp - 0xc]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_6304
        fld     dword ptr [DAT_0076c5b0]
        jmp     L_6342
    L_6304:
        lea     eax, [ebp - 0x40]
        push    eax
        push    esi
        lea     ecx, [ebp + 0xffffff38]
        call    FUN_005d2900
        push    eax
        lea     ecx, [ebp - 0x28]
        call    FUN_0040cbe0
        lea     ecx, [ebp - 0x28]
        mov     dword ptr [ebp - 0x24], 0
        call    FUN_0040cb00
        fstp    dword ptr [ebp - 4]
        mov     eax, dword ptr [ebp - 4]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 8], eax
        fld     dword ptr [ebp - 8]
        fdiv    dword ptr [ebp - 0xc]
    L_6342:
        fld     qword ptr [ebp + 0xc]
        fsub    qword ptr [ebx + 0xec]
        fstp    dword ptr [ebp + 0x10]
        fcom    dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_6365
        fstp    st(0)
        fld     dword ptr [DAT_0076c5b0]
        jmp     L_637a
    L_6365:
        fcom    dword ptr [DAT_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_637a
        fstp    st(0)
        fld     dword ptr [DAT_0076d5f0]
    L_637a:
        fld     dword ptr [ebp + 0x10]
        mov     ebx, dword ptr [ebp + 8]
        mov     edx, dword ptr [edi]
        fadd    st(0), st(1)
        push    1
        push    ecx
        fstp    dword ptr [esp]
        push    ebx
        mov     ecx, edi
        fstp    st(0)
        call    dword ptr [edx + 0xf8]
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [ebx + 4]
        mov     edx, dword ptr [ebx + 8]
        mov     dword ptr [ebp - 0x80], eax
        mov     dword ptr [ebp - 0x70], ecx
        mov     dword ptr [ebp - 0x60], edx
        lea     eax, [ebp + 0xffffff74]
        lea     ecx, [ebp + 0xfffffefc]
        lea     edx, [ebp + 0xffffff44]
        mov     dword ptr [ebp + 0x10], eax
        mov     dword ptr [ebp - 4], ecx
        mov     dword ptr [ebp + 8], edx
        mov     edx, dword ptr [ebp - 4]
        push    esi
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 8]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch
        fstp    dword ptr [eax + 4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch
        fstp    dword ptr [eax + 8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        mov     ecx, dword ptr [ebp - 0x5c]
        lea     eax, [ebp + 0xffffff44]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_0041c7d0
        mov     eax, ebx
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    L_655e:
        mov     eax, dword ptr [ebp + 8]
        mov     edx, dword ptr [ebx + 0x26c]
        mov     ecx, dword ptr [ebx + 0x270]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ebx + 0x274]
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    L_6584:
        mov     eax, dword ptr [ebp + 8]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
