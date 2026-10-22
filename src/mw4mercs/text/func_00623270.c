/*
 * FUN_00623270 (65 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 * Iterates over a 16-byte-element array (this+0x2b8 .. this+0x2bc),
 * calling FUN_00622c30 for each element.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00622c30(void);

__declspec(naked) void __fastcall FUN_00623270(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x2bc]
        mov     edx, dword ptr [esi + 0x2b8]
        push    edi
        sub     eax, edx
        xor     edi, edi
        sar     eax, 0x4
        jz      l_done
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
    l_loop:
        push    ebx
        push    edi
        mov     ecx, esi
        call    FUN_00622c30
        mov     ecx, dword ptr [esi + 0x2bc]
        sub     ecx, dword ptr [esi + 0x2b8]
        inc     edi
        sar     ecx, 0x4
        cmp     edi, ecx
        jc      l_loop
        pop     ebx
    l_done:
        pop     edi
        pop     esi
        ret     0x4
    }
}
