/*
 * FUN_0055B070 (63 B) — Sound/audio helper. Loads a global, checks
 * a pointer, pushes float params + string, calls a function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_0055BDC0(void);
void __cdecl FUN_0055BE60(void);

__declspec(naked) void func_0055b070(void)
{
    __asm {
        _emit   0xA1
        _emit   0x68
        _emit   0xD2
        _emit   0x7D
        _emit   0x00
        mov     ecx, dword ptr [eax + 0x040EE8]
        mov     eax, dword ptr [ecx + 0x48]
        test    eax, eax
        je      L_skip
        push    0x3F4CCCCD
        push    0x3F000000
        push    0x3F800000
        push    0x3F800000
        _emit   0x68
        _emit   0x84
        _emit   0xDC
        _emit   0x77
        _emit   0x00
        push    2
        call    FUN_0055BDC0
        add     esp, 0x18
        push    0
        mov     ecx, eax
        call    FUN_0055BE60
L_skip:
        ret
    }
}
