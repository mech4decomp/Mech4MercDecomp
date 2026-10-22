/*
 * FUN_004e4d70 (141 B) — MLR/Adept state-engine helper (__thiscall).
 * Nested loop over byte ranges [this+0x14..0x15] x [this+0x16..0x17],
 * calling FUN_004e2ee0 for each pair and setting a flag at ret+0x178,
 * then tail-calls FUN_004b5dd0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc728;
extern int FUN_004e2ee0(int a, int b);
extern void FUN_004b5dd0(void);

__declspec(naked) void FUN_004e4d70(void)
{
    __asm {
        mov     eax, dword ptr [g_007dc728]
        sub     esp, 0xc
        test    eax, eax
        push    edi
        mov     edi, ecx
        jz      L_4e4df1
        mov     al, byte ptr [edi+0x14]
        cmp     al, 0xff
        jz      L_4e4df1
        mov     cl, byte ptr [edi+0x15]
        cmp     al, cl
        mov     byte ptr [esp+0x8], al
        mov     byte ptr [esp+0x7], cl
        ja      L_4e4df1
        mov     dl, byte ptr [edi+0x16]
        mov     byte ptr [esp+0x6], dl
        mov     dl, byte ptr [edi+0x17]
        push    ebx
        push    esi
        mov     byte ptr [esp+0xd], dl
    L_4e4da5:
        mov     bl, byte ptr [esp+0xe]
        cmp     bl, byte ptr [esp+0xd]
        mov     byte ptr [esp+0x14], bl
        ja      L_4e4de5
        mov     esi, dword ptr [esp+0x10]
    L_4e4db7:
        mov     eax, dword ptr [esp+0x14]
        mov     ecx, dword ptr [g_007dc728]
        push    eax
        push    esi
        call    FUN_004e2ee0
        mov     byte ptr [eax+0x178], 0x1
        mov     al, byte ptr [esp+0xd]
        inc     bl
        cmp     bl, al
        mov     byte ptr [esp+0x14], bl
        jbe     L_4e4db7
        mov     al, byte ptr [esp+0x10]
        mov     cl, byte ptr [esp+0xf]
    L_4e4de5:
        inc     al
        cmp     al, cl
        mov     byte ptr [esp+0x10], al
        jbe     L_4e4da5
        pop     esi
        pop     ebx
    L_4e4df1:
        mov     ecx, edi
        call    FUN_004b5dd0
        pop     edi
        add     esp, 0xc
        ret
    }
}
