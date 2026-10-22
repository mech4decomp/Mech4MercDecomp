/*
 * FUN_00412ca0 (169 B) — __thiscall method (RET 0x4). String-system parser
 * (variant of FUN_00412bf0): iterates a token list, compares tokens
 * case-insensitively via _stricmp function pointer at 0x0076b2ac, and calls
 * virtual method +0x24 on match.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0041e710(void);
extern int g_0076b2ac;

__declspec(naked) void FUN_00412ca0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        sub     esp, 0x20
        push    ebx
        push    ebp
        push    esi
        lea     esi, [ecx + 0x10]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [esi + 0x14]
        sub     ecx, dword ptr [esi + 0x10]
        push    0x0
        push    ecx
        sub     eax, ecx
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_0041e690
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x2c]
        mov     ebx, dword ptr [esp + 0x34]
        sub     ecx, edx
        add     ecx, eax
        jz      skip_loop
        mov     ebp, dword ptr [g_0076b2ac]
tok_loop:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        push    edx
        dec     ecx
        push    ebx
        mov     edi, ecx
        call    ebp
        add     esp, 0x8
        test    eax, eax
        jz      done
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x28]
        lea     edx, [edx + edi*0x1 + 0x1]
        cmp     edx, eax
        mov     dword ptr [esp + 0x24], edx
        jbe     skip
        mov     dword ptr [esp + 0x28], edx
skip:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x2c]
        sub     eax, edx
        add     eax, ecx
        jnz     tok_loop
skip_loop:
        mov     edx, dword ptr [esi]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        push    ecx
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
done:
        lea     ecx, [esp + 0x10]
        call    FUN_0041e710
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0x4
    }
}
