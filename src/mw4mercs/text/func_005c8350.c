/*
 * FUN_005C8350 (152 B) — __thiscall, void.
 * Calls FUN_00415230(global 0x007f1f84); if true, compares a float sum
 * against FUN_00707e70(0) and dispatches on [esi+0x5b8] to one of
 * FUN_005eb100 / FUN_005eb260 / FUN_005eb380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_005eb100(void);
extern void __cdecl FUN_005eb260(void);
extern void __cdecl FUN_005eb380(void);

__declspec(naked) void __cdecl FUN_005c8350(void *param_1)
{
    
__asm {
_emit   0xA1            /* __emit: mov eax,[imm32] -> A1 moffs form */
        _emit   0x84
        _emit   0x1F
        _emit   0x7F
        _emit   0x00
        sub     esp, 8
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, [esi + 0x170]
        mov     ecx, [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      l_done
        _emit   0xD9            /* __emit: fld dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x05
        _emit   0x1C
        _emit   0x79
        _emit   0x78
        _emit   0x00
        push    0
        fadd    dword ptr [esi + 0x5bc]
        fstp    qword ptr [esp + 0xc]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 8]
        _emit   0xDF            /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix */
        _emit   0xE0
        test    ah, 0x41
        jnz     l_skip_set
        mov     dword ptr [esi + 0x5b8], 2
    l_skip_set:
        mov     eax, [edi + 0x410]
        mov     edx, [edi + 0x40c]
        sub     eax, edx
        sar     eax, 2
        jz      l_zero
        mov     ecx, edx
        mov     ecx, [ecx]
        jmp     l_after
    l_zero:
        xor     ecx, ecx
    l_after:
        mov     esi, [esi + 0x5b8]
        sub     esi, 0
        jz      l_case0
        dec     esi
        jz      l_case1
        dec     esi
        jnz     l_done
        call    FUN_005eb100
        pop     edi
        pop     esi
        add     esp, 8
        ret
    l_case1:
        call    FUN_005eb260
        pop     edi
        pop     esi
        add     esp, 8
        ret
    l_case0:
        call    FUN_005eb380
    l_done:
        pop     edi
        pop     esi
        add     esp, 8
        ret
    }


}
