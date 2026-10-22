/*
 * FUN_00657e70 (53 B) — Fill a width x height grid (this+0x8) with
 * 0x3F in every cell. Width = this+0x10, height = this+0x14.
 *
 * __fastcall (ECX = this), no stack args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00657e70(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x14]
        push    esi
        xor     esi, esi
        test    eax, eax
        jbe     L_done
        push    edi
L_outer:
        mov     eax, dword ptr [ecx + 0x10]
        xor     edx, edx
        test    eax, eax
        jbe     L_outer_next
L_inner:
        mov     edi, dword ptr [ecx + 0x8]
        imul    eax, esi
        add     eax, edx
        mov     word ptr [edi + eax*0x2], 0x3F
        mov     eax, dword ptr [ecx + 0x10]
        inc     edx
        cmp     edx, eax
        jc      L_inner
L_outer_next:
        mov     eax, dword ptr [ecx + 0x14]
        inc     esi
        cmp     esi, eax
        jc      L_outer
        pop     edi
L_done:
        pop     esi
        ret
    }
}
