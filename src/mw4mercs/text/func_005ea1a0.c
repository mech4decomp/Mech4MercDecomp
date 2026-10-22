/*
 * FUN_005ea1a0 (114 B) — __thiscall constructor, RET 0x10 (4 stack params).
 *
 * Saves this (ECX) in ESI, calls FUN_005f0740(param1..param4) on this,
 * zeroes a run of fields, sets vtable ptr 0x78992c, then calls
 * FUN_005ea240(param2). Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f0740(void);
extern void __stdcall FUN_005ea240(void);

__declspec(naked) void __stdcall FUN_005ea1a0(void)
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
        xor     eax, eax
        mov     dword ptr [esi + 0x1d0], eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esi + 0x1d4], eax
        mov     dword ptr [esi], 0x78992c
        mov     dword ptr [esi + 0x17c], eax
        mov     dword ptr [esi + 0x180], eax
        mov     dword ptr [esi + 0x184], eax
        mov     dword ptr [esi + 0x188], eax
        mov     dword ptr [esi + 0x18c], eax
        mov     dword ptr [esi + 0x190], eax
        mov     dword ptr [esi + 0x194], eax
        mov     dword ptr [esi + 0x1c4], eax
        call    FUN_005ea240
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
