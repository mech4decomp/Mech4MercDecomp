/*
 * FUN_0067b470 (300 B) — __cdecl (1 stack arg), RET.
 *
 * Walks two linked lists (via FUN_0041fd80 / FUN_00415230), counting
 * matching entries until reaching an index derived from param_1, then
 * calls FUN_0067b5a0 on the found entry.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f25c0;
extern int DAT_007f2574;
extern void __cdecl FUN_0067a640(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0067b5a0(void);

__declspec(naked) void __stdcall FUN_0067b470(int param_1)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [DAT_007dab40]
        push    ebx
        push    ebp
        push    esi
        xor     ecx, edx
        mov     esi, dword ptr [ecx + 0x10]
        push    edi
        mov     edi, dword ptr [ecx + 0x10]
        lea     eax, [ecx + 0x10]
        xor     esi, 0x85739531
        xor     edi, 0x85739531
        add     esi, 0x18
        add     edi, 0x70
        mov     dword ptr [esp + 0x10], 0
        call    FUN_0067a640
        mov     eax, dword ptr [eax + 0x14]
        mov     ebp, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esi + 0x4]
        lea     edx, [eax + eax*4]
        shl     edx, 0x3
        sub     edx, eax
        mov     eax, dword ptr [edi + 0x4]
        add     ebp, edx
        add     eax, ebx
        cmp     ebp, eax
        mov     dword ptr [esp + 0x1c], ebp
        jnc     L_ret
        test    ebx, ebx
        mov     dword ptr [esp + 0x14], 0
        jbe     L_second
        mov     esi, dword ptr [esi]
        add     esi, 0x14
L_loop1:
        mov     ecx, dword ptr [esi]
        call    FUN_0041fd80
        mov     ebp, eax
        test    ebp, ebp
        jz      L_loop1_next
        mov     eax, dword ptr [DAT_007f25c0]
        mov     ecx, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_loop1_next
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, dword ptr [esp + 0x1c]
        jz      L_call1
        mov     eax, ecx
        inc     eax
        mov     dword ptr [esp + 0x10], eax
L_loop1_next:
        mov     eax, dword ptr [esp + 0x14]
        inc     eax
        add     esi, 0x1c
        cmp     eax, ebx
        mov     dword ptr [esp + 0x14], eax
        jc      L_loop1
        mov     ebp, dword ptr [esp + 0x1c]
L_second:
        mov     eax, dword ptr [edi + 0x4]
        xor     ebx, ebx
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jbe     L_ret
        mov     edi, dword ptr [edi]
        add     edi, 0x14
L_loop2:
        mov     ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      L_loop2_next
        mov     eax, dword ptr [DAT_007f2574]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_loop2_next
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        jz      L_call2
        inc     eax
        mov     dword ptr [esp + 0x10], eax
L_loop2_next:
        mov     eax, dword ptr [esp + 0x1c]
        inc     ebx
        add     edi, 0x1c
        cmp     ebx, eax
        jc      L_loop2
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
L_call1:
        push    ebp
        call    FUN_0067b5a0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
L_call2:
        push    esi
        call    FUN_0067b5a0
        add     esp, 0x4
L_ret:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
    }
}
