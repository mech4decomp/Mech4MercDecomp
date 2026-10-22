/*
 * FUN_006D4770 (54 B) — Object constructor.
 *
 * Zeros fields at +0x11c, +0x120, +0x128, +0x12c, sets field_10 = param2,
 * calls FUN_006d4910(param1), returns this.
 *
 * __thiscall (ECX = this), RET 8 (two stack params: param1, param2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006d4910(int param);

__declspec(naked) int __stdcall FUN_006d4770(void)
{
    __asm {
        xor     eax, eax
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [esi + 0x11C], eax
        mov     dword ptr [esi + 0x120], eax
        mov     dword ptr [esi + 0x128], eax
        mov     dword ptr [esi + 0x12C], eax
        mov     eax, dword ptr [esp + 0x0C]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esi + 0x10], eax
        call    FUN_006d4910
        mov     eax, esi
        pop     esi
        ret     8
    }
}
