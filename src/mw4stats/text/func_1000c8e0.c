/*
 * FUN_1000c8e0 (86 B) - __stdcall. Gets the current system time, converts
 * it to a FILETIME, and returns the elapsed 100ns ticks since param_2/param_3
 * (a FILETIME), or 0 if the current time is not newer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021094;   /* GetSystemTime IAT @ 0x10021094 */
extern void *g_10021090;   /* SystemTimeToFileTime IAT @ 0x10021090 */

__declspec(naked) unsigned int __cdecl FUN_1000c8e0(void)
{
    __asm {
        sub     esp, 0x18
        lea     eax, [esp + 0x8]
        push    esi
        push    eax
        call    dword ptr [g_10021094]
        lea     ecx, [esp + 0x4]
        lea     edx, [esp + 0xc]
        push    ecx
        push    edx
        call    dword ptr [g_10021090]
        mov     eax, dword ptr [esp + 0x8]
        mov     esi, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x24]
        cmp     eax, esi
        pop     esi
        ja      L922
        jc      L91A
        cmp     ecx, edx
        jnc     L922
L91A:
        xor     eax, eax
        add     esp, 0x18
        ret     0xc
L922:
        sub     ecx, edx
        mov     eax, 0x6b5fca6b
        mul     ecx
        mov     eax, edx
        shr     eax, 0x16
        add     esp, 0x18
        ret     0xc
    }
}
