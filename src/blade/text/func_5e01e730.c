/*
 * FUN_5e01e730 (86 B) — __thiscall (ECX = this), RET 0x14.
 * Stores 5 params into this[1..5]; sets this[6] and flag bit based on param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e01e730(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x8], edx
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 0x14], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0xc], edx
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx + 0x4], eax
        sub     eax, 0x22b
        mov     dword ptr [ecx + 0x10], edx
        jz      L_e776
        sub     eax, 0xa
        jz      L_e776
        sub     eax, 0x3de
        jz      L_e776
        mov     eax, dword ptr [ecx]
        mov     dword ptr [ecx + 0x18], 0x0
        or      al, 0x1
        mov     dword ptr [ecx], eax
        ret     0x14
    L_e776:
        mov     eax, dword ptr [ecx]
        mov     dword ptr [ecx + 0x18], 0x2
        or      al, 0x1
        mov     dword ptr [ecx], eax
        ret     0x14
    }
}
