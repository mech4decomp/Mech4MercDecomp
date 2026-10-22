/*
 * FUN_00412d50 (284 B) — __thiscall method (RET 0x4). String-system iterator:
 * walks an external token list object (EBX), compares tokens case-insensitively
 * via _stricmp at 0x0076b2ac, and calls virtual methods +0x24/+0x18.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0041e710(void);
extern int g_0076b2ac;

__declspec(naked) void FUN_00412d50(void)
{
    __asm {
        sub     esp, 0x24
        mov     eax, dword ptr [ecx + 0x24]
        push    ebx
        mov     ebx, dword ptr [esp + 0x2c]
        push    esi
        lea     esi, [ecx + 0x10]
        push    edi
        sub     eax, dword ptr [esi + 0x10]
        mov     dword ptr [esp + 0xc], eax
        mov     eax, dword ptr [ebx]
        push    0x0
        mov     ecx, ebx
        call    dword ptr [eax + 0xc]
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x8], 0xffffffec
        call    dword ptr [edx + 0x8]
        test    eax, eax
        jbe     end
        push    ebp
loop_start:
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [esi]
        mov     ebp, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     edx, dword ptr [esi + 0x10]
        mov     edi, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    0x0
        sub     edx, edi
        push    ecx
        add     edx, eax
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_0041e690
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        mov     edi, dword ptr [esp + 0x30]
        mov     ecx, eax
        sub     ecx, edx
        add     ecx, edi
        jz      after_loop
tok_loop:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        push    ebp
        push    edx
        mov     edi, ecx
        call    dword ptr [g_0076b2ac]
        add     esp, 0x8
        test    eax, eax
        jz      break_out
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x2c]
        lea     edx, [edx + edi*0x1 + 0x1]
        cmp     edx, eax
        mov     dword ptr [esp + 0x28], edx
        jbe     skip
        mov     dword ptr [esp + 0x2c], edx
skip:
        mov     eax, dword ptr [esp + 0x24]
        mov     edi, dword ptr [esp + 0x30]
        mov     ecx, eax
        sub     ecx, edx
        add     ecx, edi
        jnz     tok_loop
        jmp     after_loop
break_out:
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
after_loop:
        mov     ecx, dword ptr [esp + 0x30]
        sub     eax, edx
        add     eax, ecx
        jnz     skip_call
        mov     eax, dword ptr [esp + 0x38]
        mov     edx, dword ptr [esi]
        inc     eax
        push    eax
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
skip_call:
        mov     eax, dword ptr [esp + 0x38]
        mov     edx, dword ptr [ebx]
        inc     eax
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x18]
        lea     ecx, [esp + 0x14]
        call    FUN_0041e710
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x8]
        test    eax, eax
        ja      loop_start
        pop     ebp
end:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x24
        ret     0x4
    }
}
