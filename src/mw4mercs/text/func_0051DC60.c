/*
 * FUN_0051DC60 (70 B) — .text data block (block 0x51AA7D). Decrypts a key
 * from globals 0x7dab44/0x7dab40, calls FUN_00617920, and returns whether
 * [eax+0x70] is positive (setg chain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00617920(void);
extern unsigned int g_7dab44;
extern unsigned int g_7dab40;

__declspec(naked) void FUN_0051DC60(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [esp+0xc]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [edx]
        push    ecx
        mov     ecx, dword ptr [eax+0x44]
        xor     ecx, 0x85739531
        call    FUN_00617920
        mov     eax, dword ptr [eax+0x18]
        test    eax, eax
        je      L_dca1
        mov     ecx, dword ptr [eax+0x70]
        xor     edx, edx
        test    ecx, ecx
        setg    dl
        xor     eax, eax
        test    edx, edx
        setg    al
        ret     0xc
    L_dca1:
        xor     eax, eax
        ret     0xc
    }
}
