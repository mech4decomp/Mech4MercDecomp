/*
 * FUN_00428a70 (72 B) — MLRFootStep static-init: allocates a 0x14-byte
 * object, and on success constructs it via FUN_004151c0 (__thiscall,
 * ECX=obj) with the class name string; stores result in g_007b964c and
 * zeroes g_007b9648. On alloc failure both globals are zeroed.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004151c0(void);
extern int g_007b8c08;
extern int g_007b964c;
extern int g_007b9648;

__declspec(naked) void FUN_00428a70(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_alloc_fail
        mov     ecx, dword ptr [g_007b8c08]
        push    ecx
        push    0x76df5c
        push    0x76
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007b964c], eax
        mov     dword ptr [g_007b9648], 0
        ret
L_alloc_fail:
        mov     dword ptr [g_007b964c], 0
        mov     dword ptr [g_007b9648], 0
        ret
    }
}
