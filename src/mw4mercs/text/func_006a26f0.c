/* func_006a26f0.c - inline-asm transcription of FUN_006a26f0 (269 B) */

extern float g_799d40;
extern float g_77a1a0;
extern float g_76d064;
extern float g_76c5b0;
extern void __cdecl FUN_006a5700(void);
extern void __cdecl FUN_006a4a40(void);
extern void __cdecl FUN_006a2500(void);
extern void __cdecl FUN_006a4b00(void);
extern void __cdecl FUN_006a4ec0(void);
extern void __cdecl FUN_00664b10(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_00637a20(void);

__declspec(naked) void func_006a26f0(void)
{
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp+0xc]
        push edi
        push 0x3b
        push 0x3a
        push esi
        mov edi, ecx
        call FUN_006a5700
        fcomp dword ptr [g_799d40]
        add esp, 0xc
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT DF E0 form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 not encodable in MSVC6 */
        __emit 0xC4
        __emit 0x01
        jnz L273c
        push 0x42a00000
        push esi
        call FUN_006a4a40
        fcomp dword ptr [g_799d40]
        add esp, 0x8
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT DF E0 form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 not encodable in MSVC6 */
        __emit 0xC4
        __emit 0x01
        jnz L273c
        push esi
        mov ecx, edi
        call FUN_006a2500
        pop edi
        pop esi
        pop ecx
        ret 0x4
L273c:
        push 0x3d
        push 0x3c
        push esi
        call FUN_006a5700
        fcomp dword ptr [g_799d40]
        add esp, 0xc
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT DF E0 form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 not encodable in MSVC6 */
        __emit 0xC4
        __emit 0x01
        jnz L27d2
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax+0x90]
        mov dword ptr [esp+0x10], eax
        fild dword ptr [esp+0x10]
        push 0x5c
        fmul dword ptr [g_77a1a0]
        fstp dword ptr [esp+0x14]
        call FUN_00637b40
        mov ecx, eax
        call FUN_00637a20
        fstp dword ptr [esp+0x8]
        push 0x5b
        call FUN_00637b40
        mov ecx, eax
        call FUN_00637a20
        fld dword ptr [g_76d064]
        fsub dword ptr [esp+0x10]
        push ecx
        fmul st(0), st(1)
        fld dword ptr [esp+0xc]
        fmul dword ptr [esp+0x14]
        faddp st(1), st(0)
        fstp dword ptr [esp]
        push esi
        fstp st(0)
        call FUN_006a4b00
        fcomp dword ptr [g_799d40]
        add esp, 0x8
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT DF E0 form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 not encodable in MSVC6 */
        __emit 0xC4
        __emit 0x01
        jnz L27d2
        push esi
        mov ecx, edi
        call FUN_006a2500
        pop edi
        pop esi
        pop ecx
        ret 0x4
L27d2:
        push esi
        call FUN_006a4ec0
        fcomp dword ptr [g_799d40]
        add esp, 0x4
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT DF E0 form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 not encodable in MSVC6 */
        __emit 0xC4
        __emit 0x01
        jnz L27f1
        push esi
        call FUN_00664b10
        add esp, 0x4
L27f1:
        fld dword ptr [g_76c5b0]
        pop edi
        pop esi
        pop ecx
        ret 0x4
    }
}
