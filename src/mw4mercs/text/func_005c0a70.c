/*
 * FUN_005C0A70 (53 B) — MechAI helper (__thiscall, RET 4, 1 stack param).
 * Calls virtual method at vtable+0x20 on this+0x308 and this+0x309 with
 * arg 1, then calls FUN_005C9E20(param).
 *
 * __thiscall (ECX = this), RET 4.
 * CFLAGS: /O1
 */

extern void FUN_005c9e20(void);

__declspec(naked) void __stdcall FUN_005c0a70(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    1
        lea     ecx, [edi + 0x308]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x309]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        push    esi
        mov     ecx, edi
        call    FUN_005c9e20
        pop     edi
        pop     esi
        ret     4
    }
}
