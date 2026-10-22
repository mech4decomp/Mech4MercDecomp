/* func_006a2340.c - inline-asm transcription of FUN_006a2340 (178 B) */

extern float g_799d40;
extern float g_77a1a0;
extern float g_76d064;
extern void __cdecl FUN_006a5700(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_006a5190(void);

__declspec(naked) unsigned int func_006a2340(void)
{
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp+0xc]
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax+0xe8]
        test al, al
        jz L23ed
        push 0x3f
        push 0x3e
        push esi
        call FUN_006a5700
        fcomp dword ptr [g_799d40]
        add esp, 0xc
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT DF E0 form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 not encodable in MSVC6 */
        __emit 0xC4
        __emit 0x01
        jnz L23ed
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx+0x90]
        mov dword ptr [esp+0xc], eax
        fild dword ptr [esp+0xc]
        push 0x5a
        fmul dword ptr [g_77a1a0]
        fstp dword ptr [esp+0x10]
        call FUN_00637b40
        mov ecx, eax
        call FUN_00637a20
        fstp dword ptr [esp+0x4]
        push 0x59
        call FUN_00637b40
        mov ecx, eax
        call FUN_00637a20
        fld dword ptr [g_76d064]
        fsub dword ptr [esp+0xc]
        push ecx
        fmul st(0), st(1)
        fld dword ptr [esp+0x8]
        fmul dword ptr [esp+0x10]
        faddp st(1), st(0)
        fstp dword ptr [esp]
        push esi
        fstp st(0)
        call FUN_006a5190
        fcomp dword ptr [g_799d40]
        add esp, 0x8
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT DF E0 form */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 not encodable in MSVC6 */
        __emit 0xC4
        __emit 0x01
        jz L23e8
        mov eax, 0x1
        pop esi
        pop ecx
        ret
L23e8:
        xor eax, eax
        pop esi
        pop ecx
        ret
L23ed:
        xor al, al
        pop esi
        pop ecx
        ret
    }
}
