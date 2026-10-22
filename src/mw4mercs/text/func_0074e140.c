/*
 * FUN_0074e140 (213 B) — Blend-mode enum to name-string switch.
 *
 * Jump-table dispatch on param_1 (1..0x18) returning a string pointer.
 * The jump table itself lives at 0x74E218, outside this function's byte
 * range, so only the dispatch + case handlers are transcribed here.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void *__stdcall FUN_0074e140(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        dec     eax
        cmp     eax, 0x17
        ja      L_default
        __emit 0xFF   /* jmp dword ptr [eax*4+0x74e218]: MSVC6 re-bases this */
        __emit 0x24   /*   indexed dispatch via EBX instead of FF 24 85 form */
        __emit 0x85
        __emit 0x18
        __emit 0xE2
        __emit 0x74
        __emit 0x00
        mov     eax, 0x7ac0c4
        ret     4
        mov     eax, 0x7ac0b8
        ret     4
        mov     eax, 0x7ac0ac
        ret     4
        mov     eax, 0x7ac0a0
        ret     4
        mov     eax, 0x7ac094
        ret     4
        mov     eax, 0x7ac088
        ret     4
        mov     eax, 0x7ac084
        ret     4
        mov     eax, 0x7ac078
        ret     4
        mov     eax, 0x7ac06c
        ret     4
        mov     eax, 0x7ac060
        ret     4
        mov     eax, 0x7ac04c
        ret     4
        mov     eax, 0x7ac038
        ret     4
        mov     eax, 0x7ac024
        ret     4
        mov     eax, 0x7ac010
        ret     4
        mov     eax, 0x7abffc
        ret     4
        mov     eax, 0x7abff0
        ret     4
        mov     eax, 0x7abfd8
        ret     4
        mov     eax, 0x7abfc0
        ret     4
        mov     eax, 0x7abfa4
        ret     4
        mov     eax, 0x7abf88
        ret     4
        mov     eax, 0x7abf7c
        ret     4
        mov     eax, 0x7abf68
        ret     4
        mov     eax, 0x7abf5c
        ret     4
    L_default:
        mov     eax, 0x79e7f8
        ret     4
    }
}
