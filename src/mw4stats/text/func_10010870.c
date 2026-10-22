/*
 * FUN_10010870 (92 B, __stdcall RET 0x4) - Computes elapsed milliseconds
 * since a stored FILETIME. Gets current system time, converts to FILETIME,
 * and if the current time is before the stored time returns 0, else returns
 * (currentLow - storedLow) / 10000.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021094; /* IAT: GetSystemTime */
extern void *g_10021090; /* IAT: SystemTimeToFileTime */

__declspec(naked) unsigned int __cdecl FUN_10010870(void)
{
    __asm {
        sub     esp, 0x18
        lea     eax, [esp + 8]
        push    esi
        push    edi
        push    eax
        call    dword ptr [g_10021094]      /* GetSystemTime(&local_10) */
        lea     ecx, [esp + 8]
        lea     edx, [esp + 0x10]
        push    ecx
        push    edx
        call    dword ptr [g_10021090]      /* SystemTimeToFileTime(&local_10,&_Stack_18) */
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        mov     edi, dword ptr [edx + 0x6c]
        mov     esi, dword ptr [edx + 0x68]
        cmp     eax, edi
        ja      L_b6
        jc      L_ac
        cmp     ecx, esi
        jnc     L_b6
    L_ac:
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 0x18
        ret     4
    L_b6:
        sub     ecx, esi
        mov     eax, 0xd1b71759
        mul     ecx
        mov     eax, edx
        pop     edi
        shr     eax, 0xd
        pop     esi
        add     esp, 0x18
        ret     4
    }
}
