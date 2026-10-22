/*
 * FUN_0061f520 (49 B) - __fastcall. Clears a run of 8-byte records
 * pointed to by this->0x8 (count = this->0x4), zeroing each record and
 * the 0x14 field of the previously-saved pointer. Resets this->0x4 to 0.
 *
 * __fastcall (ECX = this), RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0061f520(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        jle     L_done
        mov     edx, dword ptr [ecx + 0x8]
        push    esi
        push    edi
        mov     esi, eax
L_loop:
        mov     edi, dword ptr [edx]
        mov     dword ptr [edx], ebx
        mov     byte ptr [edx + 0x4], bl
        mov     byte ptr [edx + 0x5], bl
        mov     byte ptr [edx + 0x6], bl
        mov     byte ptr [edx + 0x7], bl
        add     edx, 0x8
        dec     esi
        mov     dword ptr [edi + 0x14], ebx
        jnz     L_loop
        pop     edi
        pop     esi
L_done:
        mov     dword ptr [ecx + 0x4], ebx
        pop     ebx
        ret
    }
}
