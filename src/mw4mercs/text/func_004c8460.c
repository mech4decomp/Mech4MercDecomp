/*
 * FUN_004c8460 (84 B) — __cdecl. Copies up to 8 non-zero dwords from
 * param_2 into param_1, then fills remaining slots from param_3, then
 * zero-terminates. MLR helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004c8460(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, edi
        xor     eax, eax
        sub     esi, ecx
    L_8470:
        mov     edx, dword ptr [ecx]
        test    edx, edx
        jz      L_8482
        mov     dword ptr [esi + ecx], edx
        inc     eax
        add     ecx, 0x4
        cmp     eax, 0x8
        jc      L_8470
    L_8482:
        cmp     eax, 0x8
        jnc     L_84b1
        mov     esi, dword ptr [esp + 0x14]
        lea     ecx, [edi + eax*4]
    L_848e:
        mov     edx, dword ptr [esi]
        test    edx, edx
        jz      L_84a5
        mov     dword ptr [ecx], edx
        inc     eax
        add     ecx, 0x4
        add     esi, 0x4
        cmp     eax, 0x8
        jc      L_848e
        pop     edi
        pop     esi
        ret
    L_84a5:
        cmp     eax, 0x8
        jnc     L_84b1
        mov     dword ptr [edi + eax*4], 0x0
    L_84b1:
        pop     edi
        pop     esi
        ret
    }
}
