/*
 * FUN_10041f80 (92 B) — __cdecl, RET.
 * Builds a result struct: calls FUN_10041fdc, copies a 10-byte blob,
 * calls FUN_100449b5, fills param_3 fields, calls FUN_1003c500.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10041fdc(void);
extern void __cdecl FUN_100449b5(void);
extern void __cdecl FUN_1003c500(void);

__declspec(naked) void __cdecl FUN_10041f80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x28
        push    esi
        lea     eax, [ebp + 0x8]
        push    edi
        push    eax
        lea     eax, [ebp - 0xc]
        push    eax
        call    FUN_10041fdc
        pop     ecx
        lea     eax, [ebp - 0x28]
        pop     ecx
        lea     esi, [ebp - 0xc]
        push    eax
        push    0
        push    0x11
        sub     esp, 0xc
        mov     edi, esp
        movsd
        movsd
        movsw
        call    FUN_100449b5
        mov     esi, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [ebp + 0x14]
        mov     dword ptr [esi + 0x8], eax
        movsx   eax, byte ptr [ebp - 0x26]
        mov     dword ptr [esi], eax
        movsx   eax, word ptr [ebp - 0x28]
        mov     dword ptr [esi + 0x4], eax
        lea     eax, [ebp - 0x24]
        push    eax
        push    edi
        call    FUN_1003c500
        add     esp, 0x20
        mov     dword ptr [esi + 0xc], edi
        mov     eax, esi
        pop     edi
        pop     esi
        leave
        ret
    }
}
