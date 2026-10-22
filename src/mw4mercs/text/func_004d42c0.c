/*
 * FUN_004d42c0 (62 B) — MLR network/server subsystem. __thiscall (ECX=this).
 * Sets two byte flags, then conditionally dispatches through an obfuscated
 * vtable pointer and calls a helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;

extern void __cdecl FUN_004c8e90(void);

__declspec(naked) void FUN_004d42c0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     byte ptr [ecx + 0x16], 0x1
        mov     byte ptr [ecx + 0x17], 0x0
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x14]
        jz      L_4d42fd
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      L_4d42f5
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_4d42f5:
        push    0x5
        call    FUN_004c8e90
        pop     ecx
L_4d42fd:
        ret
    }
}
