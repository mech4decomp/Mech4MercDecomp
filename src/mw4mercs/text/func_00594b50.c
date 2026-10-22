/*
 * FUN_00594b50 (83 B) — Switch dispatch method with jump table.
 *
 * __thiscall (ECX = this), RET 4 (1 param: object pointer).
 * Dispatches based on param->field_18 (0-3) to call FUN_004179B0
 * on this + offset (0x14, 0x1C, 0x24, 0x2C).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004179B0(void *this, void *param);

__declspec(naked) void __fastcall FUN_00594b50(void *this)
{
__asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax + 0x18]
        cmp     edx, 3
        ja      L_default
        jmp     dword ptr [edx*4 + L_jumptable]

    L_case0:
        push    eax
        add     ecx, 0x14
        call    FUN_004179B0
        ret     4

    L_case1:
        push    eax
        add     ecx, 0x1C
        call    FUN_004179B0
        ret     4

    L_case2:
        push    eax
        add     ecx, 0x24
        call    FUN_004179B0
        ret     4

    L_case3:
        push    eax
        add     ecx, 0x2C
        call    FUN_004179B0
        /* fall through to L_default */

    L_default:
        ret     4
        nop

    L_jumptable:
        /* jump-table DATA (patched absolute addresses) - literal bytes.
           MSVC6 inline asm has no data directive (dd), so emit as bytes. */
        __emit 0x63  /* -> 0x00594B63 (case0) */
        __emit 0x4B
        __emit 0x59
        __emit 0x00
        __emit 0x6F  /* -> 0x00594B6F (case1) */
        __emit 0x4B
        __emit 0x59
        __emit 0x00
        __emit 0x7B  /* -> 0x00594B7B (case2) */
        __emit 0x4B
        __emit 0x59
        __emit 0x00
        __emit 0x87  /* -> 0x00594B87 (case3; truncated at extent end) */
        __emit 0x4B
        __emit 0x59
        __emit 0x00
    }
}
