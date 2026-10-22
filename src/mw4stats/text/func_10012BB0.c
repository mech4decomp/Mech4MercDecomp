/*
 * FUN_10012BB0 (81 B, __stdcall, 3 params) - Iterates over a stats
 * collection (param_1+0x6c critical section), calling FUN_10012e10 for
 * each entry up to param_2 count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10012080(void);
extern void __cdecl FUN_10012190(void);
extern void __cdecl FUN_10012e10(void);
extern void __cdecl FUN_10012090(void);

__declspec(naked) void __cdecl FUN_10012BB0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        xor     ebx, ebx
        lea     esi, [ebp + 0x6c]
        mov     ecx, esi
        call    FUN_10012080
        test    al, al
        jnz     L_12bfa
    L_12bc8:
        cmp     ebx, dword ptr [esp + 0x18]
        jnc     L_12bfa
        mov     ecx, esi
        call    FUN_10012190
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x1c]
        push    edi
        push    eax
        push    ebp
        call    FUN_10012e10
        mov     ecx, dword ptr [edi + 4]
        push    ecx
        mov     ecx, esi
        call    FUN_10012090
        mov     ecx, esi
        inc     ebx
        call    FUN_10012080
        test    al, al
        jz      L_12bc8
    L_12bfa:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
