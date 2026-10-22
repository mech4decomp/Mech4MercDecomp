/*
 * FUN_006967e0 (234 B) — __thiscall HUD element string/name insertion.
 * Validates the element (via FUN_00696b20 and capacity checks), then
 * copies the string at 0x76b768 into the element's buffer at [0x18,0x1c),
 * growing it via memmove (IAT 0x76b28c) or FUN_005cbf80 as needed, and
 * finally calls FUN_006951d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00696b20(void);
extern void __cdecl FUN_005cbf80(void);
extern void __cdecl FUN_006951d0(void);
extern void *g_0076b28c;

__declspec(naked) void FUN_006967e0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, ecx
        push    esi
        mov     dword ptr [esp+8], ebx
        call    FUN_00696b20
        test    al, al
        jz      done
        mov     esi, dword ptr [ebx+8]
        add     esi, -4
        mov     dword ptr [ebx+8], esi
        mov     edx, dword ptr [ebx+4]
        mov     eax, esi
        sub     eax, edx
        test    eax, -4
        jnz     done
        test    dword ptr [ebx], -4
        jz      done
        push    ebp
        mov     ebp, dword ptr [ebx+1ch]
        xor     eax, eax
        push    edi
        add     ebx, 18h
        or      ecx, 0ffffffffh
        mov     edi, 76b768h
        repne   scasb
        mov     edi, dword ptr [ebx]
        not     ecx
        dec     ecx
        mov     edx, ecx
        add     edx, 76b768h
        mov     eax, edx
        sub     eax, 76b768h
        sub     ebp, edi
        cmp     eax, ebp
        ja      big
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, 76b768h
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx]
        lea     esi, [ecx+eax]
        mov     eax, dword ptr [ebx+4]
        cmp     esi, eax
        jz      finish
        mov     edi, eax
        sub     edi, eax
        lea     ecx, [edi+1]
        push    ecx
        push    eax
        push    esi
        call    dword ptr [g_0076b28c]
        add     esp, 0ch
        add     edi, esi
        mov     dword ptr [ebx+4], edi
        jmp     finish
big:
        mov     ecx, ebp
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, 76b768h
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp+10h]
        push    ecx
        push    edx
        lea     edx, [ebp+76b768h]
        push    edx
        mov     ecx, ebx
        call    FUN_005cbf80
finish:
        mov     eax, dword ptr [esp+10h]
        mov     ecx, dword ptr [eax]
        push    0
        push    0
        push    ebx
        and     ecx, -4
        call    FUN_006951d0
        pop     edi
        pop     ebp
done:
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    }
}
