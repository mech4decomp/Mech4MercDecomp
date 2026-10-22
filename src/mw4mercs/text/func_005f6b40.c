/*
 * FUN_005f6b40 (43 B) — Returns a decoded pointer or 0 based on a flag.
 *
 * Uses absolute memory refs DAT_007dab44 / DAT_007dab40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int DAT_007dab44;
extern unsigned int DAT_007dab40;

__declspec(naked) int FUN_005f6b40(void)
{
    __asm {
        mov     eax, DAT_007dab44
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x20]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x20]
        jnz     decode
        xor     eax, eax
        ret
decode:
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        add     eax, 0x2b8
        ret
    }
}
