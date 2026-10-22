/*
 * FUN_005a6a60 (119 B) — Two-phase sub-object initialization (variant 2).
 *
 * Checks two sub-objects at this+0x194 and this+0x19c. For each, if
 * not already initialized, calls FUN_005fa480, then FUN_0041fcd0.
 *
 * __thiscall (ECX = this)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_0041fd80(void *this_sub);
extern int __cdecl FUN_005fa480(void *param1, int param2, int param3);
extern void __stdcall FUN_0041fcd0(void *this_sub, int param);

__declspec(naked) void __cdecl FUN_005a6a60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x194]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jnz     second_block
        mov     eax, dword ptr [esi + 0x1a4]
        push    1
        push    eax
        lea     ecx, [esi + 0x180]
        push    ecx
        mov     ecx, dword ptr [esi + 0x1b0]
        call    FUN_005fa480
        test    eax, eax
        jz      second_block
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
second_block:
        lea     edi, [esi + 0x19c]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jnz     done
        mov     edx, dword ptr [esi + 0x1a8]
        mov     ecx, dword ptr [esi + 0x1b0]
        push    1
        push    edx
        lea     eax, [esi + 0x180]
        push    eax
        call    FUN_005fa480
        test    eax, eax
        jz      done
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
done:
        pop     edi
        pop     esi
        ret
    }
}
