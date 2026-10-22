/*
 * FUN_005b57b0 (824 B) — __thiscall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00586610(void *a);
extern void __stdcall FUN_0047f9e0(void *a);
extern void __stdcall FUN_0041c680(void *a, void *b);
extern void __stdcall FUN_0041acb0(void *a);
extern void __stdcall FUN_00419460(void *a);
extern void __stdcall FUN_0040c9e0(void *a, void *b);
extern void __stdcall FUN_0040d030(void *a);
extern void __stdcall FUN_0041a070(void *a);
extern void __stdcall FUN_004daa20(void *a);
extern void __stdcall FUN_004e2f40(void *a);
extern float DAT_007b4384;
extern int *DAT_007b8cec;
extern int *DAT_007b8ce8;
extern int DAT_007b8cf0;
extern float DAT_0076d064;
extern int *DAT_007dc728;

__declspec(naked) void __stdcall FUN_005b57b0(int a, int b)
{
    __asm {
        sub     esp, 0xec
        fld     qword ptr [esp + 0xf0]
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x168]
        fsub    qword ptr [esi + 0xe4]
        mov     ecx, dword ptr [esi + 0x16c]
        mov     edx, dword ptr [esi + 0x170]
        lea     ebx, [esi + 0x168]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esi + 0xd8]
        push    edi
        lea     edi, [eax + 0x80]
        lea     eax, [esp + 0x64]
        mov     dword ptr [esp + 0x20], ecx
        fstp    dword ptr [esp + 0xc]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x28], edx
        call    FUN_00586610
        lea     ecx, [esp + 0xe0]
        push    ecx
        mov     ecx, edi
        call    FUN_0047f9e0
        fld     dword ptr [DAT_007b4384]
        fmul    dword ptr [esp + 0xc]
        push    edi
        fld     dword ptr [esp + 0x68]
        lea     edx, [esp + 0x20]
        push    edx
        fmul    st(0), st(1)
        lea     ecx, [esi + 0x198]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x70]
        fmul    st(0), st(1)
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x74]
        fmul    st(0), st(1)
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x2c]
        fstp    st(0)
        call    FUN_0041c680
        mov     eax, dword ptr [esi + 0xd8]
        lea     edi, [eax + 0x80]
        push    edi
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esi + 0x1a4]
        mov     dword ptr [esp + 0x54], 0x3f800000
        mov     dword ptr [esp + 0x58], 0x0
        mov     dword ptr [esp + 0x5c], 0x0
        mov     dword ptr [esi + 0x174], 0x3f800000
        mov     dword ptr [esi + 0x178], 0x0
        mov     dword ptr [esi + 0x17c], 0x0
        call    FUN_0041c680
        mov     ecx, dword ptr [esi + 0xd8]
        add     ecx, 0x80
        push    ecx
        push    ebx
        lea     ecx, [esp + 0x60]
        call    FUN_0041c680
        mov     edx, dword ptr [edi + 0xc]
        mov     dword ptr [esp + 0x28], edx
        mov     eax, dword ptr [edi + 0x1c]
        mov     dword ptr [esp + 0x2c], eax
        fld     dword ptr [edi + 0x2c]
        fld     dword ptr [esp + 0x58]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x5c]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x60]
        fmul    dword ptr [esp + 0xc]
        fadd    st(0), st(1)
        fstp    dword ptr [esp + 0x30]
        mov     ecx, dword ptr [DAT_007b8cec]
        fstp    st(0)
        mov     edx, dword ptr [DAT_007b8ce8]
        mov     eax, dword ptr [DAT_007b8cf0]
        mov     dword ptr [esp + 0x14], ecx
        push    edi
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_0041acb0
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x178]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x174]
        fadd    dword ptr [esp + 0x14]
        fst     dword ptr [esp + 0x14]
        fcomp   dword ptr [DAT_0076d064]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     L_5969
        mov     dword ptr [esp + 0x14], 0x3f800000
L_5969:
        fld     dword ptr [esp + 0xc]
        push    0x7b9460
        fmul    dword ptr [esi + 0x17c]
        lea     ecx, [esp + 0xb4]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00419460
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x40]
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [esp + 0xa8]
        push    ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x164]
        lea     ecx, [esp + 0xa4]
        push    ecx
        lea     edx, [esp + 0x2c]
        push    edx
        lea     ecx, [esp + 0x30]
        call    FUN_0040c9e0
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x40]
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0xb4]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x48]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x4c]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_0040d030
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0xb4]
        call    FUN_0041a070
        fld     dword ptr [esp + 0xb8]
        fld     dword ptr [esp + 0xc8]
        mov     dword ptr [esp + 0x88], 0x40600000
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0xd8]
        mov     edx, dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x3c]
        mov     eax, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x84], eax
        fstp    dword ptr [esp + 0x7c]
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        mov     dword ptr [esp + 0x80], edx
        fld     dword ptr [eax + 0xc]
        mov     ecx, dword ptr [eax + 0x1c]
        mov     edx, dword ptr [eax + 0x2c]
        fstp    dword ptr [esp + 0x70]
        mov     eax, ecx
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, edx
        mov     dword ptr [esp + 0x3c], edx
        lea     edx, [esp + 0xb0]
        mov     dword ptr [esp + 0x78], ecx
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x78], eax
        call    FUN_004daa20
        lea     ecx, [esp + 0xec]
        lea     eax, [esp + 0x70]
        lea     edx, [esp + 0x8c]
        mov     dword ptr [esp + 0x90], ecx
        mov     ecx, dword ptr [DAT_007dc728]
        mov     dword ptr [esp + 0x8c], eax
        mov     dword ptr [esp + 0x94], 0x0
        mov     dword ptr [esp + 0x9c], esi
        mov     dword ptr [esp + 0xa0], 0x1000
        push    edx
        call    FUN_004e2f40
        test    eax, eax
        jz      L_5adc
        mov     al, 0x1
        mov     byte ptr [esi + 0x53d], al
        mov     byte ptr [esi + 0x53e], al
L_5adc:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xec
        ret     0x8
    }
}
