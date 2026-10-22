/*
 * FUN_005C80E0 (42 B) — __thiscall, RET 4.
 * If [ecx+0x5b8] != param_1, calls FUN_00707e70(0), stores the returned
 * float into [ecx+0x5c0], and sets [ecx+0x5b8] = param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);

__declspec(naked) void __cdecl FUN_005c80e0(void *param_1, int param_2)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, [esi + 0x5b8]
        push    edi
        mov     edi, [esp + 0xc]
        cmp     eax, edi
        jz      l_done
        push    0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x5c0]
        mov     [esi + 0x5b8], edi
    l_done:
        pop     edi
        pop     esi
        ret     4
    }
}
