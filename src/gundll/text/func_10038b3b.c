/*
 * FUN_10038b3b (306 B) — __stdcall.
 * Returns the process environment block as a single string (W or A
 * variant depending on a cached mode flag), via IAT imports.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003c3c5(void);
extern void __cdecl FUN_1003c2dc(void);
extern void __cdecl FUN_1003ca70(void);

extern int g_100755fc;
extern void (__stdcall *g_10049108)(void);
extern void (__stdcall *g_10049104)(void);
extern void (__stdcall *g_100490fc)(void);
extern void (__stdcall *g_100491b0)(void);
extern void (__stdcall *g_100491ac)(void);

__declspec(naked) void __stdcall FUN_10038b3b(void)
{
    __asm {
        push    ecx
        push    ecx
        mov     eax, dword ptr [g_100755fc]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [g_10049108]
        push    esi
        push    edi
        xor     ebx, ebx
        xor     esi, esi
        xor     edi, edi
        cmp     eax, ebx
        jnz     L_8b89
        call    ebp
        mov     esi, eax
        cmp     esi, ebx
        jz      L_8b6a
        mov     dword ptr [g_100755fc], 1
        jmp     L_8b92
    L_8b6a:
        call    dword ptr [g_10049104]
        mov     edi, eax
        cmp     edi, ebx
        jz      L_8c64
        mov     dword ptr [g_100755fc], 2
        jmp     L_8c18
    L_8b89:
        cmp     eax, 1
        jnz     L_8c13
    L_8b92:
        cmp     esi, ebx
        jnz     L_8ba2
        call    ebp
        mov     esi, eax
        cmp     esi, ebx
        jz      L_8c64
    L_8ba2:
        cmp     word ptr [esi], bx
        mov     eax, esi
        jz      L_8bb7
    L_8ba9:
        inc     eax
        inc     eax
        cmp     word ptr [eax], bx
        jnz     L_8ba9
        inc     eax
        inc     eax
        cmp     word ptr [eax], bx
        jnz     L_8ba9
    L_8bb7:
        sub     eax, esi
        mov     edi, dword ptr [g_100490fc]
        sar     eax, 1
        push    ebx
        push    ebx
        inc     eax
        push    ebx
        push    ebx
        push    eax
        push    esi
        push    ebx
        push    ebx
        mov     dword ptr [esp + 0x34], eax
        call    edi
        mov     ebp, eax
        cmp     ebp, ebx
        jz      L_8c08
        push    ebp
        call    FUN_1003c3c5
        cmp     eax, ebx
        pop     ecx
        mov     dword ptr [esp + 0x10], eax
        jz      L_8c08
        push    ebx
        push    ebx
        push    ebp
        push    eax
        push    dword ptr [esp + 0x24]
        push    esi
        push    ebx
        push    ebx
        call    edi
        test    eax, eax
        jnz     L_8c04
        push    dword ptr [esp + 0x10]
        call    FUN_1003c2dc
        pop     ecx
        mov     dword ptr [esp + 0x10], ebx
    L_8c04:
        mov     ebx, dword ptr [esp + 0x10]
    L_8c08:
        push    esi
        call    dword ptr [g_100491b0]
        mov     eax, ebx
        jmp     L_8c66
    L_8c13:
        cmp     eax, 2
        jnz     L_8c64
    L_8c18:
        cmp     edi, ebx
        jnz     L_8c28
        call    dword ptr [g_10049104]
        mov     edi, eax
        cmp     edi, ebx
        jz      L_8c64
    L_8c28:
        cmp     byte ptr [edi], bl
        mov     eax, edi
        jz      L_8c38
    L_8c2e:
        inc     eax
        cmp     byte ptr [eax], bl
        jnz     L_8c2e
        inc     eax
        cmp     byte ptr [eax], bl
        jnz     L_8c2e
    L_8c38:
        sub     eax, edi
        inc     eax
        mov     ebp, eax
        push    ebp
        call    FUN_1003c3c5
        mov     esi, eax
        pop     ecx
        cmp     esi, ebx
        jnz     L_8c4e
        xor     esi, esi
        jmp     L_8c59
    L_8c4e:
        push    ebp
        push    edi
        push    esi
        call    FUN_1003ca70
        add     esp, 0xc
    L_8c59:
        push    edi
        call    dword ptr [g_100491ac]
        mov     eax, esi
        jmp     L_8c66
    L_8c64:
        xor     eax, eax
    L_8c66:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        pop     ecx
        ret
    }
}
