/*
 * FUN_00732af0 (47 B) — scans a NUL-terminated string for any character
 * whose lookup-table entry (at 0x896b88) is non-zero. Returns 1 if found,
 * else 0.
 *
 * __stdcall (RET 4), one pointer param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_896b88[];

__declspec(naked) unsigned int __stdcall FUN_00732af0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, ecx
        jz      L_b15
        mov     al, byte ptr [ecx]
        test    al, al
        jz      L_b15
    L_afe:
        and     eax, 0xff
        mov     dl, byte ptr [eax + g_896b88]
        test    dl, dl
        jnz     L_b1a
        mov     al, byte ptr [ecx + 0x1]
        inc     ecx
        test    al, al
        jnz     L_afe
    L_b15:
        xor     al, al
        ret     4
    L_b1a:
        mov     al, 0x1
        ret     4
    }
}
