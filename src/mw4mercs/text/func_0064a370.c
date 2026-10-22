/*
 * FUN_0064a370 (429 B) — ABL stack-heap allocation helper. Dispatches on a
 * token/type id (g_0080d9bc/b4/b0/b8) and bumps the stack pointer
 * g_0080592c by 4, growing the arena (g_00805928 + 0xa000) via FUN_00563060
 * when exhausted. Type 3 allocates a local array through FUN_006f3c80 and
 * pushes it onto a vector at g_008058b8+0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_0080d9bc;
extern int  g_0080d9b4;
extern int  g_0080d9b0;
extern int  g_0080d9b8;
extern int  g_0080592c;
extern int  g_00805928;
extern int  g_008058b8;
extern char g_792a3c[];

extern void __cdecl FUN_00563060(int);
extern void __cdecl FUN_00562f10(int, const char *);
extern int  __cdecl FUN_006f3c80(int, int);
extern void __cdecl FUN_0061ebc0(int, int *, int);

__declspec(naked) void FUN_0064a370(void)
{
    __asm {
        mov     ecx, dword ptr [esp+4]
        cmp     ecx, dword ptr [g_0080d9bc]
        push    esi
        jnz     L_a3b0
        mov     esi, dword ptr [g_0080592c]
        mov     eax, dword ptr [g_00805928]
        add     esi, 4
        add     eax, 0a000h
        cmp     esi, eax
        mov     dword ptr [g_0080592c], esi
        jc      L_a515
        push    0
        call    FUN_00563060
        add     esp, 4
        mov     dword ptr [esi], 0
        pop     esi
        ret
L_a3b0:
        cmp     ecx, dword ptr [g_0080d9b4]
        jnz     L_a3ed
        mov     esi, dword ptr [g_0080592c]
        mov     ecx, dword ptr [g_00805928]
        add     esi, 4
        add     ecx, 0a000h
        cmp     esi, ecx
        mov     dword ptr [g_0080592c], esi
        jc      L_a515
        push    0
        call    FUN_00563060
        add     esp, 4
        mov     dword ptr [esi], 0
        pop     esi
        ret
L_a3ed:
        cmp     ecx, dword ptr [g_0080d9b0]
        jnz     L_a423
        mov     esi, dword ptr [g_0080592c]
        mov     edx, dword ptr [g_00805928]
        add     esi, 4
        add     edx, 0a000h
        mov     dword ptr [g_0080592c], esi
        cmp     esi, edx
L_a412:
        jc      L_a41e
        push    0
        call    FUN_00563060
        add     esp, 4
L_a41e:
        mov     byte ptr [esi], 0
        pop     esi
        ret
L_a423:
        cmp     ecx, dword ptr [g_0080d9b8]
        jnz     L_a448
        mov     esi, dword ptr [g_0080592c]
        mov     eax, dword ptr [g_00805928]
        add     esi, 4
        add     eax, 0a000h
        mov     dword ptr [g_0080592c], esi
        cmp     esi, eax
        jmp     L_a412
L_a448:
        mov     eax, dword ptr [ecx+4]
        sub     eax, 2
        jz      L_a4ec
        dec     eax
        jnz     L_a51b
        mov     esi, dword ptr [g_008058b8]
        mov     eax, dword ptr [esi+0ch]
        test    eax, eax
        push    edi
        jz      L_a4e8
        mov     ecx, dword ptr [ecx+8]
        push    eax
        push    ecx
        call    FUN_006f3c80
        mov     edx, dword ptr [esi+14h]
        lea     ecx, [esi+10h]
        cmp     edx, dword ptr [ecx+8]
        mov     dword ptr [esp+0ch], eax
        jz      L_a494
        test    edx, edx
        jz      L_a48c
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [esp+0ch]
L_a48c:
        add     edx, 4
        mov     dword ptr [ecx+4], edx
        jmp     L_a4a5
L_a494:
        push    1
        lea     eax, [esp+10h]
        push    eax
        push    edx
        call    FUN_0061ebc0
        mov     eax, dword ptr [esp+0ch]
L_a4a5:
        test    eax, eax
        mov     edi, eax
        jnz     L_a4ba
L_a4ab:
        push    offset g_792a3c
        push    0
        call    FUN_00562f10
        add     esp, 8
L_a4ba:
        mov     esi, dword ptr [g_0080592c]
        mov     ecx, dword ptr [g_00805928]
        add     esi, 4
        add     ecx, 0a000h
        cmp     esi, ecx
        mov     dword ptr [g_0080592c], esi
        jc      L_a4e3
        push    0
        call    FUN_00563060
        add     esp, 4
L_a4e3:
        mov     dword ptr [esi], edi
        pop     edi
        pop     esi
        ret
L_a4e8:
        xor     edi, edi
        jmp     L_a4ab
L_a4ec:
        mov     esi, dword ptr [g_0080592c]
        mov     edx, dword ptr [g_00805928]
        add     esi, 4
        add     edx, 0a000h
        cmp     esi, edx
        mov     dword ptr [g_0080592c], esi
        jc      L_a515
        push    0
        call    FUN_00563060
        add     esp, 4
L_a515:
        mov     dword ptr [esi], 0
L_a51b:
        pop     esi
        ret
    }
}
