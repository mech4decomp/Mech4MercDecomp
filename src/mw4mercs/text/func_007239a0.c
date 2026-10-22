/*
 * FUN_007239A0 (66 B) — Bitfield clear/set helper.
 *
 * Clears bit (param_1 & 7) in byte array at 0x87DDC4; if that bit was not
 * set in the byte array at 0x87DDA4, sets it there. Operates on
 * byte[param_1 >> 3].
 *
 * __stdcall, RET 0x4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_007239a0(unsigned int param_1)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     eax, ecx
        and     ecx, 7
        mov     edx, 1
        shl     edx, cl
        push    ebx
        shr     eax, 3
        mov     bl, byte ptr [eax + 0x87ddc4]
        mov     cl, dl
        not     cl
        and     bl, cl
        mov     cl, byte ptr [eax + 0x87dda4]
        mov     byte ptr [eax + 0x87ddc4], bl
        xor     ebx, ebx
        mov     bl, cl
        and     ebx, edx
        test    bl, bl
        pop     ebx
        jnz     done
        or      cl, dl
        mov     byte ptr [eax + 0x87dda4], cl
done:
        ret     4
    }
}
