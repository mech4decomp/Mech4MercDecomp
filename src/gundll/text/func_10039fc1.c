/*
 * FUN_10039fc1 (280 B) — __cdecl.
 * String/config parse helper: handles "C" token, strcmp against two
 * globals, calls FUN_1003a101/FUN_1003fdca/FUN_1003a1cd/FUN_1003c500/
 * FUN_1003ca70, updates globals 0x1007566c/0x10075670.
 *
 * CFLAGS: /O1
 */

extern char g_10051ce8[];          /* DAT_10051ce8 (string) */
extern char g_10051c64[];          /* DAT_10051c64 (string) */
extern char g_10075668[];          /* DAT_10075668 (string) */
extern unsigned short g_1007566c;  /* DAT_1007566c */
extern unsigned int g_10075670;    /* DAT_10075670 */
extern void __cdecl FUN_1003eb10(void);
extern void __cdecl FUN_1003a101(void);
extern void __cdecl FUN_1003fdca(void);
extern void __cdecl FUN_1003a1cd(void);
extern void __cdecl FUN_1003c500(void);
extern void __cdecl FUN_1003ca70(void);

__declspec(naked) void func_10039fc1(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x88
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        xor     edx, edx
        cmp     esi, edx
        push    edi
        jz      L_a067
        cmp     byte ptr [esi], 0x43
        jnz     L_a011
        cmp     byte ptr [esi + 1], dl
        jnz     L_a011
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        and     byte ptr [eax + 1], dl
        cmp     ecx, edx
        mov     byte ptr [eax], 0x43
        jz      L_a0d4_short
        mov     word ptr [ecx], dx
        mov     word ptr [ecx + 2], dx
        mov     word ptr [ecx + 4], dx
    L_a0d4_short:
        mov     ecx, dword ptr [ebp + 0x14]
        cmp     ecx, edx
        jz      L_a0d4
        mov     dword ptr [ecx], edx
        jmp     L_a0d4
    L_a011:
        mov     edi, offset g_10051ce8
        push    esi
        push    edi
        call    FUN_1003eb10
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_a097
        mov     ebx, offset g_10051c64
        push    esi
        push    ebx
        call    FUN_1003eb10
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_a097
        lea     eax, [ebp - 0x88]
        push    esi
        push    eax
        call    FUN_1003a101
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_a067
        lea     eax, [ebp - 0x88]
        push    eax
        lea     eax, [ebp - 0x88]
        push    offset g_10075668
        push    eax
        call    FUN_1003fdca
        add     esp, 0xc
        test    eax, eax
        jnz     L_a06b
    L_a067:
        xor     eax, eax
        jmp     L_a0d4
    L_a06b:
        movzx   eax, word ptr [g_1007566c]
        mov     dword ptr [g_10075670], eax
        lea     eax, [ebp - 0x88]
        push    eax
        push    edi
        call    FUN_1003a1cd
        cmp     byte ptr [esi], 0
        pop     ecx
        pop     ecx
        jz      L_a08e
        push    esi
        jmp     L_a08f
    L_a08e:
        push    edi
    L_a08f:
        push    ebx
        call    FUN_1003c500
        pop     ecx
        pop     ecx
    L_a097:
        cmp     dword ptr [ebp + 0x10], 0
        jz      L_a0af
        push    6
        push    offset g_10075668
        push    dword ptr [ebp + 0x10]
        call    FUN_1003ca70
        add     esp, 0xc
    L_a0af:
        cmp     dword ptr [ebp + 0x14], 0
        jz      L_a0c7
        push    4
        push    offset g_10075670
        push    dword ptr [ebp + 0x14]
        call    FUN_1003ca70
        add     esp, 0xc
    L_a0c7:
        push    edi
        push    dword ptr [ebp + 0xc]
        call    FUN_1003c500
        pop     ecx
        mov     eax, edi
        pop     ecx
    L_a0d4:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
