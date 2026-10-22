/* auto-transcribed gap function 0x5E012426 (2250 B); review against reference; stepping stone */
extern void __cdecl FUN_5e0129fd(void);
extern int g_5e035aa0;
extern int g_5e035aa4;
__declspec(naked) void FUN_5e012426(void)
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
            nop
        lbl_5e012430:
            fld dword ptr [esp + 4]
            fmul dword ptr [esp + 0x10]
            fld dword ptr [esp + 8]
            fmul dword ptr [esp + 0xc]
            __emit 0xde /* fsubp st(1): MSVC6 cannot encode natively */
            __emit 0xe9 /* fsubp st(1): MSVC6 cannot encode natively */
            __emit 0xc2 /* ret 0x10: MSVC6 cannot encode natively */
            __emit 0x10 /* ret 0x10: MSVC6 cannot encode natively */
            __emit 0x00 /* ret 0x10: MSVC6 cannot encode natively */
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
        lbl_5e012450:
            push ebx
            mov ebx, dword ptr [esp + 0x1c]
            push ebp
            mov ebp, dword ptr [esp + 0x1c]
            push esi
            mov esi, dword ptr [esp + 0x30]
            push edi
            mov edi, dword ptr [esp + 0x30]
            push esi
            push edi
            push ebx
            push ebp
            call lbl_5e012430
            push esi
            mov esi, dword ptr [esp + 0x30]
            fmul dword ptr [esp + 0x18]
            push esi
            push ebx
            mov ebx, dword ptr [esp + 0x2c]
            push ebx
            fstp dword ptr [esp + 0x44]
            call lbl_5e012430
            push edi
            push esi
            fmul dword ptr [esp + 0x20]
            push ebp
            push ebx
            fsubr dword ptr [esp + 0x44]
            fstp dword ptr [esp + 0x44]
            call lbl_5e012430
            pop edi
            pop esi
            fmul dword ptr [esp + 0x14]
            pop ebp
            pop ebx
            fadd dword ptr [esp + 0x24]
            ret 0x24
            nop
            nop
            nop
            nop
            nop
            nop
        lbl_5e0124b0:
            sub esp, 0x2c
            push ebx
            push ebp
            push esi
            mov esi, dword ptr [esp + 0x3c]
            push edi
            mov edx, dword ptr [esi + 0x18]
            mov ecx, dword ptr [esi + 0x14]
            mov eax, dword ptr [esi + 0x10]
            mov dword ptr [esp + 0x20], edx
            mov edx, dword ptr [esi + 0x24]
            mov dword ptr [esp + 0x24], ecx
            mov ecx, dword ptr [esi + 0x20]
            mov dword ptr [esp + 0x28], eax
            mov eax, dword ptr [esi + 0x1c]
            mov dword ptr [esp + 0x2c], edx
            mov edx, dword ptr [esi + 0x30]
            mov dword ptr [esp + 0x1c], ecx
            mov ecx, dword ptr [esi + 0x2c]
            mov dword ptr [esp + 0x10], eax
            mov eax, dword ptr [esi + 0x28]
            mov dword ptr [esp + 0x14], edx
            mov edx, dword ptr [esi + 0x3c]
            mov dword ptr [esp + 0x40], ecx
            mov ecx, dword ptr [esi + 0x38]
            mov dword ptr [esp + 0x18], eax
            mov eax, dword ptr [esi + 0x34]
            mov edi, edx
            mov ebx, ecx
            mov dword ptr [esp + 0x38], eax
            push edi
            mov ebp, eax
            mov eax, dword ptr [esp + 0x44]
            mov dword ptr [esp + 0x38], ecx
            mov ecx, dword ptr [esp + 0x1c]
            push ebx
            mov dword ptr [esp + 0x38], edx
            mov edx, dword ptr [esp + 0x34]
            push ebp
            push eax
            mov eax, dword ptr [esp + 0x20]
            push ecx
            mov ecx, dword ptr [esp + 0x34]
            push edx
            mov edx, dword ptr [esp + 0x3c]
            push eax
            push ecx
            push edx
            call lbl_5e012450
            fmul dword ptr [esi]
            mov eax, dword ptr [esp + 0x14]
            mov ecx, dword ptr [esp + 0x40]
            mov edx, dword ptr [esp + 0x18]
            push edi
            push ebx
            push eax
            mov eax, dword ptr [esp + 0x28]
            push ecx
            mov ecx, dword ptr [esp + 0x20]
            push edx
            mov edx, dword ptr [esp + 0x34]
            push eax
            mov eax, dword ptr [esp + 0x40]
            push ecx
            fstp dword ptr [esp + 0x54]
            push edx
            push eax
            call lbl_5e012450
            fmul dword ptr [esi + 4]
            mov ecx, dword ptr [esp + 0x14]
            mov edx, dword ptr [esp + 0x40]
            mov eax, dword ptr [esp + 0x1c]
            push edi
            fsubr dword ptr [esp + 0x3c]
            mov edi, dword ptr [esp + 0x30]
            push ebp
            push ecx
            push edx
            fstp dword ptr [esp + 0x48]
            push edi
            mov ecx, dword ptr [esp + 0x24]
            mov edx, dword ptr [esp + 0x38]
            push eax
            mov eax, dword ptr [esp + 0x40]
            push ecx
            push edx
            push eax
            call lbl_5e012450
            fmul dword ptr [esi + 8]
            mov ecx, dword ptr [esp + 0x14]
            mov edx, dword ptr [esp + 0x18]
            mov eax, dword ptr [esp + 0x1c]
            push ebx
            fadd dword ptr [esp + 0x3c]
            push ebp
            push ecx
            mov ecx, dword ptr [esp + 0x2c]
            push edx
            mov edx, dword ptr [esp + 0x34]
            push edi
            fstp dword ptr [esp + 0x54]
            push eax
            mov eax, dword ptr [esp + 0x40]
            push ecx
            push edx
            push eax
            call lbl_5e012450
            fmul dword ptr [esi + 0xc]
            pop edi
            pop esi
            pop ebp
            pop ebx
            fsubr dword ptr [esp + 0x30]
            add esp, 0x2c
            ret 4
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
        lbl_5e0125f0:
            sub esp, 0x3c
            push ebx
            push ebp
            push esi
            push edi
            mov eax, dword ptr [esp + 0x50]
            mov edx, dword ptr [eax + 4]
            mov ecx, dword ptr [eax]
            mov dword ptr [esp + 0x28], edx
            mov edx, dword ptr [eax + 0xc]
            mov dword ptr [esp + 0x2c], ecx
            mov ecx, dword ptr [eax + 8]
            mov dword ptr [esp + 0x14], edx
            mov edx, dword ptr [eax + 0x14]
            mov dword ptr [esp + 0x24], ecx
            mov ecx, dword ptr [eax + 0x10]
            mov dword ptr [esp + 0x3c], edx
            mov edx, dword ptr [eax + 0x1c]
            mov dword ptr [esp + 0x20], ecx
            mov ecx, dword ptr [eax + 0x18]
            mov dword ptr [esp + 0x10], edx
            mov edx, dword ptr [eax + 0x24]
            mov dword ptr [esp + 0x38], ecx
            mov ecx, dword ptr [eax + 0x20]
            mov dword ptr [esp + 0x18], edx
            mov edx, dword ptr [eax + 0x2c]
            mov dword ptr [esp + 0x1c], ecx
            mov ecx, dword ptr [eax + 0x28]
            mov dword ptr [esp + 0x48], edx
            mov edx, dword ptr [eax + 0x34]
            mov dword ptr [esp + 0x30], ecx
            mov ecx, dword ptr [eax + 0x30]
            mov ebx, dword ptr [esp + 0x48]
            mov dword ptr [esp + 0x44], edx
            mov edx, dword ptr [eax + 0x3c]
            mov ebp, dword ptr [esp + 0x44]
            mov dword ptr [esp + 0x50], ecx
            mov ecx, dword ptr [eax + 0x38]
            mov edi, edx
            mov eax, ecx
            push edi
            mov dword ptr [esp + 0x38], ecx
            mov ecx, dword ptr [esp + 0x34]
            push eax
            mov eax, dword ptr [esp + 0x18]
            mov dword ptr [esp + 0x48], edx
            mov edx, dword ptr [esp + 0x20]
            push ebp
            push ebx
            push ecx
            mov ecx, dword ptr [esp + 0x4c]
            push edx
            mov edx, dword ptr [esp + 0x54]
            push eax
            push ecx
            push edx
            call lbl_5e012450
            push edi
            mov eax, dword ptr [esp + 0x38]
            mov ecx, dword ptr [esp + 0x54]
            mov edx, dword ptr [esp + 0x34]
            mov esi, dword ptr [esp + 0x58]
            push eax
            mov eax, dword ptr [esp + 0x24]
            fstp dword ptr [esi]
            push ecx
            mov ecx, dword ptr [esp + 0x1c]
            push ebx
            push edx
            mov edx, dword ptr [esp + 0x4c]
            push eax
            mov eax, dword ptr [esp + 0x38]
            push ecx
            push edx
            push eax
            call lbl_5e012450
            fchs
            mov ecx, dword ptr [esp + 0x50]
            push edi
            fstp dword ptr [esi + 0x10]
            push ebp
            push ecx
            mov edx, dword ptr [esp + 0x24]
            mov eax, dword ptr [esp + 0x28]
            mov ecx, dword ptr [esp + 0x1c]
            push ebx
            push edx
            mov edx, dword ptr [esp + 0x50]
            push eax
            mov eax, dword ptr [esp + 0x38]
            push ecx
            push edx
            push eax
            call lbl_5e012450
            fstp dword ptr [esi + 0x20]
            mov ecx, dword ptr [esp + 0x50]
            mov edx, dword ptr [esp + 0x30]
            mov eax, dword ptr [esp + 0x18]
            push edi
            push ebp
            push ecx
            mov ecx, dword ptr [esp + 0x28]
            push edx
            mov edx, dword ptr [esp + 0x48]
            push eax
            mov eax, dword ptr [esp + 0x50]
            push ecx
            mov ecx, dword ptr [esp + 0x38]
            push edx
            push eax
            push ecx
            call lbl_5e012450
            push edi
            mov edx, dword ptr [esp + 0x38]
            mov eax, dword ptr [esp + 0x34]
            mov ecx, dword ptr [esp + 0x1c]
            push edx
            mov edx, dword ptr [esp + 0x1c]
            push ebp
            push ebx
            push eax
            mov eax, dword ptr [esp + 0x38]
            push ecx
            mov ecx, dword ptr [esp + 0x40]
            push edx
            fchs
            fstp dword ptr [esi + 0x30]
            push eax
            push ecx
            call lbl_5e012450
            push edi
            mov edx, dword ptr [esp + 0x38]
            mov eax, dword ptr [esp + 0x54]
            mov ecx, dword ptr [esp + 0x34]
            push edx
            mov edx, dword ptr [esp + 0x24]
            push eax
            mov eax, dword ptr [esp + 0x20]
            push ebx
            push ecx
            mov ecx, dword ptr [esp + 0x38]
            push edx
            mov edx, dword ptr [esp + 0x44]
            fchs
            fstp dword ptr [esi + 4]
            push eax
            push ecx
            push edx
            call lbl_5e012450
            fstp dword ptr [esi + 0x14]
            mov eax, dword ptr [esp + 0x50]
            mov ecx, dword ptr [esp + 0x18]
            mov edx, dword ptr [esp + 0x1c]
            push edi
            push ebp
            push eax
            mov eax, dword ptr [esp + 0x20]
            push ebx
            push ecx
            mov ecx, dword ptr [esp + 0x3c]
            push edx
            push eax
            push ecx
            mov edx, dword ptr [esp + 0x4c]
            push edx
            call lbl_5e012450
            push edi
            push ebp
            mov eax, dword ptr [esp + 0x58]
            mov ecx, dword ptr [esp + 0x38]
            mov edx, dword ptr [esp + 0x20]
            push eax
            mov eax, dword ptr [esp + 0x28]
            push ecx
            mov ecx, dword ptr [esp + 0x34]
            push edx
            mov edx, dword ptr [esp + 0x3c]
            push eax
            mov eax, dword ptr [esp + 0x44]
            push ecx
            fchs
            fstp dword ptr [esi + 0x24]
            push edx
            push eax
            call lbl_5e012450
            fstp dword ptr [esi + 0x34]
            mov ecx, dword ptr [esp + 0x34]
            mov edx, dword ptr [esp + 0x10]
            mov eax, dword ptr [esp + 0x38]
            push edi
            push ecx
            mov ecx, dword ptr [esp + 0x44]
            push ebp
            push edx
            mov edx, dword ptr [esp + 0x24]
            push eax
            mov eax, dword ptr [esp + 0x38]
            push ecx
            mov ecx, dword ptr [esp + 0x40]
            push edx
            push eax
            push ecx
            call lbl_5e012450
            fstp dword ptr [esi + 8]
            mov edx, dword ptr [esp + 0x34]
            mov eax, dword ptr [esp + 0x50]
            mov ecx, dword ptr [esp + 0x10]
            push edi
            push edx
            mov edx, dword ptr [esp + 0x40]
            push eax
            mov eax, dword ptr [esp + 0x2c]
            push ecx
            mov ecx, dword ptr [esp + 0x24]
            push edx
            mov edx, dword ptr [esp + 0x38]
            push eax
            mov eax, dword ptr [esp + 0x44]
            push ecx
            push edx
            push eax
            call lbl_5e012450
            push edi
            push ebp
            mov ecx, dword ptr [esp + 0x58]
            mov edx, dword ptr [esp + 0x18]
            mov eax, dword ptr [esp + 0x44]
            push ecx
            mov ecx, dword ptr [esp + 0x2c]
            push edx
            mov edx, dword ptr [esp + 0x24]
            push eax
            mov eax, dword ptr [esp + 0x3c]
            push ecx
            mov ecx, dword ptr [esp + 0x44]
            push edx
            fchs
            fstp dword ptr [esi + 0x18]
            push eax
            push ecx
            call lbl_5e012450
            fstp dword ptr [esi + 0x28]
            push edi
            push ebp
            mov edx, dword ptr [esp + 0x58]
            mov edi, dword ptr [esp + 0x40]
            mov ebp, dword ptr [esp + 0x44]
            mov eax, dword ptr [esp + 0x28]
            mov ecx, dword ptr [esp + 0x2c]
            push edx
            mov edx, dword ptr [esp + 0x34]
            push edi
            push ebp
            push eax
            mov eax, dword ptr [esp + 0x44]
            push ecx
            push edx
            push eax
            call lbl_5e012450
            push ebx
            mov ecx, dword ptr [esp + 0x34]
            mov edx, dword ptr [esp + 0x1c]
            mov eax, dword ptr [esp + 0x14]
            push ecx
            mov ecx, dword ptr [esp + 0x1c]
            push edx
            mov edx, dword ptr [esp + 0x30]
            push eax
            mov eax, dword ptr [esp + 0x38]
            push edi
            push ebp
            push ecx
            fchs
            fstp dword ptr [esi + 0x38]
            push edx
            push eax
            call lbl_5e012450
            push ebx
            mov ecx, dword ptr [esp + 0x34]
            mov edx, dword ptr [esp + 0x20]
            mov eax, dword ptr [esp + 0x14]
            push ecx
            mov ecx, dword ptr [esp + 0x28]
            push edx
            mov edx, dword ptr [esp + 0x20]
            push eax
            mov eax, dword ptr [esp + 0x34]
            push edi
            push ecx
            mov ecx, dword ptr [esp + 0x44]
            fchs
            fstp dword ptr [esi + 0xc]
            push edx
            push eax
            push ecx
            call lbl_5e012450
            fstp dword ptr [esi + 0x1c]
            mov edx, dword ptr [esp + 0x18]
            mov eax, dword ptr [esp + 0x1c]
            mov ecx, dword ptr [esp + 0x10]
            push ebx
            push edx
            mov edx, dword ptr [esp + 0x28]
            push eax
            mov eax, dword ptr [esp + 0x20]
            push ecx
            mov ecx, dword ptr [esp + 0x38]
            push ebp
            push edx
            mov edx, dword ptr [esp + 0x44]
            push eax
            push ecx
            push edx
            call lbl_5e012450
            push ebx
            mov eax, dword ptr [esp + 0x1c]
            mov ecx, dword ptr [esp + 0x20]
            mov edx, dword ptr [esp + 0x24]
            push eax
            push ecx
            push edi
            fchs
            fstp dword ptr [esi + 0x2c]
            push ebp
            push edx
            mov eax, dword ptr [esp + 0x3c]
            mov ecx, dword ptr [esp + 0x40]
            mov edx, dword ptr [esp + 0x44]
            push eax
            push ecx
            push edx
            call lbl_5e012450
            fstp dword ptr [esi + 0x3c]
            pop edi
            pop esi
            pop ebp
            pop ebx
            add esp, 0x3c
            ret 8
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            push esi
            mov esi, dword ptr [esp + 0xc]
            push esi
            push eax
            call lbl_5e0125f0
            push esi
            call lbl_5e0124b0
            fcom dword ptr [g_5e035aa0]
            fnstsw ax
            test ah, 0x40
            jne FUN_5e0129fd
            fdivr dword ptr [g_5e035aa4]
            fld st(0)
            fmul dword ptr [esi]
            fstp dword ptr [esi]
            fld st(0)
            fmul dword ptr [esi + 4]
            fstp dword ptr [esi + 4]
            fld st(0)
            fmul dword ptr [esi + 8]
            fstp dword ptr [esi + 8]
            fld st(0)
            fmul dword ptr [esi + 0xc]
            fstp dword ptr [esi + 0xc]
            fld st(0)
            fmul dword ptr [esi + 0x10]
            fstp dword ptr [esi + 0x10]
            fld st(0)
            fmul dword ptr [esi + 0x14]
            fstp dword ptr [esi + 0x14]
            fld st(0)
            fmul dword ptr [esi + 0x18]
            fstp dword ptr [esi + 0x18]
            fld st(0)
            fmul dword ptr [esi + 0x1c]
            fstp dword ptr [esi + 0x1c]
            fld st(0)
            fmul dword ptr [esi + 0x20]
            fstp dword ptr [esi + 0x20]
            fld st(0)
            fmul dword ptr [esi + 0x24]
            fstp dword ptr [esi + 0x24]
            fld st(0)
            fmul dword ptr [esi + 0x28]
            fstp dword ptr [esi + 0x28]
            fld st(0)
            fmul dword ptr [esi + 0x2c]
            fstp dword ptr [esi + 0x2c]
            fld st(0)
            fmul dword ptr [esi + 0x30]
            fstp dword ptr [esi + 0x30]
            fld st(0)
            fmul dword ptr [esi + 0x34]
            fstp dword ptr [esi + 0x34]
            fld st(0)
            fmul dword ptr [esi + 0x38]
            fstp dword ptr [esi + 0x38]
            fmul dword ptr [esi + 0x3c]
            fstp dword ptr [esi + 0x3c]
            pop esi
            ret 8
            fstp st(0)
            pop esi
            ret 8
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            fld dword ptr [eax + 8]
            fld dword ptr [eax + 4]
            fld dword ptr [eax]
            fld st(0)
            __emit 0xd8 /* fmul st(1): MSVC6 cannot encode natively */
            __emit 0xc9 /* fmul st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fld st(2): MSVC6 cannot encode natively */
            __emit 0xc2 /* fld st(2): MSVC6 cannot encode natively */
            __emit 0xd8 /* fmul st(3): MSVC6 cannot encode natively */
            __emit 0xcb /* fmul st(3): MSVC6 cannot encode natively */
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fld st(3): MSVC6 cannot encode natively */
            __emit 0xc3 /* fld st(3): MSVC6 cannot encode natively */
            __emit 0xd8 /* fmul st(4): MSVC6 cannot encode natively */
            __emit 0xcc /* fmul st(4): MSVC6 cannot encode natively */
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fsqrt : MSVC6 cannot encode natively */
            __emit 0xfa /* fsqrt : MSVC6 cannot encode natively */
            fstp st(3)
            fstp st(0)
            fstp st(0)
            fdivr dword ptr [g_5e035aa4]
            fld st(0)
            fmul dword ptr [eax]
            fstp dword ptr [eax]
            fld st(0)
            fmul dword ptr [eax + 4]
            fstp dword ptr [eax + 4]
            fmul dword ptr [eax + 8]
            fstp dword ptr [eax + 8]
            ret 4
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov ecx, dword ptr [esp + 8]
            fld dword ptr [eax + 8]
            fld dword ptr [eax + 4]
            fld dword ptr [eax]
            fld st(0)
            __emit 0xd8 /* fmul st(1): MSVC6 cannot encode natively */
            __emit 0xc9 /* fmul st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fld st(2): MSVC6 cannot encode natively */
            __emit 0xc2 /* fld st(2): MSVC6 cannot encode natively */
            __emit 0xd8 /* fmul st(3): MSVC6 cannot encode natively */
            __emit 0xcb /* fmul st(3): MSVC6 cannot encode natively */
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fld st(3): MSVC6 cannot encode natively */
            __emit 0xc3 /* fld st(3): MSVC6 cannot encode natively */
            __emit 0xd8 /* fmul st(4): MSVC6 cannot encode natively */
            __emit 0xcc /* fmul st(4): MSVC6 cannot encode natively */
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fsqrt : MSVC6 cannot encode natively */
            __emit 0xfa /* fsqrt : MSVC6 cannot encode natively */
            fstp st(3)
            fstp st(0)
            fstp st(0)
            fdivr dword ptr [g_5e035aa4]
            fld st(0)
            fmul dword ptr [eax]
            fstp dword ptr [ecx]
            fld st(0)
            fmul dword ptr [eax + 4]
            fstp dword ptr [ecx + 4]
            fmul dword ptr [eax + 8]
            fstp dword ptr [ecx + 8]
            ret 8
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            fld dword ptr [esp + 8]
            fmul dword ptr [eax]
            fstp dword ptr [eax]
            fld dword ptr [esp + 8]
            fmul dword ptr [eax + 4]
            fstp dword ptr [eax + 4]
            fld dword ptr [esp + 8]
            fmul dword ptr [eax + 8]
            fstp dword ptr [eax + 8]
            ret 8
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov ecx, dword ptr [esp + 0xc]
            fld dword ptr [esp + 8]
            fmul dword ptr [eax]
            fstp dword ptr [ecx]
            fld dword ptr [esp + 8]
            fmul dword ptr [eax + 4]
            fstp dword ptr [ecx + 4]
            fld dword ptr [esp + 8]
            fmul dword ptr [eax + 8]
            fstp dword ptr [ecx + 8]
            ret 0xc
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov ecx, dword ptr [esp + 8]
            fld dword ptr [eax]
            fsub dword ptr [ecx + 0x30]
            fstp dword ptr [eax]
            fld dword ptr [eax + 4]
            fsub dword ptr [ecx + 0x34]
            fstp dword ptr [eax + 4]
            fld dword ptr [eax + 8]
            fsub dword ptr [ecx + 0x38]
            fstp dword ptr [eax + 8]
            ret 8
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov ecx, dword ptr [esp + 8]
            mov edx, dword ptr [esp + 0xc]
            fld dword ptr [eax]
            fsub dword ptr [ecx + 0x30]
            fstp dword ptr [edx]
            fld dword ptr [eax + 4]
            fsub dword ptr [ecx + 0x34]
            fstp dword ptr [edx + 4]
            fld dword ptr [eax + 8]
            fsub dword ptr [ecx + 0x38]
            fstp dword ptr [edx + 8]
            ret 0xc
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov ecx, dword ptr [esp + 4]
            mov eax, dword ptr [esp + 8]
            fld dword ptr [ecx]
            fld dword ptr [ecx + 4]
            fld dword ptr [ecx + 8]
            fld st(0)
            fmul dword ptr [eax + 8]
            fld st(2)
            fmul dword ptr [eax + 4]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fld st(3): MSVC6 cannot encode natively */
            __emit 0xc3 /* fld st(3): MSVC6 cannot encode natively */
            fmul dword ptr [eax]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fstp dword ptr [ecx]: MSVC6 cannot encode natively */
            __emit 0x19 /* fstp dword ptr [ecx]: MSVC6 cannot encode natively */
            fld st(0)
            fmul dword ptr [eax + 0x18]
            fld st(2)
            fmul dword ptr [eax + 0x14]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fld st(3): MSVC6 cannot encode natively */
            __emit 0xc3 /* fld st(3): MSVC6 cannot encode natively */
            fmul dword ptr [eax + 0x10]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fstp dword ptr [ecx + 4]: MSVC6 cannot encode natively */
            __emit 0x59 /* fstp dword ptr [ecx + 4]: MSVC6 cannot encode natively */
            __emit 0x04 /* fstp dword ptr [ecx + 4]: MSVC6 cannot encode natively */
            fmul dword ptr [eax + 0x28]
            fxch st(1)
            fmul dword ptr [eax + 0x24]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fxch st(1): MSVC6 cannot encode natively */
            __emit 0xc9 /* fxch st(1): MSVC6 cannot encode natively */
            fmul dword ptr [eax + 0x20]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fstp dword ptr [ecx + 8]: MSVC6 cannot encode natively */
            __emit 0x59 /* fstp dword ptr [ecx + 8]: MSVC6 cannot encode natively */
            __emit 0x08 /* fstp dword ptr [ecx + 8]: MSVC6 cannot encode natively */
            ret 8
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov ecx, dword ptr [esp + 0xc]
            fld dword ptr [eax]
            fld dword ptr [eax + 4]
            fld dword ptr [eax + 8]
            mov eax, dword ptr [esp + 8]
            fld st(0)
            fmul dword ptr [eax + 8]
            fld st(2)
            fmul dword ptr [eax + 4]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fld st(3): MSVC6 cannot encode natively */
            __emit 0xc3 /* fld st(3): MSVC6 cannot encode natively */
            fmul dword ptr [eax]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fstp dword ptr [ecx]: MSVC6 cannot encode natively */
            __emit 0x19 /* fstp dword ptr [ecx]: MSVC6 cannot encode natively */
            fld st(0)
            fmul dword ptr [eax + 0x18]
            fld st(2)
            fmul dword ptr [eax + 0x14]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fld st(3): MSVC6 cannot encode natively */
            __emit 0xc3 /* fld st(3): MSVC6 cannot encode natively */
            fmul dword ptr [eax + 0x10]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fstp dword ptr [ecx + 4]: MSVC6 cannot encode natively */
            __emit 0x59 /* fstp dword ptr [ecx + 4]: MSVC6 cannot encode natively */
            __emit 0x04 /* fstp dword ptr [ecx + 4]: MSVC6 cannot encode natively */
            fmul dword ptr [eax + 0x28]
            fxch st(1)
            fmul dword ptr [eax + 0x24]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fxch st(1): MSVC6 cannot encode natively */
            __emit 0xc9 /* fxch st(1): MSVC6 cannot encode natively */
            fmul dword ptr [eax + 0x20]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fstp dword ptr [ecx + 8]: MSVC6 cannot encode natively */
            __emit 0x59 /* fstp dword ptr [ecx + 8]: MSVC6 cannot encode natively */
            __emit 0x08 /* fstp dword ptr [ecx + 8]: MSVC6 cannot encode natively */
            ret 0xc
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov ecx, dword ptr [esp + 4]
            mov eax, dword ptr [esp + 8]
            fld dword ptr [ecx]
            fsub dword ptr [eax + 0x30]
            fld dword ptr [ecx + 4]
            fsub dword ptr [eax + 0x34]
            fld dword ptr [ecx + 8]
            fsub dword ptr [eax + 0x38]
            fld st(0)
            fmul dword ptr [eax + 8]
            fld st(2)
            fmul dword ptr [eax + 4]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fld st(3): MSVC6 cannot encode natively */
            __emit 0xc3 /* fld st(3): MSVC6 cannot encode natively */
            fmul dword ptr [eax]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fstp dword ptr [ecx]: MSVC6 cannot encode natively */
            __emit 0x19 /* fstp dword ptr [ecx]: MSVC6 cannot encode natively */
            fld st(0)
            fmul dword ptr [eax + 0x18]
            fld st(2)
            fmul dword ptr [eax + 0x14]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fld st(3): MSVC6 cannot encode natively */
            __emit 0xc3 /* fld st(3): MSVC6 cannot encode natively */
            fmul dword ptr [eax + 0x10]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fstp dword ptr [ecx + 4]: MSVC6 cannot encode natively */
            __emit 0x59 /* fstp dword ptr [ecx + 4]: MSVC6 cannot encode natively */
            __emit 0x04 /* fstp dword ptr [ecx + 4]: MSVC6 cannot encode natively */
            fmul dword ptr [eax + 0x28]
            fxch st(1)
            fmul dword ptr [eax + 0x24]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fxch st(1): MSVC6 cannot encode natively */
            __emit 0xc9 /* fxch st(1): MSVC6 cannot encode natively */
            fmul dword ptr [eax + 0x20]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fstp dword ptr [ecx + 8]: MSVC6 cannot encode natively */
            __emit 0x59 /* fstp dword ptr [ecx + 8]: MSVC6 cannot encode natively */
            __emit 0x08 /* fstp dword ptr [ecx + 8]: MSVC6 cannot encode natively */
            ret 8
            nop
            nop
            nop
            nop
            nop
            nop
            mov ecx, dword ptr [esp + 4]
            mov eax, dword ptr [esp + 8]
            fld dword ptr [ecx]
            fsub dword ptr [eax + 0x30]
            fld dword ptr [ecx + 4]
            fsub dword ptr [eax + 0x34]
            fld dword ptr [ecx + 8]
            fsub dword ptr [eax + 0x38]
            mov ecx, dword ptr [esp + 0xc]
            fld st(0)
            fmul dword ptr [eax + 8]
            fld st(2)
            fmul dword ptr [eax + 4]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fld st(3): MSVC6 cannot encode natively */
            __emit 0xc3 /* fld st(3): MSVC6 cannot encode natively */
            fmul dword ptr [eax]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fstp dword ptr [ecx]: MSVC6 cannot encode natively */
            __emit 0x19 /* fstp dword ptr [ecx]: MSVC6 cannot encode natively */
            fld st(0)
            fmul dword ptr [eax + 0x18]
            fld st(2)
            fmul dword ptr [eax + 0x14]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fld st(3): MSVC6 cannot encode natively */
            __emit 0xc3 /* fld st(3): MSVC6 cannot encode natively */
            fmul dword ptr [eax + 0x10]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fstp dword ptr [ecx + 4]: MSVC6 cannot encode natively */
            __emit 0x59 /* fstp dword ptr [ecx + 4]: MSVC6 cannot encode natively */
            __emit 0x04 /* fstp dword ptr [ecx + 4]: MSVC6 cannot encode natively */
            fmul dword ptr [eax + 0x28]
            fxch st(1)
            fmul dword ptr [eax + 0x24]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fxch st(1): MSVC6 cannot encode natively */
            __emit 0xc9 /* fxch st(1): MSVC6 cannot encode natively */
            fmul dword ptr [eax + 0x20]
            __emit 0xde /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xc1 /* faddp st(1): MSVC6 cannot encode natively */
            __emit 0xd9 /* fstp dword ptr [ecx + 8]: MSVC6 cannot encode natively */
            __emit 0x59 /* fstp dword ptr [ecx + 8]: MSVC6 cannot encode natively */
            __emit 0x08 /* fstp dword ptr [ecx + 8]: MSVC6 cannot encode natively */
            ret 0xc
            nop
            nop
    }
}
