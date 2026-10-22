/*
 * FUN_004FEC10 (91 B) -- OBB data version check (__cdecl, 1 param).
 * Reads a 4-byte tag via a virtual stream call, compares against 0x4f424223,
 * and asserts (via FUN_006fab90) if the version is too new.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);

__declspec(naked) int __cdecl FUN_004fec10(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [ebp + 0x8]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp - 0x4], 0x4
        call    dword ptr [eax + 0x20]
        cmp     dword ptr [ebp + 0x8], 0x4f424223
        mov     edx, dword ptr [esi]
        push    0x4
        jnz     L_4fec44
        lea     eax, [ebp - 0x4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        jmp     L_4fec49
L_4fec44:
        mov     ecx, esi
        call    dword ptr [edx + 0x1c]
L_4fec49:
        mov     eax, dword ptr [ebp - 0x4]
        cmp     eax, 0x3
        pop     esi
        jle     L_4fec67
        push    0x776118
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_4fec64
        int     3
L_4fec64:
        mov     eax, dword ptr [ebp - 0x4]
L_4fec67:
        mov     esp, ebp
        pop     ebp
        ret
    }
}
