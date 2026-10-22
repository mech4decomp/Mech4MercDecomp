/*
 * FUN_0059c660 (154 B) — Factory function with conditional construction.
 *
 * Sets up a context from data, checks conditions, allocates 0x94-byte
 * object and constructs it via FUN_0059C150.
 *
 * __cdecl, RET 4 (returns pointer or NULL).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004D2000(void *dst, int arg, void *src);
extern void __cdecl FUN_004D2310(void *this);
extern void *__cdecl FUN_004084D0(int size);
extern void *__stdcall FUN_0059C150(void *this, void *param);
extern void __cdecl FUN_004D21C0(void *this);

__declspec(naked) void *FUN_0059C660(void *data)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0x44
        push    esi
        push    0
        push    eax
        lea     ecx, [esp + 0xC]
        call    FUN_004D2000

        mov     eax, dword ptr [esp + 0x40]
        test    eax, eax
        je      simple_path
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jbe     simple_path

        lea     ecx, [esp + 4]
        call    FUN_004D2310
        push    0x94
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      fail_path
        lea     ecx, [esp + 4]
        push    ecx
        mov     ecx, eax
        call    FUN_0059C150
        lea     ecx, [esp + 4]
        mov     esi, eax
        call    FUN_004D21C0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret

simple_path:
        push    0x94
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      fail_path
        push    0
        mov     ecx, eax
        call    FUN_0059C150
        lea     ecx, [esp + 4]
        mov     esi, eax
        call    FUN_004D21C0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret

fail_path:
        lea     ecx, [esp + 4]
        xor     esi, esi
        call    FUN_004D21C0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret
    }
}
