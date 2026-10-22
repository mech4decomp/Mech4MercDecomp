/*
 * FUN_00659020 (52 B) — Allocate and copy an array of dwords.
 *
 * __cdecl, RET 0xC (three stack params). If param_1 != 0, allocates
 * param_1*4 bytes via FUN_004084d0; then copies (param_3 - param_2)/4
 * dwords from param_2 into the buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);

__declspec(naked) void __stdcall FUN_00659020(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      l_zero
        shl     eax, 2
        push    eax
        call    FUN_004084d0
        add     esp, 4
        jmp     l_cont
    l_zero:
        xor     eax, eax
    l_cont:
        mov     ecx, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        sub     ecx, esi
        sar     ecx, 2
        test    ecx, ecx
        jle     l_done
        push    edi
        mov     edi, eax
        rep     movsd
        pop     edi
    l_done:
        pop     esi
        ret     0xc
    }
}
