/*
 * FUN_0042aa70 (52 B) — MLRProjectLight static-init: allocates a
 * 0x14-byte object, and if successful constructs a project-light
 * object (FUN_004151c0) storing the result in g_007b96cc; else
 * stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da6a4;
extern int g_007b96cc;
extern void * __cdecl FUN_004084d0(int);
extern int __cdecl FUN_004151c0(int, const char *, int);

__declspec(naked) void FUN_0042aa70(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_ret0
        mov     ecx, dword ptr [g_007da6a4]
        push    ecx
        push    0x76e0b4
        push    0x71
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007b96cc], eax
        ret
L_ret0:
        mov     dword ptr [g_007b96cc], 0
        ret
    }
}
