/*
 * FUN_005a69b0 (165 B) — Two-phase sub-object initialization.
 *
 * Checks two sub-objects at this+0x184 and this+0x18c. For each, if
 * not already initialized, calls FUN_005fa8f0, then virtual methods,
 * then FUN_0041fcd0.
 *
 * __thiscall (ECX = this)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_0041fd80(void *this_sub);
extern int __cdecl FUN_005fa8f0(void *param1, int param2, int param3);
extern void __stdcall FUN_0041fcd0(void *this_sub, int param);

__declspec(naked) void __cdecl FUN_005a69b0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        lea     ebx, [esi + 0x184]
        push    edi
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jnz     second_block
        mov     eax, dword ptr [esi + 0x1a4]
        push    1
        push    eax
        lea     ecx, [esi + 0x17c]
        push    ecx
        mov     ecx, dword ptr [esi + 0x1b0]
        call    FUN_005fa8f0
        mov     edi, eax
        mov     edx, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [edx + 0x34]
        mov     ecx, dword ptr [edi + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0
        push    6
        call    dword ptr [eax + 4]
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
second_block:
        lea     edi, [esi + 0x18c]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jnz     done
        mov     ecx, dword ptr [esi + 0x1a8]
        push    1
        push    ecx
        mov     ecx, dword ptr [esi + 0x1b0]
        lea     edx, [esi + 0x17c]
        push    edx
        call    FUN_005fa8f0
        mov     esi, eax
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0
        push    6
        call    dword ptr [edx + 4]
        push    esi
        mov     ecx, edi
        call    FUN_0041fcd0
done:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
