/*
 * FUN_005aaad0 (59 B) — Constructor. Calls FUN_005f0740 (thiscall) with
 * 4 stack params, copies [EDI+0x6C] into [ESI+0x17C] and [ESI+0x180],
 * sets vtable pointer at [ESI] to 0x007855C8. Returns this in EAX.
 * __thiscall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f0740(void);

__declspec(naked) void __fastcall FUN_005aaad0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
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
        call    FUN_005f0740
        mov     eax, dword ptr [edi + 0x6C]
        mov     dword ptr [esi + 0x17C], eax
        mov     dword ptr [esi + 0x180], eax
        pop     edi
        mov     dword ptr [esi], 0x7855C8
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
