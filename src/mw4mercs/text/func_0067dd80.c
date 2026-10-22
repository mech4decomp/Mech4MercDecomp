/*
 * FUN_0067dd80 (57 B) — Constructor: calls sub-object ctor, computes a
 * checksum value, zeroes fields.
 *
 * __fastcall (ECX = this). No stack params, RET (no cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0067c0b0(void);
extern unsigned long g_7dab44; /* DAT_007dab44 */
extern unsigned long g_7dab40; /* DAT_007dab40 */

__declspec(naked) void *__fastcall FUN_0067dd80(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x18]
        call    FUN_0067c0b0
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_7dab40]
        xor     eax, eax
        xor     ecx, edx
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        mov     dword ptr [esi + 0x4], eax
        mov     byte ptr [esi + 0x10], al
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi], edx
        mov     eax, esi
        pop     esi
        ret
    }
}
