/*
 * FUN_00597280 (87 B) — Mission type to string conversion.
 *
 * __cdecl, takes an int mission type, returns a string pointer.
 * 0 -> "Normal", 1 -> "Defend", 2 -> "Rescue", 3 -> "Raid",
 * default -> "Bad" (after assertion).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006FABF0(const char *msg);

/* String constants in .rdata */
extern const char _str_mission_assert;  /* "That is not a valid Mission Type" @ 0x7831D8 */
extern const char _str_raid;            /* "Raid" @ 0x7831B8 */
extern const char _str_rescue;          /* "Rescue" @ 0x7831C0 */
extern const char _str_defend;          /* "Defend" @ 0x7831C8 */
extern const char _str_normal;          /* "Normal" @ 0x7831D0 */
extern const char _str_bad;             /* "Bad" @ 0x783164 */

__declspec(naked) const char *__cdecl FUN_00597280(int type)
{
__asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        cmp     eax, 3
        ja      L_default
        jmp     dword ptr [eax*4 + L_jumptable]

    L_case0:
        mov     eax, OFFSET _str_normal
        pop     ebp
        ret

    L_case1:
        mov     eax, OFFSET _str_defend
        pop     ebp
        ret

    L_case2:
        mov     eax, OFFSET _str_rescue
        pop     ebp
        ret

    L_case3:
        mov     eax, OFFSET _str_raid
        pop     ebp
        ret

    L_default:
        push    OFFSET _str_mission_assert
        call    FUN_006FABF0
        add     esp, 4
        test    eax, eax
        je      L_skip_int3
        int     3
    L_skip_int3:
        mov     eax, OFFSET _str_bad
        pop     ebp
        ret
        nop

    L_jumptable:
        /* jump-table DATA (patched absolute addresses) - literal bytes.
           MSVC6 inline asm has no data directive (dd), so emit as bytes. */
        __emit 0x92  /* -> 0x00597292 (case0) */
        __emit 0x72
        __emit 0x59
        __emit 0x00
        __emit 0x99  /* -> 0x00597299 (case1) */
        __emit 0x72
        __emit 0x59
        __emit 0x00
        __emit 0xA0  /* -> 0x005972A0 (case2) */
        __emit 0x72
        __emit 0x59
        __emit 0x00
        __emit 0xA7  /* -> 0x005972A7 (case3; truncated at extent end) */
        __emit 0x72
        __emit 0x59
    }
}
