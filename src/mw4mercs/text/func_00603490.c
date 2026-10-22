/*
 * FUN_00603490 (66 B) — allocates an AirplaneAnimationStateEngine object
 * (0x24 bytes) and stores it into a global; on alloc failure stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f27a0;
extern int g_007f26bc;
extern char g_78b3f8[];
extern char g_78b43c[];
extern void __cdecl FUN_004084d0(int);
extern int __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_00603490(void)
{
    __asm {
        push    0x24
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_skip
        mov     ecx, dword ptr [g_007f27a0]
        push    0x0
        push    0x0
        push    offset g_78b3f8
        push    0x3
        push    ecx
        push    offset g_78b43c
        push    0x496
        mov     ecx, eax
        call    FUN_004dd270
        mov     dword ptr [g_007f26bc], eax
        ret
L_skip:
        mov     dword ptr [g_007f26bc], 0x0
        ret
    }
}
