/*
 * FUN_00637c30 (47 B) — __thiscall (RET 0x10, four stack params).
 *
 * Calls FUN_00637bf0(param_1, param_2, param_3) on this, then calls
 * FUN_00637a20(ret + (param_4 - param_2)) on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00637bf0(void);
extern void __stdcall FUN_00637a20(void);

__declspec(naked) void __stdcall FUN_00637c30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_00637bf0
        mov     edx, dword ptr [esp + 0x18]
        sub     edx, edi
        add     eax, edx
        push    eax
        mov     ecx, esi
        call    FUN_00637a20
        pop     edi
        pop     esi
        ret     0x10
    }
}
