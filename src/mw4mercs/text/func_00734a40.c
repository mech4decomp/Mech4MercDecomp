/*
 * FUN_00734a40 (155 B) — Destructor-style cleanup (__fastcall, ECX = this).
 *
 * Frees a series of member pointers (offsets 0x28, 0x24, 0x18, 0x4, 0xc,
 * 0x8, 0x10) via FUN_00740db0, zeroing each after free. For the 0x24 member,
 * if [this+0xe8]==0 it first calls FUN_006f4940(DAT_008aa284,
 * -( [this+0x3c] * [this+0x34] ), 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_008aa284;   /* DAT_008aa284 */

extern void __cdecl FUN_00740db0(void *param);
extern void __cdecl FUN_006f4940(void *a, int b, int c);

__declspec(naked) void __fastcall FUN_00734a40(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x28]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jz      L56
        push    eax
        call    FUN_00740db0
        mov     dword ptr [esi + 0x28], edi
L56:
        push    ebx
        mov     ebx, dword ptr [esi + 0x24]
        cmp     ebx, edi
        jz      L87
        cmp     dword ptr [esi + 0xe8], edi
        jnz     L7E
        mov     eax, dword ptr [esi + 0x3c]
        imul    eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [g_008aa284]
        push    0x1
        neg     eax
        push    eax
        push    ecx
        call    FUN_006f4940
L7E:
        push    ebx
        call    FUN_00740db0
        mov     dword ptr [esi + 0x24], edi
L87:
        mov     eax, dword ptr [esi + 0x18]
        cmp     eax, edi
        pop     ebx
        jz      L98
        push    eax
        call    FUN_00740db0
        mov     dword ptr [esi + 0x18], edi
L98:
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, edi
        jz      LA8
        push    eax
        call    FUN_00740db0
        mov     dword ptr [esi + 0x4], edi
LA8:
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, edi
        jz      LB8
        push    eax
        call    FUN_00740db0
        mov     dword ptr [esi + 0xc], edi
LB8:
        mov     eax, dword ptr [esi + 0x8]
        cmp     eax, edi
        jz      LC8
        push    eax
        call    FUN_00740db0
        mov     dword ptr [esi + 0x8], edi
LC8:
        mov     eax, dword ptr [esi + 0x10]
        cmp     eax, edi
        jz      LD8
        push    eax
        call    FUN_00740db0
        mov     dword ptr [esi + 0x10], edi
LD8:
        pop     edi
        pop     esi
        ret
    }
}
