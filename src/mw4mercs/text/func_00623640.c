/*
 * FUN_00623640 (87 B) — __fastcall (ECX = this) guarded alloc helper.
 *
 * If a global object's [0x40] field (xor-masked) is non-zero, allocates
 * via FUN_00629290(0x12) twice and calls FUN_00629d00(this) (thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern void *__cdecl FUN_00629290(int a);
extern void __fastcall FUN_00629d00(void *this, void *arg);

__declspec(naked) void __fastcall FUN_00623640(void *this)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        push    esi
        mov     esi, ecx
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        jz      L_95
        mov     ecx, dword ptr [eax + 0x40]
        push    0x12
        xor     ecx, 0x85739531
        call    FUN_00629290
        test    eax, eax
        jz      L_95
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        push    0x12
        xor     ecx, 0x85739531
        call    FUN_00629290
        push    esi
        mov     ecx, eax
        call    FUN_00629d00
L_95:
        pop     esi
        ret
    }
}
