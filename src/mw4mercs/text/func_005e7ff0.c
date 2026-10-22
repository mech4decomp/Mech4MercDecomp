/*
 * FUN_005E7FF0 (104 B) — __fastcall, RET 4 (1 param in ECX).
 * Recomputes a linked-list count and size sum into [this+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005ba720(void);
extern void __cdecl FUN_005ba780(void);
extern void __cdecl FUN_005ba730(void);

__declspec(naked) void __cdecl FUN_005e7ff0(void)
{
    __asm {
        sub     esp, 0x8
        push    esi
        mov     esi, ecx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, esi
        call    FUN_005ba720
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_005ba780
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, esi
        call    FUN_005ba730
        mov     eax, dword ptr [esi]
        mov     ecx, eax
        xor     edx, edx
        test    ecx, ecx
        jz      L_5e802d
L_5e8026:
        mov     ecx, dword ptr [ecx]
        inc     edx
        test    ecx, ecx
        jnz     L_5e8026
L_5e802d:
        shl     edx, 0x18
        test    eax, eax
        mov     dword ptr [esi + 0x4], edx
        jz      L_5e8051
L_5e8037:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx + 0x30]
        mov     ecx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [eax]
        and     edx, 0xffffff
        add     ecx, edx
        test    eax, eax
        mov     dword ptr [esi + 0x4], ecx
        jnz     L_5e8037
L_5e8051:
        pop     esi
        add     esp, 0x8
        ret     0x4
    }
}
