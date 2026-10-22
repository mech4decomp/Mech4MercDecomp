/*
 * FUN_005c01d0 (136 B) — __thiscall (ECX = this, one dword param at [esp+4]).
 *
 * Setter for this->[0x6a8]. When the flag at this+0x6ac is set and the new
 * value is non-null, builds a message via FUN_0075db4a and dispatches a
 * virtual method; otherwise may fall through to FUN_005c0110.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0075db4a(void);
extern void FUN_005c0110(void);

__declspec(naked) void __stdcall FUN_005c01d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0xc
        push    esi
        mov     esi, ecx
        cmp     dword ptr [esi + 0x6a8], eax
        jz      L_251
        mov     cl, byte ptr [esi + 0x6ac]
        test    cl, cl
        mov     dword ptr [esi + 0x6a8], eax
        jz      L_251
        test    eax, eax
        jz      L_241
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [esi + 0x6b0]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 4], ecx
        mov     edx, dword ptr [eax + 0x1c]
        push    edi
        mov     edi, dword ptr [esi]
        mov     dword ptr [esp + 0xc], edx
        mov     eax, dword ptr [eax + 0x2c]
        push    1
        mov     dword ptr [esp + 0x14], eax
        push    1
        call    FUN_0075db4a
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edi + 0x1bc]
        pop     edi
        pop     esi
        add     esp, 0xc
        ret     4
L_241:
        test    cl, cl
        jz      L_251
        test    eax, eax
        jnz     L_251
        push    eax
        mov     ecx, esi
        call    FUN_005c0110
L_251:
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
