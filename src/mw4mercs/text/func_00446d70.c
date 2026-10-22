/*
 * FUN_00446d70 (52 B) — MLR object constructor: allocates a 0x14-byte object,
 * constructs it (FUN_004151c0) and stores the result in global g_007b9890.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da720;
extern int g_007b9890;
extern char g_76e7e8[];

extern void *__cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_00446d70(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L99
        mov     ecx, dword ptr [g_007da720]
        push    ecx
        push    offset g_76e7e8
        push    0x69
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007b9890], eax
        ret
L99:
        mov     dword ptr [g_007b9890], 0
        ret
    }
}
