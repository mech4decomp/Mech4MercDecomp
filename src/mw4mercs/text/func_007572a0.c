/*
 * FUN_007572A0 (84 B) — Constructor.
 *
 * Stores params into this+0xAC/0xB0/0xB4, calls FUN_007580C0(*this,
 * this+0xA0, this+0xA4, this+0xA8, param_1, param_2, param_3, 1),
 * sets this+0xE8 = 1.
 *
 * __thiscall (ECX = this), RET 0xC (three stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007580c0(void);

__declspec(naked) void __fastcall FUN_007572A0(void *param_1, void *param_2, void *param_3)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 0xc]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    1
        mov     dword ptr [esi + 0xac], eax
        mov     eax, edx
        push    eax
        mov     eax, dword ptr [esi + 0xa8]
        push    ecx
        mov     dword ptr [esi + 0xb4], edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esi + 0xa0]
        push    eax
        mov     eax, dword ptr [esi]
        mov     dword ptr [esi + 0xb0], ecx
        mov     ecx, dword ptr [esi + 0xa4]
        push    ecx
        push    edx
        push    eax
        call    FUN_007580c0
        mov     byte ptr [esi + 0xe8], 1
        pop     esi
        ret     0xc
    }
}
