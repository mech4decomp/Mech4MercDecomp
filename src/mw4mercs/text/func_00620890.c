/*
 * FUN_00620890 (166 B) — Log a "STORE" operation.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 * If *(param_1+0x14) is non-NULL and its +4 byte is non-zero, formats
 * a debug string via FUN_00620020 + sprintf (IAT 0x0076B420) into
 * global buffer 0x007F29A4, logs it via FUN_0061fc80, and optionally
 * calls FUN_00621280. Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int  g_00805904;
extern void         *g_0076b420;   /* IAT: sprintf */
extern void __cdecl  FUN_00620020(void);
extern void __cdecl  FUN_0061fc80(void);
extern void __cdecl  FUN_00621280(void);

__declspec(naked) void __fastcall FUN_00620890(void)
{
    __asm {
        sub     esp, 0x100
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x110]
        mov     ebx, dword ptr [edi + 0x14]
        test    ebx, ebx
        mov     esi, ecx
        jz      l_end
        mov     al, byte ptr [ebx + 4]
        test    al, al
        jz      l_end
        mov     eax, dword ptr [esp + 0x11c]
        mov     ecx, dword ptr [esp + 0x118]
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, esi
        call    FUN_00620020
        mov     eax, dword ptr [esp + 0x114]
        mov     ecx, dword ptr [eax + 4]
        mov     edx, dword ptr [edi + 0x10]
        mov     eax, dword ptr [esi]
        cmp     ecx, 3
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, dword ptr [g_00805904]
        push    edx
        push    ecx
        lea     edx, [eax + 4]
        mov     eax, dword ptr [eax]
        push    edx
        push    eax
        jnz     l_fmt2
        push    0x78cb28
        jmp     l_fmt_done
    l_fmt2:
        push    0x78cb08
    l_fmt_done:
        push    0x7f29a4
        call    dword ptr [g_0076b420]
        add     esp, 0x1c
        push    0x7f29a4
        mov     ecx, esi
        call    FUN_0061fc80
        mov     al, byte ptr [ebx + 5]
        test    al, al
        jz      l_end
        mov     ecx, esi
        call    FUN_00621280
    l_end:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x100
        ret     0x10
    }
}
