/*
 * FUN_00759B40 (244 B) — __thiscall (ECX = this), RET 0x4 (1 dword param).
 * Reads four config strings ("Server", "RwUID", DAT_007aef48, "Database")
 * via FUN_00759AB0 into a 0x400-byte local buffer, copies the last one into
 * this+0x81a, then calls FUN_00759C40 with the four buffers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_str_7ab7f4[];     /* "Server" */
extern char g_str_7aef50[];     /* "RwUID" */
extern char g_str_7aef48[];     /* DAT_007aef48 */
extern char g_str_76d2a4[];     /* "Database" */

extern void __cdecl FUN_00759AB0(void);
extern void __cdecl FUN_00759C40(void);

__declspec(naked) void __fastcall FUN_00759B40(void *this, void *param_1)
{
    __asm {
        sub     esp, 0x400
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x40c]
        lea     eax, [esp + 0x308]
        push    eax
        push    offset g_str_7ab7f4
        mov     ebx, ecx
        push    esi
        call    FUN_00759AB0
        test    al, al
        jnz     L_9b73
        pop     esi
        pop     ebx
        add     esp, 0x400
        ret     0x4
L_9b73:
        lea     ecx, [esp + 0x208]
        push    ecx
        push    offset g_str_7aef50
        push    esi
        mov     ecx, ebx
        call    FUN_00759AB0
        test    al, al
        jnz     L_9b97
        pop     esi
        pop     ebx
        add     esp, 0x400
        ret     0x4
L_9b97:
        lea     edx, [esp + 0x108]
        push    edx
        push    offset g_str_7aef48
        push    esi
        mov     ecx, ebx
        call    FUN_00759AB0
        test    al, al
        jnz     L_9bbb
        pop     esi
        pop     ebx
        add     esp, 0x400
        ret     0x4
L_9bbb:
        lea     eax, [esp + 0x8]
        push    eax
        push    offset g_str_76d2a4
        push    esi
        mov     ecx, ebx
        call    FUN_00759AB0
        test    al, al
        jnz     L_9bdc
        pop     esi
        pop     ebx
        add     esp, 0x400
        ret     0x4
L_9bdc:
        or      ecx, 0xffffffff
        push    edi
        xor     eax, eax
        lea     edi, [esp + 0xc]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [ebx + 0x81a]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x110]
        push    edx
        lea     eax, [esp + 0x214]
        push    eax
        lea     ecx, [esp + 0x318]
        push    ecx
        mov     ecx, ebx
        call    FUN_00759C40
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x400
        ret     0x4
    }
}
