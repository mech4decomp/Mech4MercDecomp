/*
 * FUN_00412820 (140 B) — __thiscall refcounted-string tokenizer helper.
 * If *this == 0, writes 0 to the out-param and returns. Otherwise tokenizes
 * the input string (arg2) with strtok using a delimiter (arg3, default
 * " \t," at 0x76d1ec), skipping ahead arg3 tokens, then decrements the
 * refcount byte at the tail of the string (freeing via FUN_004084e0 when
 * it hits zero).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char DAT_0076d1ec[];          /* 0x0076D1EC - " \t," default delimiter */
extern void *g_0076b2b4;             /* 0x0076B2B4 - strtok IAT */
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00412820(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jnz     L1
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [eax], 0
        ret     0xc
    L1:
        mov     ecx, dword ptr [esp + 0xc]
        test    ecx, ecx
        push    esi
        mov     esi, offset DAT_0076d1ec
        jz      L2
        mov     esi, ecx
    L2:
        push    ebx
        push    ebp
        push    edi
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [g_0076b2b4]
        push    esi
        push    eax
        call    edi
        mov     ebp, dword ptr [esp + 0x20]
        add     esp, 8
        xor     ebx, ebx
        test    ebp, ebp
        jbe     L3
    L4:
        push    esi
        push    0
        call    edi
        add     esp, 8
        test    eax, eax
        jz      L3
        inc     ebx
        cmp     ebx, ebp
        jc      L4
    L3:
        mov     esi, dword ptr [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        pop     edi
        pop     ebp
        pop     ebx
        jz      L5
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L5
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L5:
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
