/*
 * FUN_005dec20 (513 B) — __thiscall (ECX = this), plain RET. Compares the
 * string at this+0x18 against a table of faction/mech-type suffixes via
 * _stricmp (function pointer at 0x0076b2ac), returning the matching index
 * (0..20) or a computed fallback value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_005dec20(void)
{
    

extern int DAT_0076b2ac;
__asm {
push    esi
        mov     esi, dword ptr [ecx + 0x18]
        push    edi
        mov edi, dword ptr [DAT_0076b2ac]
        push    0x788608
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_3D
        pop     edi
        pop     esi
        ret
L_3D:
        push    0x788600
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_54
        pop     edi
        mov     eax, 0x1
        pop     esi
        ret
L_54:
        push    0x7885F8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_6B
        pop     edi
        mov     eax, 0x2
        pop     esi
        ret
L_6B:
        push    0x7885F0
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_82
        pop     edi
        mov     eax, 0x3
        pop     esi
        ret
L_82:
        push    0x7885E8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_99
        pop     edi
        mov     eax, 0x4
        pop     esi
        ret
L_99:
        push    0x7885E0
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_B0
        pop     edi
        mov     eax, 0x5
        pop     esi
        ret
L_B0:
        push    0x7885D8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_C7
        pop     edi
        mov     eax, 0x6
        pop     esi
        ret
L_C7:
        push    0x7885D0
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_DE
        pop     edi
        mov     eax, 0x7
        pop     esi
        ret
L_DE:
        push    0x7885C8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_F5
        pop     edi
        mov     eax, 0x8
        pop     esi
        ret
L_F5:
        push    0x7885C0
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_10C
        pop     edi
        mov     eax, 0x9
        pop     esi
        ret
L_10C:
        push    0x7885B8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_123
        pop     edi
        mov     eax, 0xA
        pop     esi
        ret
L_123:
        push    0x7885B0
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_13A
        pop     edi
        mov     eax, 0xB
        pop     esi
        ret
L_13A:
        push    0x7885A8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_151
        pop     edi
        mov     eax, 0xC
        pop     esi
        ret
L_151:
        push    0x7885A0
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_168
        pop     edi
        mov     eax, 0xD
        pop     esi
        ret
L_168:
        push    0x788598
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_17F
        pop     edi
        mov     eax, 0xE
        pop     esi
        ret
L_17F:
        push    0x788590
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_196
        pop     edi
        mov     eax, 0xF
        pop     esi
        ret
L_196:
        push    0x788588
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_1AD
        pop     edi
        mov     eax, 0x10
        pop     esi
        ret
L_1AD:
        push    0x788580
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_1C4
        pop     edi
        mov     eax, 0x11
        pop     esi
        ret
L_1C4:
        push    0x788578
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_1DB
        pop     edi
        mov     eax, 0x12
        pop     esi
        ret
L_1DB:
        push    0x788570
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_1F2
        pop     edi
        mov     eax, 0x13
        pop     esi
        ret
L_1F2:
        push    0x788568
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_209
        pop     edi
        mov     eax, 0x14
        pop     esi
        ret
L_209:
        push    0x788560
        push    esi
        call    edi
        add     esp, 8
        neg     eax
        sbb     eax, eax
        and     eax, 0xFFFFFFEA
        pop     edi
        add     eax, 0x15
        pop     esi
        ret
    }


}
