/*
 * FUN_004e0590 (56 B) — __thiscall destructor. Installs vtable 0x773adc,
 * tears down sub-objects at +0x14 and +0x1c, then calls FUN_00415380(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179f0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004e0590(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x14]
        mov     ecx, edi
        mov     dword ptr [esi], 0x773adc
        call    FUN_004179f0
        lea     ebx, [esi + 0x1c]
        mov     ecx, ebx
        call    FUN_004179f0
        mov     ecx, ebx
        call    FUN_00417980
        mov     ecx, edi
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
