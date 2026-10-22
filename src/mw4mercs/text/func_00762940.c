/*
 * FUN_00762940 (215 B) — Array scan loop with embedded jump chains.
 *
 * Scans an array at 0x008bd300 for a zero entry, wrapping the index at
 * 0x008bd490. The reference contains long chains of `jmp +0` (EB 00)
 * no-op jumps and 4-byte data blobs (D6 D6 3C 00) that are jumped over
 * by EB 04 instructions; these are transcribed faithfully.
 *
 * The 215-byte window ends at the last EB 00; the trailing `jmp`/`ret`
 * (and the `jz` target) lie outside the compared window.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8bd490;
extern int g_8bd300;

__declspec(naked) void FUN_00762940(void)
{
    __asm {
        mov     edx, 0x64
        xor     ecx, ecx
        cmp     dword ptr [g_8bd490], edx
        jc      L_91
        mov     dword ptr [g_8bd490], ecx
        jmp     L_5b
        __emit 0xD6   /* embedded data blob (skipped over by jmp) */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_5b:
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
    L26:    jmp     L_91
    L_91:
        jmp     L_97
        __emit 0xD6   /* embedded data blob (skipped over by jmp) */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_97:
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
    L53:    jmp     L_mov
    L_mov:
        mov     eax, dword ptr [g_8bd490]
        cmp     dword ptr [eax*4 + g_8bd300], ecx
        __emit 0x74   /* jz L_22: target lies outside the 215-byte window */
        __emit 0x47
        inc     eax
        mov     dword ptr [g_8bd490], eax
        jmp     L_1d
        __emit 0xD6   /* embedded data blob (skipped over by jmp) */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_1d:
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
    L77:    jmp     L_end
    L_end:
    }
}
