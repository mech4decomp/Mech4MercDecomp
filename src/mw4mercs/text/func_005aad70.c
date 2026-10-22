/*
 * FUN_005aad70 (42 B) — __thiscall, RET 0x10.
 *
 * Calls FUN_005e3390(param_1, param_2, param_3, param_4), sets vtable
 * pointer [esi] = 0x7856a4, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005e3390(void);

__declspec(naked) void FUN_005aad70(void)
{
    __asm {
        mov     eax, [esp + 0x10]
        mov     edx, [esp + 0x8]
        push    esi
        push    eax
        mov     eax, [esp + 0xc]
        mov     esi, ecx
        mov     ecx, [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005e3390
        mov     dword ptr [esi], 0x7856a4
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
