/*
 * FUN_00753950 (38 B) — __fastcall (ECX = this). If the 0x40 flag bit in
 * the 16-bit field at this+4 is clear, sets it and appends `this` to a
 * global array (base 0x8b286c, count 0x8b2870).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_8b286c;   /* array base */
extern unsigned int g_8b2870;   /* element count */

__declspec(naked) void __stdcall FUN_00753950(void)
{
    __asm {
        xor     eax, eax
        mov     ax, word ptr [ecx + 0x4]
        test    al, 0x40
        jnz     done
        mov     edx, dword ptr [g_8b286c]
        or      eax, 0x40
        mov     word ptr [ecx + 0x4], ax
        mov     eax, dword ptr [g_8b2870]
        mov     dword ptr [edx + eax*4], ecx
        inc     eax
        mov     dword ptr [g_8b2870], eax
done:
        ret
    }
}
