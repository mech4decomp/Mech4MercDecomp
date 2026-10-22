/*
 * FUN_006478c0 (47 B) — __fastcall (ECX = param_1), RET 4 (one stack param).
 *
 * Calls FUN_00647eb0 on this+0x18 with two stack args, compares the
 * returned value against *(this+0x18), and returns either -2 or a field.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00647eb0(void);

__declspec(naked) void __fastcall FUN_006478c0(void)
{
    __asm {
        push    ecx
        push    esi
        lea     esi, [ecx + 0x18]
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, esi
        call    FUN_00647eb0
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [eax]
        cmp     eax, ecx
        pop     esi
        jnz     L_ret
        mov     eax, 0xfffffffe
        pop     ecx
        ret     4
L_ret:
        mov     eax, dword ptr [eax + 0x14]
        pop     ecx
        ret     4
    }
}
