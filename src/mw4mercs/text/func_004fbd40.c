/*
 * FUN_004FBD40 (66 B) — __thiscall (RET 8). Dispatches a state transition
 * via FUN_004dd250, then calls a virtual method (offset 0x6c or 0x70)
 * depending on the state field at this+0x10. Returns this+0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dd250(void);

__declspec(naked) void __stdcall FUN_004fbd40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004dd250
        dec     eax
        mov     eax, dword ptr [esi + 0x10]
        jz      l_case0
        cmp     eax, 0x1
        jnz     l_ret
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x70]
        mov     eax, dword ptr [esi + 0x14]
        pop     esi
        ret     8
    l_case0:
        cmp     eax, 0x1
        jz      l_ret
        mov     ecx, dword ptr [esi + 0x18]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x6c]
    l_ret:
        mov     eax, dword ptr [esi + 0x14]
        pop     esi
        ret     8
    }
}
