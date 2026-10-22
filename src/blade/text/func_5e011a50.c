/*
 * FUN_5e011a50 (50 B) — COM method: returns the object at this+0x18 via
 * out-param, calling its vtable+4 method.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e011a50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x18]
        test    eax, eax
        jz      L_6f
        mov     edx, dword ptr [esp + 0x8]
        lea     ecx, [eax + 0x4]
        push    eax
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x4]
        xor     eax, eax
        ret     0x8
    L_6f:
        mov     edx, dword ptr [esp + 0x8]
        xor     ecx, ecx
        push    eax
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x4]
        xor     eax, eax
        ret     0x8
    }
}
