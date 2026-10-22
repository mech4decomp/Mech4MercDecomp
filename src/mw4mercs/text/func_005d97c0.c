/*
 * FUN_005d97c0 (35 B) — Dispatch two virtual calls on a sub-object:
 * [vtable+0x184](0,0) and [vtable+0x18c](this). RET (no args).
 *
 * __fastcall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005d97c0(void *this)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x28]
        mov     eax, dword ptr [esi]
        push    0x0
        push    0x0
        mov     ecx, esi
        call    dword ptr [eax + 0x184]
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x18c]
        pop     edi
        pop     esi
        ret
    }
}
