/*
 * FUN_004939D0 (156 B) — __thiscall, RET 4 (1 stack param).
 * Copies an MLR node from a source object (ebp) into this (ebx), walking a
 * linked list at [ebp+0x10] and allocating 0x54-byte nodes via FUN_004084d0,
 * then copying the tail (0x20/0x34 sub-objects + 6 dwords at 0x48).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da920;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004179f0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00493460(void);
extern void __cdecl FUN_00493a70(void);
extern void __cdecl FUN_004adf10(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __fastcall FUN_004939D0(void)
{
    __asm {
        mov     eax, dword ptr [g_007da920]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     ebx, ecx
        call    FUN_006f4950
        mov     ebp, dword ptr [esp + 0x14]
        lea     ecx, [ebp + 4]
        push    ecx
        lea     ecx, [ebx + 4]
        call    FUN_00412740
        lea     ecx, [ebx + 0x10]
        call    FUN_004179f0
        mov     edi, dword ptr [ebp + 0x10]
L_loop:
        test    edi, edi
        je      L_493a35
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 4]
        je      L_493a35
        push    0x54
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_493a29
        push    esi
        mov     ecx, eax
        call    FUN_00493460
        push    eax
        mov     ecx, ebx
        call    FUN_00493a70
        jmp     L_loop
L_493a29:
        xor     eax, eax
        push    eax
        mov     ecx, ebx
        call    FUN_00493a70
        jmp     L_loop
L_493a35:
        mov     edx, dword ptr [ebp + 0x1c]
        lea     eax, [ebp + 0x20]
        push    eax
        lea     ecx, [ebx + 0x20]
        mov     dword ptr [ebx + 0x1c], edx
        call    FUN_004adf10
        lea     ecx, [ebp + 0x34]
        push    ecx
        lea     ecx, [ebx + 0x34]
        call    FUN_004adf10
        lea     esi, [ebp + 0x48]
        lea     edi, [ebx + 0x48]
        mov     ecx, 6
        rep movsd
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
