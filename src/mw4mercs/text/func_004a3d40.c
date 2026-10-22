/* FUN_004a3d40 - MLR (MidLevelRenderer) update, __thiscall, RET 0x4, FPU-heavy */
extern void __cdecl FUN_0041b140(void);
extern void __cdecl FUN_0041b320(void);
extern void __cdecl FUN_0041b680(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_00494440(void);
extern void __cdecl FUN_00495e30(void);
extern void __cdecl FUN_004188e0(void);

extern float g_float_7b220c;   /* 0x007b220c */
extern int g_dword_7b8d68;     /* 0x007b8d68 */
extern int g_dword_7b8d6c;     /* 0x007b8d6c */
extern int g_dword_7b8d70;     /* 0x007b8d70 */

__declspec(naked) void func_004a3d40(void)
{
    __asm {
        sub esp, 0x78
        push ebx
        push ebp
        push edi
        mov edi, ecx
        test byte ptr [edi + 0x9c], 0x1
        jnz L_a3d5c
        pop edi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x78
        ret 0x4
L_a3d5c:
        mov ebp, dword ptr [esp + 0x88]
        fld qword ptr [ebp]
        mov eax, dword ptr [edi + 0xac]
        fsub qword ptr [edi + 0x88]
        mov ecx, dword ptr [edi + 0xb0]
        fld dword ptr [edi + 0xa8]
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x20], ecx
        fmul st(0), st(1)
        lea edx, [esp + 0x18]
        push edx
        lea ecx, [esp + 0x38]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x20]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x24]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x24]
        fstp st(0)
        call FUN_0041b140
        lea ebx, [edi + 0xb4]
        mov eax, ebx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x24], ecx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [esp + 0x28], edx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [esp + 0x2c], ecx
        lea eax, [esp + 0x24]
        push eax
        lea ecx, [esp + 0x38]
        push ecx
        mov ecx, ebx
        mov dword ptr [esp + 0x38], edx
        call FUN_0041b320
        mov ecx, ebx
        call FUN_0041b680
        lea ecx, [edi + 0x58]
        push ebx
        mov dword ptr [esp + 0x18], ecx
        call FUN_0041a160
        push ebp
        mov ecx, edi
        call FUN_00494440
        test al, al
        jnz L_a3e0d
        pop edi
        pop ebp
        pop ebx
        add esp, 0x78
        ret 0x4
L_a3e0d:
        mov eax, dword ptr [edi + 0x90]
        mov ebx, dword ptr [edi + 0x10]
        mov edx, dword ptr [edi + 0x98]
        push esi
        mov ecx, eax
        add ebx, 0xfc
        lea esi, [ebx + 0x4]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x14], eax
        call FUN_00495e30
        fld dword ptr [esp + 0x10]
        lea edx, [eax + eax*0x2]
        mov eax, dword ptr [esi + 0x4]
        fsub dword ptr [eax + edx*0x4]
        lea eax, [eax + edx*0x4]
        fmul dword ptr [eax + 0x4]
        fadd dword ptr [eax + 0x8]
        mov al, byte ptr [ebx + 0x1c]
        test al, al
        fst dword ptr [esp + 0x10]
        jz L_a3e84
        mov ecx, dword ptr [esp + 0x14]
        fstp st(0)
        lea esi, [ebx + 0x10]
        push ecx
        mov ecx, esi
        call FUN_00495e30
        fld dword ptr [esp + 0x14]
        lea edx, [eax + eax*0x2]
        mov eax, dword ptr [esi + 0x4]
        fsub dword ptr [eax + edx*0x4]
        lea eax, [eax + edx*0x4]
        fmul dword ptr [eax + 0x4]
        fadd dword ptr [eax + 0x8]
        fmul dword ptr [esp + 0x10]
L_a3e84:
        fst dword ptr [edi + 0xe8]
        fmul dword ptr [edi + 0xe4]
        fst dword ptr [esp + 0x84]
        fcomp dword ptr [g_float_7b220c]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0); MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1 (F6 C4 01); MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz L_a3eaf
        mov dword ptr [esp + 0x84], 0x3c23d70a
L_a3eaf:
        mov edx, dword ptr [g_dword_7b8d6c]
        mov esi, dword ptr [esp + 0x18]
        mov eax, dword ptr [g_dword_7b8d70]
        mov ecx, 0xc
        lea edi, [esp + 0x48]
        rep movsd
        mov ecx, dword ptr [g_dword_7b8d68]
        mov dword ptr [esp + 0x7c], edx
        lea edx, [esp + 0x48]
        mov dword ptr [esp + 0x78], ecx
        mov ecx, dword ptr [ebp + 0x18]
        push edx
        push ecx
        mov dword ptr [esp + 0x88], eax
        call FUN_004188e0
        pop esi
        pop edi
        pop ebp
        mov al, 0x1
        pop ebx
        add esp, 0x78
        ret 0x4
    }
}
