/*
 * FUN_006F1CE0 (111 B) — Conditional state transition.
 *
 * __fastcall (ECX = this). If byte at this+0x69 is non-zero and
 * dword at this[0] != 1, calls FUN_006F3960, sets this[0]=1, then
 * calls FUN_0041FD80 three times and conditionally calls
 * FUN_0041FCB0/FUN_0041FCD0. Returns 1 on success, 0 otherwise.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f3960(int, int);
extern int __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(int);

__declspec(naked) void __cdecl FUN_006f1ce0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x69]
        test    al, al
        jz      l_ret0
        cmp     dword ptr [esi], 1
        jz      l_ret0
        push    edi
        push    0x40100000
        push    0x0
        lea     ecx, [esi + 0xa8]
        call    FUN_006f3960
        lea     edi, [esi + 0x30]
        mov     ecx, edi
        mov     dword ptr [esi], 1
        call    FUN_0041fd80
        test    eax, eax
        jz      l_skip
        push    ebx
        lea     ecx, [esi + 0x8]
        call    FUN_0041fd80
        mov     ecx, edi
        mov     ebx, eax
        call    FUN_0041fd80
        cmp     eax, ebx
        pop     ebx
        jz      l_skip
        add     esi, 0x38
        mov     ecx, esi
        call    FUN_0041fcb0
        mov     ecx, edi
        call    FUN_0041fd80
        push    eax
        mov     ecx, esi
        call    FUN_0041fcd0
    l_skip:
        pop     edi
        mov     al, 1
        pop     esi
        ret
    l_ret0:
        xor     al, al
        pop     esi
        ret
    }
}
