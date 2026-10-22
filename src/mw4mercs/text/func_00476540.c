/*
 * FUN_00476540 (88 B) — MLR global init: allocates an object, sets vtable
 * 0x476820, stores into globals 0x007d99b0/0x007d99b4.
 *
 * CFLAGS: /O1
 */

extern int g_007b958c;
extern int g_007d99b4;
extern int g_007da5e4;
extern int g_007d99b0;
extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_00476540(void)
{
    __asm {
        mov     eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0x0
        push    0x76f3b0
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007d99b4], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_658c
        mov     ecx, dword ptr [g_007da5e4]
        push    ecx
        push    0x76f390
        push    0x58
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x476820
        mov     dword ptr [g_007d99b0], esi
        pop     esi
        ret
L_658c:
        mov     dword ptr [g_007d99b0], 0x0
        pop     esi
        ret
    }
}
