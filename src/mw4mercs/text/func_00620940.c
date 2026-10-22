/*
 * FUN_00620940 (162 B) — __thiscall (ECX = this). If *(param+0x14) is
 * non-null and its +6 byte non-zero, calls FUN_00620020 to format a
 * string, then sprintf (IAT 0x76b420) into 0x7f29a4 with one of two
 * format strings (0x78cb6c / 0x78cb4c) depending on *(*(param+0x3c)+4),
 * calls FUN_0061fc80, and conditionally FUN_00621280. RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_805904;
extern void* g_76b420;   /* IAT: sprintf */
extern void __cdecl FUN_00620020(void);
extern void __cdecl FUN_0061fc80(void);
extern void __cdecl FUN_00621280(void);

__declspec(naked) void __fastcall FUN_00620940(void)
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
        jz      L_d4
        mov     al, byte ptr [ebx + 0x6]
        test    al, al
        jz      L_d4
        mov     eax, dword ptr [esp + 0x114]
        mov     ecx, dword ptr [esp + 0x118]
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, esi
        call    FUN_00620020
        mov     eax, dword ptr [edi + 0x3c]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [edi + 0x10]
        mov     eax, dword ptr [esi]
        cmp     ecx, 0x3
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, dword ptr [g_805904]
        push    edx
        push    ecx
        lea     edx, [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    edx
        push    eax
        jnz     L_a7
        push    0x78cb6c
        jmp     L_ac
L_a7:
        push    0x78cb4c
L_ac:
        push    0x7f29a4
        call    dword ptr [g_76b420]
        add     esp, 0x1c
        push    0x7f29a4
        mov     ecx, esi
        call    FUN_0061fc80
        mov     al, byte ptr [ebx + 0x7]
        test    al, al
        jz      L_d4
        mov     ecx, esi
        call    FUN_00621280
L_d4:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x100
        ret     0xc
    }
}
