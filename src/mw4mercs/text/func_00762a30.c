/*
 * FUN_00762a30 (350 B) — Dispatcher that validates parameters and an
 * object, then calls a helper (FUN_00762ba0) and an indirect function
 * pointer. Returns 0xb on any validation failure.
 *
 * The function contains four "jump chains": each is `EB 04` + 4 junk
 * bytes (D6 D6 3C 00, never executed — jumped over) + 27x `EB 00`
 * (jump-to-next). This distinctive padding/obfuscation pattern is
 * present verbatim in the reference bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00762ba0(void *a, void *b, void *c, void *d);

__declspec(naked) int __stdcall FUN_00762a30(void *p1, void *p2, void *p3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi
        jmp     L1
        /* __emit: junk bytes D6 D6 3C 00 (SALC;SALC;CMP AL,0) never executed - jumped over by the EB 04 above; MSVC6 cannot emit SALC */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L1:     jmp     L2
L2:     jmp     L3
L3:     jmp     L4
L4:     jmp     L5
L5:     jmp     L6
L6:     jmp     L7
L7:     jmp     L8
L8:     jmp     L9
L9:     jmp     L10
L10:    jmp     L11
L11:    jmp     L12
L12:    jmp     L13
L13:    jmp     L14
L14:    jmp     L15
L15:    jmp     L16
L16:    jmp     L17
L17:    jmp     L18
L18:    jmp     L19
L19:    jmp     L20
L20:    jmp     L21
L21:    jmp     L22
L22:    jmp     L23
L23:    jmp     L24
L24:    jmp     L25
L25:    jmp     L26
L26:    jmp     L27
L27:    jmp     L28
L28:    mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jz      L_62b94
        mov     esi, dword ptr [ebp + 0x8]
        test    esi, esi
        jz      L_62b94
        mov     ecx, dword ptr [esi + 0x28]
        test    ecx, ecx
        jz      L_62b94
        mov     edi, dword ptr [esi + 0x20]
        jmp     M1
        /* __emit: junk bytes D6 D6 3C 00 (never executed) */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
M1:     jmp     M2
M2:     jmp     M3
M3:     jmp     M4
M4:     jmp     M5
M5:     jmp     M6
M6:     jmp     M7
M7:     jmp     M8
M8:     jmp     M9
M9:     jmp     M10
M10:    jmp     M11
M11:    jmp     M12
M12:    jmp     M13
M13:    jmp     M14
M14:    jmp     M15
M15:    jmp     M16
M16:    jmp     M17
M17:    jmp     M18
M18:    jmp     M19
M19:    jmp     M20
M20:    jmp     M21
M21:    jmp     M22
M22:    jmp     M23
M23:    jmp     M24
M24:    jmp     M25
M25:    jmp     M26
M26:    jmp     M27
M27:    jmp     M28
M28:    test    edi, edi
        jz      L_62b94
        cmp     word ptr [esi + 0x8], 0x0
        jz      L_62b94
        mov     ebx, dword ptr [ebp + 0x10]
        lea     ecx, [esi + 0xa]
        push    ebx
        push    eax
        mov     eax, dword ptr [esi + 0x1c]
        push    eax
        push    ecx
        call    FUN_00762ba0
        mov     eax, dword ptr [edi + 0x8]
        add     esp, 0x10
        test    eax, eax
        jz      L_62b94
        jmp     N1
        /* __emit: junk bytes D6 D6 3C 00 (never executed) */
    __emit 0xD6
    __emit 0xD6
    __emit 0x3C
    __emit 0x00
N1:     jmp     N2
N2:     jmp     N3
N3:     jmp     N4
N4:     jmp     N5
N5:     jmp     N6
N6:     jmp     N7
N7:     jmp     N8
N8:     jmp     N9
N9:     jmp     N10
N10:    jmp     N11
N11:    jmp     N12
N12:    jmp     N13
N13:    jmp     N14
N14:    jmp     N15
N15:    jmp     N16
N16:    jmp     N17
N17:    jmp     N18
N18:    jmp     N19
N19:    jmp     N20
N20:    jmp     N21
N21:    jmp     N22
N22:    jmp     N23
N23:    jmp     N24
N24:    jmp     N25
N25:    jmp     N26
N26:    jmp     N27
N27:    jmp     N28
N28:    mov     edx, dword ptr [esi + 0x28]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [esi]
        push    edx
        push    ebx
        push    eax
        push    ecx
        call    dword ptr [edi + 0x8]
        add     esp, 0x10
        jmp     O1
        /* __emit: junk bytes D6 D6 3C 00 (never executed) */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
O1:     jmp     O2
O2:     jmp     O3
O3:     jmp     O4
O4:     jmp     O5
O5:     jmp     O6
O6:     jmp     O7
O7:     jmp     O8
O8:     jmp     O9
O9:     jmp     O10
O10:    jmp     O11
O11:    jmp     O12
O12:    jmp     O13
O13:    jmp     O14
O14:    jmp     O15
O15:    jmp     O16
O16:    jmp     O17
O17:    jmp     O18
O18:    jmp     O19
O19:    jmp     O20
O20:    jmp     O21
O21:    jmp     O22
O22:    jmp     O23
O23:    jmp     O24
O24:    jmp     O25
O25:    jmp     O26
O26:    jmp     O27
O27:    jmp     O28
O28:    pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L_62b94:
        pop     edi
        pop     esi
        mov     eax, 0xb
        pop     ebx
        pop     ebp
        ret
    }
}
