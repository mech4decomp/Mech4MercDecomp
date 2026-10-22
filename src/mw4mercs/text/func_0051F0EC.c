/*
 * FUN_0051F0EC (114 B) — __stdcall (RET 0xc, 3 stack params).
 *
 * In-.text data block at 0x51EECC (373 B) contains THREE functions; this is
 * the first (4 NOP pad + 0x51F0F0-0x51F15B). Reads a byte index from
 * [esp+0xc] (bounded 0..0xff), then looks up a per-index byte in an
 * obfuscated table (base 0x7dab44/0x7dab40, XOR key 0x85739531, stride
 * computed as ((idx<<7)+idx)<<3 - idx then <<3). Returns the byte at
 * +0x353a, or 0 if the +0x3538 flag byte is clear. NOTE: 0x51F160 and
 * 0x51F1D0 are two more functions in the same block.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;   /* DAT_007dab44 */
extern int g_7dab40;   /* DAT_007dab40 */

__declspec(naked) void __cdecl FUN_0051F0EC(void)
{
    __asm {
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        mov     ecx, dword ptr [ecx]
        cmp     ecx, 0xff
        jle     L105
        xor     eax, eax
        ret     0xc
L105:
        test    ecx, ecx
        jge     L10e
        xor     eax, eax
        ret     0xc
L10e:
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        lea     edx, [eax + 0xc]
        mov     eax, ecx
        shl     eax, 7
        add     eax, ecx
        shl     eax, 3
        sub     eax, ecx
        mov     ecx, dword ptr [edx]
        shl     eax, 3
        xor     ecx, 0x85739531
        push    ebx
        mov     bl, byte ptr [ecx + eax + 0x3538]
        test    bl, bl
        pop     ebx
        jne     L148
        xor     eax, eax
        ret     0xc
L148:
        mov     edx, dword ptr [edx]
        xor     ecx, ecx
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + eax + 0x353a]
        mov     eax, ecx
        ret     0xc
    }
}
