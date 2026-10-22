/*
 * FUN_004F41E0 (56 B) — MLR/Adept object destructor. __thiscall (ECX = this).
 * Reads globals 0x7dab44/0x7dab40, computes a magic pointer check; installs
 * vtable 0x7751e4; if this == magic then FUN_004c8e90(6); then __thiscall
 * FUN_004f4770(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7dab44;
extern unsigned int g_7dab40;
extern void __cdecl FUN_004c8e90(int);
extern void __cdecl FUN_004f4770(void);

__declspec(naked) void __fastcall FUN_004f41e0(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     edx, dword ptr [g_7dab40]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x18]
        xor     edx, 0x85739531
        cmp     esi, edx
        mov     dword ptr [esi], 0x7751e4
        jnz     L1
        push    0x6
        call    FUN_004c8e90
        add     esp, 0x4
L1:
        mov     ecx, esi
        call    FUN_004f4770
        pop     esi
        ret
    }
}
