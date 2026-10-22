/*
 * FUN_00406d00 (76 B) — error-message dispatcher. Reads two obfuscated
 * globals (0x007dab44 / 0x007dab40), XORs with 0x85739531 to recover
 * object pointers, calls a virtual method (offset 0x34) twice, then
 * forwards the result to FUN_00406c10. __cdecl, 1 param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;              /* 0x007dab44 */
extern int g_007dab40;              /* 0x007dab40 */
extern void __cdecl FUN_00406c10(int, int, int);

__declspec(naked) int __cdecl FUN_00406d00(int param_1)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        lea     eax, [ecx + 0xc]
        mov     ecx, dword ptr [eax]
        push    esi
        mov     esi, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x8]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        xor     esi, 0x85739531
        neg     eax
        sbb     eax, eax
        and     eax, 0x7
        push    0x0
        add     eax, 0x34
        push    eax
        call    dword ptr [edx + 0x34]
        mov     edx, dword ptr [esi]
        push    eax
        push    0x37
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        push    eax
        call    FUN_00406c10
        add     esp, 0xc
        pop     esi
        ret
    }
}
