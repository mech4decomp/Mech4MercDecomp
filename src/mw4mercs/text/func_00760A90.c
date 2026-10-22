/*
 * FUN_00760A90 (66 B) — .text data block (block 0x760A10). Zeroes a 0x50-byte
 * stack buffer, then calls the .txt2 SafeDisc leftover FUN_00769000 with a
 * small parameter struct built on the stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00769000(void);

__declspec(naked) void FUN_00760A90(void)
{
    __asm {
        sub     esp, 0x50
        push    edi
        mov     ecx, 0x14
        xor     eax, eax
        lea     edi, [esp+4]
        rep stosd
        mov     ecx, dword ptr [esp+0x58]
        lea     eax, [esp+4]
        push    eax
        push    ecx
        mov     dword ptr [esp+0xc], 0xc08a5335
        mov     dword ptr [esp+0x10], 0x50
        mov     dword ptr [esp+0x14], 7
        call    FUN_00769000
        add     esp, 8
        pop     edi
        add     esp, 0x50
        ret     4
    }
}
