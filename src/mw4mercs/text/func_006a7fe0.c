/*
 * FUN_006a7fe0 (45 B) — __thiscall.
 *
 * Builds a local buffer, calls FUN_006a8070() and FUN_006a80e0(),
 * then copies *result into *arg1. Returns with RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a8070(void);
extern void __cdecl FUN_006a80e0(void);

__declspec(naked) void FUN_006a7fe0(void)
{
    __asm {
        sub     esp, 0x8
        push    esi
        push    ecx
        lea     eax, [esp + 0x8]
        mov     esi, esp
        push    eax
        call    FUN_006a8070
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esi], ecx
        lea     ecx, [esp + 0xc]
        call    FUN_006a80e0
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [eax], edx
        pop     esi
        add     esp, 0x8
        ret     0x4
    }
}
