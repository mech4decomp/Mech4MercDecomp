/*
 * FUN_004CECA0 (35 B) — Init sub-objects and set field.
 *
 * __thiscall (ECX = this), RET 4.
 * Calls FUN_004CECF0 on param, then FUN_00415CA0 on this+0x14,
 * then sets param->field_18 = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004cecf0(void *ptr);
extern void __stdcall FUN_00415ca0(void);

__declspec(naked) void __stdcall FUN_004ceca0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x0c]
        mov     esi, ecx
        push    edi
        call    FUN_004cecf0
        push    edi
        lea     ecx, [esi + 0x14]
        call    FUN_00415ca0
        mov     dword ptr [edi + 0x18], 0
        pop     edi
        pop     esi
        ret     4
    }
}
