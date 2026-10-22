/*
 * FUN_005fd1f0 (156 B) — __thiscall. Looks up an object via the
 * obfuscated global pair (0x7dab44 ^ 0x7dab40), calls FUN_004cdfa0 /
 * FUN_004ceeb0, and if the resulting object matches this->[0x280]'s
 * identity, dispatches through vtables.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007f268c;

extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_00415230(void);

__declspec(naked) void FUN_005fd1f0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        push    esi
        push    edi
        mov     edi, ecx
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [esp+0x10]
        and     ecx, 0xff
        push    ecx
        mov     ecx, dword ptr [eax+0x14]
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        jz      L_287
        lea     edx, [esp+0x10]
        push    edx
        mov     ecx, eax
        call    FUN_004ceeb0
        mov     esi, eax
        test    esi, esi
        jz      L_287
        mov     ecx, dword ptr [esp+0xc]
        mov     edx, dword ptr [esi+0x30]
        mov     eax, dword ptr [ecx]
        push    1
        push    edx
        call    dword ptr [eax+0xd0]
        mov     edi, dword ptr [edi+0x280]
        test    edi, edi
        jz      L_287
        mov     eax, dword ptr [esi]
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax+0x60]
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        mov     ebx, eax
        call    dword ptr [edx+0x60]
        cmp     eax, ebx
        pop     ebx
        jnz     L_287
        mov     eax, dword ptr [g_007f268c]
        mov     ecx, dword ptr [esi+4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     L_287
        mov     ecx, dword ptr [esi+0x2fc]
        test    ecx, ecx
        jz      L_287
        mov     eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax+0xdc]
L_287:
        pop     edi
        pop     esi
        ret     8
    }
}
