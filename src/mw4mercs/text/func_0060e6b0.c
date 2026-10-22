/*
 * FUN_0060e6b0 (43 B) — __thiscall vtable dispatch returning 1.
 *
 * Calls this->vtable[0x4c/4](&local_8, &local_4) with local_8 = 6 and
 * local_4 = 0x87. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_0060e6b0(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [ecx]
        __emit 0x8D  /* lea edx,[esp] -- MSVC6 drops the 00 disp byte (8D 14 24 vs ref 8D 54 24 00) */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    edx
        lea     edx, [esp + 8]
        push    edx
        mov     dword ptr [esp + 0xC], 0x87
        mov     dword ptr [esp + 8], 6
        call    dword ptr [eax + 0x4C]
        mov     eax, 1
        add     esp, 8
        ret
    }
}
