/*
 * FUN_006877d0 (38 B) — Constructor.
 *
 * __thiscall (ECX = this, 1 stack param). Zeroes this[0] and this[4],
 * optionally frees this via FUN_004084e0 if (param & 1), returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void *__stdcall FUN_006877d0(int param)
{
    __asm {
        test    byte ptr [esp + 0x4], 0x1
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi + 0x4], 0x0
        mov     dword ptr [esi], 0x0
        jz      l_skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    l_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
