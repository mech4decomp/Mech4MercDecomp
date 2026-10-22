/*
 * FUN_00527fc0 (444 B) — Control mapping data initialization.
 *
 * __stdcall (RET 0x8). Reads a struct with 7 pointer fields, allocates
 * and copies string data for two of them, reads XOR-encoded global
 * configuration values into the remaining fields, then decrements
 * reference counts and frees if zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_006f4230(int ptr);
extern void *__stdcall FUN_006f3c80(int len, int flag);
extern void __stdcall FUN_004084e0(int ptr);

int DAT_007dab44; /* 0x007dab44 */
int DAT_007dab40; /* 0x007dab40 */

__declspec(naked) int __stdcall FUN_00527fc0(int param_1)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [eax + 0x0c]
        mov     edx, dword ptr [eax + 0x10]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 8]
        push    esi
        mov     esi, dword ptr [eax + 4]
        mov     dword ptr [esp + 0x0c], ecx
        mov     ecx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [eax + 0x18]
        mov     eax, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esi]
        test    eax, eax
        push    edi
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x18], edx
        jz      l_alloc1
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
    l_alloc1:
        push    0
        push    0x100
        call    FUN_006f3c80
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edi, dword ptr [DAT_007dab40]
        mov     edx, eax
        mov     eax, dword ptr [ecx]
        xor     eax, edi
        mov     ecx, dword ptr [eax + 0x0c]
        xor     ecx, 0x85739531
        mov     edi, dword ptr [ecx + 0xa8]
        test    edi, edi
        mov     dword ptr [esi], edx
        mov     dword ptr [esp + 0x20], edi
        jz      l_copy1
        inc     byte ptr [edi - 1]
    l_copy1:
        or      ecx, -1
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      l_alloc2
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0
    l_alloc2:
        push    0
        push    0x80
        call    FUN_006f3c80
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     ebx, eax
        mov     eax, dword ptr [edx + 0x0c]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0xb0]
        test    edx, edx
        mov     dword ptr [ebp], ebx
        jz      l_copy2
        inc     byte ptr [edx - 1]
    l_copy2:
        or      ecx, -1
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [esp + 0x28]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x0c]
        add     eax, 0x0c
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0xac]
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [eax]
        mov     esi, dword ptr [esp + 0x10]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0xbc]
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [eax]
        mov     esi, dword ptr [esp + 0x14]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0xb8]
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [eax]
        mov     esi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [eax]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x3028]
        pop     edi
        xor     eax, 0x85739531
        test    edx, edx
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [eax + 0x3508]
        mov     eax, dword ptr [esp + 0x18]
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        jz      l_decref2
        mov     al, byte ptr [edx - 1]
        dec     edx
        dec     al
        mov     byte ptr [edx], al
        jnz     l_decref2
        push    edx
        call    FUN_004084e0
        add     esp, 4
    l_decref2:
        mov     eax, dword ptr [esp + 0x10]
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
        mov     eax, 1
        add     esp, 0x14
        ret     8
    }
}
