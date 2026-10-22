/*
 * FUN_004ec850 (97 B) — __thiscall, RET 0x4. MLR/Adept object method: copies
 * a sub-object, bumps counters at +0x9c/+0xa0, tracks max at +0xa4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415510(void);
extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_004ec850(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+8]
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi+0x8c]
        push    edi
        mov     ecx, ebx
        call    FUN_00415510
        test    al, al
        jz      L_873
        push    edi
        mov     ecx, ebx
        call    FUN_004154d0
    L_873:
        push    ebx
        lea     ecx, [esi+0x84]
        call    FUN_004179b0
        mov     edi, dword ptr [esi+0x9c]
        mov     edx, dword ptr [esi+0xa0]
        mov     ecx, dword ptr [esi+0xa4]
        inc     edi
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi+0x9c], edi
        mov     dword ptr [esi+0xa0], edx
        jle     L_8ab
        mov     dword ptr [esi+0xa4], eax
    L_8ab:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
