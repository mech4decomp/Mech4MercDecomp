/*
 * FUN_00760C00 (82 B) — __cdecl (2 stack args, RET 8). Builds a 0x14-dword
 * stack struct (magic 0xC08A5335, sizes 0x50/0x14, args, flag 1), then calls
 * FUN_00769000 (SafeDisc .txt2 leftover) with two of the args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00769000(void);

__declspec(naked) void FUN_00760C00(void)
{
    __asm {
        sub     esp, 0x50
        mov     edx, dword ptr [esp + 0x54]
        push    edi
        mov     ecx, 0x14
        xor     eax, eax
        lea     edi, [esp + 4]
        rep stosd
        mov     eax, dword ptr [esp + 0x5c]
        lea     ecx, [esp + 4]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0xc], 0xc08a5335
        mov     dword ptr [esp + 0x10], 0x50
        mov     dword ptr [esp + 0x14], 0x14
        mov     dword ptr [esp + 0x2c], eax
        mov     dword ptr [esp + 0x30], 1
        call    FUN_00769000
        add     esp, 8
        pop     edi
        add     esp, 0x50
        ret     8
    }
}
