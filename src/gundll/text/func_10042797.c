/*
 * FUN_10042797 (111 B) — __cdecl.
 * If global 0x1007567c is 0: uppercase a lowercase ASCII char (a-z -> A-Z).
 * Else: thread-safe path using InterlockedIncrement/Decrement on 0x10076a8c
 * and a lock flag 0x10076a88, calling FUN_10042806 / FUN_10039b19 / FUN_10039b7a.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_1007567c;
extern unsigned int g_10076a88;
extern void (__stdcall *g_10049120)(void);
extern void (__stdcall *g_100491bc)(void);
extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10039b7a(void);
extern void __cdecl FUN_10042806(void);

__declspec(naked) void __cdecl func_10042797(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_1007567c], ebx
        jnz     locked
        mov     eax, dword ptr [esp + 0x8]
        cmp     eax, 0x61
        jl      done
        cmp     eax, 0x7a
        jg      done
        sub     eax, 0x20
        pop     ebx
        ret
    locked:
        push    esi
        mov     esi, 0x10076a8c
        push    edi
        push    esi
        call    dword ptr [g_10049120]
        cmp     dword ptr [g_10076a88], ebx
        mov     edi, dword ptr [g_100491bc]
        jz      skipdec
        push    esi
        call    edi
        push    0x13
        call    FUN_10039b19
        pop     ecx
        push    0x1
        pop     ebx
    skipdec:
        push    dword ptr [esp + 0x10]
        call    FUN_10042806
        test    ebx, ebx
        pop     ecx
        mov     dword ptr [esp + 0x10], eax
        jz      unlock
        push    0x13
        call    FUN_10039b7a
        pop     ecx
        jmp     getret
    unlock:
        push    esi
        call    edi
    getret:
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
    done:
        pop     ebx
        ret
    }
}
