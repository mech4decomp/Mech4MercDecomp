/*
 * FUN_00660bf0 (76 B) — __thiscall destructor-style function.
 *
 * Saves this (ECX) in EDI, walks sub-objects at this+0x24 (offsets
 * 0x38/0x28/0x1C/0x0C/0x00) calling FUN_006a22e0 on each, then calls
 * FUN_00661e50 on this. If the flag param (bit 0) is set, frees this
 * via FUN_004084e0. Returns this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006a22e0(void *this);
extern void __stdcall FUN_00661e50(void *this);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_00660bf0(void *param)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x24]
        lea     ecx, [esi + 0x38]
        call    FUN_006a22e0
        lea     ecx, [esi + 0x28]
        call    FUN_006a22e0
        lea     ecx, [esi + 0x1c]
        call    FUN_006a22e0
        lea     ecx, [esi + 0xc]
        call    FUN_006a22e0
        mov     ecx, esi
        call    FUN_006a22e0
        mov     ecx, edi
        call    FUN_00661e50
        test    byte ptr [esp + 0xc], 0x1
        jz      L_done
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_done:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     4
    }
}
