/*
 * FUN_00514960 (69 B) — .text data block (block 0x513F1F). Validates a
 * pointer-chain value (must be in [2, 0xff]), then calls FUN_004CDFA0 with
 * a decrypted key derived from globals 0x7dab44/0x7dab40. Returns a boolean
 * (0/1) via neg/sbb/neg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004CDFA0(void);
extern unsigned int g_7dab44;
extern unsigned int g_7dab40;

__declspec(naked) void FUN_00514960(void)
{
    __asm {
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [eax]
        mov     ecx, dword ptr [ecx]
        cmp     ecx, 2
        jge     L_4972
        xor     eax, eax
        ret     0xc
    L_4972:
        cmp     ecx, 0xff
        jl      L_497f
        xor     eax, eax
        ret     0xc
    L_497f:
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        push    ecx
        mov     ecx, dword ptr [eax+0x14]
        xor     ecx, 0x85739531
        call    FUN_004CDFA0
        neg     eax
        sbb     eax, eax
        neg     eax
        ret     0xc
    }
}
