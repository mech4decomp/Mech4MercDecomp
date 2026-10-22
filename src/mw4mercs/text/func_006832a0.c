/* FUN_006832a0 - HUD element 3D targeting/aim check (__thiscall) */
extern void __cdecl FUN_005b9560(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005fb8e0(void);
extern void __cdecl FUN_005fbb00(void);
extern void __cdecl FUN_00766d10(void);
extern void __cdecl FUN_0041c830(void);
extern int g_7f268c;
extern int g_798bbc;
extern float g_76d598;
extern float g_76c5b0;
extern float g_798bb8;
extern float g_7899ec;
extern float g_7b220c;
extern float g_798bb4;

__declspec(naked) void FUN_006832a0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0xb0
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0x10]
        mov esi, dword ptr [edi + 0x3d4]
        test esi, esi
        jz L351c
        mov ecx, esi
        call FUN_005b9560
        mov ecx, dword ptr [esi + 0x17c]
        test ecx, ecx
        mov dword ptr [ebp - 0x10], 0x0
        jle L351c
        mov dword ptr [ebp - 0x14], eax
L32dc:
        mov eax, dword ptr [eax]
        test eax, eax
        jz L34ee
        lea ecx, [eax + 0x10]
        call FUN_0041fd80
        mov esi, eax
        test esi, esi
        jz L34ee
        cmp esi, dword ptr [ebp + 0x14]
        jz L34ee
        mov eax, dword ptr [esi + 0x30]
        cmp eax, dword ptr [edi + 0x30]
        jz L34ee
        mov edx, dword ptr [edi]
        mov ecx, edi
        call dword ptr [edx + 0x60]
        mov ebx, eax
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x60]
        cmp eax, ebx
        jz short L334f
        mov eax, dword ptr [g_7f268c]
        mov ecx, dword ptr [esi + 0x4]
        push eax
        call FUN_00415230
        cmp al, 0x1
        jnz L34ee
        mov ecx, esi
        call FUN_005fb8e0
        fcomp dword ptr [g_76d598]
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz L34ee
L334f:
        mov eax, dword ptr [esi + 0x124]
        test eax, eax
        mov ecx, dword ptr [g_798bbc]
        mov dword ptr [ebp - 0x1c], ecx
        jz short L3371
        fld dword ptr [g_798bbc]
        fadd dword ptr [eax + 0x8c]
        fstp dword ptr [ebp - 0x1c]
L3371:
        mov eax, dword ptr [ebp + 0x8]
        fld dword ptr [ebp + 0xc]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [eax + 0x4]
        mov dword ptr [ebp - 0x50], edx
        mov edx, dword ptr [eax + 0x8]
        mov dword ptr [ebp - 0x48], edx
        mov edx, dword ptr [eax + 0x10]
        mov dword ptr [ebp - 0x40], edx
        mov edx, dword ptr [eax + 0x18]
        mov dword ptr [ebp - 0x4c], ecx
        mov ecx, dword ptr [eax + 0xc]
        mov dword ptr [ebp - 0x38], edx
        fcomp dword ptr [ebp - 0x38]
        mov dword ptr [ebp - 0x44], ecx
        mov ecx, dword ptr [eax + 0x14]
        mov dword ptr [ebp - 0x3c], ecx
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jnz short L33b0
        mov eax, dword ptr [ebp + 0xc]
        mov dword ptr [ebp - 0x38], eax
L33b0:
        lea ecx, [ebp - 0xb0]
        push ecx
        mov ecx, esi
        call FUN_005fbb00
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [eax + 0x4]
        mov dword ptr [ebp - 0x70], edx
        mov edx, dword ptr [eax + 0x8]
        mov eax, dword ptr [ebp - 0x1c]
        mov dword ptr [ebp - 0x6c], ecx
        lea ecx, [ebp - 0x74]
        mov dword ptr [ebp - 0x68], edx
        push ecx
        lea edx, [ebp - 0x70]
        push edx
        lea ecx, [ebp - 0x50]
        mov dword ptr [ebp - 0x64], eax
        call FUN_00766d10
        fcomp dword ptr [g_76c5b0]
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz L34ee
        mov eax, dword ptr [edi]
        lea ecx, [ebp - 0xa4]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0xf0]
        lea edx, [ebp - 0x60]
        push edx
        mov ecx, esi
        call FUN_005fbb00
        fld dword ptr [g_798bb8]
        mov ecx, dword ptr [eax]
        fmul dword ptr [g_7899ec]
        mov dword ptr [ebp - 0x2c], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ebp - 0x28], edx
        fstp dword ptr [ebp + 0x10]
        mov eax, dword ptr [eax + 0x8]
        lea ecx, [ebp - 0xa4]
        push ecx
        lea edx, [ebp - 0x2c]
        push edx
        lea ecx, [ebp - 0xc]
        mov dword ptr [ebp - 0x24], eax
        call FUN_0041c830
        fld dword ptr [ebp + 0x10]
        fabs
        fstp dword ptr [ebp + 0x10]
        fld dword ptr [ebp - 0x4]
        fmul dword ptr [ebp - 0x4]
        fld dword ptr [ebp - 0xc]
        fmul dword ptr [ebp - 0xc]
        faddp st(1), st(0)
        fstp dword ptr [ebp - 0x20]
        fld dword ptr [ebp - 0x8]
        fmul dword ptr [ebp - 0x8]
        fadd dword ptr [ebp - 0x20]
        fstp dword ptr [ebp - 0x54]
        mov eax, dword ptr [ebp - 0x54]
        sar eax, 0x1
        add eax, 0x1fc00000
        mov dword ptr [ebp - 0x34], eax
        fld dword ptr [ebp - 0x34]
        fabs
        fld dword ptr [g_7b220c]
        fcompp
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz L3513
        mov eax, dword ptr [ebp - 0x20]
        mov dword ptr [ebp - 0x30], eax
        mov eax, dword ptr [ebp - 0x30]
        sar eax, 0x1
        add eax, 0x1fc00000
        mov dword ptr [ebp - 0x18], eax
        fld dword ptr [ebp - 0x18]
        fabs
        fld dword ptr [g_7b220c]
        fcompp
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz short L34c8
        fld dword ptr [ebp + 0x10]
        fcomp dword ptr [g_798bb4]
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz L3513
        jmp L34ee
L34c8:
        fld dword ptr [ebp - 0xc]
        fld dword ptr [ebp - 0x4]
        fpatan
        fabs
        fcomp dword ptr [ebp + 0x10]
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz L34ee
        fld dword ptr [ebp - 0x8]
        fld dword ptr [ebp - 0x18]
        fpatan
        fcomp dword ptr [ebp + 0x10]
        fnstsw ax
        __emit 0xF6  /* test ah,imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz L3513
L34ee:
        mov ecx, dword ptr [ebp - 0x10]
        mov eax, dword ptr [ebp - 0x14]
        mov edx, dword ptr [edi + 0x3d4]
        mov esi, dword ptr [edx + 0x17c]
        inc ecx
        add eax, 0x4
        cmp ecx, esi
        mov dword ptr [ebp - 0x10], ecx
        mov dword ptr [ebp - 0x14], eax
        jge L351c
        jmp L32dc
L3513:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L351c:
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
