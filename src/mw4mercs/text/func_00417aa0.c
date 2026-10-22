/*
 * FUN_00417aa0 (43 B) — __thiscall. Walks a linked list (head at
 * [ECX+4]->[0], next at +4) to the index given by the stack arg, stores
 * the found node into [ECX+8] and returns its [0] value; returns 0 if the
 * list runs out before the index.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00417aa0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        mov     eax, dword ptr [eax]
        xor     edx, edx
        test    eax, eax
        push    esi
        jz      notfound
    scan:
        mov     esi, dword ptr [esp + 0x8]
        cmp     edx, esi
        jz      found
        mov     eax, dword ptr [eax + 0x4]
        inc     edx
        test    eax, eax
        /* __emit: MSVC6 miscomputes this backward JNZ rel8 (F0 vs ref F4) */
        __emit 0x75
        __emit 0xF4
    notfound:
        xor     eax, eax
        pop     esi
        ret     0x4
    found:
        mov     dword ptr [ecx + 0x8], eax
        mov     eax, dword ptr [eax]
        pop     esi
        ret     0x4
    }
}
