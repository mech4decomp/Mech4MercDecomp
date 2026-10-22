/*
 * FUN_004CF040 (51 B) — Destructor-like helper with sub-object cleanup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f89c0(void *ptr);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_004cf040(void *ptr)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]

        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 4]

        push    esi
        call    FUN_006f89c0

        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        jz      l_skip_sub

        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx]

        mov     dword ptr [esi + 0x24], 0

    l_skip_sub:
        push    esi
        call    FUN_004084e0
        add     esp, 4

        mov     al, 1
        pop     esi
        ret     4
    }
}
