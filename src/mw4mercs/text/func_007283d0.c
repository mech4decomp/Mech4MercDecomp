/*
 * FUN_007283d0 (203 B) — String tokenizer/parser over a global string.
 *
 * Reads tokens from param_1, accumulating a value via FUN_00727ec0 /
 * FUN_007280a0, and updates several globals. __stdcall RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008816d8;
extern char g_008816dc;
extern int g_008816cc;
extern int g_008816ec;
extern void __stdcall FUN_00727ec0(void *a, void *b, int c);
extern int __stdcall FUN_007280a0(void *p);

__declspec(naked) void __stdcall FUN_007283d0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        push    edi
        push    0x20
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        call    FUN_00727ec0
        mov     esi, dword ptr [esp + 0x20]
        mov     al, byte ptr [esi]
        cmp     al, 0x20
        mov     edx, dword ptr [g_008816d8]
        mov     bl, byte ptr [g_008816dc]
        mov     edi, dword ptr [g_008816cc]
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [g_008816ec], 0
        jz      L_8479
L_8411:
        cmp     al, 0xd
        jz      L_8479
        cmp     al, 0xa
        jz      L_8479
        test    al, al
        jz      L_8479
L_841D:
        push    esi
        call    FUN_007280a0
        test    eax, eax
        jz      L_8433
L_8427:
        add     esi, eax
        push    esi
        call    FUN_007280a0
        test    eax, eax
        jnz     L_8427
L_8433:
        xor     eax, eax
        mov     al, byte ptr [esi]
        test    al, al
        jz      L_8479
        cmp     al, 0xd
        jz      L_8479
        cmp     al, 0xa
        jz      L_8479
        push    eax
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        inc     esi
        call    FUN_00727ec0
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [g_008816ec]
        jle     L_8465
        mov     dword ptr [g_008816ec], eax
L_8465:
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x14]
        add     eax, edx
        mov     dword ptr [esp + 0xc], eax
        mov     al, byte ptr [esi]
        cmp     al, 0x20
        jnz     L_8411
L_8479:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [g_008816cc], edi
        pop     edi
        pop     esi
        mov     dword ptr [g_008816d8], eax
        mov     eax, dword ptr [esp + 0x4]
        mov     byte ptr [g_008816dc], bl
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
