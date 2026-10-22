/*
 * FUN_0061eb20 (42 B) — __fastcall (ECX = this). Copies dwords from [this+4]
 * to [this] in a loop; the loop is unreachable at runtime (ESI is always 0)
 * but the bytes are transcribed verbatim. Stores final EDX back to [this+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0061eb20(void *param)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        mov     edx, dword ptr [ecx]
        push    esi
        mov     esi, eax
        sub     esi, eax
        sar     esi, 0x2
        test    esi, esi
        jle     L_ret
        push    edi
    L_loop:
        mov     edi, dword ptr [eax]
        mov     dword ptr [edx], edi
        add     eax, 0x4
        add     edx, 0x4
        dec     esi
        jnz     L_loop
        pop     edi
        mov     dword ptr [ecx + 0x4], edx
        pop     esi
        ret
    L_ret:
        mov     dword ptr [ecx + 0x4], edx
        pop     esi
        ret
    }
}
