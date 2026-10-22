/*
 * FUN_005d19f0 (2338 B) — __thiscall (ECX=this), RET 8 (two stack params).
 * Large object update routine: builds local float triples, dispatches through
 * FUN_005c5300, performs atan2/vector math, and conditionally calls virtual
 * methods at vtable+0x160 / +0x154.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_006F4950(void);
void FUN_0041C540(void);
void FUN_00419480(void);
void FUN_005D4DE0(void);
void FUN_00707E70(void);
void FUN_00416110(void);
void FUN_005B3610(void);
void FUN_005DCD00(void);
void FUN_005D5300(void);
void FUN_005D19E0(void);
void FUN_00419460(void);
void FUN_0041FDE0(void);
void FUN_0041C830(void);
void FUN_005B3630(void);
void FUN_006F49A0(void);

__declspec(naked) void __stdcall FUN_005d19f0(void)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007f244c;
extern int DAT_007b220c;
extern int DAT_007f24cc;
extern int DAT_0076c5b0;
extern int DAT_0076d598;
extern int DAT_0077d060;
extern int DAT_00787ec4;
extern int DAT_00770168;
extern int DAT_0076d070;
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xBC
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x35C]
        test    eax, eax
        push    esi
        push    edi
        jz      loc_5D2309
        ; __emit: MSVC6 encodes mov eax,[imm32] as immediate load, not memory deref
        mov eax, dword ptr [DAT_007f244c]
        push    eax
        call    FUN_006F4950
        mov     al, byte ptr [ebx + 0x3CE]
        test    al, al
        jz      loc_5D1A3F
        mov     ecx, dword ptr [ebp + 0xC]
        mov     edx, dword ptr [ebx]
        push    0x0
        lea     eax, [ebx + 0x36C]
        push    eax
        mov     eax, dword ptr [ebp + 0x8]
        push    ecx
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x160]
loc_5D1A3F:
        ; __emit: MSVC6 encodes mov ecx,[imm32] as immediate load, not memory deref
        mov ecx, dword ptr [DAT_007b220c]
        push    ecx
        lea     esi, [ebx + 0x36C]
        lea     edi, [ebx + 0x390]
        push    esi
        push    edi
        call    FUN_0041C540
        add     esp, 0xC
        test    al, al
        jnz     loc_5D1B37
        mov     al, byte ptr [ebx + 0x3CE]
        test    al, al
        jz      loc_5D1A97
        mov     eax, dword ptr [ebp + 0xC]
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ebx]
        push    0x0
        push    esi
        push    eax
        push    ecx
        mov     dword ptr [ebx + 0x3C4], 0x0
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x3C8], 0xBFF00000
        call    dword ptr [edx + 0x160]
loc_5D1A97:
        ; __emit: MSVC6 encodes mov edx,[imm32] as immediate load, not memory deref
        mov edx, dword ptr [DAT_007b220c]
        push    edx
        lea     eax, [esp + 0x1C]
        push    eax
        push    esi
        mov     dword ptr [esp + 0x24], 0xBF800000
        mov     dword ptr [esp + 0x28], 0xBF800000
        mov     dword ptr [esp + 0x2C], 0xBF800000
        call    FUN_0041C540
        add     esp, 0xC
        test    al, al
        jnz     loc_5D1ADD
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esi + 0x4]
        lea     eax, [ebx + 0x384]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esi + 0x8]
        mov     dword ptr [eax + 0x4], edx
        jmp     loc_5D1B0F
loc_5D1ADD:
        mov     edx, dword ptr [ebx + 0x35C]
        mov     eax, dword ptr [edx + 0xD8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x1C]
        call    FUN_00419480
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1C]
        lea     eax, [ebx + 0x384]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 0x4], edx
loc_5D1B0F:
        push    0x40A00000
        push    edi
        mov     dword ptr [eax + 0x8], ecx
        push    eax
        mov     ecx, ebx
        call    FUN_005D4DE0
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [edi + 0x8]
        mov     dword ptr [esi], edx
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], ecx
        mov     byte ptr [ebx + 0x3CC], 0x1
loc_5D1B37:
        ; __emit: MSVC6 encodes mov edx,[imm32] as immediate load, not memory deref
        mov edx, dword ptr [DAT_007b220c]
        push    edx
        lea     edi, [ebx + 0x378]
        lea     eax, [ebx + 0x39C]
        push    edi
        push    eax
        call    FUN_0041C540
        add     esp, 0xC
        test    al, al
        jnz     loc_5D1B72
        mov     eax, dword ptr [ebx + 0x39C]
        mov     ecx, dword ptr [ebx + 0x3A0]
        mov     edx, dword ptr [ebx + 0x3A4]
        mov     dword ptr [edi], eax
        mov     dword ptr [edi + 0x4], ecx
        mov     dword ptr [edi + 0x8], edx
loc_5D1B72:
        mov     eax, dword ptr [ebx + 0x45C]
        xor     edi, edi
        cmp     eax, edi
        jz      loc_5D1B97
        mov     eax, 0xBF800000
        mov     dword ptr [ebx + 0x3B4], edi
        mov     dword ptr [ebx + 0x3AC], edi
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
loc_5D1B97:
        mov     ecx, dword ptr [ebx + 0x35C]
        fld     dword ptr [ebx + 0x3AC]
        fcomp   dword ptr [ecx + 0x42C]
        mov     eax, dword ptr [ebx + 0x3B4]
        mov     dword ptr [ebx + 0x3B0], eax
        fnstsw  ax
        test    ah, 0x40
        jnz     loc_5D1BCF
        mov     edx, dword ptr [ebx + 0x3AC]
        mov     dword ptr [ebx + 0x3A8], edx
        mov     byte ptr [ebx + 0x3CD], 0x1
loc_5D1BCF:
        mov     al, byte ptr [ebx + 0x3CF]
        test    al, al
        jz      loc_5D1BED
        mov     ecx, dword ptr [ebp + 0xC]
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebx]
        push    edi
        push    esi
        push    ecx
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax + 0x160]
loc_5D1BED:
        mov     al, byte ptr [ebx + 0x459]
        test    al, al
        mov     dword ptr [esp + 0x50], 0x0
        mov     dword ptr [esp + 0x54], 0x0
        mov     dword ptr [esp + 0x58], 0x0
        jz      loc_5D1C2F
        mov     ecx, dword ptr [ebp + 0xC]
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebx]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax + 0x154]
        call    FUN_006F49A0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
loc_5D1C2F:
        ; __emit: MSVC6 encodes mov eax,[imm32] as immediate load, not memory deref
        mov eax, dword ptr [DAT_007b220c]
        push    eax
        lea     ecx, [esp + 0x1C]
        push    ecx
        push    esi
        mov     dword ptr [esp + 0x24], 0xBF800000
        mov     dword ptr [esp + 0x28], 0xBF800000
        mov     dword ptr [esp + 0x2C], 0xBF800000
        call    FUN_0041C540
        add     esp, 0xC
        test    al, al
        jz      loc_5D1CF9
        push    edi
        mov     byte ptr [ebx + 0x3CC], 0x0
        mov     dword ptr [ebx + 0x3A8], edi
        call    FUN_00707E70
        fstp    qword ptr [esp + 0x18]
        ; __emit: MSVC6 encodes mov ecx,[imm32] as immediate load, not memory deref
        mov ecx, dword ptr [DAT_007f24cc]
        call    FUN_00416110
        cmp     eax, edi
        jz      loc_5D1C95
        push    edi
        push    0x3
        mov     ecx, eax
        call    FUN_005B3610
        jmp     loc_5D1C97
loc_5D1C95:
        xor     eax, eax
loc_5D1C97:
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1C]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0xC], ecx
        push    eax
        mov     ecx, ebx
        call    FUN_005DCD00
        push    edi
        call    FUN_00707E70
        fstp    qword ptr [esp + 0x30]
        mov     edx, dword ptr [ebx + 0x3A8]
        ; __emit: MSVC6 encodes mov ecx,[imm32] as immediate load, not memory deref
        mov ecx, dword ptr [DAT_007f24cc]
        mov     dword ptr [esp + 0x18], edx
        call    FUN_00416110
        cmp     eax, edi
        jz      loc_5D1CDC
        push    edi
        push    0x8
        mov     ecx, eax
        call    FUN_005B3610
        jmp     loc_5D1CDE
loc_5D1CDC:
        xor     eax, eax
loc_5D1CDE:
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x34]
        mov     dword ptr [eax + 0x8], ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0xC], edx
        mov     dword ptr [eax + 0x14], ecx
        push    eax
        jmp     loc_5D22FD
loc_5D1CF9:
        mov     edi, dword ptr [ebx + 0x35C]
        mov     edx, dword ptr [edi + 0xD8]
        add     edx, 0x80
        push    edx
        lea     ecx, [esp + 0x1C]
        call    FUN_00419480
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1C]
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x50], eax
        mov     eax, dword ptr [ebx + 0x41C]
        test    eax, eax
        mov     dword ptr [esp + 0x54], ecx
        mov     dword ptr [esp + 0x58], edx
        jz      loc_5D1D3C
        cmp     eax, 0x1
        jnz     loc_5D1D7F
loc_5D1D3C:
        mov     eax, dword ptr [ebx + 0x450]
        test    eax, eax
        jnz     loc_5D1D7F
        fld     qword ptr [ebp + 0x8]
        mov     ecx, dword ptr [edi + 0x440]
        fsub    qword ptr [ebx + 0xE4]
        mov     edx, dword ptr [edi + 0xD8]
        add     edx, 0x80
        fstp    dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_005D5300
        cmp     eax, 0x8
        ja      loc_5D1D93
        ; __emit: jmp dword ptr [eax*4+table] - MSVC6 can't relocate jump-table target
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x14
        __emit 0x23
        __emit 0x5D
        __emit 0x00
loc_5D1D7F:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi + 0x4]
        mov     edx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0xC], eax
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], edx
loc_5D1D93:
        mov     esi, dword ptr [ebx + 0x35C]
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [esi + 0x42C]
        mov     dword ptr [esp + 0x54], 0x0
        mov     edx, dword ptr [esi + 0xD8]
        add     edx, 0x80
        mov     dword ptr [esp + 0x18], ecx
        push    edx
        lea     ecx, [esp + 0x6C]
        mov     dword ptr [esp + 0x30], eax
        call    FUN_00419460
        push    0x2
        xor     esi, esi
        push    esi
        push    0x1
        push    0x7B8D18
        lea     ecx, [esp + 0x78]
        call    FUN_0041FDE0
        lea     eax, [esp + 0x68]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x4C]
        call    FUN_0041C830
        fld     dword ptr [ebx + 0x3B8]
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     loc_5D1E1C
        fld     dword ptr [ebx + 0x3A8]
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      loc_5D1E30
loc_5D1E1C:
        fld     dword ptr [esp + 0x44]
        fchs
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x4C]
        fchs
        fstp    dword ptr [esp + 0x4C]
loc_5D1E30:
        fld     dword ptr [esp + 0x4C]
        fabs
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     loc_5D1E62
        fld     dword ptr [esp + 0x44]
        fabs
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     loc_5D1E62
        mov     dword ptr [esp + 0x4C], 0x3F800000
loc_5D1E62:
        fld     dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x4C]
        fpatan
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      loc_5D1E7F
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fmul dword ptr [DAT_0076d598]
loc_5D1E7F:
        fst     dword ptr [esp + 0x30]
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fcomp dword ptr [DAT_0077d060]
        fnstsw  ax
        test    ah, 0x41
        jnz     loc_5D1ED2
        lea     edx, [esp + 0x50]
        push    edx
        mov     ecx, ebx
        mov     byte ptr [ebx + 0x3CC], 0x1
        call    FUN_005D19E0
        test    al, al
        jz      loc_5D1EB4
        mov     dword ptr [ebx + 0x3A8], esi
        mov     byte ptr [ebx + 0x3CD], 0x1
loc_5D1EB4:
        fld     dword ptr [esp + 0x30]
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fcomp dword ptr [DAT_00787ec4]
        fnstsw  ax
        test    ah, 0x41
        jnz     loc_5D1ED2
        mov     dword ptr [ebx + 0x3A8], esi
        mov     byte ptr [ebx + 0x3CD], 0x1
loc_5D1ED2:
        fld     dword ptr [ebx + 0x3B8]
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     loc_5D2200
        fld     dword ptr [ebx + 0x3A8]
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     loc_5D2200
        ; __emit: MSVC6 encodes mov eax,[imm32] as immediate load, not memory deref
        mov eax, dword ptr [DAT_007b220c]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     eax, [ebx + 0x378]
        push    eax
        mov     dword ptr [esp + 0x3C], 0xBF800000
        mov     dword ptr [esp + 0x40], 0xBF800000
        mov     dword ptr [esp + 0x44], 0xBF800000
        call    FUN_0041C540
        add     esp, 0xC
        test    al, al
        jz      loc_5D1F45
        fld     dword ptr [ebx + 0x3B0]
        mov     esi, dword ptr [esp + 0x2C]
        jmp     loc_5D2037
loc_5D1F45:
        mov     edx, dword ptr [ebx + 0x35C]
        mov     esi, dword ptr [edx + 0xD8]
        push    0x2
        push    0x0
        add     esi, 0x80
        mov     ecx, 0xC
        lea     edi, [esp + 0xA0]
        push    0x1
        rep     movsd
        push    0x7B8D18
        lea     ecx, [esp + 0xA8]
        call    FUN_0041FDE0
        lea     eax, [esp + 0x98]
        push    eax
        lea     eax, [ebx + 0x378]
        push    eax
        lea     ecx, [esp + 0x4C]
        call    FUN_0041C830
        fld     dword ptr [ebx + 0x3B8]
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      loc_5D1FBB
        fld     dword ptr [esp + 0x44]
        fchs
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x4C]
        fchs
        fstp    dword ptr [esp + 0x4C]
loc_5D1FBB:
        fld     dword ptr [esp + 0x4C]
        fabs
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     loc_5D1FED
        fld     dword ptr [esp + 0x44]
        fabs
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     loc_5D1FED
        mov     dword ptr [esp + 0x4C], 0x3F800000
loc_5D1FED:
        fld     dword ptr [esp + 0x44]
        mov     esi, dword ptr [esp + 0x2C]
        fld     dword ptr [esp + 0x4C]
        fpatan
        fdiv    dword ptr [esi + 0x2B4]
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      loc_5D2014
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fmul dword ptr [DAT_0076d598]
loc_5D2014:
        fld     st(0)
        fabs
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     loc_5D2031
        fstp    st(0)
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fld dword ptr [DAT_0076c5b0]
        jmp     loc_5D2037
loc_5D2031:
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fdivr dword ptr [DAT_00770168]
loc_5D2037:
        mov     ecx, dword ptr [ebx + 0x35C]
        fld     dword ptr [ecx + 0x440]
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      loc_5D2056
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fmul dword ptr [DAT_0076d598]
loc_5D2056:
        fcom    st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     loc_5D21FC
        fsubrp  st(1), st
        fld     dword ptr [esp + 0x18]
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      loc_5D20AA
        fld     dword ptr [esi + 0x2E0]
        fmul    dword ptr [esi + 0x2D8]
        fld     st(1)
        fdiv    st, st(1)
        fst     dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x28]
        fst     dword ptr [esp + 0x2C]
        fmul    st, st(1)
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fmul dword ptr [DAT_0076d070]
        fld     dword ptr [esp + 0x28]
        fmul    st, st(3)
        faddp   st(1), st
        fstp    dword ptr [esp + 0x18]
        fstp    st(0)
        jmp     loc_5D20DA
loc_5D20AA:
        fld     st(0)
        fdiv    dword ptr [esi + 0x2D8]
        fst     dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x2C]
        fld     dword ptr [esp + 0x28]
        fmul    st, st(1)
        fld     dword ptr [esp + 0x2C]
        fmul    dword ptr [esi + 0x2D8]
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fmul dword ptr [DAT_0076d070]
        faddp   st(1), st
        fstp    dword ptr [esp + 0x18]
loc_5D20DA:
        fstp    st(0)
        ; __emit: MSVC6 encodes mov edx,[imm32] as immediate load, not memory deref
        mov edx, dword ptr [DAT_007b220c]
        fld     dword ptr [esp + 0x50]
        push    edx
        fsub    dword ptr [esp + 0x10]
        lea     eax, [esp + 0x60]
        fld     dword ptr [esp + 0x58]
        push    eax
        fsub    dword ptr [esp + 0x18]
        lea     edi, [ebx + 0x384]
        fld     dword ptr [esp + 0x60]
        push    edi
        fsub    dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x68], 0xBF800000
        mov     dword ptr [esp + 0x6C], 0xBF800000
        fst     dword ptr [esp + 0x70]
        mov     dword ptr [esp + 0x70], 0xBF800000
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fsqrt
        fstp    dword ptr [esp + 0x3C]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        call    FUN_0041C540
        add     esp, 0xC
        test    al, al
        jnz     loc_5D2190
        fld     dword ptr [esp + 0x50]
        fsub    dword ptr [edi]
        fld     dword ptr [esp + 0x54]
        fsub    dword ptr [edi + 0x4]
        fld     dword ptr [esp + 0x58]
        fsub    dword ptr [edi + 0x8]
        fst     dword ptr [esp + 0x64]
        fld     st(2)
        fmulp   st(3), st
        fld     st(0)
        fmul    st, st(1)
        faddp   st(3), st
        fld     st(1)
        fmul    st, st(2)
        faddp   st(3), st
        fxch    st(2)
        fsqrt
        fxch    st(2)
        fstp    st(0)
        fstp    st(0)
        fcom    dword ptr [esp + 0x30]
        fnstsw  ax
        test    ah, 0x1
        jz      loc_5D218E
        fstp    dword ptr [esp + 0x30]
        jmp     loc_5D2190
loc_5D218E:
        fstp    st(0)
loc_5D2190:
        fld     dword ptr [esp + 0x30]
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jz      loc_5D2200
        fld     dword ptr [esp + 0x2C]
        fmul    dword ptr [esi + 0x2D8]
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fmul dword ptr [DAT_0076d070]
        fsubr   dword ptr [esp + 0x30]
        fdiv    dword ptr [esp + 0x28]
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      loc_5D21CC
        fstp    st(0)
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fld dword ptr [DAT_0076c5b0]
loc_5D21CC:
        fsub    dword ptr [esi + 0x2B8]
        fld     dword ptr [esi + 0x2BC]
        fsub    dword ptr [esi + 0x2B8]
        fdivp   st(1), st
        fcom    dword ptr [ebx + 0x3A8]
        fnstsw  ax
        test    ah, 0x1
        jz      loc_5D21FE
        fstp    dword ptr [ebx + 0x3A8]
        mov     byte ptr [ebx + 0x3CD], 0x1
        jmp     loc_5D2200
loc_5D21FC:
        fstp    st(0)
loc_5D21FE:
        fstp    st(0)
loc_5D2200:
        mov     al, byte ptr [ebx + 0x3CD]
        test    al, al
        jz      loc_5D2260
        push    0x0
        call    FUN_00707E70
        fstp    qword ptr [esp + 0x30]
        mov     ecx, dword ptr [ebx + 0x3A8]
        mov     dword ptr [esp + 0x18], ecx
        ; __emit: MSVC6 encodes mov ecx,[imm32] as immediate load, not memory deref
        mov ecx, dword ptr [DAT_007f24cc]
        call    FUN_00416110
        test    eax, eax
        jz      loc_5D223A
        mov     dword ptr [eax + 0x4], 0x8
        mov     byte ptr [eax], 0x0
        jmp     loc_5D223C
loc_5D223A:
        xor     eax, eax
loc_5D223C:
        mov     edx, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0xC], ecx
        push    eax
        mov     ecx, ebx
        mov     dword ptr [eax + 0x14], edx
        call    FUN_005DCD00
        mov     byte ptr [ebx + 0x3CD], 0x0
loc_5D2260:
        fld     dword ptr [ebx + 0x3B8]
        mov     byte ptr [ebx + 0x3CC], 0x0
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     loc_5D2295
        fld     dword ptr [ebx + 0x3A8]
        mov     dword ptr [esp + 0x18], 0x0
        ; __emit: FPU op with absolute memory operand not supported in MSVC6 inline asm
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      loc_5D229D
loc_5D2295:
        mov     dword ptr [esp + 0x18], 0x1
loc_5D229D:
        push    0x0
        call    FUN_00707E70
        fstp    qword ptr [esp + 0x30]
        ; __emit: MSVC6 encodes mov ecx,[imm32] as immediate load, not memory deref
        mov ecx, dword ptr [DAT_007f24cc]
        call    FUN_00416110
        test    eax, eax
        jz      loc_5D22C5
        mov     dword ptr [eax + 0x4], 0x2
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     loc_5D22C7
loc_5D22C5:
        xor     esi, esi
loc_5D22C7:
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xC], ecx
        mov     edx, dword ptr [esp + 0xC]
        sub     esp, 0xC
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     ecx, dword ptr [esp + 0x1C]
        mov     dword ptr [eax + 0x4], ecx
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, esi
        mov     dword ptr [eax + 0x8], edx
        call    FUN_005B3630
        mov     al, byte ptr [esp + 0x18]
        mov     byte ptr [esi + 0x24], al
        push    esi
loc_5D22FD:
        mov     ecx, ebx
        call    FUN_005DCD00
        call    FUN_006F49A0
loc_5D2309:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }


}
