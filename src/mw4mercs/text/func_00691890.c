/*
 * FUN_00691890 (64 B) — __thiscall reverse-range swap helper.
 *
 * Calls FUN_006f4950(DAT_007f2464), then reverses the element range
 * [this+8, this+0xc) in 8-byte units, then calls FUN_006f49a0().
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7f2464;
extern void FUN_006f4950(void);
extern void FUN_006f49a0(void);

__declspec(naked) void __fastcall FUN_00691890(void)
{
    __asm {
        mov     eax, dword ptr [g_7f2464]
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0x8]
        cmp     ecx, eax
        jnc     L_end
        push    edi
    L_loop:
        mov     edi, dword ptr [eax - 0x8]
        mov     edx, dword ptr [ecx]
        mov     esi, dword ptr [ecx + 0x4]
        sub     eax, 0x8
        mov     dword ptr [ecx], edi
        mov     edi, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], edi
        add     ecx, 0x8
        cmp     ecx, eax
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], esi
        jc      L_loop
        pop     edi
    L_end:
        call    FUN_006f49a0
        pop     esi
        ret
    }
}
