/*
 * FUN_004f0f90 (145 B) — MLR/Adept component factory. __thiscall.
 * Calls FUN_004f1050 (if param4==0), then FUN_004f0ce0, sets vtable
 * 0x774e08, and runs an init loop calling FUN_004f1100.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004f1050(void *);
extern void __cdecl FUN_004f0ce0(void);
extern void __cdecl FUN_004f1100(void);

__declspec(naked) void FUN_004f0f90(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x10]
        sub     esp, 0x8
        test    eax, eax
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0x18]
        push    edi
        mov     ebx, ecx
        jnz     L_0fad
        push    esi
        call    FUN_004f1050
        add     esp, 0x4
L_0fad:
        mov     edi, dword ptr [esp+0x20]
        push    eax
        mov     eax, dword ptr [esp+0x1c]
        push    edi
        push    esi
        push    eax
        mov     ecx, ebx
        call    FUN_004f0ce0
        mov     cx, word ptr [edi+0x14]
        mov     dx, word ptr [edi+0x16]
        mov     eax, dword ptr [esi]
        mov     word ptr [esp+0xc], cx
        push    0x4
        lea     ecx, [esp+0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebx], 0x774e08
        mov     word ptr [esp+0x16], dx
        call    dword ptr [eax+0x20]
        cmp     dword ptr [esp+0x10], -1
        jz      L_1016
L_0fed:
        mov     edx, dword ptr [edi]
        lea     eax, [esp+0xc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x10]
        push    eax
        mov     ecx, ebx
        call    FUN_004f1100
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp+0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        cmp     dword ptr [esp+0x10], -1
        jnz     L_0fed
L_1016:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x8
        ret     0x10
    }
}
