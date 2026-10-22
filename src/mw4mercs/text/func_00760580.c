/*
 * FUN_00760580 (74 B) — __cdecl (RET 0x8). Zeroes a 0x50-byte stack
 * buffer, fills a header (magic 0xc08a5335, size 0x50, type 0x17), and
 * calls FUN_00769000 with (arg0, &buffer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00769000(void);

__declspec(naked) void FUN_00760580(void)
{
    __asm {
        sub     esp, 0x50
        mov     edx, dword ptr [esp + 0x54]
        push    edi
        mov     ecx, 0x14
        xor     eax, eax
        lea     edi, [esp + 4]
        rep     stosd
        mov     eax, dword ptr [esp + 0x5c]
        lea     ecx, [esp + 4]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0xc], 0xc08a5335
        mov     dword ptr [esp + 0x10], 0x50
        mov     dword ptr [esp + 0x14], 0x17
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00769000
        add     esp, 8
        pop     edi
        add     esp, 0x50
        ret     8
    }
}
