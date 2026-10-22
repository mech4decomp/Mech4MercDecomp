/*
 * FUN_0074242B (370 B, true extent 0x74242B-0x74259D) — __stdcall (ret 0x10).
 * Compares a 16-byte key against a constant, scans a pointer table
 * [0x7b7400..0x7b7418], builds a string, allocates a node via FUN_006F3C80,
 * appends it to a linked list rooted at [0x8aab00], sets [0x8aaaee]=1.
 *
 * NOTE: the enclosing data block 0x74242B (507 B) also contains a second
 * function at 0x7425A0 (reported as extra, not transcribed here).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7a2f70[];   /* 0x7a2f70 - 16-byte constant key */
extern char g_7b7400[];   /* 0x7b7400 - pointer table */
extern char g_7b7418[];   /* 0x7b7418 - table end */
extern char g_76c690[];   /* 0x76c690 - format string */
extern int  g_849314;     /* 0x849314 */
extern int  g_8aab00;     /* 0x8aab00 - list root */
extern char g_8aaaee;     /* 0x8aaaee - byte flag */
extern void (*g_76b420)(void);   /* 0x76b420 - IAT */
extern void (*g_76b2b0)(void);   /* 0x76b2b0 - IAT */

extern void __cdecl FUN_006F3C80(void);

__declspec(naked) void FUN_0074242B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0x88
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x98]
        xor     eax, eax
        push    edi
        mov     ecx, 4
        mov     edi, offset g_7a2f70
        xor     edx, edx
        repe cmpsd
        mov     dword ptr [esp + 0x14], eax
        jne     L_74258B
        cmp     dword ptr [esp + 0xa0], eax
        mov     ebp, dword ptr [esp + 0xa4]
        mov     dword ptr [esp + 0x10], eax
        jbe     L_74257C
L_742473:
        xor     bl, bl
        mov     esi, offset g_7b7400
L_74247A:
        mov     edx, dword ptr [esi]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        push    ecx
        push    ebp
        push    edx
        call    dword ptr [g_76b2b0]
        add     esp, 0xc
        test    eax, eax
        jne     L_74249A
        mov     bl, 1
L_74249A:
        add     esi, 4
        cmp     esi, offset g_7b7418
        jb      L_74247A
        test    bl, bl
        jne     L_742541
        push    ebp
        lea     eax, [esp + 0x1c]
        push    offset g_76c690
        push    eax
        call    dword ptr [g_76b420]
        mov     ecx, dword ptr [g_849314]
        add     esp, 0xc
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x1c]
        repne scasb
        not     ecx
        add     ecx, 0x17
        push    ecx
        call    FUN_006F3C80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     dword ptr [edx], 0
        lea     edi, [esp + 0x18]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     ebx, [edx + 0x14]
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [g_8aab00]
        test    ecx, ecx
        je      L_742526
        mov     eax, dword ptr [ecx]
        test    eax, eax
        je      L_742522
L_74251A:
        mov     ecx, eax
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jne     L_74251A
L_742522:
        mov     dword ptr [ecx], edx
        jmp     L_74252C
L_742526:
        mov     dword ptr [g_8aab00], edx
L_74252C:
        mov     eax, dword ptr [esp + 0x14]
        inc     eax
        cmp     eax, 7
        mov     byte ptr [g_8aaaee], 1
        mov     dword ptr [esp + 0x14], eax
        ja      L_74257C
L_742541:
        mov     edx, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne scasb
        not     ecx
        dec     ecx
        lea     edx, [edx + ecx + 1]
        or      ecx, 0xffffffff
        mov     edi, ebp
        repne scasb
        not     ecx
        dec     ecx
        mov     al, byte ptr [ecx + ebp + 1]
        test    al, al
        lea     ebp, [ecx + ebp + 1]
        mov     dword ptr [esp + 0x10], edx
        je      L_74257C
        cmp     edx, dword ptr [esp + 0xa0]
        jb      L_742473
L_74257C:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x88
        ret     0x10
L_74258B:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x88
        ret     0x10
    }
}
