/*
 * FUN_0073AA30 (164 B) — iterates a string table (0x87b64c), comparing each
 * entry against a string built via FUN_00704a80; sets two globals when a
 * match is found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int dword_87b64c;
extern int dword_76b420;
extern int dword_85894c;
extern int dword_8aaef0;
extern void __cdecl FUN_00704a80(void);

__declspec(naked) void FUN_0073AA30(void)
{
    __asm {
        mov     eax, dword ptr [dword_87b64c]
        sub     esp, 0x80
        push    ebp
        mov     ebp, dword ptr [eax+0x1c]
        push    edi
        xor     edi, edi
        push    edi
        push    edi
        push    edi
        push    0xa
        call    FUN_00704a80
        test    eax, eax
        jbe     L_aacb
        push    ebx
        mov     ebx, dword ptr [dword_76b420]
        push    esi
    L_aa58:
        push    0
        push    0
        push    edi
        push    0xb
        call    FUN_00704a80
        push    eax
        lea     ecx, [esp+0x14]
        push    0x7a7174
        push    ecx
        call    ebx
        add     esp, 0xc
        mov     esi, ebp
        lea     eax, [esp+0x10]
    L_aa7a:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_aa9e
        test    cl, cl
        je      L_aa9a
        mov     dl, byte ptr [eax+1]
        mov     cl, dl
        cmp     dl, byte ptr [esi+1]
        jne     L_aa9e
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L_aa7a
    L_aa9a:
        xor     eax, eax
        jmp     L_aaa3
    L_aa9e:
        sbb     eax, eax
        sbb     eax, -1
    L_aaa3:
        test    eax, eax
        jne     L_aab7
        mov     dword ptr [dword_85894c], edi
        mov     dword ptr [dword_8aaef0], 1
    L_aab7:
        push    0
        push    0
        push    0
        push    0xa
        inc     edi
        call    FUN_00704a80
        cmp     edi, eax
        jb      L_aa58
        pop     esi
        pop     ebx
    L_aacb:
        pop     edi
        pop     ebp
        add     esp, 0x80
        ret
    }
}
