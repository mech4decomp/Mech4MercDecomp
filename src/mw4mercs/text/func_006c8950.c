/*
 * FUN_006C8950 (200 B) - Object constructor with linked-list insertion.
 *
 * __thiscall (ECX = this), RET 8 (two stack params: a string and a byte).
 *
 * Sets this->vtable = 0x79E21C, allocates a 0x10-byte node via malloc,
 * links it into the list headed by global 0x82F350 (appending at the
 * tail), increments global counter 0x82F354, zeroes this+0x4..0x1C,
 * allocates a copy of the string via FUN_006F3C80 (__stdcall) and stores
 * it at this+0x20, stores the byte param at this+0x24, then calls
 * FUN_006C8E30(this). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_82f350;
extern int g_82f354;
extern int g_82e224;
extern void *g_76b294;   /* malloc IAT */
extern void *__stdcall FUN_006f3c80(int, int);
extern void __fastcall FUN_006c8e30(void *);

__declspec(naked) void *__fastcall FUN_006c8950(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        push    0x10
        mov     dword ptr [ebx], 0x79e21c
        call    dword ptr [g_76b294]
        mov     ecx, dword ptr [g_82f350]
        xor     edx, edx
        add     esp, 4
        cmp     ecx, edx
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], edx
        jnz     loc_8988
        mov     dword ptr [g_82f350], eax
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], edx
        jmp     loc_89a1
loc_8988:
        mov     esi, dword ptr [ecx + 4]
        cmp     esi, edx
        jz      loc_8998
loc_898f:
        mov     ecx, esi
        mov     esi, dword ptr [ecx + 4]
        cmp     esi, edx
        jnz     loc_898f
loc_8998:
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [eax + 8], ecx
loc_89a1:
        mov     edi, dword ptr [g_82f354]
        mov     esi, dword ptr [esp + 0x10]
        inc     edi
        mov     dword ptr [g_82f354], edi
        xor     eax, eax
        mov     ecx, 6
        lea     edi, [ebx + 4]
        rep     stosd
        mov     eax, dword ptr [g_82e224]
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        mov     byte ptr [ebx + 0x1c], dl
        mov     byte ptr [ebx + 0x1d], dl
        mov     byte ptr [ebx + 0x1e], dl
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebx + 0x20], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     cl, byte ptr [esp + 0x14]
        mov     byte ptr [ebx + 0x24], cl
        mov     ecx, ebx
        call    FUN_006c8e30
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     8
    }
}
