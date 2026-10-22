/*
 * FUN_007605D0 (82 B) — __cdecl (3 stack args, RET 0xC). Builds a 0x14-dword
 * stack struct (magic 0xC08A5335, sizes 0x50/0x1A, args), then calls
 * FUN_00769000 (SafeDisc .txt2 leftover) with two of the args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00769000(void);

__declspec(naked) void FUN_007605D0(void)
{
    __asm {
        sub     esp, 0x50
        push    edi
        mov     ecx, 0x14
        xor     eax, eax
        lea     edi, [esp + 4]
        rep stosd
        mov     eax, dword ptr [esp + 0x5c]
        mov     ecx, dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esp + 0x58]
        lea     edx, [esp + 4]
        mov     dword ptr [esp + 4], 0xc08a5335
        push    edx
        push    eax
        mov     dword ptr [esp + 0x10], 0x50
        mov     dword ptr [esp + 0x14], 0x1a
        mov     dword ptr [esp + 0x20], ecx
        call    FUN_00769000
        add     esp, 8
        pop     edi
        add     esp, 0x50
        ret     0xc
    }
}
