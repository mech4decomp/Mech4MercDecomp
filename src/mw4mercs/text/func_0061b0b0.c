/*
 * FUN_0061b0b0 (106 B) — __thiscall: stores an arg, reads obfuscated global
 * state (XOR 0x85739531), initializes a sub-object via FUN_00412780, then
 * calls FUN_004e27f0 with four sub-object pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern void FUN_00412780(void);
extern void FUN_004e27f0(void);

__declspec(naked) void FUN_0061b0b0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esi+0x18], eax
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx+0x20]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax+0x5c]
        push    ecx
        lea     ecx, [esi+0x5bdc]
        mov     byte ptr [esi+0x2d], 1
        call    FUN_00412780
        lea     eax, [esi+0x5bf4]
        push    eax
        lea     edx, [esi+0x5be0]
        push    edx
        mov     edx, dword ptr [g_007dab40]
        push    eax
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx+0x1c]
        add     esi, 0x5be8
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        pop     esi
        ret     4
    }
}
