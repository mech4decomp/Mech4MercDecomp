/*
 * FUN_5e00f8b0 (72 B) — forwards to inner object's vtable[0x54/4] method
 * (6 args), or to the +0x1c object's method (4 args).
 *
 * __stdcall, RET 0x18 (6 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00f8b0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx + 0x24]
        test    eax, eax
        jz      L_dd
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x54]
        ret     0x18
L_dd:
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx + 0x1c]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x54]
        ret     0x18
    }
}
