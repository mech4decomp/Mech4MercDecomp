/*
 * FUN_006F5FD0 (92 B) — __fastcall destructor/cleanup.
 *
 * Sets vtable to 0x79fc38, calls FUN_006F7950, conditionally destroys
 * the result via vtable[0], calls FUN_006F7960, checks globals
 * 0x008493d7/0x008493d6, conditionally calls vtable[4] on 0x007b6ed0,
 * clears globals, calls FUN_006F5230.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __fastcall FUN_006f7950(void);
extern void __fastcall FUN_006f7960(void);
extern void __fastcall FUN_006f5230(void);

__declspec(naked) void __fastcall FUN_006f5fd0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x3c]
        mov     ecx, edi
        mov     dword ptr [esi], 0x79fc38
        call    FUN_006f7950
        test    eax, eax
        jz      l_skip_destroy
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
    l_skip_destroy:
        mov     ecx, edi
        call    FUN_006f7960
        _emit   0xA0
        _emit   0xD7
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    al, al
        jnz     l_do_vcall
        _emit   0xA0
        _emit   0xD6
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    al, al
        jz      l_skip_vcall
    l_do_vcall:
        _emit   0xA1
        _emit   0xD0
        _emit   0x6E
        _emit   0x7B
        _emit   0x00
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 4]
    l_skip_vcall:
        mov     ecx, esi
        _emit   0xC6
        _emit   0x05
        _emit   0xD6
        _emit   0x93
        _emit   0x84
        _emit   0x00
        _emit   0x00
        _emit   0xC6
        _emit   0x05
        _emit   0xD7
        _emit   0x93
        _emit   0x84
        _emit   0x00
        _emit   0x00
        call    FUN_006f5230
        pop     edi
        pop     esi
        ret
    }
}
