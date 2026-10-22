/*
 * FUN_005df070 (33 B) — __thiscall (ECX = this), RET 4.
 *
 * Saves this in ESI, calls FUN_00412570(param), then calls
 * FUN_005df0d0 (this) and sets byte [EAX+0x24] = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00412570(void *param);
extern int __stdcall FUN_005df0d0(void *param);

__declspec(naked) void __stdcall FUN_005df070(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    0x0
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_00412570
        mov     ecx, esi
        call    FUN_005df0d0
        mov     byte ptr [eax + 0x24], 0x1
        pop     esi
        ret     4
    }
}
