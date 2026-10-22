/*
 * FUN_00495E30 (41 B) — __thiscall (ECX = this), RET 0x4.
 * Binary-search-like scan: find index of first key > param, return index-1.
 * Struct at ECX: +0x04 = float* keys (stride 12), +0x08 = count.
 *
 * CFLAGS: /O1
 */

__declspec(naked) int __fastcall FUN_00495e30(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx + 0x08]
        xor     edx, edx
        test    esi, esi
        jbe     l_done
        mov     ecx, dword ptr [ecx + 0x04]
    l_loop:
        fld     dword ptr [ecx]
        fcomp   dword ptr [esp + 0x08]
        fnstsw  ax
        test    ah, 0x41
        jz      l_done
        inc     edx
        add     ecx, 0x0c
        cmp     edx, esi
        jc      l_loop
    l_done:
        lea     eax, [edx - 1]
        pop     esi
        ret     0x04
    }
}
