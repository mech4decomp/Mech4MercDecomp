/*
 * FUN_005b7890 (792 B) — __thiscall (ECX = this), RET 0x10 (4 stack args).
 * Initializes a large object: calls FUN_004d9940, copies several fields
 * from the source (EBX) into the object (EBP), then copies a series of
 * NUL-terminated strings (SCASB + REP MOVS) into fixed offsets, and
 * finally calls a virtual method (vtable+0x34) on each of four sub-objects
 * to copy their strings. Ends with an optional FUN_005b7e00 call.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d9940(void);
extern void FUN_005b7e00(void);

__declspec(naked) void *__fastcall FUN_005b7890(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    ebx
        push    edx
        mov     ecx, ebp
        call    FUN_004d9940
        mov     eax, dword ptr [ebx + 0x60]
        mov     edx, dword ptr [ebx + 0x70]
        mov     ecx, dword ptr [ebx + 0x6c]
        mov     dword ptr [ebp + 0x96c], ecx
        mov     ecx, dword ptr [ebx + 0x78]
        mov     dword ptr [ebp + 0x170], eax
        mov     al, byte ptr [ebx + 0x68]
        mov     dword ptr [ebp + 0x978], ecx
        or      ecx, 0xffffffff
        mov     byte ptr [ebp + 0x169], al
        mov     eax, dword ptr [ebx + 0x74]
        mov     dword ptr [ebp + 0x974], eax
        mov     dword ptr [ebp + 0x970], edx
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [eax + 0xc]
        xor     eax, eax
        xor     edx, 0x85739531
        lea     edi, [ebx + 0x7d]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     esi, [ebp + 0x570]
        mov     dword ptr [esp + 0x1c], esi
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp], 0x7868f0
        mov     byte ptr [ebp + 0x174], 0x0
        mov     byte ptr [ebp + 0x273], 0x0
        mov     byte ptr [ebp + 0x372], 0x0
        mov     byte ptr [ebp + 0x471], 0x0
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebx + 0x17c]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     esi, [ebp + 0x66f]
        mov     dword ptr [esp + 0x1c], esi
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x1c]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebx + 0x27b]
        repne   scasb
        not     ecx
        lea     esi, [ebp + 0x76e]
        sub     edi, ecx
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x20], edx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x1c]
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebx + 0x37a]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     esi, [ebp + 0x86d]
        mov     dword ptr [esp + 0x1c], esi
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x1c]
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [edx]
        and     ecx, 0x3
        rep     movsb
        mov     esi, dword ptr [ebp + 0x96c]
        push    esi
        mov     ecx, edx
        call    dword ptr [eax + 0x34]
        test    esi, esi
        jle     L_7a19
        test    eax, eax
        jnz     L_79f9
        cmp     byte ptr [eax], 0x0
        jnz     L_7a19
    L_79f9:
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        lea     edi, [ebp + 0x174]
        rep     movsd
        mov     ecx, edx
        jmp     L_7a38
    L_7a19:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebx + 0x7d]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        lea     edi, [ebp + 0x174]
        rep     movsd
        mov     ecx, eax
    L_7a38:
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x20]
        mov     esi, dword ptr [ebp + 0x970]
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x34]
        test    esi, esi
        jle     L_7a7a
        test    eax, eax
        jnz     L_7a5a
        cmp     byte ptr [eax], 0x0
        jnz     L_7a7a
    L_7a5a:
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        lea     edi, [ebp + 0x273]
        rep     movsd
        mov     ecx, eax
        jmp     L_7a9c
    L_7a7a:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebx + 0x17c]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        lea     edi, [ebp + 0x273]
        rep     movsd
        mov     ecx, edx
    L_7a9c:
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x20]
        mov     esi, dword ptr [ebp + 0x974]
        mov     eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 0x34]
        test    esi, esi
        jle     L_7ade
        test    eax, eax
        jnz     L_7abe
        cmp     byte ptr [eax], 0x0
        jnz     L_7ade
    L_7abe:
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        lea     edi, [ebp + 0x372]
        rep     movsd
        mov     ecx, edx
        jmp     L_7b00
    L_7ade:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebx + 0x27b]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        lea     edi, [ebp + 0x372]
        rep     movsd
        mov     ecx, eax
    L_7b00:
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x20]
        mov     esi, dword ptr [ebp + 0x978]
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x34]
        test    esi, esi
        jle     L_7b42
        test    eax, eax
        jnz     L_7b22
        cmp     byte ptr [eax], 0x0
        jnz     L_7b42
    L_7b22:
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        lea     edi, [ebp + 0x471]
        rep     movsd
        mov     ecx, eax
        jmp     L_7b64
    L_7b42:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebx + 0x37a]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        lea     edi, [ebp + 0x471]
        rep     movsd
        mov     ecx, edx
    L_7b64:
        mov     al, byte ptr [ebx + 0x69]
        mov     dl, byte ptr [ebx + 0x7c]
        and     ecx, 0x3
        test    al, al
        rep     movsb
        mov     ecx, dword ptr [ebx + 0x64]
        mov     dword ptr [ebp + 0x16c], ecx
        mov     cl, byte ptr [ebx + 0x68]
        mov     byte ptr [ebp + 0x168], al
        mov     byte ptr [ebp + 0x169], cl
        mov     byte ptr [ebp + 0x16a], dl
        jz      L_7b9f
        mov     ecx, ebp
        mov     byte ptr [ebp + 0x168], 0x0
        call    FUN_005b7e00
    L_7b9f:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0x10
    }


}
