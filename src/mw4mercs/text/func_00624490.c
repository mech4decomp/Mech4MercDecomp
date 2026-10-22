/*
 * FUN_00624490 (126 B) — State lookup / cache resolution.
 *
 * __fastcall (ECX = param_1). If the cached value at +0x20 is
 * negative, resolves it via FUN_004cdfa0 / FUN_004ceeb0 /
 * FUN_00415230 using global tables, else computes -1 - *(this+8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_00415230(void);

extern int g_7dab44;
extern int g_7dab40;
extern int g_7f25c0;

__declspec(naked) void __fastcall FUN_00624490(int param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        push    edi
        jge     l_0b
        mov     ecx, dword ptr [esi + 8]
        test    ecx, ecx
        jge     l_ad
        or      eax, 0xffffffff
        sub     eax, ecx
        pop     edi
        mov     dword ptr [esi + 0x20], eax
        pop     esi
        ret
    l_ad:
        mov     eax, dword ptr [g_7dab44]
        mov     edi, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x18]
        xor     eax, edi
        lea     edi, [esi + 0x18]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        jz      l_03
        push    edi
        mov     ecx, eax
        call    FUN_004ceeb0
        mov     edi, eax
        test    edi, edi
        jz      l_03
        mov     eax, dword ptr [g_7f25c0]
        mov     ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     l_03
        mov     eax, dword ptr [edi + 0x4cc]
        pop     edi
        mov     dword ptr [esi + 0x20], eax
        pop     esi
        ret
    l_03:
        mov     eax, 8
        mov     dword ptr [esi + 0x20], eax
    l_0b:
        pop     edi
        pop     esi
        ret
    }
}
