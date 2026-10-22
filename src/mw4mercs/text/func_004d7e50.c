/*
 * FUN_004d7e50 (159 B) — __stdcall sockaddr builder. Fills a sockaddr_in
 * (param_3) with family AF_INET and the htons()'d port (param_2). If the host
 * string (param_1) is non-null, resolves it via inet_addr(); if that fails,
 * falls back to gethostbyname() unless the string equals the literal at
 * 0x772fc0. Stores the hostent* into param_4 if non-null. Returns 1 on
 * success, 0 on gethostbyname failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075dfe6(void);   /* htons */
extern void __cdecl FUN_0075dfe0(void);   /* inet_addr */
extern void __cdecl FUN_0075dfda(void);   /* gethostbyname */

__declspec(naked) void FUN_004d7e50(void)
{
    __asm {
        mov     eax, dword ptr [esp+8]
        push    ebx
        push    ebp
        push    edi
        mov     edi, dword ptr [esp+0x18]
        push    eax
        xor     ebx, ebx
        mov     word ptr [edi], 2
        call    FUN_0075dfe6
        mov     ebp, dword ptr [esp+0x10]
        cmp     ebp, ebx
        mov     word ptr [edi+2], ax
        jnz     use_inet
        mov     dword ptr [edi+4], ebx
        jmp     check_addr
use_inet:
        push    ebp
        call    FUN_0075dfe0
        mov     dword ptr [edi+4], eax
check_addr:
        cmp     dword ptr [edi+4], -1
        jnz     skip_gethost
        push    esi
        mov     esi, 0x772fc0
        mov     eax, ebp
strcmp_loop:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     strcmp_ne
        test    cl, cl
        jz      strcmp_eq
        mov     dl, byte ptr [eax+1]
        mov     cl, dl
        cmp     dl, byte ptr [esi+1]
        jnz     strcmp_ne
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     strcmp_loop
strcmp_eq:
        xor     eax, eax
        jmp     strcmp_done
strcmp_ne:
        sbb     eax, eax
        sbb     eax, -1
strcmp_done:
        test    eax, eax
        pop     esi
        jz      skip_gethost
        push    ebp
        call    FUN_0075dfda
        mov     ebx, eax
        test    ebx, ebx
        jnz     have_host
        pop     edi
        pop     ebp
        pop     ebx
        ret     0x10
have_host:
        mov     eax, dword ptr [ebx+0xc]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [edi+4], edx
skip_gethost:
        mov     eax, dword ptr [esp+0x1c]
        test    eax, eax
        jz      ret1
        mov     dword ptr [eax], ebx
ret1:
        pop     edi
        pop     ebp
        mov     eax, 1
        pop     ebx
        ret     0x10
    }
}
