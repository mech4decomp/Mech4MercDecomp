/*
 * FUN_00602C80 (75 B) — Bit-field index computation with two outputs.
 *
 * __thiscall (ECX = this), RET 8 (two stack params: out ptr, index).
 * Computes a 5-bit-aligned index from this[1]+param_2 and writes the
 * resulting pointer and remainder into the output struct.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00602c80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        add     ecx, eax
        mov     eax, ecx
        cdq
        and     edx, 0x1f
        add     eax, edx
        sar     eax, 5
        lea     edx, [esi + eax * 4]
        mov     eax, ecx
        and     eax, 0x8000001f
        jns     l_pop
        dec     eax
        or      eax, 0xffffffe0
        inc     eax
    l_pop:
        pop     esi
        jns     l_else
        lea     ecx, [eax + 0x20]
        mov     eax, dword ptr [esp + 0x4]
        sub     edx, 4
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ecx
        ret     8
    l_else:
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ecx
        ret     8
    }
}
