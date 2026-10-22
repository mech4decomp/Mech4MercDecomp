/*
 * FUN_005d0ca0 (1206 B) - __thiscall (ECX = this), RET 0x8 (2 stack params).
 *
 * Complex update routine: locks via FUN_006f4950, constructs a vector via
 * FUN_00417d80/FUN_00420840, calls FUN_005d0290/FUN_005cff90, then performs
 * a large amount of float math (heightmap/terrain update) with a switch on
 * [EBP+0x50] driving a jump table at 0x5d1158. Calls FUN_005d0200,
 * FUN_005d1330, FUN_005d1260, FUN_00416130, and virtual methods via
 * [EDX+0x4]/[EDX+0x168]/[EDX+0x184]/[EAX+0x188]. Unlocks via FUN_006f49a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f4950(int new_ctx);
extern void __stdcall FUN_006f49a0(void);
extern int  __cdecl   FUN_0075db4a(void);   /* _ftol */
extern void FUN_00417d80(void);
extern void FUN_00420840(void);
extern char FUN_005cff90(void *p);
extern void FUN_005d0290(void);
extern void FUN_005d0200(void);
extern void FUN_005d1330(void);
extern void FUN_005d1260(void);
extern void FUN_00416130(void *p);
extern void __stdcall FUN_00707e70(int a);

__declspec(naked) void __stdcall FUN_005d0ca0(char param2, char param3)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007f23dc;
extern int DAT_007f244c;
extern int DAT_0076c5b0;
extern int DAT_0076d064;
extern int DAT_00770168;
extern int DAT_0080daa4;
__asm {
/* __emit: MSVC6 encodes mov al,[imm32] as immediate load, not A0 mem-deref */
        mov al, byte ptr [DAT_007f23dc]
        sub     esp, 0x8c
        cmp     al, 1
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        jz      loc_5d1147
        mov     eax, dword ptr [esi + 0x450]
        xor     ebx, ebx
        cmp     eax, ebx
        jnz     loc_5d1147
        mov     edi, dword ptr [esi + 0x35c]
        cmp     edi, ebx
        jz      loc_5d1147
        /* __emit: MSVC6 encodes mov eax,[imm32] as immediate load, not A1 mem-deref */
        mov eax, dword ptr [DAT_007f244c]
        push    eax
        call    FUN_006f4950
        mov     eax, dword ptr [edi + 0x128]
        cmp     eax, ebx
        jnz     loc_5d0cfa
        mov     eax, dword ptr [edi + 0x124]
        cmp     eax, ebx
        jz      loc_5d1142
loc_5d0cfa:
        mov     ecx, dword ptr [edi + 0xd8]
        add     ecx, 0x80
        push    ecx
        add     eax, 0x10
        push    eax
        lea     ecx, [esp + 0x4c]
        call    FUN_00417d80
        lea     edx, [esp + 0x44]
        test    edx, edx
        jz      loc_5d1142
        lea     eax, [esp + 0x44]
        push    eax
        lea     ecx, [esp + 0x88]
        call    FUN_00420840
        fld     dword ptr [esp + 0x80]
        mov     edx, dword ptr [edi + 0x78]
        fadd    st, st(0)
        lea     ecx, [edi + 0x78]
        fstp    dword ptr [esp + 0x3c]
        call    dword ptr [edx + 4]
        mov     ebp, eax
        mov     eax, dword ptr [edi + 0xd8]
        mov     ecx, dword ptr [eax + 0x9c]
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0xac]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x3b8]
        add     eax, 0x80
        /* __emit: FCOMP dword ptr [imm32] not supported in MSVC6 inline asm */
        fcomp dword ptr [DAT_0076c5b0]
        mov     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, edx
        fnstsw  ax
        mov     dword ptr [esp + 0x1c], ecx
        mov     edi, dword ptr [edi + 0xd8]
        test    ah, 1
        mov     dword ptr [esp + 0x38], edx
        jz      loc_5d0db9
        fld     dword ptr [edi + 0x88]
        add     edi, 0x80
        fchs
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [edi + 0x18]
        fchs
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [edi + 0x28]
        fchs
        jmp     loc_5d0dd3
loc_5d0db9:
        fld     dword ptr [edi + 0x88]
        add     edi, 0x80
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [edi + 0x18]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [edi + 0x28]
loc_5d0dd3:
        mov     eax, dword ptr [esp + 0x3c]
        lea     edx, [esi + 0x464]
        push    edx
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        fstp    dword ptr [esp + 0x44]
        mov     ecx, esi
        call    FUN_005d0290
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, esi
        call    FUN_005cff90
        cmp     dword ptr [esi + 0x3d4], ebx
        jnz     loc_5d1142
        mov     eax, dword ptr [esi + 0x35c]
        fld     dword ptr [eax + 0x440]
        fld     dword ptr [eax + 0x42c]
        /* __emit: FCOMP dword ptr [imm32] not supported in MSVC6 inline asm */
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     loc_5d10f0
        cmp     dword ptr [esi + 0x45c], ebx
        jnz     loc_5d10f0
        /* __emit: FCOM dword ptr [imm32] not supported in MSVC6 inline asm */
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      loc_5d0e95
        fchs
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [ebp + 0x2c4]
        fchs
        fld     dword ptr [esp + 0x10]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     loc_5d0e64
        fstp    dword ptr [esp + 0x10]
        jmp     loc_5d0e66
loc_5d0e64:
        fstp    st(0)
loc_5d0e66:
        fld     dword ptr [ebp + 0x2c0]
        fchs
        fld     dword ptr [esp + 0x10]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 1
        jz      loc_5d0e81
        fstp    dword ptr [esp + 0x10]
        jmp     loc_5d0e83
loc_5d0e81:
        fstp    st(0)
loc_5d0e83:
        fld     dword ptr [ebp + 0x2e0]
        fmul    dword ptr [ebp + 0x2d8]
        fdivr   dword ptr [esp + 0x10]
        jmp     loc_5d0ed5
loc_5d0e95:
        fst     dword ptr [esp + 0x10]
        fcomp   dword ptr [ebp + 0x2bc]
        fnstsw  ax
        test    ah, 0x41
        jnz     loc_5d0eb0
        mov     eax, dword ptr [ebp + 0x2bc]
        mov     dword ptr [esp + 0x10], eax
loc_5d0eb0:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [ebp + 0x2b8]
        fnstsw  ax
        test    ah, 1
        jz      loc_5d0ecb
        mov     ecx, dword ptr [ebp + 0x2b8]
        mov     dword ptr [esp + 0x10], ecx
loc_5d0ecb:
        fld     dword ptr [esp + 0x10]
        fdiv    dword ptr [ebp + 0x2d8]
loc_5d0ed5:
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x10]
        /* __emit: FCOMP dword ptr [imm32] not supported in MSVC6 inline asm */
        fcomp dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 1
        jz      loc_5d0ef2
        mov     dword ptr [esp + 0x10], 0x3f800000
loc_5d0ef2:
        fld     dword ptr [esp + 0x30]
        mov     edx, dword ptr [esi]
        fmul    dword ptr [esp + 0x10]
        mov     ecx, esi
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x38]
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x28]
        call    dword ptr [edx + 0x168]
        /* __emit: FLD dword ptr [imm32] not supported in MSVC6 inline asm */
        fld dword ptr [DAT_00770168]
        mov     byte ptr [esp + 0x40], al
        fdiv    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x20]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x24]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x28]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x2c]
        /* __emit: FADD dword ptr [imm32] not supported in MSVC6 inline asm */
        fadd dword ptr [DAT_0076d064]
        call    FUN_0075db4a
        mov     dword ptr [esp + 0x2c], eax
        fild    dword ptr [esp + 0x2c]
        fdiv    st, st(1)
        call    FUN_0075db4a
        fstp    st(0)
        mov     ecx, eax
        mov     eax, dword ptr [ebp + 0x50]
        cmp     eax, 9
        mov     dword ptr [esp + 0x10], ecx
        ja      loc_5d0fb9
        /* __emit: MSVC6 cannot encode jmp dword ptr [eax*4+imm32] indirect jump */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x58
        __emit 0x11
        __emit 0x5D
        __emit 0x00
        mov     eax, 0x10
        jmp     loc_5d0fbb
        mov     eax, 0x11
        jmp     loc_5d0fbb
        mov     eax, 0x2
        jmp     loc_5d0fbb
        mov     eax, 0x8
        jmp     loc_5d0fbb
        mov     eax, 0x4
        jmp     loc_5d0fbb
        mov     eax, 0x20
        jmp     loc_5d0fbb
        mov     eax, 0x40
        jmp     loc_5d0fbb
        mov     eax, 0x100
        jmp     loc_5d0fbb
loc_5d0fb9:
        xor     eax, eax
loc_5d0fbb:
        xor     ebp, ebp
        test    al, 0x80
        jz      loc_5d0fc6
        mov     ebp, 0x80
loc_5d0fc6:
        test    al, 0x10
        jz      loc_5d0fcf
        add     ebp, 0x41
        jmp     loc_5d100d
loc_5d0fcf:
        test    al, 1
        jz      loc_5d0fd8
        add     ebp, 0x60
        jmp     loc_5d100d
loc_5d0fd8:
        test    al, 2
        jz      loc_5d0fe1
        add     ebp, 0x44
        jmp     loc_5d100d
loc_5d0fe1:
        test    al, 8
        jz      loc_5d0fea
        add     ebp, 0x48
        jmp     loc_5d100d
loc_5d0fea:
        test    al, 4
        jz      loc_5d0ff3
        add     ebp, 0x60
        jmp     loc_5d100d
loc_5d0ff3:
        test    al, 0x20
        jz      loc_5d0ffc
        add     ebp, 0x42
        jmp     loc_5d100d
loc_5d0ffc:
        test    al, 0x40
        jz      loc_5d1005
        add     ebp, 0x60
        jmp     loc_5d100d
loc_5d1005:
        test    ah, 1
        jz      loc_5d100d
        add     ebp, 0x50
loc_5d100d:
        cmp     ecx, 1
        jge     loc_5d101e
        mov     dword ptr [esp + 0x10], 1
        mov     ecx, dword ptr [esp + 0x10]
loc_5d101e:
        test    ecx, ecx
        fld     dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x1c]
        jle     loc_5d10a6
        mov     edi, dword ptr [esp + 0x40]
loc_5d104a:
        mov     al, byte ptr [esp + 0xa0]
        test    al, al
        jnz     loc_5d10a1
        mov     al, byte ptr [esp + 0xa4]
        test    al, al
        jnz     loc_5d10a1
        mov     eax, dword ptr [esp + 0x3c]
        push    edi
        push    ebp
        push    0x0
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, esi
        call    FUN_005d0200
        test    al, al
        jz      loc_5d10be
        fld     dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x1c]
loc_5d10a1:
        inc     ebx
        cmp     ebx, ecx
        jl      loc_5d104a
loc_5d10a6:
        mov     al, byte ptr [esp + 0xa4]
        test    al, al
        mov     byte ptr [esi + 0x459], 0x0
        jnz     loc_5d1142
        jmp     loc_5d113b
loc_5d10be:
        mov     edx, dword ptr [esi]
        push    0x0
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0x184]
        mov     eax, dword ptr [esi]
        push    0x0
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x188]
        push    0x0
        call    FUN_00707e70
        sub     esp, 8
        mov     ecx, esi
        fstp    qword ptr [esp]
        call    FUN_005d1330
        jmp     loc_5d113b
loc_5d10f0:
        fstp    st(0)
        fld     dword ptr [esi + 0x3b8]
        /* __emit: FCOMP dword ptr [imm32] not supported in MSVC6 inline asm */
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     loc_5d110d
        cmp     dword ptr [esi + 0x45c], ebx
        jz      loc_5d1130
loc_5d110d:
        mov     eax, dword ptr [esi + 0x470]
        cmp     eax, ebx
        mov     byte ptr [esi + 0x459], 0x0
        jz      loc_5d112a
        /* __emit: MSVC6 encodes mov ecx,[imm32] as immediate load, not 8B 0D mem-deref */
        mov ecx, dword ptr [DAT_0080daa4]
        push    eax
        call    FUN_00416130
loc_5d112a:
        mov     dword ptr [esi + 0x470], ebx
loc_5d1130:
        mov     al, byte ptr [esp + 0xa4]
        test    al, al
        jnz     loc_5d1142
loc_5d113b:
        mov     ecx, esi
        call    FUN_005d1260
loc_5d1142:
        call    FUN_006f49a0
loc_5d1147:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x8c
        ret     0x8
    }


}
