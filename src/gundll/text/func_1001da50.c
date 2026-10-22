/*
 * FUN_1001da50 (65 B) — __stdcall, RET 0x14.
 * Calls FUN_1001d980 with a local out-param; stores result into [this+8].
 */

extern void __cdecl FUN_1001d980(void);

__declspec(naked) void __stdcall FUN_1001da50(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esi + 0x8]
        push    edx
        push    eax
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        push    esi
        mov     dword ptr [esp + 0x20], 0x0
        call    FUN_1001d980
        test    eax, eax
        jl      L1001da8c
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [esi + 0x8], ecx
    L1001da8c:
        pop     esi
        pop     ecx
        ret     0x14
    }
}
