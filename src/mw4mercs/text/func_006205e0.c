/*
 * FUN_006205E0 (104 B) — Breakpoint-hit handler (__fastcall, RET 0).
 *
 * If this+8 is non-null and FUN_0061fa50(DAT_00805904) is true, formats
 * a "HIT BP" string via sprintf (IAT 0x76B420), then calls
 * FUN_0061fc80 and FUN_00621280. Otherwise, if this+0x14 is set, calls
 * FUN_00621280. Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00805904;
extern void *g_0076b420;
extern void __cdecl FUN_0061fa50(void);
extern void __cdecl FUN_0061fc80(void);
extern void __cdecl FUN_00621280(void);

__declspec(naked) int __fastcall FUN_006205e0(void *this)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x8]
        test    ecx, ecx
        mov     bl, byte ptr [esi + 0x14]
        jz      l_0638
        mov     eax, dword ptr [g_00805904]
        push    eax
        call    FUN_0061fa50
        test    al, al
        jz      l_0638
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [g_00805904]
        push    ecx
        lea     edx, [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    edx
        push    eax
        push    0x78ca90
        push    0x7f29a4
        call    dword ptr [g_0076b420]
        add     esp, 0x14
        push    0x7f29a4
        mov     ecx, esi
        call    FUN_0061fc80
        mov     ecx, esi
        call    FUN_00621280
        pop     esi
        xor     eax, eax
        pop     ebx
        ret
    l_0638:
        test    bl, bl
        jz      l_0643
        mov     ecx, esi
        call    FUN_00621280
    l_0643:
        pop     esi
        xor     eax, eax
        pop     ebx
        ret
    }
}
