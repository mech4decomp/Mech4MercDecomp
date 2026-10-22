/*
 * FUN_00759e60 (446 B) — Bug-report field validation. Validates each
 * field of a report struct (EDI) against a set of label strings via
 * FUN_00759d10 / FUN_00759da0 (thiscall, ECX = this).
 *
 * __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00759d10(void);
extern void __cdecl FUN_00759da0(void);

extern int g_7b783c, g_7b7840, g_7b7838, g_7b7844;
extern int g_7b7848, g_7b784c, g_7b7850, g_7b7854;
extern int g_7b7858, g_7b785c, g_7b7860, g_7b7864;
extern int g_7b7868, g_7b786c;
extern int g_7b7874[];   /* label table */
extern int g_7b7880[];   /* label table */
extern int g_7b7914[];   /* label table */
extern int g_7b78a4[];   /* label table */
extern int g_7b78cc[];   /* label table */

__declspec(naked) void FUN_00759e60(void)
{
    __asm {
        mov     edx, dword ptr [g_7b783c]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [edi + 0x1c]
        mov     esi, ecx
        mov     ecx, dword ptr [eax*4 + g_7b7874]
        push    0x20
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_00759d10
        test    al, al
        jnz     L_9e8c
        pop     edi
        pop     esi
        ret     4
L_9e8c:
        mov     eax, dword ptr [edi + 4]
        mov     ecx, dword ptr [g_7b7840]
        push    0x20
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00759d10
        test    al, al
        jnz     L_9ea9
        pop     edi
        pop     esi
        ret     4
L_9ea9:
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [g_7b7838]
        push    0xff
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00759d10
        test    al, al
        jnz     L_9ec7
        pop     edi
        pop     esi
        ret     4
L_9ec7:
        mov     ecx, dword ptr [edi + 0x20]
        mov     edx, dword ptr [ecx*4 + g_7b7880]
        mov     eax, dword ptr [g_7b7844]
        push    0x20
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00759d10
        test    al, al
        jnz     L_9eea
        pop     edi
        pop     esi
        ret     4
L_9eea:
        mov     ecx, dword ptr [edi + 0x30]
        mov     edx, dword ptr [g_7b7848]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_00759da0
        test    al, al
        jnz     L_9f05
        pop     edi
        pop     esi
        ret     4
L_9f05:
        mov     eax, dword ptr [edi + 0x34]
        mov     ecx, dword ptr [g_7b784c]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00759da0
        test    al, al
        jnz     L_9f20
        pop     edi
        pop     esi
        ret     4
L_9f20:
        mov     edx, dword ptr [edi + 0x24]
        mov     eax, dword ptr [edx*4 + g_7b7914]
        mov     ecx, dword ptr [g_7b7850]
        push    0x20
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00759d10
        test    al, al
        jnz     L_9f44
        pop     edi
        pop     esi
        ret     4
L_9f44:
        mov     edx, dword ptr [edi + 8]
        mov     eax, dword ptr [g_7b7854]
        push    0xff
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00759d10
        test    al, al
        jnz     L_9f63
        pop     edi
        pop     esi
        ret     4
L_9f63:
        mov     ecx, dword ptr [edi + 0xc]
        mov     edx, dword ptr [g_7b7858]
        push    0x20
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_00759d10
        test    al, al
        jnz     L_9f80
        pop     edi
        pop     esi
        ret     4
L_9f80:
        mov     eax, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [g_7b785c]
        push    0x14
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00759d10
        test    al, al
        jnz     L_9f9d
        pop     edi
        pop     esi
        ret     4
L_9f9d:
        mov     edx, dword ptr [edi + 0x28]
        mov     eax, dword ptr [edx*4 + g_7b78a4]
        mov     ecx, dword ptr [g_7b7860]
        push    0x20
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00759d10
        test    al, al
        jnz     L_9fc1
        pop     edi
        pop     esi
        ret     4
L_9fc1:
        mov     edx, dword ptr [edi + 0x14]
        mov     eax, dword ptr [g_7b7864]
        push    0x20
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00759d10
        test    al, al
        jnz     L_9fdd
        pop     edi
        pop     esi
        ret     4
L_9fdd:
        mov     ecx, dword ptr [edi + 0x2c]
        mov     edx, dword ptr [ecx*4 + g_7b78cc]
        mov     eax, dword ptr [g_7b7868]
        push    0x20
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00759d10
        test    al, al
        jnz     L_a000
        pop     edi
        pop     esi
        ret     4
L_a000:
        mov     ecx, dword ptr [edi + 0x18]
        mov     edx, dword ptr [g_7b786c]
        push    0x20
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_00759d10
        test    al, al
        pop     edi
        setnz   al
        pop     esi
        ret     4
    }
}
