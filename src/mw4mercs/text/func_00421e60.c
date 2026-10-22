/*
 * FUN_00421e60 (91 B) — MLR data version check: reads a 4-byte magic
 * via a virtual Read method, compares against 'MLR#' (0x4d4c5223),
 * and asserts (via FUN_006fab90 + INT3) if the version is too new.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_0076dd24[];
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00421e60(void)
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
        mov     dword ptr [ebp - 0x4], 0xffffffff
        call    dword ptr [eax + 0x20]
        cmp     dword ptr [ebp + 0x8], 0x4d4c5223
        mov     edx, dword ptr [esi]
        push    0x4
        jnz     L421e94
        lea     eax, [ebp - 0x4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        jmp     L421e99
L421e94:
        mov     ecx, esi
        call    dword ptr [edx + 0x1c]
L421e99:
        mov     eax, dword ptr [ebp - 0x4]
        cmp     eax, 0x12
        pop     esi
        jle     L421eb7
        push    offset g_0076dd24
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L421eb4
        int     3
L421eb4:
        mov     eax, dword ptr [ebp - 0x4]
L421eb7:
        mov     esp, ebp
        pop     ebp
        ret
    }
}
