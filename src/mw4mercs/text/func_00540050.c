/*
 * FUN_00540050 (63 B) — Iterates over two ranges in an object,
 * calling methods for each entry.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_005400F0(void);
void __cdecl FUN_00540310(void);
void __cdecl FUN_005475C0(void);
void __cdecl FUN_00547610(void);

__declspec(naked) void func_00540050(void)
{
    __asm {
        push    edi
        mov     edi, ecx
        mov     al, byte ptr [edi + 0x16]
        test    al, al
        je      L_skip1
        push    esi
        xor     esi, esi
L_loop1:
        push    esi
        mov     ecx, edi
        call    FUN_005400F0
        inc     esi
        cmp     esi, 0xFF
        jl      L_loop1
        xor     esi, esi
L_loop2:
        push    esi
        mov     ecx, edi
        call    FUN_00540310
        inc     esi
        cmp     esi, 0x18
        jl      L_loop2
        mov     ecx, edi
        call    FUN_005475C0
        mov     ecx, edi
        call    FUN_00547610
        pop     esi
L_skip1:
        pop     edi
        ret
    }
}
