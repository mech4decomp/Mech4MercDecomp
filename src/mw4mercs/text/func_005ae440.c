/*
 * FUN_005ae440 (51 B) — State setup via vtable dispatch.
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005ae440(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x1
        call    dword ptr [eax + 0x4]
        mov     esi, dword ptr [esi + 0xd8]
        mov     eax, dword ptr [esi + 0x18]
        mov     edx, dword ptr [esi]
        or      eax, 0xc0
        mov     ecx, esi
        mov     dword ptr [esi + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        pop     esi
        ret
    }
}
