/*
 * FUN_006FECB0 (114 B) — CMWGun2::StartUp().
 *
 * __cdecl, RET 4. Initializes a gun object: clears byte at +0x20,
 * calls FUN_00740860, allocates a 0x2F484-byte block, initializes
 * it via FUN_006FCE40, stores to global 0x00856860, then calls
 * FUN_006FCF00. On failure, formats error and asserts. On success,
 * calls vtable[0x14] on the param object and returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00740860(int, int);
extern int __cdecl FUN_004084d0(int);
extern int __cdecl FUN_006fce40(void);
extern int __cdecl FUN_006fcf00(int);
extern int __cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);

__declspec(naked) void __cdecl FUN_006fecb0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        push    0x0
        push    0x0
        mov     byte ptr [edi + 0x20], 0
        call    FUN_00740860
        push    0x2f484
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_zero
        mov     ecx, eax
        call    FUN_006fce40
        jmp     l_store
    l_zero:
        xor     eax, eax
    l_store:
        push    eax
        _emit   0xA3
        _emit   0x60
        _emit   0x68
        _emit   0x85
        _emit   0x00
        call    FUN_006fcf00
        mov     esi, eax
        test    esi, esi
        jge     l_success
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a0e2c
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      l_fail_ret
        int     3
    l_fail_ret:
        pop     edi
        xor     al, al
        pop     esi
        pop     ebp
        ret     4
    l_success:
        mov     eax, dword ptr [edi]
        push    edi
        call    dword ptr [eax + 0x14]
        pop     edi
        mov     al, 1
        pop     esi
        pop     ebp
        ret     4
    }
}
