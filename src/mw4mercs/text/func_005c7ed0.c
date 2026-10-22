/*
 * FUN_005C7ED0 (102 B) — __thiscall, returns float (in ST0).
 * Returns a float scaled by global 0x007878e4, choosing a code path
 * (0x64 / 0x63 / 0x62) based on FUN_005c7f40 / FUN_00415230 results.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005c7f40(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00415230(void);

__declspec(naked) float __cdecl FUN_005c7ed0(void *param_1)
{
    
__asm {
push    esi
        mov     esi, ecx
        call    FUN_005c7f40
        cmp     al, 1
        jnz     l_path2
        push    0x64
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        _emit   0xD8            /* __emit: fmul dword ptr [imm32] -> FPU mem operand w/ abs addr not supported */
        _emit   0x0D
        _emit   0xE4
        _emit   0x78
        _emit   0x78
        _emit   0x00
        pop     esi
        ret

    l_path2:
        _emit   0xA1            /* __emit: mov eax,[imm32] -> A1 moffs form */
        _emit   0x04
        _emit   0x21
        _emit   0x7F
        _emit   0x00
        push    eax
        mov     eax, [esi + 0x170]
        mov     ecx, [eax + 4]
        call    FUN_00415230
        cmp     al, 1
        jnz     l_path3
        push    0x63
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        _emit   0xD8            /* __emit: fmul dword ptr [imm32] -> FPU mem operand w/ abs addr not supported */
        _emit   0x0D
        _emit   0xE4
        _emit   0x78
        _emit   0x78
        _emit   0x00
        pop     esi
        ret

    l_path3:
        push    0x62
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        _emit   0xD8            /* __emit: fmul dword ptr [imm32] -> FPU mem operand w/ abs addr not supported */
        _emit   0x0D
        _emit   0xE4
        _emit   0x78
        _emit   0x78
        _emit   0x00
        pop     esi
        ret
    }


}
