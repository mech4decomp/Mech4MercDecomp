/*
 * FUN_00765e50 (220 B) — virtual dispatch helper.
 *
 * If param1 (ECX) and param2 are both non-null, calls
 * (*(param1+0x20))(param2, *(param2+8), 4) and returns 10; else returns 11.
 *
 * The body is padded with an obfuscation pattern that is real bytes in the
 * binary: `EB 04` (jmp +4) skipping 4 garbage bytes (D6 D6 3C 00), followed by
 * runs of `EB 00` (jmp +0) no-ops. The EB 00 runs are transcribed as real
 * `jmp` mnemonics to the immediately-following label (encodes as EB 00); only
 * the 4 jumped-over garbage bytes per block need __emit.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00765e50(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 8]
        test    ecx, ecx
        jz      L_retB
        mov     eax, dword ptr [ebp + 0xC]
        test    eax, eax
        jz      L_retB

        /* EB 04 over 4 garbage bytes (D6 D6 3C 00) */
        jmp     L_p1
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_p1:
        jmp     L1
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
L27:
        /* EB 04 over 4 garbage bytes (D6 D6 3C 00) */
        jmp     L_p2
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_p2:
        jmp     L28
L28:    jmp     L29
L29:    jmp     L30
L30:    jmp     L31
L31:    jmp     L32
L32:    jmp     L33
L33:    jmp     L34
L34:    jmp     L35
L35:    jmp     L36
L36:    jmp     L37
L37:    jmp     L38
L38:    jmp     L39
L39:    jmp     L40
L40:    jmp     L41
L41:    jmp     L42
L42:    jmp     L43
L43:    jmp     L44
L44:    jmp     L45
L45:    jmp     L46
L46:    jmp     L47
L47:    jmp     L48
L48:    jmp     L49
L49:    jmp     L50
L50:    jmp     L51
L51:    jmp     L52
L52:    jmp     L53
L53:    jmp     L54
L54:
        mov     edx, dword ptr [eax + 8]
        push    4
        push    edx
        push    eax
        call    dword ptr [ecx + 0x20]
        add     esp, 0xC

        /* EB 04 over 4 garbage bytes (D6 D6 3C 00) */
        jmp     L_p3
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_p3:
        jmp     L55
L55:    jmp     L56
L56:    jmp     L57
L57:    jmp     L58
L58:    jmp     L59
L59:    jmp     L60
L60:    jmp     L61
L61:    jmp     L62
L62:    jmp     L63
L63:    jmp     L64
L64:    jmp     L65
L65:    jmp     L66
L66:    jmp     L67
L67:    jmp     L68
L68:    jmp     L69
L69:    jmp     L70
L70:    jmp     L71
L71:    jmp     L72
L72:    jmp     L73
L73:    jmp     L74
L74:    jmp     L75
L75:    jmp     L76
L76:    jmp     L77
L77:    jmp     L78
L78:    jmp     L79
L79:    jmp     L80
L80:    jmp     L81
L81:
        mov     eax, 0xA
        pop     ebp
        ret

L_retB:
        mov     eax, 0xB
        pop     ebp
        ret
    }
}
