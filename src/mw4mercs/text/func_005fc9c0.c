/*
 * FUN_005fc9c0 (156 B) — __thiscall. Builds a temporary object on the
 * stack (FUN_004d1f80), then loops calling a virtual method (slot 5) on
 * `this` while advancing a cursor, then tears down the temp object
 * (FUN_004d2330 / FUN_004d21c0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004d2330(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_005fc9c0(void)
{
    __asm {
        sub     esp, 0x44
        mov     eax, dword ptr [esp+0x48]
        push    edi
        push    0x1
        mov     edi, ecx
        push    eax
        lea     ecx, [esp+0xc]
        call    FUN_004d1f80
        mov     eax, dword ptr [esp+0x18]
        mov     ecx, dword ptr [esp+0x1c]
        add     eax, 0x2
        cmp     eax, ecx
        mov     dword ptr [esp+0x18], eax
        jbe     L1
        mov     dword ptr [esp+0x1c], eax
L1:
        mov     ecx, dword ptr [esp+0x14]
        mov     edx, dword ptr [esp+0x20]
        sub     ecx, eax
        add     ecx, edx
        jz      L4
        push    ebx
        mov     ebx, dword ptr [esp+0x54]
        push    esi
L2:
        push    0x1
        lea     edx, [esp+0x10]
        push    ebx
        push    edx
        mov     esi, eax
        call    FUN_004d9910
        mov     edx, dword ptr [edi]
        add     esp, 0xc
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x28]
        mov     eax, dword ptr [esp+0x20]
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [esp+0x24]
        add     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esp+0x20], eax
        jbe     L3
        mov     dword ptr [esp+0x24], eax
L3:
        mov     ecx, dword ptr [esp+0x1c]
        mov     edx, dword ptr [esp+0x28]
        sub     ecx, eax
        add     ecx, edx
        jnz     L2
        pop     esi
        pop     ebx
L4:
        lea     ecx, [esp+0x4]
        call    FUN_004d2330
        lea     ecx, [esp+0x4]
        call    FUN_004d21c0
        pop     edi
        add     esp, 0x44
        ret     0x8
    }
}
