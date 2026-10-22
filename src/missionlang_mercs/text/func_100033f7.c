/*
 * FUN_100033f7 (43 B) — bounded string length: scan up to param_2 bytes for
 * a NUL; return the offset of the NUL, or param_2 if none found.
 *
 * __cdecl, 2 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_100033f7(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        test    edx, edx
        push    esi
        lea     ecx, [edx - 1]
        jz      L3414
L3407:
        cmp     byte ptr [eax], 0
        jz      L3414
        inc     eax
        mov     esi, ecx
        dec     ecx
        test    esi, esi
        jnz     L3407
L3414:
        cmp     byte ptr [eax], 0
        pop     esi
        jnz     L341F
        sub     eax, dword ptr [esp + 4]
        ret
L341F:
        mov     eax, edx
        ret
    }
}
