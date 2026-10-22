/*
 * FUN_005dd7a0 (578 B) — __thiscall, RET 4 (one stack param).
 *
 * Returns a string pointer for the current ABL state. If [this+0x30c]
 * is non-null, returns its [ptr+0x18] (refcounted). Otherwise switches
 * on ([this+0x170]->[0x30] % 0x16) via a jump table at 0x5dd9e4 and
 * calls FUN_00412570 with a per-case string constant.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00412570(void);

__declspec(naked) void __cdecl func_005dd7a0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x30c]
        test    eax, eax
        push    esi
        jz      L7C3
        mov     ecx, dword ptr [eax + 0x18]
        test    ecx, ecx
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [eax], ecx
        jz      L9DE
        inc     byte ptr [ecx - 0x1]
        pop     esi
        ret     4
L7C3:
        mov     ecx, dword ptr [ecx + 0x170]
        test    ecx, ecx
        jnz     L7E3
        mov     esi, dword ptr [esp + 0x8]
        push    0x76b768
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L7E3:
        mov     eax, dword ptr [ecx + 0x30]
        cdq
        mov     ecx, 0x16
        idiv    ecx
        cmp     edx, 0x14
        ja      L9CC
        jmp     dword ptr [edx * 4 + 0x5dd9e4]
L7FE:
        mov     esi, dword ptr [esp + 0x8]
        push    0x788608
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L814:
        mov     esi, dword ptr [esp + 0x8]
        push    0x788600
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L82A:
        mov     esi, dword ptr [esp + 0x8]
        push    0x7885f8
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L840:
        mov     esi, dword ptr [esp + 0x8]
        push    0x7885f0
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L856:
        mov     esi, dword ptr [esp + 0x8]
        push    0x7885e8
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L86C:
        mov     esi, dword ptr [esp + 0x8]
        push    0x7885e0
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L882:
        mov     esi, dword ptr [esp + 0x8]
        push    0x7885d8
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L898:
        mov     esi, dword ptr [esp + 0x8]
        push    0x7885d0
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L8AE:
        mov     esi, dword ptr [esp + 0x8]
        push    0x7885c8
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L8C4:
        mov     esi, dword ptr [esp + 0x8]
        push    0x7885c0
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L8DA:
        mov     esi, dword ptr [esp + 0x8]
        push    0x7885b8
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L8F0:
        mov     esi, dword ptr [esp + 0x8]
        push    0x7885b0
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L906:
        mov     esi, dword ptr [esp + 0x8]
        push    0x7885a8
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L91C:
        mov     esi, dword ptr [esp + 0x8]
        push    0x7885a0
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L932:
        mov     esi, dword ptr [esp + 0x8]
        push    0x788598
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L948:
        mov     esi, dword ptr [esp + 0x8]
        push    0x788590
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L95E:
        mov     esi, dword ptr [esp + 0x8]
        push    0x788588
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L974:
        mov     esi, dword ptr [esp + 0x8]
        push    0x788580
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L98A:
        mov     esi, dword ptr [esp + 0x8]
        push    0x788578
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L9A0:
        mov     esi, dword ptr [esp + 0x8]
        push    0x788570
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L9B6:
        mov     esi, dword ptr [esp + 0x8]
        push    0x788568
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
        pop     esi
        ret     4
L9CC:
        mov     esi, dword ptr [esp + 0x8]
        push    0x788560
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, esi
L9DE:
        pop     esi
        ret     4
    }
}
