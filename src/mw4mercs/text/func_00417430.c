/*
 * FUN_00417430 (63 B) - __thiscall "Stuff::SafeChainLink" constructor.
 * Sets vtable 0x76d568, links prev/next pointers, calls FUN_00415d40.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415d40(void);

__declspec(naked) void FUN_00417430(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi + 0x4], eax
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        mov     dword ptr [esi + 0xc], eax
        call    FUN_00415d40
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        mov     dword ptr [esi], 0x76d568
        mov     dword ptr [esi + 0x10], eax
        jz      L_skip1
        mov     dword ptr [eax + 0x14], esi
    L_skip1:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        mov     dword ptr [esi + 0x14], eax
        jz      L_skip2
        mov     dword ptr [eax + 0x10], esi
    L_skip2:
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
