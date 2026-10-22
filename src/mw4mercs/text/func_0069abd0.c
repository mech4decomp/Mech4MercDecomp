/*
 * FUN_0069abd0 (40 B) — __thiscall destructor, RET 4.
 *
 * Frees *this if non-null; if (param & 1) frees this.
 * Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void *__stdcall FUN_0069abd0(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_skip1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_skip1:
        test    byte ptr [esp + 0x8], 0x1
        jz      L_skip2
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip2:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
