/*
 * FUN_0051ec90 (151 B) — Stores a string pointer in an array and
 * triggers a campaign screen notification.
 *
 * __thiscall (ECX = this). Copies the input string via FUN_004084d0
 * (strdup-like allocator), stores the pointer in an array at
 * this+0x40d30 indexed by this+0x40d94, then calls
 * FUN_006bbd90("CampaignScreen", 0) and if non-null,
 * FUN_006beb70(result, "@CampaignScreen@Screen", 1, &msg_id).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void * __cdecl FUN_004084d0(int size);
extern int __cdecl FUN_006bbd90(const char *name, int arg);
extern int __fastcall FUN_006beb70(int this, const char *msg, int arg, void *param);

__declspec(naked) void __fastcall FUN_0051ec90(int this, const char *str)
{
    __asm {
        push    ebx
        mov     ebx, ecx

        ; current_index = next_index
        mov     eax, dword ptr [ebx + 0x40d98]
        mov     dword ptr [ebx + 0x40d94], eax

        ; next_index++
        inc     eax

        push    esi
        mov     esi, dword ptr [esp + 0x0c]  ; str parameter
        push    edi

        mov     dword ptr [ebx + 0x40d98], eax

        ; strlen(str) + 1
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx

        ; allocate memory
        push    ecx
        call    FUN_004084d0

        ; store pointer in array[current_index]
        mov     ecx, dword ptr [ebx + 0x40d94]
        mov     dword ptr [ebx + ecx * 4 + 0x40d30], eax

        ; strlen(str) + 1 again
        mov     edx, dword ptr [ebx + 0x40d94]
        or      ecx, 0xffffffff
        mov     edi, esi
        add     esp, 0x4
        xor     eax, eax
        repne scasb
        not     ecx

        ; copy string into allocated memory
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebx + edx * 4 + 0x40d30]
        rep movsd
        mov     ecx, eax
        push    0x0
        and     ecx, 0x3
        push    0x77a0f8
        rep movsb

        ; FUN_006bbd90("CampaignScreen", 0)
        call    FUN_006bbd90

        test    eax, eax
        pop     edi
        pop     esi
        pop     ebx
        jz      l_done

        ; FUN_006beb70(result, "@CampaignScreen@Screen", 1, &msg_id)
        lea     ecx, [esp + 0x4]
        push    ecx
        push    0x1
        push    0x77a0e0
        push    eax
        mov     dword ptr [esp + 0x14], 0x271b
        call    FUN_006beb70

    l_done:
        ret     0x4
    }
}
