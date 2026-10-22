/*
 * FUN_006a0db0 (87 B) — __thiscall. Walks a container (this->0xc),
 * finds a matching element, and returns it (or 0). Calls
 * FUN_0064e100 / FUN_0064dda0 (container helpers) and FUN_00415230.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064dda0(void);
extern void __cdecl FUN_00415230(void);

extern int g_007f268c;

__declspec(naked) void FUN_006a0db0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx + 0xc]
        mov     ecx, esi
        call    FUN_0064e100
        mov     ecx, dword ptr [eax + 0x4]
        sub     ecx, dword ptr [eax]
        test    ecx, 0xfffffffc
        jz      L0E03
        mov     ecx, esi
        call    FUN_0064e100
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [eax]
        push    edx
        mov     ecx, esi
        call    FUN_0064dda0
        mov     esi, eax
        test    esi, esi
        jz      L0E03
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        and     al, 0x1
        cmp     al, 0x1
        jz      L0E03
        mov     eax, dword ptr [g_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L0E03
        mov     eax, esi
        pop     esi
        ret
L0E03:
        xor     eax, eax
        pop     esi
        ret
    }
}
