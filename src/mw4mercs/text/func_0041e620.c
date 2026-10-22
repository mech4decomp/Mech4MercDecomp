/*
 * FUN_0041e620 (52 B) — factory. Allocates 0x14 bytes via FUN_004084d0; if
 * non-null, constructs an object via __thiscall FUN_004151c0 (vtable
 * 0x76d79c, size 0x12, arg from 0x007b8c08) and stores the result in
 * 0x007b9304; otherwise stores 0 there.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c08;
extern int g_007b9304;

extern void *__cdecl FUN_004084d0(int);
extern void *__cdecl FUN_004151c0(void *, int, int, int);

__declspec(naked) void FUN_0041e620(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L649
        mov     ecx, dword ptr [g_007b8c08]
        push    ecx
        push    0x76d79c
        push    0x12
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007b9304], eax
        ret
L649:
        mov     dword ptr [g_007b9304], 0
        ret
    }
}
