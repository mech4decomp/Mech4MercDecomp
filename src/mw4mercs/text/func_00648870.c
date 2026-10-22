/*
 * FUN_00648870 (121 B) — data block containing two small functions.
 * First (0x648870): clears a byte via g_007b5a1c and sets g_008058b0=0x20.
 * Second (0x648880): a state-machine loop over g_008058b0 that calls
 * FUN_00648FE0, conditionally FUN_00562F40, and sets g_008058ac/g_008058e4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b5a1c;
extern char g_008058b0;
extern char g_008058e4;
extern int g_008058ac;

extern void __cdecl FUN_00648FE0(void);
extern void __cdecl FUN_00562F40(void);

__declspec(naked) void FUN_00648870(void)
{
    __asm {
        mov     eax, dword ptr [g_007b5a1c]
        mov     byte ptr [eax], 0
        mov     byte ptr [g_008058b0], 0x20
        ret
        mov     byte ptr [g_008058e4], 1
        call    FUN_00648FE0
        call    FUN_00648FE0
        mov     al, byte ptr [g_008058b0]
    L648896:
        cmp     al, 0x2a
        je      L6488b0
    L64889a:
        cmp     al, 4
        je      L6488b0
        cmp     al, 0x7f
        je      L6488b8
        call    FUN_00648FE0
        mov     al, byte ptr [g_008058b0]
        cmp     al, 0x2a
        jne     L64889a
    L6488b0:
        cmp     al, 0x7f
        je      L6488b8
        cmp     al, 4
        jne     L6488cc
    L6488b8:
        push    4
        call    FUN_00562F40
        add     esp, 4
        mov     dword ptr [g_008058ac], 0x19
    L6488cc:
        call    FUN_00648FE0
        mov     al, byte ptr [g_008058b0]
        cmp     al, 0x2f
        jne     L648896
        mov     byte ptr [g_008058b0], 0x20
        mov     byte ptr [g_008058e4], 0
        ret
    }
}
