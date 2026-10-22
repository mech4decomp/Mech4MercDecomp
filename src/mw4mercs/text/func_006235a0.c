/*
 * FUN_006235a0 (77 B) — __thiscall constructor, RET 0xC (3 stack params).
 *
 * Stores three params into this+0x4/0x8/0xC, initializes fields from
 * two global constants (DAT_007dc694 byte, DAT_007dc696 word) and
 * zeroes/initializes the rest.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_006235a0_byte_7dc694;   /* DAT_007dc694 */
extern unsigned short g_006235a0_word_7dc696;  /* DAT_007dc696 */

__declspec(naked) void __stdcall FUN_006235a0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, ecx
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [esp + 0x8]
        xor     ecx, ecx
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [esp + 0xC]
        mov     dword ptr [eax + 0xC], edx
        mov     dl, byte ptr [g_006235a0_byte_7dc694]
        mov     byte ptr [eax + 0x18], cl
        mov     word ptr [eax + 0x1A], cx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax + 0x18], dl
        mov     dx, word ptr [g_006235a0_word_7dc696]
        mov     word ptr [eax + 0x1A], dx
        mov     byte ptr [eax + 0x1C], cl
        mov     dword ptr [eax + 0x10], 0xFFFFFFFE
        mov     byte ptr [eax + 0x24], cl
        mov     dword ptr [eax + 0x20], 0xFFFFFFFF
        ret     0xC
    }
}
