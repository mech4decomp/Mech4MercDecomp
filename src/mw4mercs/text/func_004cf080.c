/*
 * FUN_004CF080 (36 B) — Process callback and set flags.
 *
 * __thiscall (ECX = this), RET 4.
 * Takes a struct in ESI (stack param), checks field_24 for a callback,
 * sets field_20=1, calls callback->vtable[0x18], if it returns 0 sets
 * field_04=1. Always returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_004cf080(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        mov     byte ptr [esi + 0x20], 1
        je      l_done
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x18]
        test    al, al
        jne     l_done
        mov     byte ptr [esi + 4], 1
    l_done:
        mov     al, 1
        pop     esi
        ret     4
    }
}
