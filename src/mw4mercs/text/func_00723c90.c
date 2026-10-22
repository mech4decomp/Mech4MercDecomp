/*
 * FUN_00723c90 (34 B) — Branch on a global byte flag; zeroes one of two
 * pairs of global dwords depending on the flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_87bc35;
extern unsigned int g_87dde8;
extern unsigned int g_87dde4;
extern unsigned int g_87e1f0;
extern unsigned int g_87e1ec;

__declspec(naked) void FUN_00723c90(void)
{
    __asm {
        mov     cl, byte ptr [g_87bc35]
        xor     eax, eax
        cmp     cl, al
        jz      label_zero
        mov     dword ptr [g_87dde8], eax
        mov     dword ptr [g_87dde4], eax
        ret
label_zero:
        mov     dword ptr [g_87e1f0], eax
        mov     dword ptr [g_87e1ec], eax
        ret
    }
}
