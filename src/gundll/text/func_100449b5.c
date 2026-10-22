/*
 * FUN_100449b5 (659 B) — __cdecl, RET.
 * Float-to-string formatter (6 params). Handles special values (INF/IND/SNAN/
 * QNAN), then does a fixed-point decimal conversion of a 96-bit mantissa into
 * the caller's buffer, with rounding and exponent handling.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003c500(void);
extern void __cdecl FUN_100459db(void);
extern void __cdecl FUN_100457bb(void);
extern void __cdecl FUN_10044386(void);
extern void __cdecl FUN_100443b4(void);
extern void __cdecl FUN_10044328(void);

__declspec(naked) void __cdecl FUN_100449b5(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x1c]
        push    esi
        mov     ecx, eax
        mov     esi, 0x7fff
        and     ecx, 0x8000
        and     eax, esi
        test    cx, cx
        push    edi
        mov     byte ptr [ebp - 0x1c], 0xcc
        mov     byte ptr [ebp - 0x1b], 0xcc
        mov     byte ptr [ebp - 0x1a], 0xcc
        mov     byte ptr [ebp - 0x19], 0xcc
        mov     byte ptr [ebp - 0x18], 0xcc
        mov     byte ptr [ebp - 0x17], 0xcc
        mov     byte ptr [ebp - 0x16], 0xcc
        mov     byte ptr [ebp - 0x15], 0xcc
        mov     byte ptr [ebp - 0x14], 0xcc
        mov     byte ptr [ebp - 0x13], 0xcc
        mov     byte ptr [ebp - 0x12], 0xfb
        mov     byte ptr [ebp - 0x11], 0x3f
        mov     dword ptr [ebp - 0x4], 1
        mov     edx, eax
        jz      L_44a17
        mov     byte ptr [ebx + 2], 0x2d
        jmp     L_44a1b
    L_44a17:
        mov     byte ptr [ebx + 2], 0x20
    L_44a1b:
        mov     edi, dword ptr [ebp + 0xc]
        test    dx, dx
        jnz     L_44a41
        test    edi, edi
        jnz     L_44a41
        cmp     dword ptr [ebp + 0x8], edi
        jnz     L_44a41
    L_44a2c:
        and     word ptr [ebx], 0
        mov     byte ptr [ebx + 2], 0x20
        mov     byte ptr [ebx + 3], 1
        mov     byte ptr [ebx + 4], 0x30
        jmp     L_44c3f
    L_44a41:
        cmp     dx, si
        jnz     L_44ac0
        mov     eax, 0x80000000
        mov     word ptr [ebx], 1
        cmp     edi, eax
        jnz     L_44a5a
        cmp     dword ptr [ebp + 0x8], 0
        jz      L_44a69
    L_44a5a:
        test    edi, 0x40000000
        jnz     L_44a69
        push    0x1004c094
        jmp     L_44aaf
    L_44a69:
        test    cx, cx
        jz      L_44a83
        cmp     edi, 0xc0000000
        jnz     L_44a83
        cmp     dword ptr [ebp + 0x8], 0
        jnz     L_44aaa
        push    0x1004c08c
        jmp     L_44a92
    L_44a83:
        cmp     edi, eax
        jnz     L_44aaa
        cmp     dword ptr [ebp + 0x8], 0
        jnz     L_44aaa
        push    0x1004c084
    L_44a92:
        lea     eax, [ebx + 4]
        push    eax
        call    FUN_1003c500
        pop     ecx
        mov     byte ptr [ebx + 3], 5
        pop     ecx
    L_44aa1:
        and     dword ptr [ebp - 0x4], 0
        jmp     L_44c18
    L_44aaa:
        push    0x1004c07c
    L_44aaf:
        lea     eax, [ebx + 4]
        push    eax
        call    FUN_1003c500
        pop     ecx
        mov     byte ptr [ebx + 3], 6
        pop     ecx
        jmp     L_44aa1
    L_44ac0:
        movzx   eax, dx
        mov     ecx, edi
        mov     esi, eax
        shr     ecx, 0x18
        imul    eax, eax, 0x4d10
        shr     esi, 0x8
        and     word ptr [ebp - 0x10], 0
        push    1
        lea     ecx, [esi + ecx*2]
        mov     word ptr [ebp - 0x6], dx
        imul    ecx, ecx, 0x4d
        mov     dword ptr [ebp - 0xa], edi
        lea     esi, [ecx + eax + 0xecbced0c]
        mov     eax, dword ptr [ebp + 0x8]
        sar     esi, 0x10
        mov     dword ptr [ebp - 0xe], eax
        movsx   eax, si
        neg     eax
        push    eax
        lea     eax, [ebp - 0x10]
        push    eax
        call    FUN_100459db
        add     esp, 0xc
        cmp     word ptr [ebp - 0x6], 0x3fff
        jc      L_44b21
        lea     eax, [ebp - 0x1c]
        inc     esi
        push    eax
        lea     eax, [ebp - 0x10]
        push    eax
        call    FUN_100457bb
        pop     ecx
        pop     ecx
    L_44b21:
        test    byte ptr [ebp + 0x18], 1
        mov     word ptr [ebx], si
        jz      L_44b3b
        mov     edi, dword ptr [ebp + 0x14]
        movsx   eax, si
        add     edi, eax
        test    edi, edi
        jg      L_44b3e
        jmp     L_44a2c
    L_44b3b:
        mov     edi, dword ptr [ebp + 0x14]
    L_44b3e:
        cmp     edi, 0x15
        jle     L_44b46
        push    0x15
        pop     edi
    L_44b46:
        movzx   esi, word ptr [ebp - 0x6]
        sub     esi, 0x3ffe
        and     word ptr [ebp - 0x6], 0
        mov     dword ptr [ebp + 0x1c], 8
    L_44b5c:
        lea     eax, [ebp - 0x10]
        push    eax
        call    FUN_10044386
        dec     dword ptr [ebp + 0x1c]
        pop     ecx
        jnz     L_44b5c
        test    esi, esi
        jge     L_44b86
        neg     esi
        and     esi, 0xff
        jle     L_44b86
    L_44b79:
        lea     eax, [ebp - 0x10]
        push    eax
        call    FUN_100443b4
        dec     esi
        pop     ecx
        jnz     L_44b79
    L_44b86:
        lea     ecx, [edi + 1]
        lea     eax, [ebx + 4]
        test    ecx, ecx
        mov     dword ptr [ebp + 0x1c], eax
        jle     L_44be3
        mov     dword ptr [ebp + 0x14], ecx
    L_44b96:
        lea     esi, [ebp - 0x10]
        lea     edi, [ebp + 0x8]
        movsd
        movsd
        lea     eax, [ebp - 0x10]
        push    eax
        movsd
        call    FUN_10044386
        lea     eax, [ebp - 0x10]
        push    eax
        call    FUN_10044386
        lea     eax, [ebp + 0x8]
        push    eax
        lea     eax, [ebp - 0x10]
        push    eax
        call    FUN_10044328
        lea     eax, [ebp - 0x10]
        push    eax
        call    FUN_10044386
        mov     al, byte ptr [ebp - 0x5]
        mov     ecx, dword ptr [ebp + 0x1c]
        and     byte ptr [ebp - 0x5], 0
        add     esp, 0x14
        add     al, 0x30
        inc     dword ptr [ebp + 0x1c]
        dec     dword ptr [ebp + 0x14]
        mov     byte ptr [ecx], al
        jnz     L_44b96
        mov     eax, dword ptr [ebp + 0x1c]
    L_44be3:
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     eax
        cmp     cl, 0x35
        lea     ecx, [ebx + 4]
        jl      L_44c20
        cmp     eax, ecx
        jc      L_44c03
    L_44bf0:
        cmp     byte ptr [eax], 0x39
        jnz     L_44bff
        mov     byte ptr [eax], 0x30
        dec     eax
        __emit 0xEB                     /* __emit: MSVC6 miscomputes backward jmp rel (EB F5); ref is EB F1 */
        __emit 0xF1
    L_44bff:
        cmp     eax, ecx
        jnc     L_44c07
    L_44c03:
        inc     eax
        inc     word ptr [ebx]
    L_44c07:
        inc     byte ptr [eax]
    L_44c09:
        sub     al, bl
        sub     al, 3
        mov     byte ptr [ebx + 3], al
        movsx   eax, al
        and     byte ptr [eax + ebx + 4], 0
    L_44c18:
        mov     eax, dword ptr [ebp - 0x4]
    L_44c1b:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    L_44c20:
        cmp     eax, ecx
        jc      L_44c30
        cmp     byte ptr [eax], 0x30
        jnz     L_44c2c
        dec     eax
        jmp     L_44c20
    L_44c2c:
        cmp     eax, ecx
        jnc     L_44c09
    L_44c30:
        and     word ptr [ebx], 0
        mov     byte ptr [ebx + 2], 0x20
        mov     byte ptr [ebx + 3], 1
        mov     byte ptr [ecx], 0x30
    L_44c3f:
        and     byte ptr [ebx + 5], 0
        push    1
        pop     eax
        jmp     L_44c1b
    }
}
