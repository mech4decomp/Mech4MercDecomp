/*
 * FUN_0049f6e0 (74 B) - MLR particle/flare/debris factory. Allocates a
 * 0x1c-byte object via FUN_004084d0, constructs a 0x52c-byte object via
 * FUN_004151c0 (thiscall), installs two function pointers at +0x14/+0x18,
 * and stores the result in global g_007da974.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004151c0(int a, const char *b, int c);

extern int g_007da93c;   /* 0x007da93c */
extern int g_007da974;   /* 0x007da974 */
extern char g_007b2e08[]; /* 0x007b2e08 "gosFX::Tube" */

__declspec(naked) void FUN_0049f6e0(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LF71E
        mov     eax, dword ptr [g_007da93c]
        push    eax
        push    offset g_007b2e08
        push    0x52c
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x49fc30
        mov     dword ptr [esi + 0x18], 0x49db20
        mov     dword ptr [g_007da974], esi
        pop     esi
        ret
LF71E:
        mov     dword ptr [g_007da974], 0x0
        pop     esi
        ret
    }
}
