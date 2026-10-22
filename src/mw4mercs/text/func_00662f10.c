/*
 * FUN_00662f10 (149 B) — __thiscall candidate test: walks several
 * vtable slots (0x114, 0x8c, 0x118, 0x4c, 0x70, 0x108) with FPU
 * distance comparison and returns a bool.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char FUN_00662f10(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x114]
        test    al, al
        jnz     L1
        pop     esi
        add     esp, 0xc
        ret
L1:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x8c]
        cmp     al, 1
        jnz     L2
        pop     esi
        add     esp, 0xc
        ret
L2:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x118]
        cmp     al, 1
        jnz     L3
        xor     al, al
        pop     esi
        add     esp, 0xc
        ret
L3:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4c]
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        fcompp
        __emit 0xDF   /* __emit: FNSTSW AX no-WAIT (DF E0); MSVC6 adds 9B WAIT */
        __emit 0xE0
        __emit 0xF6   /* __emit: TEST AH,0x41 (F6 C4 41); MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L4
        mov     al, 1
        pop     esi
        add     esp, 0xc
        ret
L4:
        mov     eax, dword ptr [esi]
        push    0
        lea     ecx, [esp + 8]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x70]
        test    al, al
        jnz     L5
        mov     al, 1
        pop     esi
        add     esp, 0xc
        ret
L5:
        mov     edx, dword ptr [esi]
        push    0x40a00000
        mov     ecx, esi
        call    dword ptr [edx + 0x108]
        neg     al
        sbb     al, al
        inc     al
        pop     esi
        add     esp, 0xc
        ret
    }
}
