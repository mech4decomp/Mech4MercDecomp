/*
 * FUN_00428f20 (52 B) — MLRCenterPointLight static-init: allocates a
 * 0x14-byte object and, on success, constructs it via FUN_004151c0
 * (__thiscall, ECX=obj) with the class name string; stores the result in
 * g_007b9650. On alloc failure g_007b9650 is zeroed.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004151c0(void);
extern int g_007da6a4;
extern int g_007b9650;

__declspec(naked) void FUN_00428f20(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_fail
        mov     ecx, dword ptr [g_007da6a4]
        push    ecx
        push    0x76df80
        push    0x75
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007b9650], eax
        ret
L_fail:
        mov     dword ptr [g_007b9650], 0
        ret
    }
}
