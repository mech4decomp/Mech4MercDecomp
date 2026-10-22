/*
 * FUN_1003f1a6 (846 B) -- __cdecl.
 * Reads a large struct (param_1) field-by-field via FUN_1004388f, OR-ing
 * all results together. Returns -1 if param_1 is NULL, else the OR of all
 * per-field results.
 *
 * CFLAGS: /O1
 */

extern unsigned short g_100756f2;
extern unsigned short g_100756f4;
extern void __cdecl FUN_1004388f(void);

__declspec(naked) void FUN_1003f1a6(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        movzx   eax, word ptr [g_100756f2]
        movzx   ecx, word ptr [g_100756f4]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        test    esi, esi
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp - 0x8], ecx
        jnz     L_1cf
        or      eax, 0xffffffff
        jmp     L_4f1
    L_1cf:
        push    ebx
        lea     ecx, [esi + 0x4]
        push    edi
        push    ecx
        push    0x31
        push    eax
        push    0x1
        pop     ebx
        push    ebx
        call    FUN_1004388f
        mov     edi, eax
        lea     eax, [esi + 0x8]
        push    eax
        push    0x32
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0xc]
        push    eax
        push    0x33
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x10]
        push    eax
        push    0x34
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        add     esp, 0x40
        or      edi, eax
        lea     eax, [esi + 0x14]
        push    eax
        push    0x35
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x18]
        push    eax
        push    0x36
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        push    esi
        push    0x37
        push    dword ptr [ebp - 0x4]
        or      edi, eax
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x20]
        push    eax
        push    0x2a
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        add     esp, 0x40
        or      edi, eax
        lea     eax, [esi + 0x24]
        push    eax
        push    0x2b
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x28]
        push    eax
        push    0x2c
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x2c]
        push    eax
        push    0x2d
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x30]
        push    eax
        push    0x2e
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        add     esp, 0x40
        or      edi, eax
        lea     eax, [esi + 0x34]
        push    eax
        push    0x2f
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x1c]
        push    eax
        push    0x30
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x38]
        push    eax
        push    0x44
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x3c]
        push    eax
        push    0x45
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        add     esp, 0x40
        or      edi, eax
        lea     eax, [esi + 0x40]
        push    eax
        push    0x46
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x44]
        push    eax
        push    0x47
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x48]
        push    eax
        push    0x48
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x4c]
        push    eax
        push    0x49
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        add     esp, 0x40
        or      edi, eax
        lea     eax, [esi + 0x50]
        push    eax
        push    0x4a
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x54]
        push    eax
        push    0x4b
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x58]
        push    eax
        push    0x4c
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x5c]
        push    eax
        push    0x4d
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        add     esp, 0x40
        or      edi, eax
        lea     eax, [esi + 0x60]
        push    eax
        push    0x4e
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x64]
        push    eax
        push    0x4f
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x68]
        push    eax
        push    0x38
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x6c]
        push    eax
        push    0x39
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        add     esp, 0x40
        or      edi, eax
        lea     eax, [esi + 0x70]
        push    eax
        push    0x3a
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x74]
        push    eax
        push    0x3b
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x78]
        push    eax
        push    0x3c
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x7c]
        push    eax
        push    0x3d
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        add     esp, 0x40
        or      edi, eax
        lea     eax, [esi + 0x80]
        push    eax
        push    0x3e
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x84]
        push    eax
        push    0x3f
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x88]
        push    eax
        push    0x40
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x8c]
        push    eax
        push    0x41
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        add     esp, 0x40
        or      edi, eax
        lea     eax, [esi + 0x90]
        push    eax
        push    0x42
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x94]
        push    eax
        push    0x43
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x98]
        push    eax
        push    0x28
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0x9c]
        push    eax
        push    0x29
        push    dword ptr [ebp - 0x4]
        push    ebx
        call    FUN_1004388f
        add     esp, 0x40
        or      edi, eax
        lea     eax, [esi + 0xa0]
        push    eax
        push    0x1f
        push    dword ptr [ebp - 0x8]
        push    ebx
        call    FUN_1004388f
        or      edi, eax
        lea     eax, [esi + 0xa4]
        push    eax
        push    0x20
        push    dword ptr [ebp - 0x8]
        push    ebx
        call    FUN_1004388f
        add     esi, 0xa8
        or      edi, eax
        push    esi
        push    0x1003
        push    dword ptr [ebp - 0x8]
        push    ebx
        call    FUN_1004388f
        add     esp, 0x30
        or      eax, edi
        pop     edi
        pop     ebx
    L_4f1:
        pop     esi
        leave
        ret
    }
}
