/* func_005CED2D.c - in-.text data block transcription (gameplay)
 * Block 0x5CED2D (2819 B). Function code runs 0x5CED2D..0x5CF7D7 (ret 8),
 * 2731 B. Two switch jump tables (data) follow at 0x5CF7DC and 0x5CF804,
 * excluded from this function slice (see func_005d1330 precedent).
 */

extern void __cdecl FUN_006F4950(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00707E70(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_00767430(void);
extern void __cdecl FUN_0075DB4A(void);
extern void __cdecl FUN_006F49A0(void);
extern void __cdecl FUN_005CF830(void);
extern void __cdecl FUN_005D64D0(void);
extern void __cdecl FUN_00417D80(void);
extern void __cdecl FUN_00420840(void);
extern void __cdecl FUN_005D1330(void);
extern void __cdecl FUN_005B3610(void);
extern void __cdecl FUN_005DCD00(void);
extern void __cdecl FUN_00767400(void);

extern int g_7f244c;
extern int g_7f23d8;
extern int g_80daa4;
extern float g_76d064;
extern double g_785970;
extern int g_7f2564;
extern int g_7f25c0;
extern int g_7f22bc;
extern int g_7f2440;
extern float g_80da60;
extern float g_788100;
extern float g_80da5c;
extern float g_80da58;
extern float g_7880fc;
extern float g_80da54;
extern float g_76c5b0;
extern float g_770168;
extern float g_786dd8;
extern float g_76e1f0;
extern int g_7f24cc;

__declspec(naked) void func_005CED2D(void)
{
    __asm {
        nop
        nop
        nop
        sub esp, 0xd4
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr [ebp + 0x35c]
        mov eax, dword ptr [esi + 0x78]
        lea ecx, [esi + 0x78]
        push edi
        mov dword ptr [esp + 0x2c], ebp
        call dword ptr [eax + 4]
        mov ecx, dword ptr [g_7f244c]
        push ecx
        mov ebx, eax
        call FUN_006F4950
        mov eax, dword ptr [ebp + 0x364]
        test eax, eax
        je L_5cf7c8
        mov edi, dword ptr [esp + 0xe8]
        test edi, edi
        je L_5cef2a
        mov esi, dword ptr [edi + 0x34]
        test esi, esi
        je L_5ceebc
        mov eax, dword ptr [g_7f23d8]
        mov ecx, dword ptr [esi + 4]
        push eax
        call FUN_00415230
        test al, al
        je L_5ceebc
        mov al, byte ptr [esi + 0x459]
        test al, al
        mov ecx, dword ptr [g_80daa4]
        jne L_5cee91
        call FUN_00416110
        xor ebx, ebx
        cmp eax, ebx
        je L_5cedc7
        mov dword ptr [eax + 0x2c], ebx
        mov dword ptr [eax + 0x30], ebx
        mov dword ptr [eax + 0x34], ebx
        mov esi, eax
        jmp L_5cedc9
    L_5cedc7:
        xor esi, esi
    L_5cedc9:
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 0x174]
        mov edx, dword ptr [ebp]
        push 1
        push ebx
        mov dword ptr [esp + 0x34], edx
        call FUN_00707E70
        mov eax, dword ptr [esp + 0x30]
        sub esp, 8
        mov ecx, ebp
        fstp qword ptr [esp]
        call dword ptr [eax + 0x15c]
        mov byte ptr [ebp + 0x4ac], 0
        call FUN_00415020
        fadd st(0), st(0)
        push 0
        fadd dword ptr [g_76d064]
        fstp qword ptr [esp + 0x1c]
        call FUN_00707E70
        fadd qword ptr [esp + 0x18]
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [edi + 8]
        mov edx, dword ptr [edi + 4]
        fstp qword ptr [ebp + 0x49c]
        mov dword ptr [esi], ecx
        mov ecx, dword ptr [edi + 0xc]
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], edx
        mov edx, dword ptr [edi + 0x10]
        lea eax, [edi + 0x14]
        mov dword ptr [esi + 0xc], ecx
        push eax
        lea ecx, [esi + 0x14]
        mov byte ptr [ebp + 0x459], 1
        mov dword ptr [esi + 0x10], edx
        call FUN_00767430
        mov ecx, dword ptr [edi + 0x2c]
        mov edx, dword ptr [edi + 0x30]
        push 0
        mov dword ptr [esi + 0x2c], ecx
        mov dword ptr [esi + 0x30], edx
        mov dword ptr [esi + 0x34], ebp
        mov dword ptr [ebp + 0x470], esi
        call FUN_00707E70
        fmul qword ptr [g_785970]
        call FUN_0075DB4A
        mov ecx, dword ptr [esi + 0x10]
        sub ecx, eax
        mov dword ptr [ebp + 0x474], ecx
        call FUN_006F49A0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xd4
        ret 8
    L_5cee91:
        call FUN_00416110
        test eax, eax
        je L_5ceead
        push edi
        mov ecx, eax
        call FUN_005CF830
        lea edx, [esp + 0x10]
        mov dword ptr [esp + 0x10], eax
        push edx
        jmp L_5cef0b
    L_5ceead:
        lea edx, [esp + 0x10]
        mov dword ptr [esp + 0x10], 0
        push edx
        jmp L_5cef0b
    L_5ceebc:
        mov ecx, dword ptr [ebp + 0x364]
        cmp dword ptr [ecx + 8], 3
        jne L_5ceee1
        mov eax, dword ptr [ecx]
        push 1
        call dword ptr [eax + 0x38]
        call FUN_006F49A0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xd4
        ret 8
    L_5ceee1:
        mov ecx, dword ptr [g_80daa4]
        call FUN_00416110
        test eax, eax
        je L_5ceefe
        push edi
        mov ecx, eax
        call FUN_005CF830
        mov dword ptr [esp + 0x10], eax
        jmp L_5cef06
    L_5ceefe:
        mov dword ptr [esp + 0x10], 0
    L_5cef06:
        lea ecx, [esp + 0x10]
        push ecx
    L_5cef0b:
        lea ecx, [ebp + 0x4b0]
        call FUN_005D64D0
        push 0
        call FUN_00707E70
        sub esp, 8
        fstp qword ptr [esp]
        mov ecx, ebp
        jmp L_5cf7c3
    L_5cef2a:
        mov edi, dword ptr [esp + 0xec]
        test edi, edi
        je L_5cf4e9
        mov eax, dword ptr [g_7f2564]
        mov ecx, dword ptr [edi + 4]
        push eax
        call FUN_00415230
        test al, al
        jne L_5cf7c8
        mov ebx, dword ptr [ebx + 0x50]
        cmp ebx, 9
        mov eax, 1
        ja L_5cef91
        __emit 0xFF /* __emit: MSVC6 cannot encode jmp dword ptr [ebx*4+imm32] indirect jump */
        __emit 0x24
        __emit 0x9D
        __emit 0xDC
        __emit 0xF7
        __emit 0x5C
        __emit 0x00
        mov dword ptr [esp + 0x14], eax
        jmp L_5cef99
    L_5cef69:
        mov dword ptr [esp + 0x14], 4
        jmp L_5cef99
    L_5cef73:
        mov dword ptr [esp + 0x14], 8
        jmp L_5cef99
    L_5cef7d:
        mov dword ptr [esp + 0x14], 2
        jmp L_5cef99
    L_5cef87:
        mov dword ptr [esp + 0x14], 0x10
        jmp L_5cef99
    L_5cef91:
        mov dword ptr [esp + 0x14], 0x3f
    L_5cef99:
        mov ebx, dword ptr [edi + 0xd8]
        mov eax, dword ptr [ebx + 0xac]
        mov edx, dword ptr [ebx + 0x8c]
        add ebx, 0x80
        xor esi, esi
        mov dword ptr [esp + 0x20], eax
        mov eax, dword ptr [edi + 0x128]
        cmp eax, esi
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x78], esi
        mov dword ptr [esp + 0x7c], esi
        mov dword ptr [esp + 0x80], esi
        jne L_5cefe6
        mov eax, dword ptr [edi + 0x124]
        cmp eax, esi
        je L_5cf259
    L_5cefe6:
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        add eax, 0x10
        push eax
        lea ecx, [esp + 0xac]
        call FUN_00417D80
        lea edx, [esp + 0xa4]
        push edx
        lea ecx, [esp + 0x38]
        call FUN_00420840
        fld dword ptr [esp + 0x34]
        call FUN_0075DB4A
        fld dword ptr [esp + 0x38]
        mov ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        mov edi, edx
        mov dword ptr [esp + 0x30], edi
        call FUN_0075DB4A
        mov ecx, eax
        fld dword ptr [esp + 0x44]
        mov eax, 0x66666667
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1f
        add edx, ecx
        mov esi, edx
        mov dword ptr [esp + 0x24], esi
        call FUN_0075DB4A
        mov ecx, eax
        fld dword ptr [esp + 0x48]
        mov eax, 0x66666667
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        mov ebx, edx
        mov dword ptr [esp + 0x18], ebx
        call FUN_0075DB4A
        mov ecx, eax
        fld dword ptr [g_80da60]
        mov eax, 0x66666667
        fmul dword ptr [g_788100]
        imul ecx
        fild dword ptr [esp + 0x30]
        fcomp st(1)
        fnstsw ax
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1f
        add edx, ecx
        test ah, 1
        mov dword ptr [esp + 0x28], edx
        je L_5cf0b4
        call FUN_0075DB4A
        mov edi, eax
        jmp L_5cf0b6
    L_5cf0b4:
        fstp st(0)
    L_5cf0b6:
        fld dword ptr [g_80da5c]
        fmul dword ptr [g_788100]
        fild dword ptr [esp + 0x18]
        fcomp st(1)
        fnstsw ax
        test ah, 1
        je L_5cf0d8
        call FUN_0075DB4A
        mov ebx, eax
        jmp L_5cf0da
    L_5cf0d8:
        fstp st(0)
    L_5cf0da:
        fild dword ptr [esp + 0x24]
        fld dword ptr [g_80da58]
        fmul dword ptr [g_788100]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_5cf10d
        fld dword ptr [g_80da58]
        fmul dword ptr [g_7880fc]
        call FUN_0075DB4A
        or esi, 0xffffffff
        sub esi, eax
        mov dword ptr [esp + 0x24], esi
    L_5cf10d:
        fild dword ptr [esp + 0x28]
        fld dword ptr [g_80da54]
        fmul dword ptr [g_788100]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_5cf140
        fld dword ptr [g_80da54]
        fmul dword ptr [g_7880fc]
        call FUN_0075DB4A
        or ecx, 0xffffffff
        sub ecx, eax
        mov dword ptr [esp + 0x28], ecx
    L_5cf140:
        mov eax, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x34]
        mov ecx, dword ptr [esp + 0x44]
        mov dword ptr [esp + 0x50], eax
        mov eax, dword ptr [g_7f25c0]
        push eax
        mov eax, dword ptr [esp + 0xf0]
        mov dword ptr [esp + 0x50], edx
        mov edx, dword ptr [esp + 0x4c]
        mov dword ptr [esp + 0x58], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esp + 0x5c], edx
        call FUN_00415230
        test al, al
        je L_5cf19d
        mov ecx, dword ptr [esp + 0xec]
        mov eax, dword ptr [ecx + 0x2fc]
        test eax, eax
        je L_5cf19d
        mov ecx, dword ptr [g_7f22bc]
        push ecx
        mov ecx, dword ptr [eax + 4]
        call FUN_00415230
        test al, al
        je L_5cf1ea
    L_5cf19d:
        cmp edi, esi
        jg L_5cf1ea
    L_5cf1a1:
        cmp ebx, dword ptr [esp + 0x28]
        jg L_5cf1e5
        mov edx, dword ptr [g_7f2440]
        mov eax, dword ptr [edx + 0x3c]
        mov esi, dword ptr [eax + 8]
        mov edx, dword ptr [esp + 0x28]
        mov ebp, dword ptr [esp + 0x14]
        lea eax, [ebx + 0x100]
        sub edx, ebx
        shl eax, 9
        inc edx
    L_5cf1c7:
        lea ecx, [eax + edi + 0x100]
        or word ptr [esi + ecx*2], bp
        lea ecx, [esi + ecx*2]
        add eax, 0x200
        dec edx
        jne L_5cf1c7
        mov ebp, dword ptr [esp + 0x2c]
        mov esi, dword ptr [esp + 0x24]
    L_5cf1e5:
        inc edi
        cmp edi, esi
        jle L_5cf1a1
    L_5cf1ea:
        mov ebx, dword ptr [esp + 0x10]
    L_5cf1ee:
        mov ecx, dword ptr [ebp + 0x364]
        cmp dword ptr [ecx + 8], 3
        jne L_5cf201
        mov edx, dword ptr [ecx]
        push 1
        call dword ptr [edx + 0x38]
    L_5cf201:
        mov eax, dword ptr [ebp + 0x35c]
        mov eax, dword ptr [eax + 0xd8]
        fld dword ptr [eax + 0x8c]
        mov ecx, dword ptr [ebx + 0x2c]
        fsubr dword ptr [ebx + 0xc]
        add eax, 0x80
        mov eax, dword ptr [eax + 0x2c]
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x3c], ecx
        fld dword ptr [esp + 0x3c]
        fsub dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x20]
        fcom dword ptr [g_76c5b0]
        fnstsw ax
        test ah, 1
        je L_5cf311
        fld dword ptr [esp + 0x4c]
        fsub dword ptr [g_770168]
        fstp dword ptr [esp + 0x4c]
        jmp L_5cf32c
    L_5cf259:
        mov eax, dword ptr [g_7f25c0]
        mov ecx, dword ptr [edi + 4]
        push eax
        call FUN_00415230
        test al, al
        je L_5cf28b
        mov edi, dword ptr [edi + 0x2fc]
        cmp edi, esi
        je L_5cf28b
        mov eax, dword ptr [g_7f22bc]
        mov ecx, dword ptr [edi + 4]
        push eax
        call FUN_00415230
        test al, al
        je L_5cf1ea
    L_5cf28b:
        fld dword ptr [esp + 0x20]
        mov edx, dword ptr [g_7f2440]
        mov edi, dword ptr [edx + 0x3c]
        fadd dword ptr [g_786dd8]
        fmul dword ptr [g_788100]
        call FUN_0075DB4A
        fld dword ptr [esp + 0x18]
        fadd dword ptr [g_786dd8]
        mov esi, eax
        fmul dword ptr [g_788100]
        call FUN_0075DB4A
        fld dword ptr [esp + 0x18]
        fsub dword ptr [g_76e1f0]
        mov cx, word ptr [esp + 0x14]
        shl esi, 9
        add esi, eax
        mov eax, dword ptr [edi + 8]
        or word ptr [eax + esi*2], cx
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x18]
        lea esi, [eax + esi*2]
        fadd dword ptr [g_76e1f0]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x20]
        fsub dword ptr [g_76e1f0]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x20]
        fadd dword ptr [g_76e1f0]
        fstp dword ptr [esp + 0x58]
        jmp L_5cf1ee
    L_5cf311:
        fcom dword ptr [g_76c5b0]
        fnstsw ax
        test ah, 0x41
        jne L_5cf32c
        fld dword ptr [esp + 0x50]
        fadd dword ptr [g_770168]
        fstp dword ptr [esp + 0x50]
    L_5cf32c:
        fld dword ptr [esp + 0x20]
        fcomp dword ptr [g_76c5b0]
        fnstsw ax
        test ah, 1
        je L_5cf34d
        fld dword ptr [esp + 0x54]
        fsub dword ptr [g_770168]
        fstp dword ptr [esp + 0x54]
        jmp L_5cf36c
    L_5cf34d:
        fld dword ptr [esp + 0x20]
        fcomp dword ptr [g_76c5b0]
        fnstsw ax
        test ah, 0x41
        jne L_5cf36c
        fld dword ptr [esp + 0x58]
        fadd dword ptr [g_770168]
        fstp dword ptr [esp + 0x58]
    L_5cf36c:
        fcom dword ptr [g_76c5b0]
        fld st(0)
        fnstsw ax
        test ah, 0x41
        je L_5cf37d
        fchs
    L_5cf37d:
        fld dword ptr [esp + 0x20]
        fcomp dword ptr [g_76c5b0]
        fld dword ptr [esp + 0x20]
        fnstsw ax
        test ah, 0x41
        je L_5cf394
        fchs
    L_5cf394:
        fxch st(1)
        fcomp st(1)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne L_5cf3c1
        fstp st(0)
        fld dword ptr [esp + 0x54]
        fsub dword ptr [g_770168]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x58]
        fadd dword ptr [g_770168]
        fstp dword ptr [esp + 0x58]
        jmp L_5cf410
    L_5cf3c1:
        fcom dword ptr [g_76c5b0]
        fnstsw ax
        test ah, 0x41
        je L_5cf3d0
        fchs
    L_5cf3d0:
        fld dword ptr [esp + 0x20]
        fcomp dword ptr [g_76c5b0]
        fld dword ptr [esp + 0x20]
        fnstsw ax
        test ah, 0x41
        je L_5cf3e7
        fchs
    L_5cf3e7:
        fxch st(1)
        fcomp st(1)
        fnstsw ax
        fstp st(0)
        test ah, 1
        je L_5cf410
        fld dword ptr [esp + 0x4c]
        fsub dword ptr [g_770168]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x50]
        fadd dword ptr [g_770168]
        fstp dword ptr [esp + 0x50]
    L_5cf410:
        mov ecx, dword ptr [g_80daa4]
        call FUN_00416110
        mov esi, eax
        xor edi, edi
        cmp esi, edi
        je L_5cf470
        mov edx, dword ptr [esp + 0x4c]
        mov dword ptr [esi], edx
        mov eax, dword ptr [esp + 0x50]
        mov dword ptr [esi + 4], eax
        mov ecx, dword ptr [esp + 0x54]
        mov dword ptr [esi + 8], ecx
        mov edx, dword ptr [esp + 0x58]
        lea ecx, [esp + 0x60]
        mov dword ptr [esi + 0xc], edx
        mov eax, dword ptr [esp + 0x5c]
        push ecx
        lea ecx, [esi + 0x14]
        mov dword ptr [esi + 0x10], eax
        call FUN_00767400
        mov edx, dword ptr [esp + 0x78]
        mov dword ptr [esi + 0x2c], edx
        mov eax, dword ptr [esp + 0x7c]
        mov dword ptr [esi + 0x30], eax
        mov ecx, dword ptr [esp + 0x80]
        mov dword ptr [esi + 0x34], ecx
        mov dword ptr [esp + 0x10], esi
        jmp L_5cf474
    L_5cf470:
        mov dword ptr [esp + 0x10], edi
    L_5cf474:
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [ebp + 0x4b0]
        call FUN_005D64D0
        push edi
        call FUN_00707E70
        sub esp, 8
        mov ecx, ebp
        fstp qword ptr [esp]
        call FUN_005D1330
        push edi
        call FUN_00707E70
        fstp qword ptr [esp + 0x18]
        mov ecx, dword ptr [g_7f24cc]
        call FUN_00416110
        cmp eax, edi
        je L_5cf4bc
        push edi
        push 8
        mov ecx, eax
        call FUN_005B3610
        jmp L_5cf4be
    L_5cf4bc:
        xor eax, eax
    L_5cf4be:
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [eax + 8], ecx
        push eax
        mov ecx, ebp
        mov dword ptr [eax + 0xc], edx
        mov dword ptr [eax + 0x14], edi
        call FUN_005DCD00
        call FUN_006F49A0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xd4
        ret 8
    L_5cf4e9:
        mov eax, dword ptr [esi + 0xd8]
        mov ecx, dword ptr [eax + 0x8c]
        mov edx, dword ptr [eax + 0xac]
        add eax, 0x80
        mov eax, dword ptr [ebx + 0x50]
        xor edi, edi
        cmp eax, 9
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x20], edx
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x28], eax
        ja L_5cf546
        __emit 0xFF /* __emit: MSVC6 cannot encode jmp dword ptr [eax*4+imm32] indirect jump */
        __emit 0x24
        __emit 0x85
        __emit 0x04
        __emit 0xF8
        __emit 0x5C
        __emit 0x00
        mov edi, 1
        jmp L_5cf542
    L_5cf528:
        mov edi, 4
        jmp L_5cf542
    L_5cf52f:
        mov edi, 8
        jmp L_5cf542
    L_5cf536:
        mov edi, 2
        jmp L_5cf542
    L_5cf53d:
        mov edi, 0x10
    L_5cf542:
        mov dword ptr [esp + 0x14], edi
    L_5cf546:
        mov ecx, dword ptr [esi + 0x128]
        test ecx, ecx
        jne L_5cf55e
        mov ecx, dword ptr [esi + 0x124]
        test ecx, ecx
        je L_5cf748
    L_5cf55e:
        mov eax, dword ptr [esi + 0xd8]
        lea esi, [eax + 0x80]
        add ecx, 0x10
        push esi
        push ecx
        lea ecx, [esp + 0x54]
        call FUN_00417D80
        lea eax, [esp + 0x4c]
        push eax
        lea ecx, [esp + 0x90]
        call FUN_00420840
        fld dword ptr [esi + 8]
        fld dword ptr [esi + 0x28]
        fstp dword ptr [esp + 0x3c]
        fmul dword ptr [esp + 0x88]
        fld dword ptr [esp + 0x88]
        fmul dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x3c]
        fld st(0)
        fadd dword ptr [esp + 0x8c]
        call FUN_0075DB4A
        fld dword ptr [esp + 0x90]
        mov ecx, eax
        fadd st(0), st(1)
        mov eax, 0x66666667
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1f
        add edx, ecx
        mov edi, edx
        mov dword ptr [esp + 0x18], edi
        call FUN_0075DB4A
        mov ecx, eax
        mov eax, 0x66666667
        fstp st(0)
        fld dword ptr [esp + 0x3c]
        imul ecx
        fadd dword ptr [esp + 0x9c]
        sar edx, 2
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        mov esi, edx
        mov dword ptr [esp + 0x24], esi
        call FUN_0075DB4A
        mov ecx, eax
        fld dword ptr [esp + 0xa0]
        mov eax, 0x66666667
        fadd dword ptr [esp + 0x3c]
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1f
        add edx, ecx
        mov ebp, edx
        mov dword ptr [esp + 0x30], ebp
        call FUN_0075DB4A
        mov ecx, eax
        fld dword ptr [g_80da60]
        mov eax, 0x66666667
        fmul dword ptr [g_788100]
        imul ecx
        fild dword ptr [esp + 0x18]
        fcomp st(1)
        sar edx, 2
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        mov ebx, edx
        fnstsw ax
        test ah, 1
        mov dword ptr [esp + 0x10], ebx
        je L_5cf66d
        call FUN_0075DB4A
        mov edi, eax
        jmp L_5cf66f
    L_5cf66d:
        fstp st(0)
    L_5cf66f:
        fld dword ptr [g_80da5c]
        fmul dword ptr [g_788100]
        fild dword ptr [esp + 0x30]
        fcomp st(1)
        fnstsw ax
        test ah, 1
        je L_5cf691
        call FUN_0075DB4A
        mov ebp, eax
        jmp L_5cf693
    L_5cf691:
        fstp st(0)
    L_5cf693:
        fild dword ptr [esp + 0x24]
        fld dword ptr [g_80da58]
        fmul dword ptr [g_788100]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_5cf6c6
        fld dword ptr [g_80da58]
        fmul dword ptr [g_7880fc]
        call FUN_0075DB4A
        or esi, 0xffffffff
        sub esi, eax
        mov dword ptr [esp + 0x24], esi
    L_5cf6c6:
        fild dword ptr [esp + 0x10]
        fld dword ptr [g_80da54]
        fmul dword ptr [g_788100]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_5cf6f9
        fld dword ptr [g_80da54]
        fmul dword ptr [g_7880fc]
        call FUN_0075DB4A
        or ebx, 0xffffffff
        sub ebx, eax
        mov dword ptr [esp + 0x10], ebx
    L_5cf6f9:
        cmp edi, esi
        jg L_5cf78c
    L_5cf701:
        cmp ebp, ebx
        jg L_5cf741
        mov ecx, dword ptr [g_7f2440]
        mov eax, dword ptr [ecx + 0x3c]
        mov esi, dword ptr [eax + 8]
        mov edx, ebx
        mov ebx, dword ptr [esp + 0x14]
        lea eax, [ebp + 0x100]
        sub edx, ebp
        shl eax, 9
        inc edx
    L_5cf723:
        lea ecx, [eax + edi + 0x100]
        or word ptr [esi + ecx*2], bx
        lea ecx, [esi + ecx*2]
        add eax, 0x200
        dec edx
        jne L_5cf723
        mov ebx, dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0x24]
    L_5cf741:
        inc edi
        cmp edi, esi
        jle L_5cf701
        jmp L_5cf78c
    L_5cf748:
        fld dword ptr [esp + 0x20]
        mov edx, dword ptr [g_7f2440]
        mov ebx, dword ptr [edx + 0x3c]
        fadd dword ptr [g_786dd8]
        fmul dword ptr [g_788100]
        call FUN_0075DB4A
        fld dword ptr [esp + 0x18]
        fadd dword ptr [g_786dd8]
        mov esi, eax
        fmul dword ptr [g_788100]
        call FUN_0075DB4A
        shl esi, 9
        add esi, eax
        mov eax, dword ptr [ebx + 8]
        or word ptr [eax + esi*2], di
        lea eax, [eax + esi*2]
    L_5cf78c:
        mov esi, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esi + 0x364]
        cmp dword ptr [ecx + 8], 3
        jne L_5cf7a3
        mov edx, dword ptr [ecx]
        push 1
        call dword ptr [edx + 0x38]
    L_5cf7a3:
        cmp dword ptr [esp + 0x28], 9
        jne L_5cf7b4
        mov al, byte ptr [esi + 0x30a]
        test al, al
        jne L_5cf7c8
    L_5cf7b4:
        push 0
        call FUN_00707E70
        sub esp, 8
        fstp qword ptr [esp]
        mov ecx, esi
    L_5cf7c3:
        call FUN_005D1330
    L_5cf7c8:
        call FUN_006F49A0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xd4
        ret 8
    }
}
