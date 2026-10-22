/*
 * FUN_1001c770 (42 B) — __stdcall.
 * Calls FUN_1001c460(param_1), then dispatches through vtable slot
 * [obj+0xc]->vtable[0x1c] with (obj+0xc, g_10075060, 0x10049b8c, obj+0x1c).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c460(void);
extern int g_10075060;

__declspec(naked) void FUN_1001c770(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        push    ecx
        call    FUN_1001c460
        test    eax, eax
        __emit 0x7C  /* __emit: MSVC6 peephole rewrites JL-after-TEST to JS (78); ref uses JL (7C) */
        __emit 0x19  /* rel8 to skip label */
        mov     eax, dword ptr [ecx + 0xc]
        mov     edx, dword ptr [eax]
        add     ecx, 0x1c
        push    ecx
        mov     ecx, dword ptr [g_10075060]
        push    0x10049b8c
        push    ecx
        push    eax
        call    dword ptr [edx + 0x1c]
    skip:
        ret     0x4
    }
}
