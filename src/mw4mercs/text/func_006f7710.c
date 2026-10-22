/*
 * FUN_006F7710 (70 B) — Set string field with strdup.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param). Calls FUN_006F83C0
 * to validate the string. If it returns -1, returns 0. Otherwise frees
 * the old string at this+0x40 (via free at 0x0076B2D0), calls _strdup
 * (0x0076B2CC) on the new string, stores at this+0x40, returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006f83c0(const char *);

__declspec(naked) void __fastcall FUN_006f7710(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        mov     esi, ecx
        push    edi
        call    FUN_006f83c0
        cmp     eax, -1
        jnz     l_ok
        pop     edi
        xor     al, al
        pop     esi
        ret     4
    l_ok:
        mov     eax, dword ptr [esi + 0x40]
        test    eax, eax
        jz      l_alloc
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0xD0
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        add     esp, 4
        mov     dword ptr [esi + 0x40], 0
    l_alloc:
        push    edi
        _emit   0xFF
        _emit   0x15
        _emit   0xCC
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        add     esp, 4
        mov     dword ptr [esi + 0x40], eax
        pop     edi
        mov     al, 1
        pop     esi
        ret     4
    }
}
