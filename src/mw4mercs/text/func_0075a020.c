/*
 * FUN_0075a020 (285 B) — strtok-based "custom fields" parser.
 *
 * __thiscall (ECX = this), RET 4 (one stack param = string to parse).
 * Returns bool in AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_7aef90;   /* 0x007aef90 delimiter word */
extern unsigned char  g_7aef92;   /* 0x007aef92 delimiter byte */
extern void          *g_76b2b4;   /* 0x0076b2b4 strtok fn ptr */
extern char           g_7aef58[]; /* 0x007aef58 error string */
extern void __cdecl   FUN_00759d10(void);
extern void __cdecl   FUN_00759a00(void);

__declspec(naked) char __stdcall FUN_0075a020(void *param)
{
    __asm {
        sub     esp, 0xa04
        mov     ax, word ptr [g_7aef90]
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     cl, byte ptr [g_7aef92]
        mov     byte ptr [esp + 0xa], cl
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xa18]
        mov     word ptr [esp + 0x10], ax
        xor     eax, eax
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, dword ptr [g_76b2b4]
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [esp + 0x214]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x218]
        push    edx
        call    ebx
        add     esp, 8
        test    eax, eax
        jz      L113
L08c:
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [esp + 0x114]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0
        call    ebx
        add     esp, 8
        test    eax, eax
        jz      L122
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [esp + 0x14]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        push    0x20
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x11c]
        push    edx
        mov     ecx, ebp
        call    FUN_00759d10
        test    al, al
        jz      L12e
        lea     eax, [esp + 0x10]
        push    eax
        push    0
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L08c
L113:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0xa04
        ret     4
L122:
        push    offset g_7aef58
        mov     ecx, ebp
        call    FUN_00759a00
L12e:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0xa04
        ret     4
    }
}
