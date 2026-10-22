/*
 * FUN_00692380 (28 B) - HUD element helper: invokes a virtual method (offset
 * 0x14) with 0x88 then calls FUN_00675620 on the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00675620(void *a);

__declspec(naked) void FUN_00692380(void *param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        push    0x88
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_00675620
        add     esp, 0x4
        pop     esi
        ret
    }
}
