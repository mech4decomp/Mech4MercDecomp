/*
 * FUN_004970b0 (317 B) - MLR particle/flare object destructor.
 * __thiscall (ECX = this).
 *
 * Frees a series of sub-objects via FUN_004084e0 (free), tears down
 * curve-channel sub-objects via FUN_0049a500, and calls FUN_004937f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0049a500(void);
extern void __cdecl FUN_004937f0(void);

__declspec(naked) void FUN_004970b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x7701c8
        mov     eax, dword ptr [esi + 0x184]
        test    eax, eax
        jz      L1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, dword ptr [esi + 0x17c]
        test    eax, eax
        jz      L2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L2:
        mov     eax, dword ptr [esi + 0x168]
        test    eax, eax
        jz      L3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L3:
        mov     eax, dword ptr [esi + 0x15c]
        test    eax, eax
        jz      L4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L4:
        mov     eax, dword ptr [esi + 0x150]
        test    eax, eax
        jz      L5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L5:
        mov     eax, dword ptr [esi + 0x144]
        test    eax, eax
        jz      L6
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L6:
        mov     eax, dword ptr [esi + 0x134]
        test    eax, eax
        jz      L7
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L7:
        mov     eax, dword ptr [esi + 0x128]
        test    eax, eax
        jz      L8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L8:
        mov     eax, dword ptr [esi + 0x114]
        test    eax, eax
        jz      L9
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L9:
        mov     eax, dword ptr [esi + 0x108]
        test    eax, eax
        jz      L10
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L10:
        lea     ecx, [esi + 0xf4]
        call    FUN_0049a500
        mov     eax, dword ptr [esi + 0xe8]
        test    eax, eax
        jz      L11
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L11:
        lea     ecx, [esi + 0xd4]
        call    FUN_0049a500
        mov     eax, dword ptr [esi + 0xc8]
        test    eax, eax
        jz      L12
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L12:
        lea     ecx, [esi + 0xb4]
        call    FUN_0049a500
        mov     eax, dword ptr [esi + 0xa8]
        test    eax, eax
        jz      L13
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L13:
        mov     eax, dword ptr [esi + 0x80]
        test    eax, eax
        jz      L14
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L14:
        mov     ecx, esi
        call    FUN_004937f0
        pop     esi
        ret
    }
}
