/*
 * FUN_006a0880 (195 B) — __thiscall (RET 0xc). Dispatches based on a flag,
 * calls several helpers, and returns a result pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_005dd7a0(void);
extern void __stdcall FUN_0069eb70(int, int);
extern void __cdecl FUN_004084e0(void*);
extern void __cdecl FUN_006a0d70(void);
extern void __cdecl FUN_006a0db0(void);
extern void __cdecl FUN_0065ae10(int, int, int, int, int, int);
extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void* __fastcall FUN_006a0880(void* this, int a, int b, int c)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x14]
        test    ecx, 0xfffffffc
        push    edi
        jz      L_8dd
        and     ecx, -4
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x28]
        test    al, al
        jnz     L_8dd
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [esi + 0x4]
        call    FUN_005dd7a0
        mov     ecx, dword ptr [esi + 0x10]
        push    eax
        push    0x6
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L_8ce
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_8ce
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_8ce:
        mov     eax, dword ptr [esp + 0xc]
        pop     edi
        mov     dword ptr [eax], 0x1
        pop     esi
        ret     0xc
L_8dd:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, 0x138b
        jnz     L_8fd
        mov     ecx, esi
        call    FUN_006a0d70
        test    eax, eax
        jz      L_8fd
        mov     ecx, esi
        call    FUN_006a0db0
        jmp     L_91c
L_8fd:
        mov     edx, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x2c]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx + 0x384]
L_91c:
        test    eax, eax
        jz      L_8ce
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esi + 0x10]
        push    edx
        mov     edx, dword ptr [esi + 0x4]
        mov     esi, dword ptr [esp + 0x10]
        push    ecx
        push    eax
        push    edx
        push    edi
        push    esi
        call    FUN_0065ae10
        add     esp, 0x18
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
