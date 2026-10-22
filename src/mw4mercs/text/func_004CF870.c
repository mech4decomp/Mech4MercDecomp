/*
 * FUN_004CF870 (58 B) — __stdcall; allocates a 0x14-byte object, sets vtable
 * 0x771d64, calls FUN_004D7330/FUN_006F8E50, returns 1 (or 0 on alloc fail).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084D0(int size);
extern int __cdecl FUN_004D7330(void *arg);
extern void __cdecl FUN_006F8E50(void *arg);

__declspec(naked) void __stdcall FUN_004CF870(void)
{
    __asm {
        push    esi
        push    0x14
        call    FUN_004084D0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      l_fail
        mov     eax, dword ptr [esp + 8]
        push    eax
        mov     byte ptr [esi + 4], 0
        mov     dword ptr [esi], 0x771d64
        call    FUN_004D7330
        push    esi
        mov     dword ptr [esi + 0x10], eax
        call    FUN_006F8E50
        mov     al, 1
        pop     esi
        ret     4
    l_fail:
        xor     al, al
        pop     esi
        ret     4
    }
}
