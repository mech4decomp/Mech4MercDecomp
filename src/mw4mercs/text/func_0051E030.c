/*
 * FUN_0051E030 (45 B of a 152 B block) — __cdecl (3 stack args, RET 0xC).
 * Computes a key from [0x7DAB44]/[0x7DAB40], dereferences [arg3], and
 * calls FUN_00595B60 with ([edx+0x34]^0x85739531, [edx]); returns
 * [eax+0x64].
 *
 * NOTE: the 152 B block 0x51E030 also contains an extra function at
 * 0x0051E060 (not in this assigned list).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_00595B60(void);

__declspec(naked) void FUN_0051E030(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [eax + 0x44]
        xor     edx, 0x85739531
        push    ecx
        mov     ecx, dword ptr [edx + 0x34]
        call    FUN_00595B60
        mov     eax, dword ptr [eax + 0x64]
        ret     0xc
    }
}
