/*
 * FUN_006FEC50 (90 B) — Cleanup function: calls FUN_006F89C0, then
 * destroys a global object at 0x00856860, frees param, and resets
 * global 0x00856834.
 *
 * __cdecl, RET 4 (1 param). Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f89c0(void *);
extern void __cdecl FUN_006fd1b0(void *);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __cdecl FUN_006fec50(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    esi
        call    FUN_006f89c0
        _emit   0xA1
        _emit   0x60
        _emit   0x68
        _emit   0x85
        _emit   0x00
        test    eax, eax
        jz      l_free_param
        mov     eax, dword ptr [eax + 8]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x14]
        _emit   0x8B
        _emit   0x15
        _emit   0x60
        _emit   0x68
        _emit   0x85
        _emit   0x00
        push    edx
        call    FUN_006fd1b0
        _emit   0xA1
        _emit   0x60
        _emit   0x68
        _emit   0x85
        _emit   0x00
        push    eax
        call    FUN_004084e0
        add     esp, 4
        _emit   0xC7
        _emit   0x05
        _emit   0x60
        _emit   0x68
        _emit   0x85
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    l_free_param:
        push    esi
        call    FUN_004084e0
        add     esp, 4
        _emit   0xC7
        _emit   0x05
        _emit   0x34
        _emit   0x68
        _emit   0x85
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        mov     al, 1
        pop     esi
        ret     4
    }
}
