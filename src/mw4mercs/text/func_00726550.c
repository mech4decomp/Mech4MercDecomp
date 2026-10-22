/*
 * FUN_00726550 (156 B) — __fastcall (ECX = this).
 *
 * Allocates a buffer via FUN_006f3c80, copies a local structure into it
 * (rep movsd + rep movsb), stores the pointer at [this+0x20], optionally
 * calls FUN_00727190, then frees a member via FUN_006f4230.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_008aadc8;   /* DAT_008aadc8 */
extern char g_00858990;   /* DAT_00858990 */

extern void __stdcall FUN_006f4950(int a);
extern void __stdcall FUN_006faca0(int a, void *b, void *c);
extern void __stdcall FUN_006f49a0(void);
extern void __fastcall FUN_007265f0(int a, void *b, void *c, void *d);
extern void *__stdcall FUN_006f3c80(int a, int b);
extern void __fastcall FUN_00727190(void *this);
extern void __stdcall FUN_006f4230(int a);

__declspec(naked) void __fastcall FUN_00726550(void *this)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_008aadc8]
        push    ebx
        push    ebp
        push    eax
        mov     ebx, ecx
        call    FUN_006f4950
        mov     edx, dword ptr [ebx + 0x4]
        lea     ecx, [ebx + 0x10]
        push    ecx
        lea     ebp, [ebx + 0x8]
        push    ebp
        push    edx
        call    FUN_006faca0
        call    FUN_006f49a0
        lea     eax, [ebx + 0x14]
        push    eax
        mov     eax, dword ptr [ebp]
        lea     ecx, [ebx + 0xc]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_007265f0
        mov     ecx, dword ptr [esp + 0x8]
        cmp     word ptr [ecx], 0x1
        jnz     L9C
        xor     eax, eax
        jmp     LA2
L9C:
        xor     eax, eax
        mov     ax, word ptr [ecx + 0x10]
LA2:
        mov     ecx, dword ptr [g_008aadc8]
        push    esi
        push    edi
        lea     esi, [eax + 0x12]
        push    ecx
        push    esi
        call    FUN_006f3c80
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x10]
        mov     edx, ecx
        shr     ecx, 0x2
        mov     dword ptr [ebx + 0x20], eax
        mov     edi, eax
        mov     al, byte ptr [g_00858990]
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        test    al, al
        rep movsb
        pop     edi
        pop     esi
        jnz     LDF
        mov     ecx, ebx
        call    FUN_00727190
LDF:
        mov     eax, dword ptr [ebp]
        push    eax
        call    FUN_006f4230
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
