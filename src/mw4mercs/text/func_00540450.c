/*
 * FUN_00540450 (67 B) — Scans two ranges in an object, setting
 * dword at [output] to 8 if a byte is non-zero.
 *
 * __thiscall (ECX = this). First arg is output pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall func_00540450(void)
{
    __asm {
        push    ebx
        lea     eax, dword ptr [ecx + 0x3548]
        mov     edx, 0xFF
L_loop1:
        mov     bl, byte ptr [eax - 0x10]
        test    bl, bl
        je      L_skip1
        mov     dword ptr [eax], 8
L_skip1:
        add     eax, 0x2038
        dec     edx
        jne     L_loop1
        lea     eax, dword ptr [ecx + 0x205F38]
        mov     ecx, 0x18
        pop     ebx
L_loop2:
        mov     dl, byte ptr [eax - 4]
        test    dl, dl
        je      L_skip2
        mov     dword ptr [eax], 8
L_skip2:
        add     eax, 0x22AC
        dec     ecx
        jne     L_loop2
        ret
    }
}
