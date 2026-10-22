/*
 * FUN_00759cd0 (61 B) — __thiscall helper. If this->m_0x810 is non-null,
 * calls an imported function (IAT 0x008aacec) with (this->m_0x810, 3),
 * stores the returned word at this+0xc, and if non-zero dispatches a
 * virtual call (this->vtbl[3]) with (3, this->m_0x810, this+0xe).
 * Otherwise falls through to FUN_007598b0(this). Returns a byte.
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_008aacec;   /* IAT import slot */
extern unsigned char __fastcall FUN_007598b0(void *this);

__declspec(naked) unsigned char __fastcall FUN_00759cd0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x810]
        test    edi, edi
        jz      L_fail
        push    edi
        push    3
        call    dword ptr [g_008aacec]
        test    ax, ax
        mov     word ptr [esi + 0xc], ax
        jz      L_fail
        mov     eax, dword ptr [esi]
        lea     ecx, [esi + 0xe]
        push    ecx
        push    edi
        push    3
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        pop     edi
        xor     al, al
        pop     esi
        ret
    L_fail:
        mov     ecx, esi
        call    FUN_007598b0
        pop     edi
        pop     esi
        ret
    }
}
