/*
 * FUN_0051DAC0 (41 B of a 152 B block) — __cdecl (3 stack args, RET 0xC).
 * Computes a key from [0x7DAB44]/[0x7DAB40], dereferences [arg3], and
 * calls FUN_006192D0 with (1, [eax+0x44]^0x85739531, [edx]).
 *
 * NOTE: the 152 B block 0x51DAC0 also contains extra functions at
 * 0x0051DAF0 and 0x0051DB20 (not in this assigned list).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_006192D0(void);

__declspec(naked) void FUN_0051DAC0(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [edx]
        push    ecx
        mov     ecx, dword ptr [eax + 0x44]
        push    1
        xor     ecx, 0x85739531
        call    FUN_006192D0
        ret     0xc
    }
}
