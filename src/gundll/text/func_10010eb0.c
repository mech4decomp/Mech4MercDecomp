/*
 * FUN_10010eb0 (65 B) — __stdcall, RET 0x14.
 * Guards against re-init, calls FUN_1001c760, then stores three params.
 */

extern void __cdecl FUN_1001c760(void);

__declspec(naked) void __stdcall FUN_10010eb0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L10010ec5
        mov     eax, 0xc112000d
        pop     esi
        ret     0x14
    L10010ec5:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L10010eed
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     byte ptr [esi + 0x4], 0x1
        mov     dword ptr [esi + 0x24], edx
        mov     dword ptr [esi + 0x28], ecx
    L10010eed:
        pop     esi
        ret     0x14
    }
}
