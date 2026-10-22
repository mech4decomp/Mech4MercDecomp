/*
 * FUN_0051B810 (70 B) — .text data block (block 0x51AA7D). Decrypts a key
 * from globals 0x7dab44/0x7dab40, walks a linked structure, and stores a
 * value into [eax+0x90]. Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7dab44;
extern unsigned int g_7dab40;

__declspec(naked) void FUN_0051B810(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx+0x44]
        xor     edx, 0x85739531
        lea     eax, [ecx+0x44]
        je      L_b851
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx+0x1c]
        test    edx, edx
        je      L_b851
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [esp+0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx+0x1c]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax+0x90], edx
    L_b851:
        xor     eax, eax
        ret     0xc
    }
}
