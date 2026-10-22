/*
 * FUN_005a0280 (52 B) — __thiscall constructor-like function with 4 params.
 * Calls FUN_005a0dd0 with 4 params, sets vtable at [this] to 0x783ae0,
 * then calls FUN_005a0320. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005a0dd0(void);
extern void __stdcall FUN_005a0320(void);

__declspec(naked) void __stdcall FUN_005a0280(int param1, int param2, int param3, int param4)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 4]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_005a0dd0
        push    edi
        mov     ecx, esi
        mov     dword ptr [esi], 0x783ae0
        call    FUN_005a0320
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
