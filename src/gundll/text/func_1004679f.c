/*
 * FUN_1004679f (43 B) — __cdecl.
 * strdup-like: strlen(param_1), malloc(len+1), memcpy; return ptr or 0.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_1003c5f0(void);
extern void * __cdecl FUN_1003c3c5(void);
extern void * __cdecl FUN_1003c500(void);

__declspec(naked) void FUN_1004679f(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        test    esi, esi
        jz      Lc6
        push    esi
        call    FUN_1003c5f0
        inc     eax
        push    eax
        call    FUN_1003c3c5
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      Lc6
        push    esi
        push    eax
        call    FUN_1003c500
        pop     ecx
        pop     ecx
        pop     esi
        ret
    Lc6:
        xor     eax, eax
        pop     esi
        ret
    }
}
