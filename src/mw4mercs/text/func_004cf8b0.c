/*
 * FUN_004CF8B0 (40 B) — Destructor-like helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f8e80(void *ptr);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_004cf8b0(void *ptr)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]

        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx]

        mov     edx, dword ptr [esi]
        push    esi
        call    dword ptr [edx + 4]

        push    esi
        call    FUN_006f8e80

        push    esi
        call    FUN_004084e0
        add     esp, 4

        mov     al, 1
        pop     esi
        ret     4
    }
}
