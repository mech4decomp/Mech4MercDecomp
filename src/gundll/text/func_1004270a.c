/*
 * FUN_1004270a (115 B) — __cdecl.
 * Looks up param_1 in a table at 0x100549e0 (8-byte stride); on match stores
 * the paired value, else maps ranges to error codes (0xd / 0x8 / 0x16).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10042786(void);
extern void __cdecl FUN_1004277d(void);
extern int g_100549e4;

__declspec(naked) void __cdecl FUN_1004270a(void)
{
    __asm {
        push    esi
        call    FUN_10042786
        mov     ecx, dword ptr [esp + 0x8]
        xor     esi, esi
        mov     dword ptr [eax], ecx
        mov     eax, 0x100549e0
    loop1:
        cmp     ecx, dword ptr [eax]
        jz      found
        add     eax, 0x8
        inc     esi
        cmp     eax, 0x10054b48
        jc      loop1
        cmp     ecx, 0x13
        jc      check2
        cmp     ecx, 0x24
        ja      check2
        call    FUN_1004277d
        mov     dword ptr [eax], 0xd
        pop     esi
        ret
    found:
        call    FUN_1004277d
        mov     ecx, dword ptr [esi*8 + g_100549e4]
        pop     esi
        mov     dword ptr [eax], ecx
        ret
    check2:
        cmp     ecx, 0xbc
        jc      default
        cmp     ecx, 0xca
        ja      default
        call    FUN_1004277d
        mov     dword ptr [eax], 0x8
        pop     esi
        ret
    default:
        call    FUN_1004277d
        mov     dword ptr [eax], 0x16
        pop     esi
        ret
    }
}
