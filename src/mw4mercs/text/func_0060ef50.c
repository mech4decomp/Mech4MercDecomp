/*
 * FUN_0060ef50 (53 B) — Obfuscated pointer chase through two global
 * dwords (0x007DAB44 / 0x007DAB40), a virtual call, and store of the
 * result through param_1+4. Returns 1.
 *
 * __stdcall, RET 8 (two stack args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_ab44;   /* 0x007DAB44 */
extern unsigned int g_ab40;   /* 0x007DAB40 */

__declspec(naked) int __stdcall FUN_0060ef50(void *a, void *b)
{
    __asm {
        mov     eax, dword ptr [g_ab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_ab40]
        mov     edx, dword ptr [ecx + 0xC]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x94]
        lea     ecx, [eax + 0x10]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [edx], eax
        mov     eax, 0x1
        ret     0x8
    }
}
