/* func_006a29d0.c - inline-asm transcription of FUN_006a29d0 (95 B) */

extern float g_76c5b0;
extern float g_76d064;
extern void __cdecl FUN_006a26f0(void);

__declspec(naked) void func_006a29d0(void)
{
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp+0xc]
        mov esi, ecx
        mov eax, dword ptr [esi+0xc]
        lea ecx, [esi+0xc]
        push edi
        call dword ptr [eax]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT DF E0 form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 not encodable in MSVC6 */
        __emit 0xC4
        __emit 0x41
        jz L2a24
        push edi
        mov ecx, esi
        call FUN_006a26f0
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT DF E0 form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 not encodable in MSVC6 */
        __emit 0xC4
        __emit 0x41
        jz L2a24
        mov edx, dword ptr [esi+0x1c]
        lea ecx, [esi+0x1c]
        push edi
        call dword ptr [edx]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT DF E0 form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 not encodable in MSVC6 */
        __emit 0xC4
        __emit 0x41
        jz L2a24
        fld dword ptr [g_76c5b0]
        pop edi
        pop esi
        ret 0x4
L2a24:
        fld dword ptr [g_76d064]
        pop edi
        pop esi
        ret 0x4
    }
}
