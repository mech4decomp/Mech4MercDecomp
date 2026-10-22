/*
 * FUN_0049da30 (227 B) - MLR particle/flare/debris object destructor
 * (__thiscall). Reinstalls the vtable at 0x770268, frees a series of
 * member buffers via FUN_004084e0 (free), then calls the base destructor
 * FUN_004937f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_004937f0(void);

__declspec(naked) void FUN_0049da30(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x770268
        mov     eax, dword ptr [esi + 0x23c]
        test    eax, eax
        jz      LDA4C
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LDA4C:
        mov     eax, dword ptr [esi + 0x234]
        test    eax, eax
        jz      LDA5F
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LDA5F:
        mov     eax, dword ptr [esi + 0x1a8]
        test    eax, eax
        jz      LDA72
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LDA72:
        mov     eax, dword ptr [esi + 0x180]
        test    eax, eax
        jz      LDA85
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LDA85:
        mov     eax, dword ptr [esi + 0x160]
        test    eax, eax
        jz      LDA98
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LDA98:
        mov     eax, dword ptr [esi + 0x140]
        test    eax, eax
        jz      LDAAB
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LDAAB:
        mov     eax, dword ptr [esi + 0x120]
        test    eax, eax
        jz      LDABE
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LDABE:
        mov     eax, dword ptr [esi + 0x100]
        test    eax, eax
        jz      LDAD1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LDAD1:
        mov     eax, dword ptr [esi + 0xd8]
        test    eax, eax
        jz      LDAE4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LDAE4:
        mov     eax, dword ptr [esi + 0xb0]
        test    eax, eax
        jz      LDAF7
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LDAF7:
        mov     eax, dword ptr [esi + 0xa0]
        test    eax, eax
        jz      LDB0A
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LDB0A:
        mov     ecx, esi
        call    FUN_004937f0
        pop     esi
        ret
    }
}
