/*
 * FUN_00692c60 (25 B) - HUD element helper: invokes a virtual method (offset
 * 0x14) with 0x7c then calls FUN_00674dd0 on the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00674dd0(void *a);

__declspec(naked) void FUN_00692c60(void *param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        push    0x7c
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_00674dd0
        add     esp, 0x4
        pop     esi
        ret
    }
}
