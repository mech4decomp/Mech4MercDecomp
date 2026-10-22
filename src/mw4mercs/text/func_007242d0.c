/*
 * FUN_007242D0 (121 B) — __stdcall (RET 0x4, 1 param).
 *
 * Looks up an entry in the table at 0x856a8c indexed by param_1,
 * gated on global 0x856b94. Returns a status code (0/2/4 or a
 * derived value) based on fields at +0x9c/+0x70/+0xec/+0xc,
 * +0x83/+0x82/+0x80 and a call to FUN_00756940.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00756940(void);

extern int g_856b94;
extern int g_856a8c[];

__declspec(naked) void __stdcall FUN_007242d0(void)
{
    __asm {
        mov     eax, dword ptr [g_856b94]
        test    eax, eax
        push    esi
        jz      L_724340
        mov     esi, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esi*4 + g_856a8c]
        cmp     dword ptr [ecx + 0x9c], 0x5
        jnz     L_7242fe
        mov     eax, dword ptr [ecx + 0x70]
        mov     ecx, dword ptr [eax + 0xec]
        mov     eax, dword ptr [ecx + 0xc]
        pop     esi
        ret     0x4
L_7242fe:
        cmp     dword ptr [ecx], 0x0
        jz      L_724340
        mov     al, byte ptr [ecx + 0x83]
        test    al, al
        jz      L_724316
        mov     eax, 0x2
        pop     esi
        ret     0x4
L_724316:
        cmp     byte ptr [ecx + 0x82], 0x1
        jnz     L_724340
        call    FUN_00756940
        test    al, al
        jz      L_724340
        mov     edx, dword ptr [esi*4 + g_856a8c]
        mov     cl, byte ptr [edx + 0x80]
        xor     eax, eax
        test    cl, cl
        setnz   al
        pop     esi
        ret     0x4
L_724340:
        mov     eax, 0x4
        pop     esi
        ret     0x4
    }
}
