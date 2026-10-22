/*
 * FUN_1003f4f4 (400 B) — __cdecl.
 * Frees each pointer field of a 0xAC-byte struct via FUN_1003c2dc.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003c2dc(void *);

__declspec(naked) void FUN_1003f4f4(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        test    esi, esi
        jz      L_1003f682
        push    dword ptr [esi + 0x4]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x8]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0xc]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x10]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x14]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x18]
        call    FUN_1003c2dc
        push    dword ptr [esi]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x20]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x24]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x28]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x2c]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x30]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x34]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x1c]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x38]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x3c]
        call    FUN_1003c2dc
        add     esp, 0x40
        push    dword ptr [esi + 0x40]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x44]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x48]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x4c]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x50]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x54]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x58]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x5c]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x60]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x64]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x68]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x6c]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x70]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x74]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x78]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x7c]
        call    FUN_1003c2dc
        add     esp, 0x40
        push    dword ptr [esi + 0x80]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x84]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x88]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x8c]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x90]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x94]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x98]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0x9c]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0xa0]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0xa4]
        call    FUN_1003c2dc
        push    dword ptr [esi + 0xa8]
        call    FUN_1003c2dc
        add     esp, 0x2c
    L_1003f682:
        pop     esi
        ret
    }
}
