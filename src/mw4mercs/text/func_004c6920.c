/*
 * FUN_004C6920 (50 B) — Vtable dispatch with global table lookup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007b8c0c;

__declspec(naked) void __stdcall FUN_004c6920(int param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]

        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]

        mov     edx, dword ptr [esp + 8]

        mov     eax, dword ptr [DAT_007b8c0c]

        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax + edx * 4]
        mov     edx, dword ptr [esp + 0xc]
        push    ecx
        push    edx
        push    esi
        call    dword ptr [eax + 0x14]

        add     esp, 0xc
        pop     esi
        ret
    }
}
