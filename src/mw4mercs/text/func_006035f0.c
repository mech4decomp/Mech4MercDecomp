/*
 * FUN_006035f0 (66 B) — allocates an object (0x24 bytes) and stores it into
 * global 0x007f26c0; on alloc failure stores 0. Mirrors FUN_00603490.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f27a0;
extern int g_007f26c0;
extern char g_78b470[];
extern char g_78b778[];
extern void __cdecl FUN_004084d0(int);
extern int __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_006035f0(void)
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
        push    offset g_78b470
        push    0x1d
        push    ecx
        push    offset g_78b778
        push    0x46d
        mov     ecx, eax
        call    FUN_004dd270
        mov     dword ptr [g_007f26c0], eax
        ret
L_skip:
        mov     dword ptr [g_007f26c0], 0x0
        ret
    }
}
