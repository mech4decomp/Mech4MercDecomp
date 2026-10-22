/*
 * FUN_00528310 (270 B) — Control mapping initialization helper (variant 4).
 *
 * __thiscall (ECX = this). Checks a flag byte, allocates/copies string data,
 * calls FUN_00523580 if a field is non-zero, clears the flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_00412740(int a);
extern void __stdcall FUN_006f4230(int ptr);
extern void *__stdcall FUN_006f3c80(int len, int flag);
extern void __stdcall FUN_00523580(void);
extern void __stdcall FUN_004084e0(int ptr);

int DAT_007dab44; /* 0x007dab44 */
int DAT_007dab40; /* 0x007dab40 */

__declspec(naked) int __stdcall FUN_00528310(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebp
        push    esi
        mov     esi, dword ptr [eax + 4]
        mov     eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [eax]
        mov     ebp, ecx
        mov     ecx, dword ptr [DAT_007dab40]
        xor     edx, ecx
        mov     edx, dword ptr [edx + 0x0c]
        xor     edx, 0x85739531
        cmp     byte ptr [edx + 0xc0], 0
        jz      l_fail
        mov     dword ptr [esp + 0x0c], 0
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x34]
        add     edx, 0x54
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x0c]
        test    eax, eax
        jz      l_fail
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      l_alloc
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
    l_alloc:
        push    edi
        push    0
        push    0x100
        call    FUN_006f3c80
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, -1
        mov     edx, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi], edx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     eax, dword ptr [ebp + 0x40ee8]
        test    eax, eax
        pop     edi
        jz      l_clear_flag
        lea     ecx, [esp + 0x0c]
        push    ecx
        lea     ecx, [eax + 0x5c]
        call    FUN_00412740
        mov     ecx, ebp
        call    FUN_00523580
    l_clear_flag:
        mov     edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x0c]
        xor     ecx, 0x85739531
        mov     byte ptr [ecx + 0xc0], 0
        mov     eax, dword ptr [esp + 0x0c]
        test    eax, eax
        jz      l_done
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_done
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_done:
        pop     esi
        mov     eax, 1
        pop     ebp
        ret     8
    l_fail:
        pop     esi
        xor     eax, eax
        pop     ebp
        ret     8
    }
}
