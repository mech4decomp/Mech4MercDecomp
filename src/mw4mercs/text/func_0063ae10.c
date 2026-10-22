/*
 * FUN_0063AE10 (104 B) — __cdecl, RET 0.
 *
 * Same shape as FUN_0063ADA0 but ends with FUN_0064e480 instead of
 * FUN_0064e320. Computes a decrypted function pointer from globals
 * 0x7DAB44/0x7DAB40, calls FUN_004fcb30(param_1). If non-null and
 * FUN_00415230(DAT_007f268c) is true, calls FUN_00600940 then
 * FUN_0064e480.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007f268c;
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_0064e480(void);

__declspec(naked) void __cdecl FUN_0063ae10(int param_1, int param_2)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        push    esi
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      l_ae76
        mov     eax, dword ptr [g_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      l_ae76
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        mov     ecx, dword ptr [eax + 0x20]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_00600940
        mov     ecx, eax
        call    FUN_0064e480
    l_ae76:
        pop     esi
        ret
    }
}
